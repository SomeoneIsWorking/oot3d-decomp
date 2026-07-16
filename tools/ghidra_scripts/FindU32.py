# -*- coding: utf-8 -*-
#@runtime Jython
# FindU32 — search program memory for little-endian u32 values; for each hit print the
# address, any code refs to it (pool-literal loads), and the enclosing function of each ref.
# Env: OOT3D_FIND_U32=hex1,hex2,...  (e.g. 0x44160000,0xC4D0C000 for 600.0f / -1670.0f)
import os
import struct

vals = [int(v, 16) for v in os.environ["OOT3D_FIND_U32"].split(",")]
mem = currentProgram.getMemory()
fm = currentProgram.getFunctionManager()
rm = currentProgram.getReferenceManager()

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
            refs = rm.getReferencesTo(hit)
            lines = []
            for r in refs:
                src = r.getFromAddress()
                fn = fm.getFunctionContaining(src)
                lines.append("ref from 0x%08x (%s)" % (
                    src.getOffset(), fn.getName() if fn else "?"))
            print("  hit @ 0x%08x  %s" % (hit.getOffset(),
                  "; ".join(lines) if lines else "(no code refs)"))
            addr = hit.add(4)
            if addr.compareTo(block.getEnd()) >= 0:
                break
