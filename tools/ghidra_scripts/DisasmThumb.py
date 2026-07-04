# -*- coding: utf-8 -*-
#@runtime Jython
# DisasmThumb — force-disassemble a range in Thumb (or ARM if
# OOT3D_DISASM_MODE=arm) and print the
# instructions + their raw bytes. For regions Ghidra's auto-analysis
# missed (e.g. small Thumb helpers whose entry isn't Ref'd from ARM code).
# Env: OOT3D_DISASM_START (hex), OOT3D_DISASM_END (hex).
import os
from ghidra.program.model.symbol import RefType
from ghidra.program.model.lang import Register
from ghidra.app.cmd.disassemble import DisassembleCommand

start = int(os.environ.get("OOT3D_DISASM_START", "0"), 16)
end   = int(os.environ.get("OOT3D_DISASM_END",   "0"), 16)
mode  = os.environ.get("OOT3D_DISASM_MODE", "thumb").lower()  # "arm" or "thumb"
tmode_val = 0 if mode == "arm" else 1
af = currentProgram.getAddressFactory().getDefaultAddressSpace()
lst = currentProgram.getListing()
prog = currentProgram
start_a = af.getAddress(start)
end_a   = af.getAddress(end)

# Set TMode=1 (Thumb) at start_a via context reg, then let
# DisassembleCommand walk. Ghidra's ARM lang exposes "TMode".
ctx = prog.getProgramContext()
tmode = ctx.getRegister("TMode")
if tmode is not None:
    try:
        ctx.setValue(tmode, start_a, end_a.subtract(1), java.math.BigInteger.valueOf(tmode_val))
    except Exception:
        # Fallback via helper
        try:
            from java.math import BigInteger
            ctx.setValue(tmode, start_a, end_a.subtract(1), BigInteger.valueOf(tmode_val))
        except Exception as e:
            print("could not set TMode: %s" % e)

cmd = DisassembleCommand(start_a, None, True)
cmd.applyTo(prog, monitor)

addr = start_a
mem = prog.getMemory()
while addr and addr.getOffset() < end_a.getOffset():
    ins = lst.getInstructionAt(addr)
    if ins is None:
        # Show raw halfword so we can see WHY disasm failed at this point.
        try:
            b0 = mem.getByte(addr) & 0xff
            b1 = mem.getByte(addr.add(1)) & 0xff
            print("  %s  <no insn>  raw=%02x%02x" % (addr, b1, b0))
        except Exception:
            print("  %s  <no insn>" % addr)
        addr = addr.add(2)
        continue
    # Print instruction + its raw bytes for cross-check.
    try:
        bs = ins.getBytes()
        raw = "".join("%02x" % (b & 0xff) for b in bs)
    except Exception:
        raw = "?"
    print("  %s  [%s]  %s" % (addr, raw, ins))
    addr = ins.getMaxAddress().add(1)
