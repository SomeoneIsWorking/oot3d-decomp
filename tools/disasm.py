#!/usr/bin/env python3
"""disasm.py — disassemble a virtual-address range of the extracted OoT3D code image.

code.bin (from extract_code.py) is the in-memory code image; byte offset = vaddr - 0x00100000.
Defaults to ARM; pass --thumb for Thumb. Useful for inspecting a function found by xref/scan.

  disasm.py 0x00100028 0x40                  # 0x40 bytes of ARM at that VA
  disasm.py 0x00377d88 0x200 --thumb
"""
import argparse, capstone

BASE = 0x00100000


def load(path="build/code.bin"):
    return open(path, "rb").read()


def disasm(code, va, length, thumb=False, base=BASE):
    mode = capstone.CS_MODE_THUMB if thumb else capstone.CS_MODE_ARM
    md = capstone.Cs(capstone.CS_ARCH_ARM, mode)
    off = va - base
    out = []
    for ins in md.disasm(code[off:off + length], va):
        out.append((ins.address, ins.mnemonic, ins.op_str, ins.bytes.hex()))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("va", type=lambda s: int(s, 0))
    ap.add_argument("length", type=lambda s: int(s, 0), nargs="?", default=0x40)
    ap.add_argument("--thumb", action="store_true")
    ap.add_argument("--bin", default="build/code.bin")
    a = ap.parse_args()
    for addr, mn, ops, hx in disasm(load(a.bin), a.va, a.length, a.thumb):
        print(f"{addr:08x}  {hx:<8}  {mn:8} {ops}")


if __name__ == "__main__":
    main()
