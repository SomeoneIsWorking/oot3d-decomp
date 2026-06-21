#!/usr/bin/env python3
"""find_consumer.py — narrow xref: among all literal-pool refs to a global G, find the
ones where the loaded base register is dereferenced at a SMALL offset (a specific field),
optionally used as a table index (lsl). For entranceIndex (gSaveContext+0) this isolates
the scene-transition consumer from the 670 generic gSaveContext base loads.

  find_consumer.py 0x00587958          # default: field offset 0 (entranceIndex)
  find_consumer.py 0x00587958 --off 0 --window 16
"""
import argparse, struct, capstone

BASE = 0x00100000

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target", type=lambda s: int(s, 0))
    ap.add_argument("--bin", default="build/code.bin")
    ap.add_argument("--off", type=int, default=0, help="field offset to look for in [base, #off]")
    ap.add_argument("--window", type=int, default=12, help="instrs after the ldr to scan")
    ap.add_argument("--max", type=int, default=60)
    a = ap.parse_args()
    code = open(a.bin, "rb").read()
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    md.detail = True
    tgt = struct.pack("<I", a.target)

    # collect pool offsets
    pools = []
    s = 0
    while True:
        i = code.find(tgt, s)
        if i < 0: break
        if i % 4 == 0: pools.append(BASE + i)
        s = i + 1
    poolset = set(pools)

    # disassemble whole .text once, track ldr rX,[pc,#imm] that resolve to a pool
    hits = []  # (addr, regname, mode)
    text = code[:0x3ca000]
    for ins in md.disasm(text, BASE):
        if ins.mnemonic.startswith("ldr") and "[pc" in ins.op_str:
            try:
                base_reg = ins.operands[0].reg
                memop = ins.operands[1].mem
                if memop.base == capstone.arm.ARM_REG_PC:
                    lit = (ins.address + 8 + memop.disp)
                    if lit in poolset:
                        hits.append((ins.address, ins.reg_name(base_reg), "ARM"))
            except Exception:
                pass
    # Thumb pass: scan every 2-byte alignment for LDR (literal) T1/T2 resolving to a pool
    mdt = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)
    mdt.detail = True
    for off in range(0, len(text) - 1, 2):
        for ins in mdt.disasm(text[off:off+4], BASE + off):
            if ins.mnemonic.startswith("ldr") and "[pc" in ins.op_str:
                try:
                    base_reg = ins.operands[0].reg
                    memop = ins.operands[1].mem
                    if memop.base == capstone.arm.ARM_REG_PC:
                        lit = ((ins.address + 4) & ~3) + memop.disp
                        if lit in poolset:
                            hits.append((ins.address, ins.reg_name(base_reg), "THUMB"))
                except Exception:
                    pass
            break

    print(f"{len(pools)} pools, {len(hits)} ldr-from-pool sites loading 0x{a.target:08x}")
    found = 0
    for (addr, reg, mode) in hits:
        # disasm window after the ldr, look for [reg, #off] dereference / lsl index
        off = addr - BASE
        step = 2 if mode == "THUMB" else 4
        win = code[off: off + step*(a.window+1)]
        dis = (mdt if mode == "THUMB" else md)
        interesting = False
        lines = []
        for ins in dis.disasm(win, addr):
            txt = f"  {ins.address:08x}  {ins.mnemonic:8} {ins.op_str}"
            # field deref of our reg
            if reg in ins.op_str and (f"[{reg}]" in ins.op_str or f"[{reg}, #" in ins.op_str.replace(" ", " ")):
                # check small offset
                interesting = True
                txt += "   <== deref"
            if "lsl" in ins.op_str and reg in ins.op_str:
                interesting = True
                txt += "   <== index"
            lines.append(txt)
        if interesting:
            found += 1
            if found > a.max: break
            print(f"\n--- ldr {reg} <- 0x{a.target:08x} @ {addr:08x} ({mode}) ---")
            for l in lines: print(l)

if __name__ == "__main__":
    main()
