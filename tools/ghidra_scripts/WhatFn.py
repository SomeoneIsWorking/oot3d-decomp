#@runtime Jython
import os
va = int(os.environ.get("OOT3D_VA","0"),16)
af = currentProgram.getAddressFactory().getDefaultAddressSpace()
addr = af.getAddress(va)
fm = currentProgram.getFunctionManager()
fn = fm.getFunctionContaining(addr)
if fn is None:
    print("NO FUNCTION CONTAINS 0x%08x" % va)
else:
    print("0x%08x is inside %s @ 0x%08x size=%d" % (va, fn.getName(), fn.getEntryPoint().getOffset(), fn.getBody().getNumAddresses()))
