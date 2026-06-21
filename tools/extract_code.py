#!/usr/bin/env python3
"""extract_code.py — pull the executable .code out of a decrypted OoT3D .3ds and
decompress it to a flat, load-address-correct binary for static disassembly.

The 3DS NCCH ExeFS holds a ".code" file. When the exheader SCI "compress code"
flag is set (it is, for OoT3D USA), ".code" is packed with Nintendo's *backward*
LZSS ("BLZ" — same family as DS overlays). We unpack it here.

Output: code.bin = the full code image (text+rodata+data) as it sits in memory,
whose first byte maps to the .text load address (0x00100000 for OoT3D). That makes
`objdump -b binary --adjust-vma=0x00100000` / capstone give correct VAs.

Verify against ground truth (the running Azahar oracle):
    extract_code.py <rom.3ds> code.bin
    extract_code.py --verify <rom.3ds>   # compares .text head to live RAM @0x00100000

No crypto here — decrypted dumps only (same constraint as ctr_romfs.py).
"""
import argparse, os, struct, sys

# reuse the soh3d NCCH/ExeFS parser (locates exefs/exheader offsets).
SOH3D_TOOLS = os.path.expanduser("<engine>/tools")
sys.path.insert(0, SOH3D_TOOLS)
import ctr_romfs as C


def u32(b, o):
    return struct.unpack_from("<I", b, o)[0]


def blz_decompress(data: bytes) -> bytes:
    """Nintendo backward-LZSS (BLZ) used for 3DS ExeFS .code. Port of CUE's BLZ_Decode.

    Layout: [maybe-raw prefix][encoded region][8-byte footer]. The footer (last 8B):
      u24 enc_len   = size of the compressed region (low 24 bits of u32 @ end-8)
      u8  hdr_len   = bytes of footer to skip (@ end-5)
      u32 inc_len   = extra length to add for the decompressed size (@ end-4)
    Decoding runs from the end backward. flag bit set => (len,disp) backref; clear => literal.
    """
    pak_len = len(data)
    inc_len = u32(data, pak_len - 4)
    if inc_len == 0:
        # not actually compressed; strip footer and return
        enc_len = u32(data, pak_len - 8)
        return bytes(data[: pak_len - enc_len])
    hdr_len = data[pak_len - 5]
    enc_len = u32(data, pak_len - 8) & 0x00FFFFFF
    dec_len = pak_len + inc_len

    buf = bytearray(data) + bytearray(inc_len)  # grow to final size
    raw_len = pak_len - enc_len                  # bytes copied verbatim at the front
    pak = raw_len + enc_len - hdr_len            # read cursor (within encoded region)
    out = dec_len                                 # write cursor (decompressed end)
    raw_end = raw_len                             # stop when output cursor reaches the raw prefix

    mask = 0
    flags = 0
    while out > raw_end:
        mask >>= 1
        if mask == 0:
            pak -= 1
            flags = buf[pak]
            mask = 0x80
        if flags & mask:
            pak -= 1
            b1 = buf[pak]
            pak -= 1
            b2 = buf[pak]
            length = (b1 >> 4) + 3
            disp = (((b1 & 0x0F) << 8) | b2) + 3
            for _ in range(length):
                out -= 1
                buf[out] = buf[out + disp]
        else:
            pak -= 1
            out -= 1
            buf[out] = buf[pak]
    return bytes(buf[:dec_len])


def get_code(rom_path: str):
    rom = C.CtrRom(rom_path)
    f = rom.fp
    # exheader -> .text load address
    f.seek(rom.ncch_off + 0x200)
    exh = f.read(0x400)
    text_addr = u32(exh, 0x10)
    sci_flag = exh[0x0D]
    # ExeFS header: 10 entries of {name[8], off u32, size u32}; data starts at exefs_off+0x200
    f.seek(rom.exefs_off)
    ex = f.read(0x200)
    code_off = code_size = None
    for i in range(10):
        nm = ex[i * 16:i * 16 + 8].split(b"\x00")[0].decode("latin1")
        if nm == ".code":
            code_off = u32(ex, i * 16 + 8)
            code_size = u32(ex, i * 16 + 12)
            break
    if code_off is None:
        raise SystemExit(".code not found in ExeFS")
    f.seek(rom.exefs_off + 0x200 + code_off)
    raw = f.read(code_size)
    if sci_flag & 1:
        code = blz_decompress(raw)
    else:
        code = raw
    return code, text_addr, exh


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("rom")
    ap.add_argument("out", nargs="?", default=None)
    ap.add_argument("--verify", action="store_true",
                    help="compare decompressed .text head to live Azahar RAM @ load addr")
    a = ap.parse_args()
    code, text_addr, exh = get_code(a.rom)
    text_size = u32(exh, 0x18)
    print(f".text load addr 0x{text_addr:08x}  decompressed code 0x{len(code):x} bytes  (.text size 0x{text_size:x})")
    if a.out:
        with open(a.out, "wb") as o:
            o.write(code)
        print(f"wrote {a.out}")
    if a.verify:
        sys.path.insert(0, SOH3D_TOOLS)
        import azahar_rpc as A
        r = A.Rpc()
        for pid, tid, _ in r.processes():
            if tid == 0x0004000000033500:
                r.select(pid)
        live = r.read(text_addr, 256)
        mine = code[:256]
        same = sum(1 for x, y in zip(live, mine) if x == y)
        print(f"verify @0x{text_addr:08x}: {same}/256 bytes match live RAM")
        if same < 256:
            print("  live :", live[:32].hex())
            print("  mine :", mine[:32].hex())


if __name__ == "__main__":
    main()
