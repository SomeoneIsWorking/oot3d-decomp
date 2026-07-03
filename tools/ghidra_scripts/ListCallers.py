# -*- coding: utf-8 -*-
#@runtime Jython
# ListCallers — list every function that contains a bl/blx to a target VA.
# Uses Ghidra's Reference DB (which does catch bl call refs — the limitation
# is only for data-ref movw/movt xrefs).
#
# Env: OOT3D_CALL_TARGET (hex VA).

import os

target_va = int(os.environ.get("OOT3D_CALL_TARGET", "0"), 16)
print("Callers of 0x%08x:" % target_va)

af = currentProgram.getAddressFactory().getDefaultAddressSpace()
target_addr = af.getAddress(target_va)
fm = currentProgram.getFunctionManager()
rm = currentProgram.getReferenceManager()

refs = rm.getReferencesTo(target_addr)
callers = {}
for r in refs:
    src = r.getFromAddress()
    fn = fm.getFunctionContaining(src)
    if fn is None:
        callers.setdefault(("<no-fn>", 0), []).append(src.getOffset())
    else:
        key = (fn.getName(), fn.getEntryPoint().getOffset())
        callers.setdefault(key, []).append(src.getOffset())

for (name, entry), sites in sorted(callers.items(), key=lambda t: t[0][1]):
    print("  %s @ 0x%08x  (%d call site(s))" % (name, entry, len(sites)))
    for s in sites:
        print("    from 0x%08x" % s)
