# -*- coding: utf-8 -*-
#@runtime Jython
# Scan the program's initialized memory for little-endian u32 values equal to
# any of the targets. Reports VA of each hit + enclosing function (if code).
# Env: OOT3D_SEARCH_U32=hex1,hex2,...
import os
import struct

targets = [int(x, 16) for x in os.environ.get("OOT3D_SEARCH_U32", "").split(",") if x]
fm = currentProgram.getFunctionManager()
mem = currentProgram.getMemory()

tset = set(targets)
for block in mem.getBlocks():
    if not block.isInitialized():
        continue
    size = block.getSize()
    data = bytearray(size)
    block.getBytes(block.getStart(), data)
    base = block.getStart().getOffset()
    for off in range(0, size - 3, 4):
        v = struct.unpack_from("<I", bytes(data[off:off+4]))[0]
        if v in tset:
            va = base + off
            addr = block.getStart().add(off)
            fn = fm.getFunctionContaining(addr)
            fn_s = ("%s@%s" % (fn.getName(), fn.getEntryPoint())) if fn else "-"
            print("hit 0x%08x holds 0x%08x  block=%s fn=%s" % (va, v, block.getName(), fn_s))
