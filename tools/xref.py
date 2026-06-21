#!/usr/bin/env python3
"""xref.py — find references to a virtual address inside the OoT3D code image.

ARM loads a 32-bit address from a nearby literal pool (`ldr rN, [pc, #imm]`), so a reference to
an address X shows up as the 4-byte little-endian word X embedded in .text. This scans for those
literal words and, for each, disassembles a window above it to show the function context (the LDR
that consumes the literal, the enclosing code). Primary tool for tracing asserts -> functions and
globals -> accessors.

  xref.py 0x00373b6c            # who references the z_actor.cpp __FILE__ string
  xref.py 0x00373b6c --ctx 12   # more context lines per hit
  xref.py 0x081... --data       # also scan .data/.rodata literal tables (object pointers etc.)
"""
import argparse, struct, capstone

BASE = 0x00100000


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("target", type=lambda s: int(s, 0))
    ap.add_argument("--bin", default="build/code.bin")
    ap.add_argument("--ctx", type=int, default=8, help="instrs of context above each literal")
    ap.add_argument("--max", type=int, default=40)
    a = ap.parse_args()
    code = open(a.bin, "rb").read()
    tgt = struct.pack("<I", a.target)
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    hits = []
    start = 0
    while True:
        i = code.find(tgt, start)
        if i < 0 or i % 4:
            if i < 0:
                break
            start = i + 1
            continue
        hits.append(i)
        start = i + 4
    print(f"{len(hits)} word-aligned literal refs to 0x{a.target:08x}")
    for i in hits[:a.max]:
        va = BASE + i
        # disassemble a window of ARM instrs ending just before the literal
        win = a.ctx * 4
        s = max(0, i - win)
        print(f"\n--- literal @ {va:08x} (pool); context above: ---")
        for ins in md.disasm(code[s:i], BASE + s):
            mark = ""
            if ins.mnemonic.startswith("ldr") and f"#" in ins.op_str:
                mark = "   <-- possible pool load"
            print(f"  {ins.address:08x}  {ins.mnemonic:8} {ins.op_str}{mark}")


if __name__ == "__main__":
    main()
