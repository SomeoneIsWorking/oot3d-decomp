# -*- coding: utf-8 -*-
#@runtime Jython
# FindOffsetRefs — scan all defined instructions for a scalar operand equal to OFFSET
# (e.g. a struct field displacement like [rX,#0x1088]); print address + fn + instruction.
# Env: OOT3D_OFFSETS=hex1,hex2,...
import os
offs = set(int(v, 16) for v in os.environ["OOT3D_OFFSETS"].split(","))
listing = currentProgram.getListing()
fm = currentProgram.getFunctionManager()
ins = listing.getInstructions(True)
n = 0
for i in ins:
    found = False
    for opi in range(i.getNumOperands()):
        for obj in i.getOpObjects(opi):
            try:
                v = obj.getValue()
            except AttributeError:
                continue
            if v in offs:
                found = True
    if found:
        fn = fm.getFunctionContaining(i.getAddress())
        print("HIT 0x%08x fn=%s : %s" % (i.getAddress().getOffset(),
              fn.getName() if fn else "-", i))
        n += 1
        if n > 200:
            break
