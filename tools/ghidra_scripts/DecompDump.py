# -*- coding: utf-8 -*-
# Ghidra headless script: decompile functions to C.
# Run against the analyzed oot3d project:
#   analyzeHeadless build/ghidra oot3d -process code.bin -noanalysis \
#       -scriptPath tools/ghidra_scripts -postScript DecompDump.py
#
# Targets: reads virtual addresses (one hex per line, '#' comments ok) from the file named in
# env DECOMP_TARGETS (default build/decomp/targets.txt). For each, decompiles the function
# containing that address and writes build/decomp/<vaddr>.c. With no targets file, dumps a
# function inventory (addr,size,name) to build/decomp/functions.csv instead — use that first to
# pick targets.
import os
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

REPO = os.environ.get("OOT3D_REPO", os.getcwd())
OUT = os.path.join(REPO, "build", "decomp")
if not os.path.isdir(OUT):
    os.makedirs(OUT)

fm = currentProgram.getFunctionManager()
af = currentProgram.getAddressFactory().getDefaultAddressSpace()
di = DecompInterface()
di.openProgram(currentProgram)
mon = ConsoleTaskMonitor()


def decompile_at(vaddr):
    addr = af.getAddress(vaddr)
    fn = fm.getFunctionContaining(addr)
    if fn is None:
        # Action funcs reached only via function pointers are often missed by analysis.
        # Force-create one at the exact target so it can be decompiled.
        from ghidra.app.cmd.function import CreateFunctionCmd
        CreateFunctionCmd(addr).applyTo(currentProgram, mon)
        fn = fm.getFunctionContaining(addr)
    if fn is None:
        return None, None
    res = di.decompileFunction(fn, 60, mon)
    if res is None or not res.decompileCompleted():
        return fn, None
    return fn, res.getDecompiledFunction().getC()


targets_file = os.environ.get("DECOMP_TARGETS", os.path.join(OUT, "targets.txt"))
if os.path.isfile(targets_file):
    addrs = []
    for ln in open(targets_file):
        ln = ln.split("#")[0].strip()
        if ln:
            addrs.append(int(ln, 16))
    for va in addrs:
        fn, c = decompile_at(va)
        if c is None:
            print("DECOMP FAIL %08x (fn=%s)" % (va, fn))
            continue
        p = os.path.join(OUT, "%08x.c" % fn.getEntryPoint().getOffset())
        f = open(p, "w")
        f.write("// OoT3D decomp @ %08x  name=%s  size=%d\n" %
                (fn.getEntryPoint().getOffset(), fn.getName(), fn.getBody().getNumAddresses()))
        f.write(c)
        f.close()
        print("WROTE %s (%d bytes C)" % (p, len(c)))
else:
    # inventory pass
    p = os.path.join(OUT, "functions.csv")
    f = open(p, "w")
    f.write("vaddr,size,name\n")
    n = 0
    for fn in fm.getFunctions(True):
        ep = fn.getEntryPoint().getOffset()
        f.write("%08x,%d,%s\n" % (ep, fn.getBody().getNumAddresses(), fn.getName()))
        n += 1
    f.close()
    print("WROTE %s (%d functions)" % (p, n))
