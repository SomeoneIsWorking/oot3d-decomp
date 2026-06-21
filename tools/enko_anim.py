#!/usr/bin/env python3
"""enko_anim.py — live OoT3D ground-truth readout of every En_Ko (Kokiri kid, id=355).

Serves soh3d #87 (En_Ko anim/variant selection). For each live Kokiri it prints the
ENKO_TYPE (= actor.params & 0xFF) and the GREZZO anim-controller state read straight out
of the actor instance (see docs/anim_system.md):

    curFrame   @ actor+0x1e0 (f32)   -- playhead; advances by playSpeed, wraps at animLength.
                                        ONLY advances for kids near Link (distant ones are
                                        update-throttled) -- tp Link adjacent to see motion.
    playSpeed  @ actor+0x1e4 (f32)
    endFrame   @ actor+0x1ec (f32)
    animLength @ actor+0x1f0 (f32)   -- per-CSAB frame count; the stable discriminator that
                                        proves two kids play DIFFERENT animations.

KEY FINDING (2026-06-21): the 8 Kokiri in Kokiri Forest (scene 85) carry 8 distinct
ENKO_TYPEs and 8 distinct animLengths -> OoT3D plays a DIFFERENT anim per type. soh3d
collapsing them to one shared idle CSAB is the bug. NB: live OoT3D selection can DIVERGE
from the N64 sOsAnimeLookup table (e.g. CHILD_5 reads a looping 21-frame anim, not the
N64 2-frame STANDUP_2) -- the running game is ground truth, not the N64 decomp.

  tools/enko_anim.py            # table of every live En_Ko + its anim-controller state
"""
import struct, sys, os

sys.path.insert(0, os.path.dirname(__file__))
from actors import Rpc, enumerate_actors  # noqa: E402

EN_KO_ID = 355

# ENKO_TYPE -> KO_BOY/KO_GIRL/KO_FADO model family (from z_en_ko.c sEnKoModelInfo).
ENKO_SEX = {0: "boy", 1: "girl", 2: "boy", 3: "boy", 4: "boy", 5: "girl", 6: "girl",
            7: "boy", 8: "boy", 9: "girl", 10: "girl", 11: "boy", 12: "FADO"}


def f32(r, a):
    return struct.unpack("<f", r.read(a, 4))[0]


def main():
    r = Rpc()
    info = enumerate_actors(r)
    kids = []
    for _c, (_cnt, actors) in info["cats"].items():
        kids += [a for a in actors if a["id"] == EN_KO_ID]
    print(f"scene={info['scene']}  En_Ko count={len(kids)}")
    print(f"{'addr':>10} {'type':>4} {'sex':>5} {'curF':>7} {'spd':>4} "
          f"{'endF':>6} {'len':>6}  pos")
    for a in sorted(kids, key=lambda k: k["params"] & 0xFF):
        k = a["addr"]
        typ = a["params"] & 0xFF
        cf, sp, ef, ln = (f32(r, k + 0x1e0), f32(r, k + 0x1e4),
                          f32(r, k + 0x1ec), f32(r, k + 0x1f0))
        px, py, pz = a["pos"]
        print(f"{k:#010x} {typ:4d} {ENKO_SEX.get(typ,'?'):>5} {cf:7.2f} {sp:4.1f} "
              f"{ef:6.1f} {ln:6.1f}  ({px:7.1f},{py:6.1f},{pz:7.1f})")


if __name__ == "__main__":
    main()
