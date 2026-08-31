# -*- coding: utf-8 -*-
#@runtime Jython
"""Find indirect calls through a requested vtable byte offset.

Scans Ghidra's analyzed instruction listing for the common sequence

    ldr  rCall, [rVtable, #offset]
    ...
    blx  rCall

or the tail-call form which restores the caller frame and then executes
``bx rCall``.

and reports the enclosing function. This handles callers whose concrete target
has no static xref because the vtable pointer is loaded from an object.

Environment:
  OOT3D_VCALL_OFFSETS   comma-separated byte offsets (default: 0x14)
  OOT3D_VCALL_WINDOW    maximum following instructions to inspect (default: 8)
"""

import os
import re


offsets = set(int(value, 16) for value in
              os.environ.get("OOT3D_VCALL_OFFSETS", "0x14").split(","))
window = int(os.environ.get("OOT3D_VCALL_WINDOW", "8"))
listing = currentProgram.getListing()
functions = currentProgram.getFunctionManager()

load_pattern = re.compile(
    r"^ldr(?:\.w)?(r(?:1[0-5]|[0-9])|ip|pc),\[(?:r(?:1[0-5]|[0-9])|ip),#0x([0-9a-f]+)\]$",
    re.IGNORECASE)

count = 0
instructions = listing.getInstructions(True)
while instructions.hasNext():
    load = instructions.next()
    match = load_pattern.match(load.toString().replace(" ", ""))
    if match is None:
        continue
    call_register = match.group(1).lower()
    if int(match.group(2), 16) not in offsets:
        continue

    candidate = load
    call = load if call_register == "pc" else None
    if call is None:
        for unused in range(window):
            candidate = candidate.getNext()
            if candidate is None:
                break
            mnemonic = candidate.getMnemonicString().lower()
            compact = candidate.toString().replace(" ", "").lower()
            if (mnemonic.startswith("blx") or mnemonic == "bx") and compact in \
                    ("blx" + call_register, "bx" + call_register):
                call = candidate
                break
            if mnemonic.startswith("b"):
                break
    if call is None:
        continue

    function = functions.getFunctionContaining(load.getAddress())
    name = function.getName() if function else "???"
    entry = function.getEntryPoint() if function else "???"
    print("VCALL load=%s call=%s offset=0x%x fn=%s @ %s" %
          (load.getAddress(), call.getAddress(), int(match.group(2), 16), name, entry))
    count += 1

print("TOTAL: %d virtual calls" % count)
