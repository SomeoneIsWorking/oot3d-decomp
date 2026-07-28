#!/usr/bin/env python3
"""fingerprint_match — find a 3DS function by the CONSTANTS it shares with its N64 twin.

WHY THIS EXISTS. OoT3D is Grezzo's port of a game that has a mature public decompilation. The
architecture changed (MIPS -> ARM), the compiler changed, and every symbol name was stripped — but
the ARITHMETIC DID NOT. A function that divides by 30 on N64 still divides by 30 on the 3DS, and the
constant lands in an ARM literal pool as the same 32 bits. Those pools are a fingerprint.

This was done BY HAND twice in one session and both times it cracked a locate in minutes:

  * `ActorShadow_DrawFeet` -> 0x001d04f4, found because its pool holds 1/30 and 1/70, which N64
    writes as `1.0f / 30.0f` and `1.0f / (30.0f + 40.0f)`. No other function has that pair.
  * `Player_Draw` -> 0x004bf618, found because its tail pool holds 1.05, 0.95 and 1.1 — N64's
    `Matrix_Scale(1.1f, 0.95f, 1.05f)`.

Doing that by hand is the workflow defect this fixes. It also sidesteps the failure that blocked
`player.mesh-id-selection` for days (instrument I006): Ghidra's Reference DB answers "no references"
for regions it never disassembled as code, and that silence is indistinguishable from an answer.
This tool reads RAW BYTES. There is no analysis state for it to be wrong about.

    fingerprint_match.py ActorShadow_DrawFeet        # N64 name  -> ranked 3DS candidates
    fingerprint_match.py --at 0x001d0828             # 3DS pool  -> ranked N64 candidates
    fingerprint_match.py --self-test                 # the two known-good answers + a negative case

WHAT IT CANNOT DO. A function whose only constants are 0.0f/1.0f/0.5f has no fingerprint, and the
tool says so rather than guessing — see `--self-test`, which asserts exactly that. Integer constants
are weak signal and are weighted far below floats. A match is a LEAD, not a conclusion: decompile it
and confirm the body before recording anything.
"""
from __future__ import annotations

import argparse
import math
import re
import struct
import sys
from collections import defaultdict
from pathlib import Path

DECOMP = Path(__file__).resolve().parent.parent
REPO = DECOMP.parent
CODE_BIN = DECOMP / "build" / "code.bin"
BASE = 0x00100000

# N64 decomp sources to fingerprint. soh's z_*.c are the faithful bodies; the overlays carry the
# per-actor ones.
N64_ROOTS = [REPO / "Shipwright/soh/src/code", REPO / "Shipwright/soh/src/overlays"]

# A pool is contiguous; constants belonging to one function sit within a few hundred bytes of each
# other. Wide enough to span a big pool, narrow enough not to merge neighbours.
POOL_SPAN = 0x180

# Rarity saturates here: a constant appearing this often or less is treated as equally rare, so the
# score is driven by HOW MANY rare constants co-occur rather than by one extreme outlier.
RARE_FLOOR = 64

# Floats so common they carry no information — every function has them.
COMMON_FLOATS = {0.0, 1.0, -1.0, 0.5, 2.0, -0.5, 100.0, 10.0, 255.0, 0.1, 3.0, 4.0}

FLOAT_RE = re.compile(r"(?<![\w.])(\d+\.\d*|\.\d+)f?(?![\w.])")
# `1.0f / 30.0f` and `1.0f / (30.0f + 40.0f)` — N64 writes reciprocals this way and the COMPILER
# folds them, so the pool holds the quotient, not the operands. Missing this is missing the single
# highest-signal constant these functions have.
RECIP_RE = re.compile(r"1\.0f?\s*/\s*(?:\(\s*([\d.f+\-*\s]+?)\s*\)|(\d+\.?\d*)f?)")
INT_RE = re.compile(r"(?<![\w.])0x([0-9a-fA-F]{3,8})(?![\w.])")


def f2u(x: float) -> int:
    return struct.unpack("<I", struct.pack("<f", x))[0]


