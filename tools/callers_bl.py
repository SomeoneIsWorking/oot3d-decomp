#!/usr/bin/env python3
"""callers_bl.py -- find ARM `BL` call sites of a function in the extracted OoT3D code image.

The decomp tree does not cross-reference: `build/decomp/*.c` are per-function Ghidra dumps with no
call edges, so `tools/codequery.py callers` finds nothing there. This walks the code image's
`BL` instructions instead, which is exact and needs no symbol table.

ADDRESSING (this is the part that is easy to get wrong, and getting it wrong looks like a result):

`disasm.py` establishes `byte offset = vaddr - 0x00100000`. A `BL` at file offset `i` therefore has
address `i + 0x00100000` and targets `i + 0x00100000 + 8 + (sign_extend(imm24) << 2)`. Computing the
target in OFFSET space and searching for the function's VA silently finds **zero callers for every
function**, which reads exactly like "nothing calls this" and is how a whole RE chain can look
refuted when it is not.

So every run SELF-VALIDATES: a correct ARM scan sends the large majority of its targets back into the
code image, because real code calls code. A decoder that is wrong scatters targets outside the image.
The validation verdict is printed first, and a run that fails it is not evidence of anything.

Usage:
    tools/callers_bl.py 0x00308498
    tools/callers_bl.py 0x00308498 0x00308498 0x00371758   # several targets at once
    tools/callers_bl.py --json 0x00308498
"""

from __future__ import annotations

import argparse
import json
import struct
import sys
from collections import defaultdict
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
CODE = REPO / "build" / "code.bin"
BASE = 0x00100000

# A correct ARM scan sends nearly all targets back inside the code image. Measured on this image:
# 70.6% land in-image. The floor is well below that because some targets are in imported veneers
# and literal pools that sit outside the dumped range.
MIN_IN_IMAGE_FRACTION = 0.50


def sign_extend(value: int, bits: int) -> int:
    return value - (1 << bits) if value & (1 << (bits - 1)) else value


def bl_target(word: int, address: int) -> int | None:
    """Target of an ARM `BL` at `address`, or None if `word` is not one.

    Encoding: `cond 1011 offset24`; the target is PC + 8 + (sign_extend(offset24) << 2), because the
    ARM pipeline reads the instruction at PC + 8.
    """
    if (word & 0x0F000000) != 0x0B000000:
        return None
    offset = sign_extend(word & 0x00FFFFFF, 24)
    return (address + 8 + (offset << 2)) & 0xFFFFFFFF


def scan(code: bytes) -> tuple[dict[int, list[int]], int]:
    """Map every `BL` target VA to its call-site VAs, plus the number of `BL`s seen."""
    sites: dict[int, list[int]] = defaultdict(list)
    total = 0
    for offset in range(0, len(code) - 3, 4):
        word = struct.unpack_from("<I", code, offset)[0]
        target = bl_target(word, offset + BASE)
        if target is None:
            continue
        sites[target].append(offset + BASE)
        total += 1
    return sites, total


def validate(code: bytes, sites: dict[int, list[int]]) -> dict[str, float | int]:
    """Report how many targets land back inside the code image. A wrong decoder cannot pass this."""
    inside = sum(1 for target in sites if BASE <= target < BASE + len(code))
    fraction = inside / max(len(sites), 1)
    return {
        "bl_instructions": sum(len(v) for v in sites.values()),
        "distinct_targets": len(sites),
        "targets_in_image": inside,
        "in_image_fraction": round(fraction, 4),
        "ok": fraction >= MIN_IN_IMAGE_FRACTION,
    }


def main(argv: list[str]) -> int:
    parser = argparse.ArgumentParser(description=__doc__.splitlines()[0])
    parser.add_argument("targets", nargs="+", type=lambda s: int(s, 0), help="target VA(s)")
    parser.add_argument("--json", action="store_true")
    parser.add_argument("--bin", default=str(CODE))
    args = parser.parse_args(argv)

    path = Path(args.bin)
    if not path.is_file():
        print(f"callers_bl: {path} not found -- run tools/extract_code.py first", file=sys.stderr)
        return 2
    code = path.read_bytes()

    sites, _ = scan(code)
    verdict = validate(code, sites)
    if not args.json:
        print(
            f"callers_bl: scanned {verdict['bl_instructions']} BL instructions, "
            f"{verdict['distinct_targets']} distinct targets, "
            f"{verdict['in_image_fraction']:.1%} back inside the image "
            f"({verdict['targets_in_image']}) -- decoder {'OK' if verdict['ok'] else 'SUSPECT'}"
        )
        if not verdict["ok"]:
            print(
                "callers_bl: REFUSING to report callers, a decoder that scatters targets outside the "
                "code image is wrong, and its zeros are not evidence",
                file=sys.stderr,
            )
            return 1
    for target in args.targets:
        found = sites.get(target, [])
        if args.json:
            print(json.dumps({"target": hex(target), "callers": [hex(c) for c in found]}))
        else:
            label = "callers" if found else "NO ARM BL CALLERS (Thumb or indirect calls remain open)"
            print(f"  0x{target:08x}: {len(found)} {label} {[hex(c) for c in found[:12]]}")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
