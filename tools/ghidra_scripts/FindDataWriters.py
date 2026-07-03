# -*- coding: utf-8 -*-
#@runtime Jython
# FindDataWriters.py — for a set of .data VAs (targets file), list every code
# reference to that VA, its access mode (READ/WRITE/DATA), and its enclosing
# function. Ghidra's Reference database already has movw/movt materializations,
# pool ldrs, and indexed-base offsets resolved — no need to reimplement the scan.
#
# Env: OOT3D_DATA_TARGETS=/path/to/targets.txt
#      one hex VA per line, comments with '#'.
# Output: one line per hit to stdout.
#
# @category Analysis
import os
from ghidra.program.model.symbol import RefType

path = os.environ.get("OOT3D_DATA_TARGETS")
if not path:
    print("OOT3D_DATA_TARGETS not set")
    exit()

targets = []
with open(path) as f:
    for line in f:
        s = line.split('#')[0].strip()
        if not s: continue
        targets.append(int(s, 16))
print("targets: " + str([hex(t) for t in targets]))

fm = currentProgram.getFunctionManager()
rm = currentProgram.getReferenceManager()
af = currentProgram.getAddressFactory().getDefaultAddressSpace()

for va in targets:
    addr = af.getAddress(va)
    refs = rm.getReferencesTo(addr)
    hits = list(refs)
    print("--- 0x%08x: %d refs ---" % (va, len(hits)))
    for r in hits:
        src = r.getFromAddress()
        rtype = r.getReferenceType()
        fn = fm.getFunctionContaining(src)
        fn_s = ("fn=%s@%s" % (fn.getName(), fn.getEntryPoint())) if fn else "fn=none"
        print("  from 0x%s  %-15s  %s" % (src, rtype, fn_s))
