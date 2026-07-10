# -*- coding: utf-8 -*-
#@runtime Jython
# FindByteOffsetReaders — scan Ghidra's already-analyzed Listing (proper ARM/Thumb
# instruction boundaries, no data-in-code misalignment) for byte load/store
# instructions (LDRB/STRB, any addressing mode) whose displayed operand string
# contains one of the given "#0x.." immediate offsets. Prints address + enclosing
# function + mnemonic + operands. Uses the Listing, not raw capstone-over-bytes, so
# it can't desync on interleaved literal pools/branch tables the way an ad hoc
# linear disassembly sweep can.
#
# env OOT3D_OFFSETS = comma-separated hex offsets, e.g. "0xb2,0x0a,0xa5"
# env OOT3D_MNEMONIC_PREFIX = optional, default "ldrb,strb"

import os

prog = currentProgram
listing = prog.getListing()
fm = prog.getFunctionManager()

offs_env = os.environ.get("OOT3D_OFFSETS", "0xb2")
mnem_env = os.environ.get("OOT3D_MNEMONIC_PREFIX", "ldrb,strb")
offsets = set(int(x, 16) for x in offs_env.split(","))
prefixes = tuple(mnem_env.split(","))

needles = ["#0x%x]" % o for o in offsets] + ["#-0x%x]" % o for o in offsets]

count = 0
ins = listing.getInstructions(True)
while ins.hasNext():
    i = ins.next()
    mnem = i.getMnemonicString().lower()
    if not mnem.startswith(prefixes):
        continue
    s = i.toString()
    hit = None
    for nd in needles:
        if nd in s:
            hit = nd
            break
    if hit is None:
        continue
    addr = i.getAddress()
    f = fm.getFunctionContaining(addr)
    fname = f.getName() if f else "???"
    faddr = f.getEntryPoint() if f else None
    print("%s  %-28s  fn=%s @ %s" % (addr, s, fname, faddr))
    count += 1

print("TOTAL: %d hits" % count)
