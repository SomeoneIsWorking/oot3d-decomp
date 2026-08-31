# -*- coding: utf-8 -*-
#@runtime Jython
# ClearAndArmDisasm — clear code units in [LO,HI), force TMode=0 (ARM), disassemble,
# then print instructions referencing TARGET. OOT3D_CA_REMOVE_ENTRY removes a wrongly split
# function before OOT3D_CA_FUNCTION_ENTRY creates the corrected ARM body through its return.
# Env: OOT3D_CA_LO, OOT3D_CA_HI, OOT3D_CA_TARGET, optional OOT3D_CA_REMOVE_ENTRY/FUNCTION_ENTRY
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
entry_value = os.environ.get("OOT3D_CA_FUNCTION_ENTRY")
if entry_value:
    entry = af.getAddress(int(entry_value, 16))
    fm = currentProgram.getFunctionManager()
    remove_value = os.environ.get("OOT3D_CA_REMOVE_ENTRY")
    if remove_value:
        remove_entry = af.getAddress(int(remove_value, 16))
        old = fm.getFunctionAt(remove_entry)
        if old is not None:
            fm.removeFunction(remove_entry)
    created = createFunction(entry, None)
    if created is None:
        raise RuntimeError("failed to create ARM function at 0x%08x" % entry.getOffset())
    print("function 0x%08x -> %s" % (entry.getOffset(), created.getBody()))
ins = listing.getInstructionAt(lo) or listing.getInstructionAfter(lo)
while ins is not None and ins.getAddress().compareTo(hi) < 0:
    for r in ins.getReferencesFrom():
        if r.getToAddress().getOffset() == tgt:
            print("REF at 0x%08x: %s" % (ins.getAddress().getOffset(), ins))
    ins = ins.getNext()
print("done")