def u2f(w: int) -> float:
    return struct.unpack("<f", struct.pack("<I", w))[0]


def constants_of(body: str) -> tuple[set[int], set[int]]:
    """(float bit-patterns, integer values) worth fingerprinting on."""
    floats: set[float] = set()
    for m in FLOAT_RE.finditer(body):
        try:
            floats.add(float(m.group(1)))
        except ValueError:
            pass
    for m in RECIP_RE.finditer(body):
        expr = m.group(1) or m.group(2)
        try:
            v = eval(expr.replace("f", ""), {"__builtins__": {}}, {})  # noqa: S307 - numeric literals only
            if isinstance(v, (int, float)) and v not in (0,):
                floats.add(1.0 / float(v))
        except Exception:
            pass
    fbits = {f2u(v) for v in floats if v not in COMMON_FLOATS and abs(v) < 1e9}
    ints = {int(m.group(1), 16) for m in INT_RE.finditer(body)}
    ints = {v for v in ints if v > 0xFF and v != 0xFFFF and v < 0x01000000}
    return fbits, ints


def n64_functions() -> dict[str, tuple[set[int], set[int]]]:
    """name -> (float bits, ints), by brace-matching each top-level definition."""
    out: dict[str, tuple[set[int], set[int]]] = {}
    defre = re.compile(r"^[A-Za-z_][A-Za-z0-9_ \t\*]*?\b([A-Za-z_][A-Za-z0-9_]*)\s*\([^;]*$")
    for root in N64_ROOTS:
        if not root.exists():
            continue
        for path in root.rglob("*.c"):
            lines = path.read_text(errors="replace").splitlines()
            for i, ln in enumerate(lines):
                if ln.startswith((" ", "\t", "#", "//", "}", "*")):
                    continue
                m = defre.match(ln)
                if not m or m.group(1) in ("if", "for", "while", "switch", "return", "sizeof"):
                    continue
                depth, seen, end = 0, False, i
                for j in range(i, min(i + 900, len(lines))):
                    depth += lines[j].count("{") - lines[j].count("}")
                    seen = seen or "{" in lines[j]
                    if seen and depth <= 0:
                        end = j
                        break
                fb, iv = constants_of("\n".join(lines[i:end + 1]))
                # Keep functions with NO constants too. Dropping them made the CLI answer "no N64
                # function named X" for a function that plainly exists, which reads as a typo and
                # sends the next session hunting one — when the real answer is "this function has no
                # fingerprint, locate it another way". Those are different answers and the tool must
                # not conflate them.
                name = m.group(1)
                if name in out:  # same name in two files: union rather than clobber
                    fb |= out[name][0]
                    iv |= out[name][1]
                out[name] = (fb, iv)
    return out


def load_code() -> bytes:
    if not CODE_BIN.exists():
        sys.exit(f"missing {CODE_BIN} — run tools/extract_code.py first")
    return CODE_BIN.read_bytes()


def word_index(code: bytes, wanted: set[int]) -> dict[int, list[int]]:
    """value -> byte offsets, for the values we actually care about."""
    idx: dict[int, list[int]] = defaultdict(list)
    for off in range(0, len(code) - 4, 4):
        w = struct.unpack_from("<I", code, off)[0]
        if w in wanted:
            idx[w].append(off)
    return idx


def weight(value_hits: int, total_words: int, is_float: bool) -> float:
    """Rare constants carry the signal; ints carry a fraction of a float's.

    INVERSE FREQUENCY, SATURATING. Two weightings were tried and both failed the Player_Draw
    self-test for opposite reasons:

      * log-inverse-frequency did not separate enough — the real pool (1.05 / 0.95 / 1.1, 10-20 hits
        each) ranked 15th behind windows that collected seven boring constants like 20.0 and 60.0.
      * raw inverse frequency separated too much — a SINGLE 5-hit constant (228.0) outscored the
        real pool's three rare ones combined, so one coincidence beat genuine agreement.

    Saturating at RARE_FLOOR fixes both: everything rarer than ~64 hits is equally "rare", so what
    decides is HOW MANY rare constants co-occur, with common ones left as a weak tiebreak. That is
    the semantics we actually want — agreement in number, not in extremity.
    """
    if value_hits <= 0:
        return 0.0
    w = total_words / max(value_hits, RARE_FLOOR)
    return w if is_float else w * 0.25


