# -*- coding: utf-8 -*-
#@runtime Jython
# FindMovwMovtWriters — per-function scanner that tracks {reg -> const} across
# movw/movt/mov/add-imm/pool-load, and reports every str/stm/vstr/vstm insn
# whose base register + explicit offset lands in a target VA range.
#
# Complements Ghidra's Reference DB (which only catches pool-literal xrefs) —
# ARMv7 compilers prefer movw+movt for 32-bit constants, and those xrefs are
# invisible to the DB. Runs across the whole program much faster than a
# capstone linear scan because Ghidra's Instruction objects are pre-decoded.
#
# Env: OOT3D_RANGE_LO / OOT3D_RANGE_HI (hex).
#
# Emits: writer PC, insn, materialized base, resolved target, enclosing fn.

import os
import java.lang

lo = int(os.environ.get("OOT3D_RANGE_LO", "0"), 16)
hi = int(os.environ.get("OOT3D_RANGE_HI", "0"), 16)
print("range: 0x%08x .. 0x%08x" % (lo, hi))

fm = currentProgram.getFunctionManager()
lst = currentProgram.getListing()

# Store mnemonics whose base reg + imm offset target we want to check.
STORE_MNEMONICS = set([
    "str", "strh", "strb", "strd",
    "stm", "stmia", "stmib", "stmda", "stmdb",
    "vstr", "vstm", "vstmia", "vstmdb",
])
# Anything that begins with these is treated as a store to check.
STORE_PREFIXES = ("vstr", "vstm")

BRANCH_MNEMONICS = set([
    "b", "bl", "blx", "bx", "bxj", "cbz", "cbnz",
    "tbb", "tbh", "svc", "hvc", "smc",
])

def _looks_like_reg(x):
    try:
        nm = x.getName()
    except Exception:
        return False
    if nm is None: return False
    s = nm.lower()
    return s.startswith("r") or s in ("sp", "lr", "pc", "ip", "fp", "sl", "sb")

def op_reg(op):
    # Given an Object[] operand's Register-like element, return its name
    # lowercased; else None.
    try:
        return op.getName().lower()
    except Exception:
        return None

def imm_val(op):
    try:
        return op.getUnsignedValue() if hasattr(op, 'getUnsignedValue') else long(op.getValue())
    except Exception:
        try: return long(op.getValue())
        except Exception: return None

def load_pool_u32(addr):
    # Read 4 bytes at `addr` (an Address). Skip stack-relative addresses
    # and any read that faults.
    try:
        if addr is None: return None
        space = addr.getAddressSpace()
        if space is None or space.isStackSpace() or space.isRegisterSpace():
            return None
        b = getBytes(addr, 4)
        return ((b[0] & 0xFF) | ((b[1] & 0xFF) << 8) |
                ((b[2] & 0xFF) << 16) | ((b[3] & 0xFF) << 24)) & 0xFFFFFFFF
    except java.lang.Throwable:
        return None
    except Exception:
        return None

hits = 0
scanned = 0

