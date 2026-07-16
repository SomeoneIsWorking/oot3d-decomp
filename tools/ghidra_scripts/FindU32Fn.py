# -*- coding: utf-8 -*-
#@runtime Jython
# FindU32Fn — like FindU32 but prints the function CONTAINING each hit (pool literals
# live inside the function body on ARM).
# Env: OOT3D_FIND_U32=hex1,hex2,...
import os, struct
vals = [int(v, 16) for v in os.environ["OOT3D_FIND_U32"].split(",")]
mem = currentProgram.getMemory()
fm = currentProgram.getFunctionManager()
for v in vals:
    pat = struct.pack("<I", v & 0xFFFFFFFF)
    print("=== 0x%08x ===" % v)
    for block in mem.getBlocks():
        if not block.isInitialized():
            continue
        addr = block.getStart()
        while True:
            hit = mem.findBytes(addr, block.getEnd(), pat, None, True, monitor)
            if hit is None:
                break
            fn = fm.getFunctionContaining(hit)
            print("  0x%08x inFn=%s" % (hit.getOffset(), fn.getName() if fn else "-"))
            addr = hit.add(4)
            if addr.compareTo(block.getEnd()) >= 0:
                break
