# -*- coding: utf-8 -*-
#@runtime Jython
import os
start = int(os.environ.get("OOT3D_RANGE_START","0"),16)
end   = int(os.environ.get("OOT3D_RANGE_END","0"),16)
af = currentProgram.getAddressFactory().getDefaultAddressSpace()
fm = currentProgram.getFunctionManager()
addr = af.getAddress(start)
end_a = af.getAddress(end)
fn = fm.getFunctionContaining(addr)
it = fm.getFunctions(True)
for f in it:
    e = f.getEntryPoint().getOffset()
    if start <= e < end:
        print("fn %s @ 0x%08x size=%d" % (f.getName(), e, f.getBody().getNumAddresses()))
