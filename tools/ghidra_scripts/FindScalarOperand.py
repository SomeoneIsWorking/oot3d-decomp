# -*- coding: utf-8 -*-
#@runtime Jython
# Scan every instruction's operands for a given scalar value; print
# "<addr> <containing-fn> <instruction>". Env: OOT3D_SCALAR (hex).
import os
val = int(os.environ.get("OOT3D_SCALAR", "0x5f98"), 16)
fm = currentProgram.getFunctionManager()
listing = currentProgram.getListing()
it = listing.getInstructions(True)
n = 0
while it.hasNext():
    ins = it.next()
    hit = False
    for i in range(ins.getNumOperands()):
        for obj in ins.getOpObjects(i):
            try:
                if obj.getValue() == val:
                    hit = True
            except AttributeError:
                pass
    if hit:
        f = fm.getFunctionContaining(ins.getAddress())
        print("SCALARHIT %s %s %s" % (ins.getAddress(), f.getName() if f else "?", ins))
        n += 1
print("SCALARHIT-TOTAL %d" % n)