fn_it = fm.getFunctions(True)
for fn in fn_it:
    entry = fn.getEntryPoint()
    body = fn.getBody()
    reg_const = {}
    scanned += 1
    ins_it = lst.getInstructions(body, True)
    for ins in ins_it:
        mn = ins.getMnemonicString().lower()

        # bl/blx clobber AAPCS caller-saved.
        if mn in ("bl", "blx"):
            for r in ("r0", "r1", "r2", "r3", "r12", "ip", "lr"):
                reg_const.pop(r, None)
            continue
        if mn in BRANCH_MNEMONICS or mn.startswith("b.") or mn.startswith("cb"):
            continue

        # movw
        if mn == "movw":
            ops = ins.getOpObjects(0), ins.getOpObjects(1)
            rD = ins.getRegister(0)
            if rD is None: continue
            imm_ops = ins.getOpObjects(1)
            for x in imm_ops:
                v = imm_val(x)
                if v is not None:
                    reg_const[rD.getName().lower()] = v & 0xFFFF
                    break
            continue

        # movt
        if mn == "movt":
            rD = ins.getRegister(0)
            if rD is None: continue
            r = rD.getName().lower()
            imm_ops = ins.getOpObjects(1)
            for x in imm_ops:
                v = imm_val(x)
                if v is not None:
                    prev = reg_const.get(r, 0) & 0xFFFF
                    reg_const[r] = (((v & 0xFFFF) << 16) | prev) & 0xFFFFFFFF
                    break
            continue

        # mov rD, #imm | mov rD, rS
        if mn == "mov":
            rD = ins.getRegister(0)
            if rD is None: continue
            rN = rD.getName().lower()
            rS = ins.getRegister(1)
            if rS is not None:
                s = rS.getName().lower()
                if s in reg_const:
                    reg_const[rN] = reg_const[s]
                else:
                    reg_const.pop(rN, None)
            else:
                # try immediate operand
                v = None
                for x in ins.getOpObjects(1):
                    v = imm_val(x)
                    if v is not None: break
                if v is not None:
                    reg_const[rN] = v & 0xFFFFFFFF
                else:
                    reg_const.pop(rN, None)
            continue

        # add rD, rS, #imm  (best-effort: only handle 3-operand form).
        # For shifted-register forms like `add r5, fp, r0, lsl #5`, the third
        # operand contains a Register — treat as non-const and drop rD.
        if mn == "add":
            rD = ins.getRegister(0); rS = ins.getRegister(1)
            if rD is not None and rS is not None:
                s = rS.getName().lower()
                objs = ins.getOpObjects(2)
                has_reg = any(_looks_like_reg(x) for x in objs)
                v = None
                if not has_reg:
                    for x in objs:
                        v = imm_val(x)
                        if v is not None: break
                if v is not None and s in reg_const:
                    reg_const[rD.getName().lower()] = (reg_const[s] + v) & 0xFFFFFFFF
                else:
                    reg_const.pop(rD.getName().lower(), None)
            elif rD is not None:
                reg_const.pop(rD.getName().lower(), None)
            continue

        if mn == "sub":
            rD = ins.getRegister(0); rS = ins.getRegister(1)
            if rD is not None and rS is not None:
                s = rS.getName().lower()
                objs = ins.getOpObjects(2)
                has_reg = any(_looks_like_reg(x) for x in objs)
                v = None
                if not has_reg:
                    for x in objs:
                        v = imm_val(x)
                        if v is not None: break
                if v is not None and s in reg_const:
                    reg_const[rD.getName().lower()] = (reg_const[s] - v) & 0xFFFFFFFF
                else:
                    reg_const.pop(rD.getName().lower(), None)
            elif rD is not None:
                reg_const.pop(rD.getName().lower(), None)
            continue

        # ldr rD, [pc, #imm] pool load
        if mn in ("ldr",):
            rD = ins.getRegister(0)
            if rD is None: continue
            rN = rD.getName().lower()
            # If the second operand references pc + imm, resolve.
            # Simplest: look at reference table for this instruction — Ghidra
            # will have annotated a data reference.
            resolved = False
            for r in ins.getReferencesFrom():
                ta = r.getToAddress()
                if ta is None: continue
                v = load_pool_u32(ta)
                if v is not None:
                    reg_const[rN] = v
                    resolved = True
                    break
            if not resolved:
                reg_const.pop(rN, None)
            continue

        # Any non-pool memory load into rD invalidates rD.
        if mn in ("ldrb", "ldrh", "ldrsb", "ldrsh", "ldrd"):
            rD = ins.getRegister(0)
            if rD is not None:
                reg_const.pop(rD.getName().lower(), None)
            continue

        # store family — check target
        is_store = (mn in STORE_MNEMONICS) or any(mn.startswith(p) for p in STORE_PREFIXES)
        if is_store:
            # Base register is the last Register in the operand list (a
            # simplification — for `str rX, [rBase, #imm]` Ghidra's registers
            # come out as [rX, rBase]).
            regs = []
            for opIdx in range(ins.getNumOperands()):
                for x in ins.getOpObjects(opIdx):
                    try:
                        nm = x.getName()
                        if nm and nm.lower().startswith("r"):
                            regs.append(nm.lower())
                    except Exception:
                        pass
            if not regs: continue
            base = regs[-1]
            if base == "pc" or base == "sp":  # skip stack/PC-relative
                continue
            if base not in reg_const: continue
            b = reg_const[base]
            # Find the largest imm operand — the explicit offset for
            # str/vstr forms. For stm forms, offset is 0.
            imm = 0
            for opIdx in range(ins.getNumOperands()):
                for x in ins.getOpObjects(opIdx):
                    v = imm_val(x)
                    if v is not None and abs(v) < 0x10000:
                        # keep last-seen — for [rBase, #imm] Ghidra puts it near the base op
                        imm = v
            target = (b + imm) & 0xFFFFFFFF
            if lo <= target < hi:
                print("  %08x  %-8s %-40s  target=0x%08x  base=%s=0x%08x  fn=%s@0x%08x  hits=1" % (
                    ins.getAddress().getOffset(),
                    ins.getMnemonicString(),
                    ins.toString(),
                    target, base, b,
                    fn.getName(), entry.getOffset()))
                hits += 1
            else:
                # Check register-indexed write: str rX, [rBase, rIdx, lsl #2]
                # then any i > 0 could land in [lo, hi). Report if base is at
                # or near lo (within a plausible index range).
                if lo - 0x1000 <= b <= hi:
                    print("  %08x  %-8s %-40s  target=[0x%08x + reg?]  fn=%s@0x%08x  (indexed?)" % (
                        ins.getAddress().getOffset(),
                        ins.getMnemonicString(),
                        ins.toString(),
                        b,
                        fn.getName(), entry.getOffset()))
                    hits += 1

print("")
print("scanned %d fns, %d hit(s) in [0x%08x, 0x%08x)" % (scanned, hits, lo, hi))
