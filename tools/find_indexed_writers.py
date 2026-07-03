#!/usr/bin/env python3
"""find_indexed_writers.py — locate ARM `str` writers to a VA range where the
base pointer is materialized by movw+movt (not a pool literal).

Motivation: Ghidra's static Reference DB only records refs from pool-literal
loads (`ldr rX, [pc, #imm]`). It misses `movw/movt` immediate-load pairs —
the compiler's preferred way to synthesize a 32-bit address on ARMv7. The
title-demo pose table (0x005642F4..0x00564654) has ZERO Ghidra refs to any
offset for exactly this reason.

Algorithm:
  1. Disassemble .text (0x00100000..end) as ARM.
  2. Track {reg -> known 32-bit constant} across each basic block. Reset on
     any branch (b/bl/blx/bx/bxj/ret-like ldm).
  3. Handle:
     - `movw rD, #imm16`  → reg[D] = imm16 (low 16 of some value)
     - `movt rD, #imm16`  → reg[D] = (reg[D] & 0xFFFF) | (imm16 << 16)
     - `mov rD, rS`       → reg[D] = reg[S]
     - `add rD, rS, #imm` → reg[D] = reg[S] + imm (if reg[S] known)
     - `sub rD, rS, #imm` → reg[D] = reg[S] - imm
     - `ldr rD, [pc, #k]` → reg[D] = *(pc+k) from code.bin
  4. For any `str/strb/strh/stm` insn with a KNOWN base register, if
     base + explicit imm offset lands in [LO, HI), print the writer PC +
     enclosing function.

Emphasis on precision over recall: false positives waste time so we only
report stores through registers we've fully materialized. Doesn't handle
register-register offset (`str r0, [r1, r2, lsl #2]`) — that path is
usually preceded by movw/movt anyway, and we catch the base.
"""
import sys, os, struct, csv, argparse
import capstone

BASE = 0x00100000

def load_fns(path):
    fns = []
    with open(path) as f:
        for row in csv.DictReader(f):
            fns.append((int(row['vaddr'], 16), int(row['size'])))
    fns.sort()
    return fns

def enclosing(fns, pc):
    lo, hi = 0, len(fns) - 1
    while lo <= hi:
        mid = (lo + hi) // 2
        va, sz = fns[mid]
        if va > pc: hi = mid - 1
        elif va + sz <= pc: lo = mid + 1
        else: return va, sz
    return None, None

BRANCH_MNEMONICS = {"b", "bl", "blx", "bx", "bxj", "cbz", "cbnz",
                    "tbb", "tbh", "svc", "hvc", "smc"}

# Conservative "invalidate register" instructions — the ones whose destination
# reg is written to but we can't track (memory loads with unknown addr, math
# using unknown operands, etc.). Kept as a heuristic list — we only care about
# capturing the movw/movt/pool → constant flow.
NONCONST_DESTS = {"ldr", "ldrb", "ldrh", "ldrsb", "ldrsh", "ldrd",
                  "adr", "adc", "sbc", "rsb", "mul", "mla", "mls",
                  "and", "orr", "eor", "bic", "asr", "lsr", "lsl",
                  "ror", "rrx", "mvn"}

def parse_reg_imm(op_str):
    # "r0, #0x1234"  ->  ('r0', 0x1234)
    parts = [p.strip() for p in op_str.split(',')]
    if len(parts) < 2: return None, None
    if not parts[1].startswith('#'): return None, None
    try:
        imm = int(parts[1][1:], 0)
    except ValueError:
        return None, None
    return parts[0], imm

def parse_reg_reg_imm(op_str):
    # "r0, r1, #0x10"  ->  ('r0','r1', 0x10)
    parts = [p.strip() for p in op_str.split(',')]
    if len(parts) < 3: return None, None, None
    if not parts[2].startswith('#'): return None, None, None
    try:
        imm = int(parts[2][1:], 0)
    except ValueError:
        return None, None, None
    return parts[0], parts[1], imm

