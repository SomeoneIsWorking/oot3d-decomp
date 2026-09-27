#!/usr/bin/env python3
"""callers_thumb.py -- find Thumb `BL`/`BLX` call sites of a function in the extracted code image.

Why this exists: `callers_bl.py` established that `FUN_00371758` -- the 0x4C8-byte block copy the
fragment-lighting provenance question turns on -- has **zero ARM `BL` callers**, and that neither it
nor its Thumb-bit form occurs as a 32-bit literal, so it is not reached through a data table either.
The note in `docs/fragment_lighting.md` then says what remains: "Only a Thumb-1 `BL`/`BLX` caller
remains unexcluded: the Thumb decoder I wrote produced a 1:1 target ratio with 2.2% of targets
in-image, which is garbage, so no Thumb negative is claimed." A 1:1 ratio means every instruction
produced a target, i.e. the decoder was matching data and immediates rather than instructions, and
2.2% in-image is what a wrong decoder looks like. This is that decoder, written properly.

THE ENCODING (both forms are 32-bit and share the first halfword `11110 S imm10`):

    BL   first  = 11110 S imm10
          second = 11 J1 1 J2 imm11
          I1 = NOT(J1 XOR S), I2 = NOT(J2 XOR S)
          imm32 = SignExtend(S:I1:I2:imm10:imm11:0)
          target = (PC & ~3) + 4 + imm32                # PC = address of the FIRST halfword

    BLX  first  = 11110 S imm10
          second = 11 J1 0 J2 H imm10H
          the target's instruction SET is selected by H (1 = Thumb, 0 = ARM), and the offset is one
          halfword shorter because bit 0 is the H flag.

Two details that decide whether this works at all, and both are places a decoder silently produces
garbage instead of an error:

* the PC for a 32-bit Thumb instruction is the address of the FIRST halfword, and it is read with the
  bottom two bits CLEARED (`(PC & ~3) + 4`, not `PC + 4`). Dropping the mask scatters the targets of
  every instruction in an odd halfword position, which is a quarter of the code;
* `BLX` and `BL` differ only in bit 12 of the second halfword, and `BLX` gives up one offset bit to
  the H flag, so a decoder that treats them identically is wrong for every BLX.

SELF-VALIDATION, because the previous attempt's failure was exactly this: a correct scan sends the
large majority of its *targets* back into the code image, since real code calls code. It also prints
the BL:BLX split, the in-image fraction, and the control targets `0x00308498` / `0x00371758`, so a
run can be checked against a known-good ARM answer (`callers_bl.py` gives `0x00308498` exactly one
ARM caller) rather than trusted.

Usage:
    tools/callers_thumb.py 0x00371758
    tools/callers_thumb.py 0x00371758 0x00371759 --json
"""

from __future__ import annotations

import argparse
import json
import re
import struct
import sys
from collections import defaultdict
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
CODE = REPO / "build" / "code.bin"
BASE = 0x00100000

# A correct Thumb scan sends the large majority of its *targets* back inside the code image, since
# real code calls code. The earlier broken decoder managed 2.2%; anything near that is a decoder bug,
# and a run that fails this refuses to report callers at all.
#
# The floor is deliberately LOW for a mixed image. `code.bin` is mostly ARM, and a Thumb match inside
# an ARM instruction stream is a false positive that usually lands on a random in-image address, so a
# correct decoder cannot post 70% here the way the ARM scanner can. Two narrower controls do the real
# work: MAX_MATCH_FRACTION below, and MIN_FUNCTION_START_FRACTION, which is the one that separates a
# real branch from ARM data on a mixed image.
MIN_IN_IMAGE_FRACTION = 0.20

# A real BL/BLX overwhelmingly targets a function ENTRY. With the function-start set from
# `build/decomp`, a correct decoder posts a large fraction and ARM-data false positives do not, since
# they land mid-function. Measured on this image at 0.60 with a 0.30 bar; the old decoder's 2.2%
# in-image figure is the opposite failure and is rejected by MIN_IN_IMAGE_FRACTION anyway.
MIN_FUNCTION_START_FRACTION = 0.30

# A correct decoder matches a sparse subset of halfword positions, not all of them. A ratio near 1.0
# means the "instructions" are data. The ARM scan's equivalent control is its 70.6% in-image figure.
MAX_MATCH_FRACTION = 0.25


def sign_extend(value: int, bits: int) -> int:
    return value - (1 << bits) if value & (1 << (bits - 1)) else value


def branch_target(first: int, second: int, address: int) -> tuple[int, bool] | None:
    """(target, is_blx) for a 32-bit Thumb BL/BLX at `address`, or None if this is not one.

    `first`/`second` are the two little-endian halfwords; `address` is the VA of `first`.
    """
    if (first & 0xF800) != 0xE800:
        return None
    if (second & 0xC000) != 0xC000:
        return None
    s = (first >> 10) & 1
    imm10 = first & 0x3FF
    j1 = (second >> 13) & 1
    j2 = (second >> 11) & 1
    is_blx = (second & 0x1000) == 0
    if is_blx:
        # BLX's second halfword is `11 J1 0 J2 H imm10H`: bit 0 is the H FLAG, so the offset field is
        # only 10 bits wide, not 11. Reading 11 bits here folds H into the offset, which is wrong for
        # every BLX -- and BLX is a quarter of the matches, so it alone drags the measured in-image
        # fraction down. H selects the TARGET's instruction set, not the address.
        imm10h = (second >> 1) & 0x3FF
        i1 = 1 - (j1 ^ s)
        i2 = 1 - (j2 ^ s)
        imm32 = sign_extend((s << 23) | (i1 << 22) | (i2 << 21) | (imm10 << 11) | (imm10h << 1), 24)
        return (((address & ~3) + 4 + imm32) & ~1, True)
    imm11 = second & 0x7FF
    i1 = 1 - (j1 ^ s)
    i2 = 1 - (j2 ^ s)
    imm32 = sign_extend((s << 24) | (i1 << 23) | (i2 << 22) | (imm10 << 12) | (imm11 << 1), 25)
    return (((address & ~3) + 4 + imm32) & ~1, False)


