# -*- coding: utf-8 -*-
#@runtime Jython
# Read u32 (or a few) at VAs. Env: OOT3D_READ_VAS=hex1,hex2,...
import os
vas = [int(x, 16) for x in os.environ.get("OOT3D_READ_VAS", "").split(",") if x]
mem = currentProgram.getMemory()
af  = currentProgram.getAddressFactory().getDefaultAddressSpace()
for va in vas:
    addr = af.getAddress(va)
    try:
        val = mem.getInt(addr) & 0xFFFFFFFF
        print("  0x%08x = 0x%08x (%d)  s32=%d" % (va, val, val, val if val < 0x80000000 else val - 0x100000000))
    except Exception as e:
        print("  0x%08x = ERR: %s" % (va, e))
