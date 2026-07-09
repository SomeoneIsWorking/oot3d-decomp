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
# Distinctive fingerprints:
#   (a) 1.0f pool constant = 0x3F800000 loaded via LDR PC-rel
#   (b) `SUB Rx,Rx,#1` (Rn==Rd, imm==1) — the `cmd->setting - 1`
#       computation, IMMEDIATELY after loading cmd->setting from a
#       struct field
#   (c) The store `envCtx.unk_D8 = 1.0f` alongside
#
# Scan .text for the (b)-(a) pair in BOTH ARM and Thumb encodings.
# Prior ARM-only pass returned 0 hits — the CS handler is Thumb (0x001758f8
# region and neighbouring CS handler dispatches). See soh3d
# debug_journal/2026-07-04-title-envctx-re-ghidra-attacks.md.

prog = currentProgram
mem = prog.getMemory()
fm = prog.getFunctionManager()
af = prog.getAddressFactory().getDefaultAddressSpace()

TEXT_START = 0x00100000
TEXT_END   = 0x004C0000

# ---------- ARM encoding helpers ----------

def arm_is_sub_imm_1_selfmod(w):
    # ARM DP-imm: cond=1110 001 opcode=0010 (SUB) S=0 Rn=Rd imm12=0x001
    if (w & 0xFFF00000) != 0xE2400000: return False
    rn = (w >> 16) & 0xF
    rd = (w >> 12) & 0xF
    if rn != rd: return False
    return (w & 0xFFF) == 0x001

def arm_pool_ldr(w, ldr_va):
    # ARM: LDR Rd, [PC, +/-#imm12]  — cond=E 010 P=1 U=? B=0 W=0 L=1 Rn=15
    # Format: 1110 010 P U B W L 1111 Rd imm12
    if (w & 0x0F7F0000) != 0x051F0000: return None
    u = (w >> 23) & 1
    imm12 = w & 0xFFF
    pool_va = (ldr_va + 8) + (imm12 if u else -imm12)
    return pool_va

# ---------- Thumb encoding helpers ----------
# All halfword-based. Thumb PC-relative pool: `01001 Rd imm8` (0x4800 mask),
# pool_va = (PC & ~3) + 4 + imm8*4 where PC = instr_va + 4.

def thumb_is_subs_imm_1_selfmod(hw):
    # T1 encoding: SUBS Rd, Rn, #imm3
    #   0001 111 imm3 Rn Rd    (low-reg only, Rn/Rd in 0..7)
    if (hw & 0xFE00) != 0x1E00: return False
    imm3 = (hw >> 6) & 0x7
    rn   = (hw >> 3) & 0x7
    rd   = hw & 0x7
    if imm3 != 1: return False
    if rn != rd: return False
    return True

def thumb_is_subs_imm8_selfmod(hw):
    # T2 encoding: SUBS Rdn, #imm8
    #   0011 1 Rdn imm8         (implicit Rn==Rd)
    if (hw & 0xF800) != 0x3800: return False
    imm8 = hw & 0xFF
    return imm8 == 1

def thumb_pool_ldr(hw, instr_va):
    # LDR Rd, [PC, #imm8*4]  — 0100 1 Rd imm8
    if (hw & 0xF800) != 0x4800: return None
    imm8 = hw & 0xFF
    pool_va = ((instr_va + 4) & 0xFFFFFFFC) + imm8 * 4
    return pool_va

# ---------- shared ----------

def read_word_at(va):
    return mem.getInt(af.getAddress(va)) & 0xFFFFFFFF

def read_hw_at(va):
    return mem.getShort(af.getAddress(va)) & 0xFFFF

def fn_at(va):
    a = af.getAddress(va)
    f = fm.getFunctionContaining(a)
    return f.getName() if f is not None else "?"

# ---------- scan ----------

# Sanity: verify the SUB #1 detector against 0x001758f8 (known ARM match).
try:
    probe = read_word_at(0x001758f8)
    print("probe @0x001758f8 = 0x%08x  arm_sub_match=%s" %
          (probe, arm_is_sub_imm_1_selfmod(probe)))
except Exception as e:
    print("probe failed: %s" % e)

hits = []

# ARM pass: 4-byte stride. Widen the neighbor window and search
# BOTH forward and backward — the compiler may hoist the 1.0f pool
# load above the SUB.
va = TEXT_START
arm_sub_count = 0
while va < TEXT_END:
    try:
        w = read_word_at(va)
    except:
        va += 4; continue
    if arm_is_sub_imm_1_selfmod(w):
        arm_sub_count += 1
        found = None
        # +/- 40 insns each side (~ 320 bytes) covers typical CS-handler
        # fn body length including the constant pool at fn end.
        for j in list(range(1, 41)) + list(range(-1, -41, -1)):
            wj_va = va + j*4
            if wj_va < TEXT_START or wj_va >= TEXT_END: continue
            try:
                wj = read_word_at(wj_va)
            except:
                continue
            pool = arm_pool_ldr(wj, wj_va)
            if pool is None: continue
            try:
                pw = read_word_at(pool)
            except:
                continue
            if pw == 0x3F800000:
                found = (wj_va, pool)
                break
        if found is not None:
            hits.append(('ARM', va, found[0], found[1]))
    va += 4
print("arm SUB #1 selfmod total: %d" % arm_sub_count)

# Thumb pass: 2-byte stride. False positives from mid-32bit-Thumb2
# halfwords are unavoidable without a proper Thumb decoder — the 1.0f
# neighbor filter cuts most of them.
va = TEXT_START
while va < TEXT_END:
    try:
        hw = read_hw_at(va)
    except Exception:
        va += 2; continue
    subs = thumb_is_subs_imm_1_selfmod(hw) or thumb_is_subs_imm8_selfmod(hw)
    if subs:
        found = None
        # +/- 60 halfwords each side (~ 240 bytes) covers CS-handler fn.
        for j in list(range(1, 61)) + list(range(-1, -61, -1)):
            hj_va = va + j*2
            if hj_va < TEXT_START or hj_va >= TEXT_END: continue
            try:
                hj = read_hw_at(hj_va)
            except:
                continue
            pool = thumb_pool_ldr(hj, hj_va)
            if pool is None: continue
            try:
                pw = read_word_at(pool)
            except:
                continue
            if pw == 0x3F800000:
                found = (hj_va, pool)
                break
        if found is not None:
            hits.append(('THUMB', va, found[0], found[1]))
    va += 2

# Dedup + print. Multiple Thumb hits inside the same fn are common
# (loop bodies with `subs; ldr =1.0f`) — key on enclosing fn to
# collapse them, but keep all hits when fn=? (unresolved).
seen = set()
uniq = []
for h in hits:
    mode, sub, ldr, pool = h
    fn = fn_at(sub)
    key = (mode, fn) if fn != "?" else (mode, sub)
    if key in seen: continue
    seen.add(key)
    uniq.append(h)

print("total raw hits: %d, dedup'd: %d" % (len(hits), len(uniq)))
for (mode, sub, ldr, pool) in uniq[:200]:
    print("  [%s] sub@0x%08x  ldr@0x%08x  pool@0x%08x  fn=%s" %
          (mode, sub, ldr, pool, fn_at(sub)))
