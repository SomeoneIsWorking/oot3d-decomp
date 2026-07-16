# -*- coding: utf-8 -*-
#@runtime Jython
# ArmDisasmDump — clear code units in [LO,HI), force TMode=0 (ARM), disassemble,
# then print every instruction in range. For reading a function Ghidra mis-decoded
# as Thumb when it's actually ARM (STMDB-prologue functions e.g. 0x001033d4).
# Env: OOT3D_CA_LO, OOT3D_CA_HI
import os
from ghidra.program.model.lang import RegisterValue
from java.math import BigInteger
af = currentProgram.getAddressFactory().getDefaultAddressSpace()
lo = af.getAddress(int(os.environ["OOT3D_CA_LO"], 16))
hi = af.getAddress(int(os.environ["OOT3D_CA_HI"], 16))
listing = currentProgram.getListing()
listing.clearCodeUnits(lo, hi, False)
ctx = currentProgram.getProgramContext()
tmode = ctx.getRegister("TMode")
if tmode is not None:
    ctx.setRegisterValue(lo, hi, RegisterValue(tmode, BigInteger.ZERO))
a = lo
while a.compareTo(hi) < 0:
    if listing.getInstructionAt(a) is None:
        disassemble(a)
    ins = listing.getInstructionAt(a)
    if ins is None:
        print("  %s  <undisassemblable>" % a)
        a = a.add(4)
        continue
    print("  %s  %s" % (a, ins))
    a = a.add(ins.getLength())
print("done")
