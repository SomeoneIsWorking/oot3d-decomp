# -*- coding: utf-8 -*-
#@runtime Jython
# FindConstInRange — report every movw/movt pair (or pool ldr) that
# materializes a 32-bit constant falling inside [lo, hi). Complements
# FindMovwMovtWriters (stores only): this catches the DISPATCH pattern
# `movw/movt rN, #table_base; ldr rM, [rN, rK lsl #2]; blx rM` that the
# Reference DB misses entirely.
# Env: OOT3D_RANGE_LO / OOT3D_RANGE_HI (hex).
import os

lo = int(os.environ.get("OOT3D_RANGE_LO", "0"), 16)
hi = int(os.environ.get("OOT3D_RANGE_HI", "0"), 16)
print("range: 0x%08x .. 0x%08x" % (lo, hi))

fm = currentProgram.getFunctionManager()
lst = currentProgram.getListing()

pending = {}  # (fn_entry, reg) -> low16
count = 0
it = lst.getInstructions(True)
for insn in it:
    m = insn.getMnemonicString().lower()
    if m not in ("movw", "movt", "mov.w", "movw.w"):
        continue
    try:
        reg = insn.getRegister(0)
        if reg is None:
            continue
        sc = insn.getScalar(1)
        if sc is None:
            continue
        val = sc.getUnsignedValue()
    except Exception:
        continue
    fn = fm.getFunctionContaining(insn.getAddress())
    key = (fn.getEntryPoint().getOffset() if fn else 0, reg.getName())
    if m == "movw":
        pending[key] = (val, insn.getAddress())
    elif m == "movt":
        if key in pending:
            low, lowaddr = pending[key]
            full = (val << 16) | low
            if lo <= full < hi:
                fn_s = ("%s@%s" % (fn.getName(), fn.getEntryPoint())) if fn else "-"
                print("hit 0x%08x materialized at %s (movw@%s) fn=%s" % (
                    full, insn.getAddress(), lowaddr, fn_s))
                count += 1
print("done, %d hits" % count)
