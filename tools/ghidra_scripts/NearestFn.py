# -*- coding: utf-8 -*-
#@runtime Jython
import os
va = int(os.environ.get("OOT3D_NEAR_VA","0"),16)
af = currentProgram.getAddressFactory().getDefaultAddressSpace()
fm = currentProgram.getFunctionManager()
target = af.getAddress(va)
best = None
bestdist = None
it = fm.getFunctions(True)
for fn in it:
    end = fn.getBody().getMaxAddress()
    if end.getOffset() <= va:
        d = va - end.getOffset()
        if bestdist is None or d < bestdist:
            bestdist = d
            best = fn
if best:
    print("nearest fn BEFORE 0x%08x: %s @0x%08x end=0x%08x dist=0x%x" % (
        va, best.getName(), best.getEntryPoint().getOffset(),
        best.getBody().getMaxAddress().getOffset(), bestdist))
# also nearest after
best2=None; bd2=None
it = fm.getFunctions(True)
for fn in it:
    start = fn.getEntryPoint().getOffset()
    if start >= va:
        d = start - va
        if bd2 is None or d < bd2:
            bd2 = d; best2 = fn
if best2:
    print("nearest fn AFTER  0x%08x: %s @0x%08x dist=0x%x" % (
        va, best2.getName(), best2.getEntryPoint().getOffset(), bd2))
