#!/usr/bin/env python3
"""callers.py — call-graph xref: find every BL/BLX in the code image that targets a VA.
Scans BOTH ARM (A32) and Thumb (T32) BL/BLX encodings at every 2-byte (Thumb) / 4-byte (ARM)
alignment, since OoT3D mixes ARM and Thumb and we don't have a function map. PC-relative call
targets aren't literal words, so literal-xref (xref.py) misses them; this finds them.

  callers.py 0x0044e7a0           # who calls this function
  callers.py 0x0044e7a0 --ctx 6   # context instrs around each caller
"""
import argparse, struct, capstone

BASE = 0x00100000

def arm_bl_targets(code):
    """yield (site_va, target_va) for ARM BL/BLX(imm)."""
    for off in range(0, len(code) - 3, 4):
        w = code[off] | (code[off+1]<<8) | (code[off+2]<<16) | (code[off+3]<<24)
        cond = (w >> 28) & 0xF
        op = (w >> 24) & 0xF
        va = BASE + off
        # BL: cond != 0xF, bits[27:24]=0b1011 (0xB). BLX(imm): cond==0xF, bits[27:25]=0b101
        if op == 0xB and cond != 0xF:
            imm = w & 0xFFFFFF
            if imm & 0x800000: imm -= 0x1000000
            tgt = va + 8 + (imm << 2)
            yield va, tgt, "bl"
        elif cond == 0xF and ((w >> 25) & 0x7) == 0b101:
            imm = w & 0xFFFFFF
            if imm & 0x800000: imm -= 0x1000000
            h = (w >> 24) & 1
            tgt = va + 8 + (imm << 2) + (h << 1)
            yield va, tgt | 1, "blx"  # to thumb

def thumb_bl_targets(code):
    """yield (site_va, target_va) for Thumb BL/BLX (two halfwords)."""
    for off in range(0, len(code) - 3, 2):
        h1 = code[off] | (code[off+1]<<8)
        h2 = code[off+2] | (code[off+3]<<8)
        va = BASE + off
        if (h1 & 0xF800) == 0xF000 and (h2 & 0xC000) == 0xC000:
            # 32-bit BL/BLX
            s = (h1 >> 10) & 1
            imm10 = h1 & 0x3FF
            j1 = (h2 >> 13) & 1
            j2 = (h2 >> 11) & 1
            imm11 = h2 & 0x7FF
            i1 = 1 - (j1 ^ s)
            i2 = 1 - (j2 ^ s)
            imm = (s<<24)|(i1<<23)|(i2<<22)|(imm10<<12)|(imm11<<1)
            if imm & 0x1000000: imm -= 0x2000000
            isblx = (h2 & 0x1000) == 0   # bit12=0 -> BLX, =1 -> BL
            tgt = (va + 4 + imm)
            if isblx:
                tgt &= ~3
            else:
                tgt |= 1  # thumb target
            yield va, tgt, ("blx" if isblx else "bl")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target", type=lambda s: int(s, 0))
    ap.add_argument("--bin", default="build/code.bin")
    ap.add_argument("--ctx", type=int, default=4)
    a = ap.parse_args()
    code = open(a.bin, "rb").read()
    text = code[:0x3ca000]
    t = a.target
    cand = {t, t & ~1, t | 1}
    hits = []
    for va, tgt, kind in arm_bl_targets(text):
        if tgt in cand or (tgt & ~1) == (t & ~1):
            hits.append((va, kind, "ARM"))
    for va, tgt, kind in thumb_bl_targets(text):
        if tgt in cand or (tgt & ~1) == (t & ~1):
            hits.append((va, kind, "THUMB"))
    hits.sort()
    print(f"{len(hits)} call sites target 0x{t:08x}")
    md_a = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    md_t = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)
    for va, kind, mode in hits[:60]:
        print(f"\n--- {kind} from {va:08x} ({mode}) ---")
        md = md_t if mode == "THUMB" else md_a
        step = 2 if mode == "THUMB" else 4
        s = va - step*a.ctx - BASE
        e = va - BASE + step*2
        for ins in md.disasm(code[s:e], BASE + s):
            mark = " <==" if ins.address == va else ""
            print(f"  {ins.address:08x}  {ins.mnemonic:8} {ins.op_str}{mark}")

if __name__ == "__main__":
    main()
