# -*- coding: utf-8 -*-
#@runtime Jython
# Find every code ref whose target address falls in a given VA range.
# Env: OOT3D_RANGE_LO / OOT3D_RANGE_HI (hex).
import os
from ghidra.program.model.symbol import RefType

lo = int(os.environ.get("OOT3D_RANGE_LO","0"), 16)
hi = int(os.environ.get("OOT3D_RANGE_HI","0"), 16)
print("range: 0x%08x .. 0x%08x" % (lo, hi))

fm = currentProgram.getFunctionManager()
rm = currentProgram.getReferenceManager()
af = currentProgram.getAddressFactory().getDefaultAddressSpace()

hits = {}  # va -> [(src, rtype, fn)]
# Iterate all references FROM code addresses; check destination.
it = rm.getReferenceIterator(af.getAddress(0x00100000))
c = 0
for r in it:
    to = r.getToAddress()
    if to is None: continue
    va = to.getOffset()
    if lo <= va < hi:
        src = r.getFromAddress()
        rtype = r.getReferenceType()
        fn = fm.getFunctionContaining(src)
        fn_s = ("%s@%s" % (fn.getName(), fn.getEntryPoint())) if fn else "none"
        hits.setdefault(va, []).append((src, str(rtype), fn_s))
        c += 1
        if c > 500: break

for va in sorted(hits.keys()):
    print("--- 0x%08x: %d refs ---" % (va, len(hits[va])))
    for src, rtype, fn in hits[va]:
        print("  from 0x%s  %-14s  fn=%s" % (src, rtype, fn))
