# -*- coding: utf-8 -*-
#@runtime Jython
# FindCsSetLighting — hunt Cutscene_Command_SetLighting in the OoT3D binary.
#
# N64 reference:
#   void Cutscene_Command_SetLighting(PlayState* play, CutsceneContext* csCtx,
#                                     CsCmdEnvLighting* cmd) {
#       if (csCtx->frames == cmd->startFrame) {
#           play->envCtx.unk_BF = cmd->setting - 1;
#           play->envCtx.unk_D8 = 1.0f;
#       }
#   }
#
# Distinctive fingerprints in ARM code:
#   (a) 1.0f pool constant = 0x3F800000 loaded via LDR Rd, [PC, #k]
#   (b) `SUB Rx, Rx, #1` immediately before a STRB to a struct field —
#       the `cmd->setting - 1` computation
#   (c) A STR (word) to a different struct offset with the value 1.0f —
#       the `envCtx->unk_D8 = 1.0f` write
#
# Strategy: scan .text for 4-byte-aligned 32-bit LE words matching
# `SUB Rx, Rx, #1` (mask 0xFFFFF00F, value 0xE24_1001 with Rn==Rd).
# For each hit, check that within the next ~10 instructions there's a
# LDR-pool-constant path where the pool word == 0x3F800000. Print (hit
# PC, pool VA, pool value, enclosing fn).
#
# NOTE: `sub #1` alone is a very common instruction — this filters by
# the 1.0f neighbor to cut false positives to a manageable list.

from ghidra.program.model.address import AddressSet
prog = currentProgram
mem = prog.getMemory()
fm = prog.getFunctionManager()
af = prog.getAddressFactory().getDefaultAddressSpace()

# Scan .text: start 0x00100000, cap length so we don't hit .rodata.
# OoT3D .text ends around 0x004C0000; use it as an upper bound.
TEXT_START = 0x00100000
TEXT_END   = 0x004C0000

def is_sub_imm_1_selfmod(w):
    # ARM: cond=1110 001 opcode=0010 (SUB) S=0 Rn=Rd imm12=0x001
    #   1110 0010 0100 Rn Rd 000000000001
    # mask over cond+fmt+opcode+S:
    if (w & 0xFFF00000) != 0xE2400000: return False
    rn = (w >> 16) & 0xF
    rd = (w >> 12) & 0xF
    if rn != rd: return False
    imm12 = w & 0xFFF
    if imm12 != 0x001: return False
    return True

def is_ldr_pool(w):
    # LDR Rd, [PC, #imm12]  — cond=E, 010, P=1, U=1, B=0, W=0, L=1, Rn=15
    # mask: cond+fmt+PUBWL+Rn == E5 9F __ __
    return (w & 0xFFFFF000) == 0xE59FF000 or ((w & 0x0F7FF000) == 0x051FF000) or ((w & 0x0F7F0000) == 0x059F0000 and ((w>>16)&0xF)==15)

def read_word(va):
    a = af.getAddress(va)
    return (mem.getInt(a)) & 0xFFFFFFFF

def fn_containing(va):
    a = af.getAddress(va)
    f = fm.getFunctionContaining(a)
    return f.getName() if f is not None else "?"

hits = []
va = TEXT_START
while va < TEXT_END:
    try:
        w = read_word(va)
    except Exception:
        va += 4; continue
    if is_sub_imm_1_selfmod(w):
        # Scan forward up to 16 insns for an LDR-pool.
        found_pool = None
        for j in range(1, 17):
            wj_va = va + j*4
            if wj_va >= TEXT_END: break
            try:
                wj = read_word(wj_va)
            except Exception:
                continue
            if (wj & 0x0F7FF000) == 0x051FF000:
                # LDR Rd, [PC, +/- #imm12]
                u = (wj >> 23) & 1
                imm12 = wj & 0xFFF
                # PC at execution = wj_va + 8
                pool_va = (wj_va + 8) + (imm12 if u else -imm12)
                try:
                    pool_word = read_word(pool_va)
                except Exception:
                    pool_word = None
                if pool_word == 0x3F800000:
                    found_pool = (wj_va, pool_va)
                    break
        if found_pool is not None:
            hits.append((va, found_pool[0], found_pool[1]))
    va += 4

print("hits: %d" % len(hits))
for (sub_va, ldr_va, pool_va) in hits[:100]:
    fn = fn_containing(sub_va)
    print("  sub@0x%08x  ldr@0x%08x  pool@0x%08x  fn=%s" %
          (sub_va, ldr_va, pool_va, fn))