def find_prologue(code: bytes, pool_off: int, back: int = 0x1200) -> int | None:
    """Nearest preceding `push {..., lr}` — the likely enclosing function start."""
    for off in range(pool_off, max(0, pool_off - back), -4):
        w = struct.unpack_from("<I", code, off)[0]
        if (w & 0xFFFF0000) == 0xE92D0000 and (w & 0x4000):
            return off
    return None


def score_function(code: bytes, idx: dict[int, list[int]], fbits: set[int], ints: set[int],
                   total_words: int) -> list[tuple[float, int, int]]:
    """(score, pool offset, matched constant count), best first."""
    present = [(c, True) for c in fbits if c in idx] + [(c, False) for c in ints if c in idx]
    if not present:
        return []
    # Anchor on EVERY occurrence of EVERY present constant, not just the rarest one. Anchoring on the
    # rarest is the obvious optimisation and it is WRONG: the rarest constant in the N64 body is often
    # one the 3DS build does not have at all (SoH carries enhancement/CVar code Grezzo never saw), so
    # the single anchor lands nowhere near the real pool and the right answer never gets scored. This
    # is what made Player_Draw fail its self-test — its three rarest floats have zero hits in
    # code.bin, and the next-rarest is absent from the pool that actually holds 1.05/0.95/1.1.
    windows: dict[int, tuple[float, int]] = {}
    for anchor, _ in present:
        for a_off in idx[anchor]:
            key = a_off // POOL_SPAN  # collapse near-duplicate windows
            if key in windows:
                continue
            total, matched = 0.0, 0
            for c, is_f in present:
                if any(abs(o - a_off) <= POOL_SPAN for o in idx[c]):
                    total += weight(len(idx[c]), total_words, is_f)
                    matched += 1
            if matched >= 2:
                windows[key] = (total, a_off, matched)
    out = sorted(windows.values(), reverse=True)
    return out


def cmd_forward(name: str, top: int) -> int:
    fns = n64_functions()
    if name not in fns:
        near = [k for k in fns if name.lower() in k.lower()][:8]
        print(f"no N64 function named {name}" + (f"; did you mean: {', '.join(near)}" if near else ""))
        return 1
    fbits, ints = fns[name]
    if not fbits and not ints:
        print(f"{name}: NO FINGERPRINTABLE CONSTANTS — this function's literals are all common "
              f"(0.0f/1.0f/0.5f and friends) or it has none. That is an answer, not a failure: it "
              f"cannot be located this way. Use the pool-literal scan (instrument I006) or an "
              f"argument-position/call-site locate instead.")
        return 1
    code = load_code()
    total_words = len(code) // 4
    idx = word_index(code, fbits | ints)
    hits = score_function(code, idx, fbits, ints, total_words)
    print(f"{name}: {len(fbits)} distinctive float(s), {len(ints)} int(s); "
          f"{sum(1 for c in fbits if c in idx)}/{len(fbits)} floats present in code.bin")
    if not fbits:
        print("  NO DISTINCTIVE FLOAT CONSTANTS — this function has no fingerprint. Any match below "
              "is noise; locate it another way.")
    if not hits:
        print("  no pool holds 2+ of these constants together.")
        return 1
    for score, off, matched in hits[:top]:
        va = BASE + off
        pro = find_prologue(code, off)
        fn = f"  fn starts ~0x{BASE + pro:08x}" if pro is not None else "  (no prologue found)"
        print(f"  score {score:6.1f}  {matched} consts  pool 0x{va:08x}{fn}")
    return 0


