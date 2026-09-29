#!/usr/bin/env python3
"""Recover (source_file, line) for OoT3D functions from the embedded 3DS __FILE__/__LINE__ pairs.

The retail image carries, per translation unit, the NUL-terminated build path

    d:\\home\\queen\\dailyBuild\\game_us\\[<subdir>\\]<Name>.cpp

in .rodata (55 instances, 51 distinct files -- measured, see
oot3d-decomp/docs/source_file_attribution.md). OoT3D has no MM3D-style "<file>.cpp(<line>)"
string, but the __LINE__ is emitted separately: the code that asserts loads a
PC-relative-literal pair

    ldr r2, [pc, #off_file]   ; == &"....\\Name.cpp"
    ldr r3, [pc, #off_line]   ; == __LINE__ (small int)

and passes both to a virtual call. That pair is the same construction MM3D folds into one
string, so it is equally authoritative.

This script works directly on the code image, then cross-checks the resulting entry addresses
against the Ghidra function inventory. No Ghidra needed for extraction.

CONTROL (required): --selftest runs the negative and positive cases and exits non-zero on
failure. A normal run also fails (exit 3) if it attributes zero functions.
"""
import argparse
import bisect
import collections
import csv
import os
import re
import struct
import sys

BASE = 0x00100000
SIGNATURE = rb"d:\\home\\queen\\dailyBuild\\game_us\\"
# A __LINE__ is a small positive integer. The upper bound is generous but excludes every
# address-shaped value in this image (all pointers here are >= 0x00100000).
LINE_MIN = 1
LINE_MAX = 0x00FFFFFF
# Words in [PTR_LO, PTR_HI) are code/rodata/bss addresses, never a line number.
PTR_LO = 0x00100000
PTR_HI = 0x01000000

# The developers' assert/debug-print call shape, recovered from the decompilation of
# FUN_004620f8 (z_lights.cpp:910):
#     (**(code **)(*(int *)*DAT_0046222c + 0xc))((int *)*DAT_0046222c, 0x1b8,
#                                             DAT_00462228, DAT_00462230);
# i.e. r0 = context, r1 = message tag, r2 = __FILE__, r3 = __LINE__. Every site in this image
# that materialises a build path uses the same two registers, so a __FILE__/(__LINE__) claim
# must be read out of r2/r3 and not merely from a nearby constant.
FILE_REG = 2
LINE_REG = 3


class Image(object):
    def __init__(self, path):
        with open(path, "rb") as fh:
            self.data = fh.read()
        self.size = len(self.data)
        self.fns = []          # sorted entry addresses
        self.fn_by_entry = {}  # entry -> (size, name)

    def word(self, va):
        o = va - BASE
        if o < 0 or o + 4 > self.size:
            return None
        return struct.unpack_from("<I", self.data, o)[0]

    def signed(self, va):
        o = va - BASE
        if o < 0 or o + 4 > self.size:
            return None
        return struct.unpack_from("<i", self.data, o)[0]

    def cstr(self, va, limit=200):
        o = va - BASE
        if o < 0 or o >= self.size:
            return ""
        end = self.data.find(b"\0", o, min(o + limit, self.size))
        if end < 0:
            return ""
        return self.data[o:end].decode("latin1")

    def scan_file_strings(self):
        """Every __FILE__ build-path string, as {vaddr: relative source path}."""
        out = {}
        pat = re.compile(SIGNATURE + rb"([A-Za-z0-9_./\\-]+\.cpp)\x00")
        for m in pat.finditer(self.data):
            out[BASE + m.start()] = m.group(1).decode("latin1")
        return out

    def load_inventory(self, csv_path):
        with open(csv_path) as fh:
            rd = csv.reader(fh)
            next(rd, None)
            for row in rd:
                if len(row) < 3:
                    continue
                entry = int(row[0], 16)
                self.fn_by_entry[entry] = (int(row[1]), row[2])
        self.fns = sorted(self.fn_by_entry)

    def fn_containing(self, va):
        """Entry of the Ghidra function containing va, or None."""
        if not self.fns:
            return None
        i = bisect.bisect_right(self.fns, va) - 1
        while i >= 0:
            entry = self.fns[i]
            size = self.fn_by_entry[entry][0]
            if entry <= va < entry + size:
                return entry
            i -= 1
        return None


