# -*- coding: utf-8 -*-
#@runtime Jython
# DisasmAndRef — force-disassemble a range, then report instructions that reference a
# target VA (pool-literal ldr), and create+name the enclosing function.
# Env: OOT3D_DR_LO, OOT3D_DR_HI, OOT3D_DR_TARGET (all hex)
import os
af = currentProgram.getAddressFactory().getDefaultAddressSpace()
lo = af.getAddress(int(os.environ["OOT3D_DR_LO"], 16))
hi = af.getAddress(int(os.environ["OOT3D_DR_HI"], 16))
tgt = int(os.environ["OOT3D_DR_TARGET"], 16)
listing = currentProgram.getListing()
# force disassembly across the range where nothing is defined
a = lo
while a.compareTo(hi) < 0:
    if listing.getInstructionAt(a) is None and listing.getDefinedDataAt(a) is None:
        disassemble(a)
    ins = listing.getInstructionAt(a)
    a = a.add(ins.getLength() if ins else 4)
# scan instructions for a reference to tgt
ins = listing.getInstructionAt(lo) or listing.getInstructionAfter(lo)
while ins is not None and ins.getAddress().compareTo(hi) < 0:
    for r in ins.getReferencesFrom():
        if r.getToAddress().getOffset() == tgt:
            print("REF at 0x%08x: %s" % (ins.getAddress().getOffset(), ins))
    ins = ins.getNext()
