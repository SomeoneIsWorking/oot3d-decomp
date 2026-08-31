# -*- coding: utf-8 -*-
#@runtime Jython
"""Find direct call and tail-branch instructions targeting requested addresses.

This scans Ghidra's decoded instruction stream instead of relying on its
reference database. The latter can omit callers when stripped ARM code was
recovered after the original analysis pass.

Environment:
  OOT3D_CALL_TARGETS  comma-separated virtual addresses
"""

import os


targets = set(int(value, 16) for value in
              os.environ["OOT3D_CALL_TARGETS"].split(","))
functions = currentProgram.getFunctionManager()
listing = currentProgram.getListing()

count = 0
instructions = listing.getInstructions(True)
while instructions.hasNext():
    instruction = instructions.next()
    mnemonic = instruction.getMnemonicString().lower()
    if mnemonic not in ("b", "bl", "blx"):
        continue

    destinations = set(flow.getOffset() for flow in instruction.getFlows())
    if not destinations:
        for operand in instruction.getOpObjects(0):
            if hasattr(operand, "getOffset"):
                destinations.add(operand.getOffset())

    for destination in destinations & targets:
        function = functions.getFunctionContaining(instruction.getAddress())
        name = function.getName() if function else "???"
        entry = function.getEntryPoint() if function else "???"
        print("BRANCH kind=%s site=%s target=0x%08x fn=%s @ %s" %
              (mnemonic, instruction.getAddress(), destination, name, entry))
        count += 1

print("TOTAL: %d direct branches" % count)