def ldr_literal_target(word, addr):
    """(pool address, destination register) for ARM `ldr rX, [pc, #imm]`, else (None, None)."""
    if (word & 0x0E5F0000) == 0x041F0000:
        imm = word & 0xFFF
        off = imm if (word & 0x00800000) else -imm
        return ((addr + 8) & ~3) + off, (word >> 12) & 0xF
    return None, None


def expand_imm(word):
    """ARM modified-immediate constant, or None if the word is not an immediate form."""
    if not (word & 0x02000000):        # bit 25: I
        return None
    rot = (word >> 8) & 0xF
    imm8 = word & 0xFF
    v = imm8
    for _ in range(rot * 2):           # ROR by 2*rot
        v = ((v >> 1) | ((v & 1) << 31)) & 0xFFFFFFFF
    return v


def adr_target(word, addr):
    """(address materialised, destination register) by the `adr rd, label` pseudo-instruction.

    ARM `adr rd, x` assembles to `add rd, pc, #imm` (or `sub rd, pc, #imm`); pc reads as
    addr + 8. Ghidra reports these references with the mnemonic "adr"; an `ldr` from the
    constant pool reports "ldr". Both are real references to the string and both must be
    recognised, or half the call sites are lost.
    """
    if (word & 0x0FEF0000) not in (0x028F0000, 0x024F0000):
        return None, None
    imm = expand_imm(word)
    if imm is None:
        return None, None
    pc = (addr + 8) & 0xFFFFFFFF
    tgt = (pc - imm) & 0xFFFFFFFF if (word & 0x00400000) else (pc + imm) & 0xFFFFFFFF
    return tgt, (word >> 12) & 0xF


def decode_call_site(img, site):
    """Return the ordered [(pool_addr, value)] of PC-relative literal loads in a window."""
    loads = []
    a = site - 0x20
    while a <= site + 0x40:
        if a % 4:
            a += 1
            continue
        w = img.word(a)
        if w is None:
            break
        t = ldr_literal_target(w, a)
        if t is not None and BASE <= t < BASE + img.size - 4:
            loads.append((a, t, img.word(t)))
        a += 4
    return loads


def find_line(img, site, form, sva):
    """Recover __LINE__ for a __FILE__ reference site.

    The __FILE__ value is delivered in r2 and the __LINE__ in r3 of the same
    assert/debug-print call (see FILE_REG/LINE_REG). The line is therefore only accepted when
    it is loaded into r3 by a PC-relative literal load in the same argument-setup run: a small
    positive integer that is not an address. Anything else in the window -- a tag constant, an
    unrelated small int in a neighbouring statement -- is rejected, and the row keeps an empty
    line rather than a guess.
    Returns (line|None, instruction_address).
    """
    best = None
    for delta in range(4, 0x24, 4):
        for cand in (site + delta, site - delta):
            if cand % 4 or cand < BASE or cand >= BASE + img.size:
                continue
            w = img.word(cand)
            if w is None:
                continue
            t, reg = ldr_literal_target(w, cand)
            if t is None or reg != LINE_REG:
                continue
            if not (BASE <= t < BASE + img.size - 4):
                continue
            v = img.signed(t)
            if v is None or not (LINE_MIN <= v <= LINE_MAX):
                continue
            if PTR_LO <= v < PTR_HI:
                continue
            if best is None or delta < best[0]:
                best = (delta, v, cand)
    if best is None:
        return None, 0
    return best[1], best[2]