def cmd_at(va: int, top: int) -> int:
    code = load_code()
    total_words = len(code) // 4
    off = va - BASE
    pool = set()
    for o in range(max(0, off - POOL_SPAN), min(len(code) - 4, off + POOL_SPAN), 4):
        pool.add(struct.unpack_from("<I", code, o)[0])
    fns = n64_functions()
    wanted = set()
    for fb, iv in fns.values():
        wanted |= fb | iv
    idx = word_index(code, wanted & pool)
    scored = []
    for name, (fb, iv) in fns.items():
        hitf = fb & pool
        hiti = iv & pool
        if len(hitf) + len(hiti) < 2:
            continue
        s = sum(weight(len(idx.get(c, [])), total_words, True) for c in hitf)
        s += sum(weight(len(idx.get(c, [])), total_words, False) for c in hiti)
        scored.append((s, name, len(hitf), len(hiti)))
    scored.sort(reverse=True)
    if not scored:
        print(f"no N64 function shares 2+ constants with the pool near 0x{va:08x}")
        return 1
    for s, name, nf, ni in scored[:top]:
        print(f"  score {s:6.1f}  {nf} float(s) {ni} int(s)  {name}")
    return 0


def cmd_self_test() -> int:
    """Two known-good answers, and one function that MUST NOT match confidently."""
    code = load_code()
    total_words = len(code) // 4
    fns = n64_functions()
    ok = True
    for name, want_fn in (("ActorShadow_DrawFeet", 0x001d04f4), ("Player_Draw", 0x004bf618)):
        if name not in fns:
            print(f"FAIL {name}: not found in the N64 sources")
            ok = False
            continue
        fbits, ints = fns[name]
        idx = word_index(code, fbits | ints)
        hits = score_function(code, idx, fbits, ints, total_words)
        got = None
        for rank, (_, off, _) in enumerate(hits[:5]):
            pro = find_prologue(code, off)
            if pro is not None and BASE + pro == want_fn:
                got = rank
                break
        if got is None:
            print(f"FAIL {name}: 0x{want_fn:08x} not in the top 5 "
                  f"(got {[hex(BASE + o) for _, o, _ in hits[:5]]})")
            ok = False
        else:
            print(f"PASS {name}: 0x{want_fn:08x} at rank {got + 1}")
    # NEGATIVE CASES — a tool that always answers cannot show the other answer, so these must be able
    # to FAIL. (The first version of this block counted functions with no constants, which is
    # vacuous: n64_functions() already filters those out, so it could only ever print zero and pass.)
    #
    # 1. A body of nothing but common constants must yield NO fingerprint.
    fb_common, int_common = constants_of("f = 0.0f; g = 1.0f; h = 0.5f; i = 2.0f; j = 100.0f;")
    if fb_common or int_common:
        print(f"FAIL negative-common: expected no fingerprint, got {len(fb_common)} float(s) "
              f"{len(int_common)} int(s)")
        ok = False
    else:
        print("PASS negative-common: a body of only common constants yields no fingerprint")

    # 2. Constants that do not occur in code.bin at all must produce NO match, not a plausible one.
    code2 = load_code()
    fake = {f2u(v) for v in (1234.5678, 9876.5432, 4321.1234)}
    idx2 = word_index(code2, fake)
    hits2 = score_function(code2, idx2, fake, set(), len(code2) // 4)
    if hits2:
        print(f"FAIL negative-absent: invented constants matched {len(hits2)} window(s)")
        ok = False
    else:
        print("PASS negative-absent: constants absent from code.bin match nothing")
    return 0 if ok else 1


def main(argv) -> int:
    p = argparse.ArgumentParser(description=__doc__.splitlines()[0],
                                formatter_class=argparse.RawDescriptionHelpFormatter,
                                epilog="\n".join(__doc__.splitlines()[1:]))
    p.add_argument("name", nargs="?", help="N64 function name to locate in code.bin")
    p.add_argument("--at", type=lambda s: int(s, 0), help="3DS VA: rank N64 functions for its pool")
    p.add_argument("-n", "--top", type=int, default=6)
    p.add_argument("--self-test", action="store_true")
    a = p.parse_args(argv)
    if a.self_test:
        return cmd_self_test()
    if a.at is not None:
        return cmd_at(a.at, a.top)
    if not a.name:
        p.print_help()
        return 2
    return cmd_forward(a.name, a.top)


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
