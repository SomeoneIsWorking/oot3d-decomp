# -*- coding: utf-8 -*-
#@runtime Jython
# Find the 12-byte Vec3f literal {600.0f, -1670.0f, 0.0f} and nearby refs.
import struct
mem = currentProgram.getMemory()
fm = currentProgram.getFunctionManager()
rm = currentProgram.getReferenceManager()
pat = struct.pack("<III", 0x44160000, 0xC4D0C000, 0x00000000)
for block in mem.getBlocks():
    if not block.isInitialized():
        continue
    addr = block.getStart()
    while True:
        hit = mem.findBytes(addr, block.getEnd(), pat, None, True, monitor)
        if hit is None:
            break
        refs = [r.getFromAddress() for r in rm.getReferencesTo(hit)]
        names = []
        for s in refs:
            fn = fm.getFunctionContaining(s)
            names.append("0x%08x(%s)" % (s.getOffset(), fn.getName() if fn else "?"))
        cfn = fm.getFunctionContaining(hit)
        print("HIT @ 0x%08x inFn=%s refs=%s" % (hit.getOffset(),
              cfn.getName() if cfn else "-", "; ".join(names) if names else "none"))
        addr = hit.add(4)
        if addr.compareTo(block.getEnd()) >= 0:
            break