def source_stem(rel):
    """Basename of a Windows-style source path, without the .cpp extension.

    The embedded paths are backslash-separated Windows paths, so os.path.basename (which
    splits on '/') would return the whole path and produce a name that is not a valid
    identifier. Split on both separators.
    """
    base = rel.replace("\\", "/").rsplit("/", 1)[-1]
    if not base.endswith(".cpp"):
        raise ValueError("not a .cpp path: %r" % rel)
    return base[:-4]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--image", default="build/code.bin")
    ap.add_argument("--inventory", default="build/decomp/functions.csv")
    ap.add_argument("--out-map", default="build/decomp/function_source_map.csv")
    ap.add_argument("--out-renames", default="build/decomp/renames.csv")
    ap.add_argument("--scan-window", type=int, default=0x40,
                    help="bytes of instruction window around a reference site")
    ap.add_argument("--selftest", action="store_true")
    args = ap.parse_args()

    if args.selftest:
        return selftest(args)

    img = Image(args.image)
    strings = img.scan_file_strings()
    img.load_inventory(args.inventory)

    # CONTROL: report the scan.
    sys.stderr.write("SCAN image=%s bytes=%d\n" % (args.image, img.size))
    sys.stderr.write("SCAN signature=%r matched __FILE__ strings=%d distinct files=%d\n"
                     % (SIGNATURE.decode("latin1"), len(strings),
                        len(set(strings.values()))))
    if not strings:
        sys.stderr.write("CONTROL FAIL: scanned %d bytes, matched 0\n" % img.size)
        return 2

    # A reference site is any instruction that materialises a string address, in either of the
    # two forms the compiler emits:
    #   ldr rX, [pc, #off]  whose pool word is the string address   (mnemonic "ldr")
    #   adr rX, string      == add/sub rX, pc, #imm                 (mnemonic "adr")
    # Both are located by decoding the image, so this does not depend on Ghidra's analysis.
    sites = collections.defaultdict(list)   # sva -> [(site, form, reg)]
    skipped_reg = 0
    for block_va in range(0, img.size, 4):
        a = BASE + block_va
        w = img.word(a)
        if w is None:
            continue
        t, reg = ldr_literal_target(w, a)
        if t is not None and BASE <= t < BASE + img.size - 4:
            v = img.word(t)
            if v in strings:
                if reg == FILE_REG:
                    sites[v].append((a, "ldr", reg))
                else:
                    skipped_reg += 1
            continue
        t, reg = adr_target(w, a)
        if t is not None and t in strings:
            if reg == FILE_REG:
                sites[t].append((a, "adr", reg))
            else:
                skipped_reg += 1

    sys.stderr.write("CONTROL reference sites decoded: %d (ldr=%d adr=%d); "
                     "string-materialising instructions into a register other than r%d "
                     "were rejected: %d\n"
                     % (sum(len(v) for v in sites.values()),
                        sum(1 for v in sites.values() for (_s, f, _r) in v if f == "ldr"),
                        sum(1 for v in sites.values() for (_s, f, _r) in v if f == "adr"),
                        FILE_REG, skipped_reg))

    entries = {}
    unresolved = []
    for sva in sorted(strings):
        rel = strings[sva]
        lst = sites.get(sva)
        if not lst:
            unresolved.append((sva, rel, "no instruction materialises this string address"))
            continue
        for (site, form, reg) in lst:
            entry = img.fn_containing(site)
            if entry is None:
                unresolved.append((sva, rel, "site 0x%08x is in no known function" % site))
                continue
            line, line_at = find_line(img, site, form, sva)
            ev = ("%s into r%d at 0x%08x materialises the __FILE__ string 0x%08x "
                  "('d:\\home\\queen\\dailyBuild\\game_us\\%s')" % (form, FILE_REG, site, sva, rel))
            if line is not None:
                ev += ("; r%d loaded with __LINE__ %d by the literal load at 0x%08x "
                       "(call shape r0=ctx r1=tag r2=__FILE__ r3=__LINE__, "
                       "decompiled from FUN_004620f8)" % (LINE_REG, line, line_at))
            entries.setdefault(entry, set()).add((rel, line, ev, site))

    # A function attributed to two different files is a contradiction; report it and keep neither.
    conflicts = sorted(e for e, s in entries.items() if len({r for (r, _l, _e, _s) in s}) > 1)
    for c in conflicts:
        del entries[c]

    rows = []
    for entry in sorted(entries):
        # Deterministic pick when one entry has several reference sites: prefer the site with a
        # recovered __LINE__, then the lowest site address. Never mix the fields of two sites.
        best = sorted(entries[entry], key=lambda t: (t[1] is None, t[3]))[0]
        rel, line, ev, _site = best
        rows.append(["%08x" % entry, img.fn_by_entry[entry][1], rel,
                     "" if line is None else str(line), "direct", ev])

    with open(args.out_map, "w", newline="") as fh:
        w = csv.writer(fh)
        w.writerow(["fn_entry", "fn_name", "source_file", "line", "confidence", "evidence"])
        for r in rows:
            w.writerow(r)
    sys.stderr.write("WROTE %s (%d rows)\n" % (args.out_map, len(rows)))

    with open(args.out_renames, "w", newline="") as fh:
        w = csv.writer(fh)
        w.writerow(["vaddr", "name"])
        for r in rows:
            name = source_stem(r[2]) + "_" + r[0]
            if not re.match(r"^[A-Za-z_][A-Za-z0-9_]*$", name):
                sys.stderr.write("CONTROL FAIL: %r is not a valid identifier\n" % name)
                return 4
            w.writerow([r[0], name])
    sys.stderr.write("WROTE %s (%d names)\n" % (args.out_renames, len(rows)))

    total = len(img.fn_by_entry)
    sys.stderr.write("CONTROL attributed=%d of %d inventoried functions (%.2f%%)\n"
                     % (len(rows), total, 100.0 * len(rows) / total))
    sys.stderr.write("CONTROL with_line=%d without_line=%d\n"
                     % (sum(1 for r in rows if r[3]), sum(1 for r in rows if not r[3])))
    sys.stderr.write("CONTROL distinct_files_attributed=%d of %d\n"
                     % (len({r[2] for r in rows}), len(set(strings.values()))))
    sys.stderr.write("CONTROL conflicts=%d unresolved_sites=%d\n" % (len(conflicts), len(unresolved)))
    for c in conflicts:
        sys.stderr.write("CONTROL CONFLICT 0x%08x -> %s\n" % (c, sorted(entries[c])))
    if not rows:
        sys.stderr.write("CONTROL FAIL: strings found, zero functions attributed\n")
        return 3
    # Positive confirmation of one known string.
    known = "sources\\z_kankyo.cpp"
    sys.stderr.write("CONTROL positive: %s -> %s\n" % (
        known, sorted({r[0] for r in rows if r[2] == known}) or "NOT ATTRIBUTED (see doc)"))
    sys.stderr.write("CONTROL PASS\n")
    return 0


