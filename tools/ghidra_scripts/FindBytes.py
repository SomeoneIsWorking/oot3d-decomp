# -*- coding: utf-8 -*-
#@runtime Jython
# FindBytes — search memory for a hex byte pattern; print hits + containing fn.
# Env: OOT3D_FIND_BYTES=hexstring (e.g. bbffea1bf6fe)
import os
hexs = os.environ["OOT3D_FIND_BYTES"]
pat = "".join(chr(int(hexs[i:i+2], 16)) for i in range(0, len(hexs), 2))
mem = currentProgram.getMemory()
fm = currentProgram.getFunctionManager()
for block in mem.getBlocks():
    if not block.isInitialized():
        continue
    addr = block.getStart()
    while True:
        hit = mem.findBytes(addr, block.getEnd(), pat, None, True, monitor)
        if hit is None:
            break
        fn = fm.getFunctionContaining(hit)
        print("HIT 0x%08x inFn=%s" % (hit.getOffset(), fn.getName() if fn else "-"))
        addr = hit.add(1)
        if addr.compareTo(block.getEnd()) >= 0:
            break
