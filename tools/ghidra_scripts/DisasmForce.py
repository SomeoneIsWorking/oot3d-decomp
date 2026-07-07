#@runtime Jython
# Force-disassemble [OOT3D_DISASM_START, OOT3D_DISASM_END) (ARM mode) and print.
# For regions Ghidra's auto-analysis never reached (e.g. fn-ptr dispatched code).
import os
from ghidra.program.model.address import Address

space = currentProgram.getAddressFactory().getDefaultAddressSpace()
start = space.getAddress(int(os.environ['OOT3D_DISASM_START'], 16))
end = space.getAddress(int(os.environ['OOT3D_DISASM_END'], 16))
listing = currentProgram.getListing()

a = start
while a.compareTo(end) < 0:
    if listing.getInstructionAt(a) is None:
        disassemble(a)
    ins = listing.getInstructionAt(a)
    if ins is None:
        print("  %s  <undisassemblable>" % a)
        a = a.add(4)
        continue
    print("  %s  %s" % (a, ins))
    a = a.add(ins.getLength())