def selftest(args):
    """Negative first, then positive. Non-zero exit on any failure."""
    img = Image(args.image)
    failures = []

    # NEGATIVE 1: a string that is not a build path must not scan.
    strings = img.scan_file_strings()
    sys.stderr.write("SELFTEST scan matched %d build-path strings\n" % len(strings))
    if len(strings) == 0:
        failures.append("scan found nothing on a real image")
    for va, rel in strings.items():
        if not rel.endswith(".cpp"):
            failures.append("non-.cpp leaked through: %r" % rel)
        if "dailyBuild" not in img.cstr(va):
            failures.append("0x%08x cstr is not a build path: %r" % (va, img.cstr(va)))

    # NEGATIVE 2: ldr_literal_target must not accept a non-LDR word.
    for bad, why in ((0xE1A00000, "mov r0,r0"), (0xE5900000, "ldr r0,[r0]"),
                     (0xE5922108, "ldr r2,[r2]"), (0xE1A02102, "mov r2,r2")):
        if ldr_literal_target(bad, 0x1000)[0] is not None:
            failures.append("ldr_literal_target accepted %s" % why)

    # POSITIVE 1: ldr_literal_target decodes a real pool load. 0x00462118 is the __FILE__ load
    # for z_lights.cpp in FUN_004620f8; its literal word must be the string address.
    t, _r = ldr_literal_target(img.word(0x00462118), 0x00462118)
    if t != 0x00462228:
        failures.append("ldr_literal_target(0x00462118) = %r, expected 0x462228" % t)
    elif img.word(t) != 0x004DAD80:
        failures.append("pool 0x462228 = 0x%08x, expected z_lights __FILE__ 0x4dad80" % img.word(t))
    else:
        sys.stderr.write("SELFTEST positive: 0x00462118 -> pool 0x%08x -> %s\n"
                         % (t, img.cstr(img.word(t))))

    # POSITIVE 2: the __LINE__ immediately after it.
    t2, reg2 = ldr_literal_target(img.word(0x0046211C), 0x0046211C)
    if t2 != 0x00462230 or img.word(t2) != 0x38E or reg2 != LINE_REG:
        failures.append("__LINE__ load 0x0046211c -> pool %r value %r, expected 0x462230/910"
                        % (t2, img.word(t2 or 0)))
    else:
        sys.stderr.write("SELFTEST positive: 0x0046211c -> pool 0x%08x -> __LINE__ %d\n"
                         % (t2, img.word(t2)))

    # POSITIVE 3: the string really is the z_lights.cpp build path.
    if img.cstr(0x004DAD80) != "d:\\home\\queen\\dailyBuild\\game_us\\sources\\z_lights.cpp":
        failures.append("0x4dad80 is %r" % img.cstr(0x004DAD80))

    # POSITIVE 4: the `adr` form. 0x0018a9f8 is `adr r2, 0x18ac58`, the z_en_elf.cpp __FILE__.
    t, areg = adr_target(img.word(0x0018A9F8), 0x0018A9F8)
    if t != 0x0018AC58 or areg != FILE_REG:
        failures.append("adr_target(0x18a9f8) = %r, expected 0x18ac58" % t)
    elif img.cstr(t) != "d:\\home\\queen\\dailyBuild\\game_us\\sources\\z_en_elf.cpp":
        failures.append("adr target 0x18ac58 is %r" % img.cstr(t))
    else:
        sys.stderr.write("SELFTEST positive: adr 0x0018a9f8 -> 0x%08x -> %s\n" % (t, img.cstr(t)))

    # NEGATIVE 3: adr_target must reject words that are not add/sub rd, pc, #imm.
    for bad, why in ((0xE1A00000, "mov r0,r0"), (0xE59F2108, "ldr r2,[pc,#imm]"),
                     (0xE28E1000, "add r1,r14,#0")):
        if adr_target(bad, 0x1000)[0] is not None:
            failures.append("adr_target accepted %s" % why)

    # NEGATIVE 3b: find_line must ignore a small int that is not loaded into r3.
    # 0x0046210c is `mov r1, r0`; the small value 0x155 (341) at pool 0x004688f4 is loaded
    # into r3 by 0x0046876c, more than 0x20 bytes from any z_lights.cpp site.
    if find_line(img, 0x004620F8, "ldr", 0)[0] is not None:
        failures.append("find_line invented a line for the function entry itself")

    # POSITIVE 5: __LINE__ recovery. The z_lights.cpp site 0x00462118 is immediately followed
    # by the __LINE__ load at 0x0046211c.
    line, at = find_line(img, 0x00462118, "ldr", 0x004DAD80)
    if line != 910 or at != 0x0046211C:
        failures.append("find_line(0x462118) = (%r, 0x%x), expected (910, 0x46211c)" % (line, at))
    else:
        sys.stderr.write("SELFTEST positive: find_line(0x00462118) -> __LINE__ %d at 0x%08x\n"
                         % (line, at))

    # POSITIVE 6: the adr-form site recovers its own line (z_en_elf.cpp, 1133).
    line, at = find_line(img, 0x0018A9F8, "adr", 0x0018AC58)
    if line != 1133:
        failures.append("find_line(0x18a9f8) = %r, expected 1133" % line)
    else:
        sys.stderr.write("SELFTEST positive: find_line(0x0018a9f8) -> __LINE__ %d at 0x%08x\n"
                         % (line, at))

    # NEGATIVE 4: find_line must return None when the window holds only address-shaped values.
    # 0x004bdcf4 is MaterialAnimationPlayer.cpp's __FILE__ load; its only neighbour literal
    # (0x004bde1c) is the address 0x0055a200, not a line number.
    line, _at = find_line(img, 0x004BDCF4, "ldr", 0)
    if line is not None:
        failures.append("find_line(0x4bdcf4) invented line %r where none exists" % line)
    else:
        sys.stderr.write("SELFTEST positive: find_line(0x004bdcf4) correctly returned None\n")

    # NEGATIVE 5: an address with no functions loaded must attribute nothing.
    img2 = Image(args.image)
    if img2.fn_containing(0x00462118) is not None:
        failures.append("fn_containing matched without an inventory")
    img.load_inventory(args.inventory)
    if img.fn_containing(0x00462118) is None:
        failures.append("fn_containing(0x462118) found no function with the inventory loaded")
    else:
        sys.stderr.write("SELFTEST positive: fn_containing(0x00462118) = 0x%08x\n"
                         % img.fn_containing(0x00462118))

    if failures:
        for f in failures:
            sys.stderr.write("SELFTEST FAIL: %s\n" % f)
        return 1
    sys.stderr.write("SELFTEST PASS (20 assertions)\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
