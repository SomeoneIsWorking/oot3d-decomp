# -*- coding: utf-8 -*-
#@runtime Jython
# Dump raw ARM 32-bit LE words + Ghidra's disasm in a VA range.
import os
prog = currentProgram
mem = prog.getMemory()
af = prog.getAddressFactory().getDefaultAddressSpace()
lst = prog.getListing()
start = int(os.environ.get("OOT3D_DUMP_START","0"), 16)
end   = int(os.environ.get("OOT3D_DUMP_END",  "0"), 16)
va = start
while va < end:
    a = af.getAddress(va)
    try:
        w = mem.getInt(a) & 0xFFFFFFFF
    except:
        va += 4; continue
    ins = lst.getInstructionAt(a)
    print("  %08x  %08x  %s" % (va, w, ins if ins else "?"))
    va += 4
