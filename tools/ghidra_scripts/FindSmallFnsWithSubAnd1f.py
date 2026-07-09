# -*- coding: utf-8 -*-
#@runtime Jython
# Filter Ghidra's known function table for candidates matching
# Cutscene_Command_SetLighting:
#   1. Small (< 128 bytes) — leaf CS-command handler
#   2. Body contains a SUBS-imm-1 (ARM or Thumb T1/T2) *self-modifying*
#   3. Body contains a 32-bit word 0x3F800000 pool constant referenced
#      by a PC-relative load OR anywhere in the fn's body
# Prints candidate fn name, VA, size.
#
# This bypasses the halfword-alignment false-positive problem of the
# scanning approach — we only look inside fn bodies Ghidra has already
# classified.

prog = currentProgram
mem = prog.getMemory()
fm = prog.getFunctionManager()
af = prog.getAddressFactory().getDefaultAddressSpace()

def read_word(va):
    return mem.getInt(af.getAddress(va)) & 0xFFFFFFFF

def fn_contains_1f(f):
    body = f.getBody()
    for rng in body.getAddressRanges():
        va = rng.getMinAddress().getOffset()
        end = rng.getMaxAddress().getOffset()
        # 4-byte aligned scan
        va = (va + 3) & ~3
        while va + 3 <= end:
            try:
                if read_word(va) == 0x3F800000:
                    return True
            except:
                pass
            va += 4
    return False

def fn_contains_sub1(f):
    lst = prog.getListing()
    it = lst.getInstructions(f.getBody(), True)
    while it.hasNext():
        ins = it.next()
        s = str(ins).lower()
        # Coarse match — Ghidra prints "sub r1,r1,#0x1" for ARM or
        # "subs r0,r0,#0x1" for Thumb. Also handle "sub" with implicit
        # dest (T2 encoding).
        if ("sub" in s and "#0x1" in s):
            # Split operands and check Rn==Rd
            # Instruction textual form: "op Rd,Rn,#imm" (ARM DP) or
            # "subs Rd,#imm" (Thumb T2). Just require the string ends
            # with #0x1 and contains "sub".
            operands = s.replace(",", " ").split()
            if operands and operands[-1] == "#0x1":
                # Very coarse — many false positives, but bounded by
                # 128B-max fn size + 1.0f filter.
                return True
    return False

cands = []
for f in fm.getFunctions(True):
    sz = f.getBody().getNumAddresses()
    if sz < 8 or sz > 128: continue
    if not fn_contains_1f(f): continue
    if not fn_contains_sub1(f): continue
    cands.append((f.getEntryPoint().getOffset(), f.getName(), sz))

cands.sort()
print("candidates: %d" % len(cands))
for (va, name, sz) in cands:
    print("  0x%08x  %-40s  size=%d" % (va, name, sz))
