# -*- coding: utf-8 -*-
#@runtime Jython
# Disasm — print instructions in a VA range.
# Env: OOT3D_DISASM_START (hex), OOT3D_DISASM_END (hex).
import os
start = int(os.environ.get("OOT3D_DISASM_START", "0"), 16)
end   = int(os.environ.get("OOT3D_DISASM_END",   "0"), 16)
af = currentProgram.getAddressFactory().getDefaultAddressSpace()
lst = currentProgram.getListing()
addr = af.getAddress(start)
end_a = af.getAddress(end)
while addr and addr.getOffset() < end_a.getOffset():
    ins = lst.getInstructionAt(addr)
    if ins is None:
        print("  %s  <no insn>" % addr)
        addr = addr.add(4)
        continue
    print("  %s  %s" % (addr, ins))
    addr = ins.getMaxAddress().add(1)
