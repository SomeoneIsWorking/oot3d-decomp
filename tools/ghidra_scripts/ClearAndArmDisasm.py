# -*- coding: utf-8 -*-
#@runtime Jython
# ClearAndArmDisasm — clear code units in [LO,HI), force TMode=0 (ARM), disassemble,
# then print instructions referencing TARGET.
# Env: OOT3D_CA_LO, OOT3D_CA_HI, OOT3D_CA_TARGET
import os
from ghidra.program.model.lang import RegisterValue
from java.math import BigInteger
af = currentProgram.getAddressFactory().getDefaultAddressSpace()
lo = af.getAddress(int(os.environ["OOT3D_CA_LO"], 16))
hi = af.getAddress(int(os.environ["OOT3D_CA_HI"], 16))
tgt = int(os.environ["OOT3D_CA_TARGET"], 16)
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
    a = a.add(ins.getLength() if ins else 4)
ins = listing.getInstructionAt(lo) or listing.getInstructionAfter(lo)
while ins is not None and ins.getAddress().compareTo(hi) < 0:
    for r in ins.getReferencesFrom():
        if r.getToAddress().getOffset() == tgt:
            print("REF at 0x%08x: %s" % (ins.getAddress().getOffset(), ins))
    ins = ins.getNext()
print("done")
