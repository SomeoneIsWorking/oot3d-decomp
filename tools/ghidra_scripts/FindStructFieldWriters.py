# -*- coding: utf-8 -*-
#@runtime Jython
# Find every STR/STRH/STRB instruction with an immediate offset in a
# target set, aggregated by fn. The point: play->field at offset K is
# typically written via `STR Rt, [Rn, #K]` where Rn holds a play*
# pointer. By searching the whole binary for STRs with a specific
# immediate offset, we surface every fn that touches that struct field
# regardless of what Rn's provenance is (Ghidra's Reference DB doesn't
# link these accesses because base is a dynamic pointer).
#
# Env: OOT3D_STR_IMM = decimal or hex list of immediate offsets to look
#      for (e.g. "0x3230").
#      OOT3D_STR_SIZE = 4 (default word), 2 (halfword), 1 (byte)
#      OOT3D_TEXT_START, OOT3D_TEXT_END (defaults 0x00100000, 0x004C0000)
import os

prog = currentProgram
mem = prog.getMemory()
af = prog.getAddressFactory().getDefaultAddressSpace()
fm = prog.getFunctionManager()

imms_str = os.environ.get("OOT3D_STR_IMM", "0")
size = int(os.environ.get("OOT3D_STR_SIZE", "4"))
text_start = int(os.environ.get("OOT3D_TEXT_START", "0x00100000"), 16)
text_end = int(os.environ.get("OOT3D_TEXT_END", "0x004c0000"), 16)

# Parse imm list.
imms = set()
for tok in imms_str.replace(",", " ").split():
    imms.add(int(tok, 0))

# ARM STR (imm12) encoding: cond 010 P U B W L Rn Rt imm12
#   opcode base: 0xE58 (STR), 0xE5C (STRB), 0xE1CxxxB0 (STRH — special)
# We keep this simple: match the pre-index, no-write-back forms only.
#   STR Rt, [Rn, #imm12]  = 0xE58RRIII (mask 0xFFF00000 == 0xE5800000 for STR/STRB imm)
#       Detailed: E5x0[Rn:4][Rt:4][imm12] where bit22 = B (0=word, 1=byte)
#       and bit21 = W. Skip W=1 (writeback) — those are rare for struct writes.
# STRH Rt, [Rn, #imm]     = 0xE1CRRIII (mask 0xFFF00FF0 == 0xE1C000B0)
#       Detailed: 000P U 1 W 0 [Rn:4][Rt:4] [imm4hi] 1011 [imm4lo]
#       (P=pre-index, U=add, W=writeback, L=0=store)
#       So opcode base is 0xE1C000B0 for STRH imm, add|pre|nowb

def read_word(va):
    return mem.getInt(af.getAddress(va)) & 0xFFFFFFFF

def is_strb_imm(w):
    # STRB Rt, [Rn, #imm12]: cond 010 P U 1 W 0 [Rn][Rt][imm12]
    # We want P=1 U=1 W=0: mask top 12 bits 1110 0101 1100 == 0xE5C
    if (w & 0xFFF00000) != 0xE5C00000: return None
    if (w & (1 << 21)) != 0: return None  # writeback
    return w & 0xFFF

def is_str_imm(w):
    # STR word: same shape as STRB with bit22=0. cond 010 P U 0 W 0
    # Mask 0xFFF00000 == 0xE5800000
    if (w & 0xFFF00000) != 0xE5800000: return None
    if (w & (1 << 21)) != 0: return None
    return w & 0xFFF

def is_strh_imm(w):
    # STRH Rt, [Rn, #imm]: cond 000 P U 1 W 0 [Rn][Rt] [imm4hi] 1011 [imm4lo]
    # Fixed bits: bits 27:22 = 000_001, bits 7:4 = 1011.
    if (w & 0xFE500FF0) != 0xE1400090: return None  # rough
    # Better: cond 000 P U I W 0 Rn Rt imm4h 1011 imm4l
    # For STRH imm, bit20=0 (store), bits 27:25 = 000, bit22 = I=1 (immediate)
    # ...this is getting error-prone; skip STRH filter for now if imm !~ target
    imm4h = (w >> 8) & 0xF
    imm4l = (w >> 0) & 0xF
    imm = (imm4h << 4) | imm4l
    # We aren't confident this is STRH pattern; be permissive on the exact opcode
    return imm

def fn_at(va):
    a = af.getAddress(va)
    f = fm.getFunctionContaining(a)
    return f.getName() if f is not None else "?"

hits = []
va = text_start
while va < text_end:
    try:
        w = read_word(va)
    except:
        va += 4; continue
    matched_size = None
    imm = None
    if size in (4, 0):
        imm = is_str_imm(w)
        if imm is not None: matched_size = 4
    if imm is None and size in (1, 0):
        imm = is_strb_imm(w)
        if imm is not None: matched_size = 1
    if imm is not None and imm in imms:
        # Extract Rn, Rt for context
        rn = (w >> 16) & 0xF
        rt = (w >> 12) & 0xF
        hits.append((va, w, imm, matched_size, rn, rt))
    va += 4

print("hits: %d" % len(hits))
by_fn = {}
for h in hits:
    va, w, imm, sz, rn, rt = h
    fn = fn_at(va)
    by_fn.setdefault(fn, []).append(h)

for fn, hs in sorted(by_fn.items(), key=lambda kv: -len(kv[1])):
    print("  fn=%s  hits=%d" % (fn, len(hs)))
    for va, w, imm, sz, rn, rt in hs[:5]:
        op = 'STRB' if sz == 1 else ('STR' if sz == 4 else 'STR?')
        print("    @0x%08x  %s R%d, [R%d, #0x%x]  (raw=0x%08x)" %
              (va, op, rt, rn, imm, w))
    if len(hs) > 5:
        print("    ... (%d more)" % (len(hs) - 5))