def parse_str_operands(op_str):
    """Parse `str rX, [rY, #imm]` / `str rX, [rY]` / register-indexed forms.

    Returns (base_reg, imm_offset, indexed) where `indexed` is True when the
    second operand is a register (or shifted register), meaning we know the
    write hits [base + unknown]. Callers can still verify the base itself is
    in-range.
    """
    l = op_str.find('[')
    r = op_str.find(']')
    if l < 0 or r < 0: return None, None, False
    inner = op_str[l+1:r]
    parts = [p.strip() for p in inner.split(',')]
    base = parts[0] if parts else None
    if len(parts) < 2:
        return base, 0, False
    p2 = parts[1]
    if p2.startswith('#'):
        try:
            return base, int(p2[1:], 0), False
        except ValueError:
            return None, None, False
    # register-indexed
    return base, 0, True

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--lo', required=True, type=lambda s: int(s, 16))
    ap.add_argument('--hi', required=True, type=lambda s: int(s, 16))
    ap.add_argument('--code', default='./build/code.bin')
    ap.add_argument('--fns',  default='./build/decomp/functions.csv')
    ap.add_argument('--text-end', type=lambda s: int(s, 16), default=0x004F9000)
    ap.add_argument('--thumb', action='store_true', help='disassemble as Thumb-2')
    args = ap.parse_args()

    code = open(args.code, 'rb').read()
    fns  = load_fns(args.fns)

    md = capstone.Cs(capstone.CS_ARCH_ARM,
                     capstone.CS_MODE_THUMB if args.thumb else capstone.CS_MODE_ARM)
    md.detail = False

    hits = 0
    # Per-FUNCTION analysis. For each Ghidra-known function, disassemble its
    # bytes and track reg→const through the entire body. We only invalidate
    # registers when we KNOW their value has been overwritten by an insn
    # whose source we can't resolve (loads through unknown addrs, arithmetic
    # with unknown operands, etc.). Cross-basic-block conservatism: any
    # branch AT ALL doesn't wipe state — most branches are internal loops
    # / conditionals and the value we care about (the struct base) was
    # loaded up-front and never touched.
    for fn_va, fn_sz in fns:
        if fn_va < BASE or fn_va + fn_sz > args.text_end:
            continue
        reg_const = {}
        fn_bytes = code[fn_va - BASE : fn_va - BASE + fn_sz]
        for insn in md.disasm(fn_bytes, fn_va):
            m = insn.mnemonic
            op = insn.op_str
            # Function calls clobber caller-saved regs per AAPCS.
            if m in ('bl', 'blx'):
                for r in ('r0', 'r1', 'r2', 'r3', 'r12', 'ip', 'lr'):
                    reg_const.pop(r, None)
                continue
            # Skip other branches — reg_const survives fall-through-friendly.
            if m in BRANCH_MNEMONICS or m.startswith('b.'):
                continue

            # ldr rX, [pc, #k]  (pool literal load — capstone emits the raw
            # PC-relative form, we resolve it by hand). ARM pipelining: the
            # PC visible to a load-from-pool insn is (insn.addr + 8) + imm.
            if m == 'ldr' and '[pc' in op.lower():
                try:
                    lb = op.rfind('[')
                    rb = op.rfind(']')
                    inner = op[lb+1:rb].strip().lower()
                    if inner.startswith('pc'):
                        parts = [p.strip() for p in inner.split(',')]
                        off = 0
                        if len(parts) >= 2 and parts[1].startswith('#'):
                            off = int(parts[1][1:], 0)
                        pool_va = insn.address + 8 + off
                    elif inner.startswith('0x'):
                        pool_va = int(inner, 16)
                    else:
                        continue
                    if 0 <= pool_va - BASE < len(code) - 4:
                        val = struct.unpack_from('<I', code, pool_va - BASE)[0]
                        reg = op.split(',', 1)[0].strip()
                        reg_const[reg] = val
                except Exception:
                    pass
                continue

            if m == 'movw':
                reg, imm = parse_reg_imm(op)
                if reg is not None:
                    reg_const[reg] = imm & 0xFFFF
                continue

            if m == 'movt':
                reg, imm = parse_reg_imm(op)
                if reg is not None:
                    prev = reg_const.get(reg, 0) & 0xFFFF
                    reg_const[reg] = ((imm & 0xFFFF) << 16) | prev
                continue

            if m == 'mov':
                parts = [p.strip() for p in op.split(',')]
                if len(parts) == 2:
                    if parts[1].startswith('#'):
                        try: reg_const[parts[0]] = int(parts[1][1:], 0)
                        except ValueError: reg_const.pop(parts[0], None)
                    elif parts[1] in reg_const:
                        reg_const[parts[0]] = reg_const[parts[1]]
                    else:
                        reg_const.pop(parts[0], None)
                continue

            if m == 'add':
                rD, rS, imm = parse_reg_reg_imm(op)
                if rD is not None and rS in reg_const:
                    reg_const[rD] = (reg_const[rS] + imm) & 0xFFFFFFFF
                else:
                    rD_only = op.split(',', 1)[0].strip()
                    reg_const.pop(rD_only, None)
                continue

            if m == 'sub':
                rD, rS, imm = parse_reg_reg_imm(op)
                if rD is not None and rS in reg_const:
                    reg_const[rD] = (reg_const[rS] - imm) & 0xFFFFFFFF
                else:
                    rD_only = op.split(',', 1)[0].strip()
                    reg_const.pop(rD_only, None)
                continue

            # Any non-pool ldr into rD invalidates rD's tracked constant.
            if m in ('ldr', 'ldrb', 'ldrh', 'ldrsb', 'ldrsh', 'ldrd'):
                rD = op.split(',', 1)[0].strip()
                reg_const.pop(rD, None)
                continue

            # Include VFP stores (vstr/vstmia/vstmdb) — the pose table is
            # floats and the compiler often uses VFP for float writes.
            # Also stm/stmia/stmdb for multi-word stores.
            if m in ('str', 'strb', 'strh', 'strd') or m.startswith('vstr') or m.startswith('stm') or m.startswith('vstm'):
                base, imm, indexed = parse_str_operands(op)
                if base and base in reg_const:
                    b = reg_const[base]
                    # (A) fixed imm offset — exact target address
                    if not indexed:
                        target = (b + imm) & 0xFFFFFFFF
                        if args.lo <= target < args.hi:
                            print(f"  {insn.address:08x}  {insn.mnemonic:<8} {insn.op_str:<36}  target=0x{target:08x}  base={base}=0x{b:08x}  fn=0x{fn_va:08x}")
                            hits += 1
                    # (B) register-indexed — the write's target address is
                    # base + unknown_reg. Report if base itself is *in* the
                    # target range OR within STRIDE bytes below it (so the
                    # unknown positive offset can land inside).
                    else:
                        # If base is exactly at, or shortly before, target range
                        SLACK = 4096
                        if (args.lo - SLACK) <= b < args.hi:
                            print(f"  {insn.address:08x}  {insn.mnemonic:<8} {insn.op_str:<36}  target=[0x{b:08x} + reg]  fn=0x{fn_va:08x}  (indexed)")
                            hits += 1

    print(f"\n{hits} indexed-write hit(s) in [0x{args.lo:08x}, 0x{args.hi:08x})")

if __name__ == '__main__':
    main()
