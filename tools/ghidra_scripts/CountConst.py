# -*- coding: utf-8 -*-
#@runtime Jython
# Sanity check: count occurrences of a 32-bit constant in .text
# and .rodata. Env: OOT3D_CONST=0x3F800000 (or decimal).
import os
val = int(os.environ.get("OOT3D_CONST", "0x3F800000"), 16 if 'x' in os.environ.get("OOT3D_CONST","0x1") else 10)
prog = currentProgram
mem = prog.getMemory()
af = prog.getAddressFactory().getDefaultAddressSpace()

RANGES = [(0x00100000, 0x004C0000, ".text"),
          (0x004C0000, 0x00600000, ".rodata/.data")]

for (lo, hi, name) in RANGES:
    hits = []
    va = lo
    while va < hi:
        try:
            w = mem.getInt(af.getAddress(va)) & 0xFFFFFFFF
        except Exception:
            va += 4; continue
        if w == val:
            hits.append(va)
        va += 4
    print("%s [0x%08x..0x%08x): %d hits for 0x%08x" % (name, lo, hi, len(hits), val))
    for h in hits[:10]:
        print("  0x%08x" % h)