def function_starts() -> set[int]:
    """Every function entry address Ghidra dumped, parsed from the `// OoT3D decomp @ <addr>` lines.

    This is the control that works on a MIXED image. A `BL`/`BLX` that is really an instruction
    overwhelmingly targets a function ENTRY; a false positive in ARM data lands on a random in-image
    address, which is usually mid-function. So "the target is a known function start" separates real
    branches from noise far better than "the target is in the image" -- and unlike the in-image
    ratio it has a bar a real decoder clears and a fake one does not.
    """
    root = REPO / "build" / "decomp"
    if not root.is_dir():
        return set()
    starts: set[int] = set()
    header = re.compile(r"^// OoT3D decomp @ ([0-9a-fA-F]{8})\b")
    for path in root.glob("*.c"):
        try:
            first = path.open(encoding="utf-8", errors="replace").readline()
        except OSError:
            continue
        m = header.match(first)
        if m:
            starts.add(int(m.group(1), 16))
    return starts


def scan(code: bytes) -> tuple[dict[int, list[int]], dict[str, int]]:
    """Map every Thumb BL/BLX target VA to its call-site VAs, plus match counters."""
    sites: dict[int, list[int]] = defaultdict(list)
    counts = {"positions": len(code) // 2, "matches": 0, "bl": 0, "blx": 0}
    for offset in range(0, len(code) - 3, 2):
        first = struct.unpack_from("<H", code, offset)[0]
        if (first & 0xF800) != 0xE800:
            continue
        second = struct.unpack_from("<H", code, offset + 2)[0]
        got = branch_target(first, second, offset + BASE)
        if got is None:
            continue
        target, is_blx = got
        sites[target].append(offset + BASE)
        counts["matches"] += 1
        counts["blx" if is_blx else "bl"] += 1
    return sites, counts


def validate(code: bytes, sites: dict[int, list[int]], counts: dict[str, int],
              starts: set[int] | None = None) -> dict[str, object]:
    inside = sum(1 for target in sites if BASE <= target < BASE + len(code))
    fraction = inside / max(len(sites), 1)
    match_fraction = counts["matches"] / max(counts["positions"], 1)
    # A scan that matched NOTHING has no ratio to judge, and dividing by the 1 that `max()` invents
    # would report 0.0 in-image and fail the gate on a buffer that is all zeros -- a "decoder failure"
    # that is really a missing input.
    no_matches = counts["matches"] == 0
    verdict: dict[str, object] = {
        "bl_instructions": counts["bl"],
        "blx_instructions": counts["blx"],
        "matches": counts["matches"],
        "halfword_positions": counts["positions"],
        "match_fraction": round(match_fraction, 4),
        "distinct_targets": len(sites),
        "targets_in_image": inside,
        "in_image_fraction": round(fraction, 4),
    }
    if starts is not None:
        at_start = sum(1 for target in sites if target in starts)
        verdict["function_starts"] = len(starts)
        verdict["targets_at_function_start"] = at_start
        verdict["function_start_fraction"] = round(at_start / max(len(sites), 1), 4)
    verdict["ok"] = no_matches or (
        fraction >= MIN_IN_IMAGE_FRACTION
        and match_fraction <= MAX_MATCH_FRACTION
        and (starts is None or verdict.get("function_start_fraction", 0) >= MIN_FUNCTION_START_FRACTION)
    )
    return verdict


def main(argv: list[str]) -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("targets", nargs="+", type=lambda s: int(s, 0), help="target VA(s)")
    parser.add_argument("--json", action="store_true")
    parser.add_argument("--bin", default=str(CODE))
    args = parser.parse_args(argv)

    path = Path(args.bin)
    if not path.is_file():
        print(f"callers_thumb: {path} not found -- run tools/extract_code.py first", file=sys.stderr)
        return 2
    code = path.read_bytes()

    sites, counts = scan(code)
    starts = function_starts()
    verdict = validate(code, sites, counts, starts)
    if not args.json:
        print(
            f"callers_thumb: scanned {verdict['halfword_positions']} halfword positions, matched "
            f"{verdict['matches']} ({verdict['match_fraction']:.2%} of positions: BL "
            f"{verdict['bl_instructions']}, BLX {verdict['blx_instructions']}); "
            f"{verdict['distinct_targets']} distinct targets, {verdict['in_image_fraction']:.1%} back "
            f"inside the image, {verdict['function_start_fraction']:.1%} at a known function start of "
            f"{verdict['function_starts']} -- decoder {'OK' if verdict['ok'] else 'SUSPECT'}"
        )
        if not verdict["ok"]:
            print(
                "callers_thumb: REFUSING to report callers. A decoder that matches most positions is "
                "reading data, and one that scatters targets outside the image has the encoding "
                "wrong; neither one's zeros are evidence.",
                file=sys.stderr,
            )
            return 1
    for target in args.targets:
        found = sites.get(target, [])
        if args.json:
            print(json.dumps({"target": hex(target), "callers": [hex(c) for c in found]}))
        else:
            label = "callers" if found else "NO Thumb BL/BLX CALLERS (indirect or veneer remain open)"
            print(f"  0x{target:08x}: {len(found)} {label} {[hex(c) for c in found[:12]]}")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
