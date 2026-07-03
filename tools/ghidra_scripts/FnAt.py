# -*- coding: utf-8 -*-
#@runtime Jython
# FnAt — print the function containing a given VA.
# Env: OOT3D_FN_AT (hex VA).
import os
va = int(os.environ.get("OOT3D_FN_AT", "0"), 16)
af = currentProgram.getAddressFactory().getDefaultAddressSpace()
fm = currentProgram.getFunctionManager()
fn = fm.getFunctionContaining(af.getAddress(va))
if fn is None:
    print("no function contains 0x%08x" % va)
else:
    print("0x%08x -> fn %s @ 0x%08x (size=%d)" % (
        va, fn.getName(), fn.getEntryPoint().getOffset(),
        fn.getBody().getNumAddresses()))
