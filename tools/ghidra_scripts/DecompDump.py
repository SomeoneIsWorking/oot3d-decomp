# -*- coding: utf-8 -*-
#@runtime Jython
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


# Targets (hex vaddr) that should be decoded as Thumb rather than ARM. The image is mixed
# ARM/Thumb-2; pointer-only action funcs in unanalyzed gaps are sometimes Thumb and decode to
# garbage (halt_baddata) as ARM. Set DECOMP_THUMB="all" to force Thumb on every force-created
# target, or a comma list of hex vaddrs.
_thumb_env = os.environ.get("DECOMP_THUMB", "").strip().lower()
THUMB_ALL = _thumb_env == "all"
THUMB_SET = set(int(x, 16) for x in _thumb_env.replace("0x", "").split(",") if x and x != "all")
# Force remove+clear+recreate of an already-existing function at the target (use to redo a target
# that a prior wrong-mode attempt left as garbage).
RECREATE = os.environ.get("DECOMP_RECREATE", "").strip() not in ("", "0", "false")


def _set_tmode(addr, thumb):
    import java.math.BigInteger as BigInteger
    tmode = currentProgram.getProgramContext().getRegister("TMode")
    if tmode is not None:
        try:
            currentProgram.getProgramContext().setValue(
                tmode, addr, addr, BigInteger.ONE if thumb else BigInteger.ZERO)
        except:
            # Java ContextChangeException (instructions already decoded with a conflicting
            # context) is not a Python Exception under Jython reflection — swallow it; the
            # existing disassembly is fine to decompile as-is.
            pass


def _force_create(addr, thumb):
    from ghidra.app.cmd.function import CreateFunctionCmd
    from ghidra.app.cmd.disassemble import ArmDisassembleCommand
    # Always pin the decode mode (TMode 1=Thumb, 0=ARM) before disassembling — a prior wrong-mode
    # attempt can persist the opposite context and produce garbage.
    _set_tmode(addr, thumb)
    try:
        ArmDisassembleCommand(addr, None, thumb).applyTo(currentProgram, mon)
    except:
        pass
    try:
        CreateFunctionCmd(addr).applyTo(currentProgram, mon)
    except:
        pass


def decompile_at(vaddr):
    addr = af.getAddress(vaddr)
    thumb = THUMB_ALL or (vaddr in THUMB_SET)
    fn = fm.getFunctionContaining(addr)
    if (fn is not None) and RECREATE and (fn.getEntryPoint().getOffset() == vaddr):
        # A prior wrong-mode force-create may have persisted. Wipe it so we can redo cleanly.
        body_max = fn.getBody().getMaxAddress()
        fm.removeFunction(addr)
        currentProgram.getListing().clearCodeUnits(addr, body_max, False)
        fn = None
    if fn is None:
        # Action funcs reached only via function pointers are often missed by analysis.
        # Force-create one at the exact target so it can be decompiled.
        _force_create(addr, thumb)
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
        try:
            fn, c = decompile_at(va)
        except Exception as e:
            import traceback
            print("DECOMP EXC %08x: %s" % (va, e))
            traceback.print_exc()
            continue
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
