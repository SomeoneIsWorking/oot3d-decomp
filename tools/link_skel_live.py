#!/usr/bin/env python3
"""link_skel_live.py — read OoT3D child-Link's LIVE per-bone world matrices from the
running game (Azahar oracle) and label each bone by its world position. This is the
ground-truth confirmation that the running 3DS game animates the same 25-bone
childlink_v2 skeleton that soh3d's static CMB parse (soh3d tools/link_skel_dump.py)
recovers — and the basis for the verified N64-limb <-> OoT3D-bone correspondence
(docs/link_bone_map.md).

Chain (Link = PLAYER actor id 0, instance ~0x098f4010):
  actor + 0x25c  -> embedded skeleton object (vtable 0x4ec030)
  skelobj + 0x20 -> animation player object (vtable 0x4ec018)
  animplayer + 0xd4 -> (bone-matrix array) + 0xc
Each bone matrix is a column-major 4x3 (3 columns x 4 rows, 0x30 bytes); the bone's
world translation is (x,y,z) = (m[6], m[10], m[2]).

Usage: link_skel_live.py            # dump the 25 live bone world positions
"""
import sys, os, struct
import os as _os, sys as _sys  # noqa: E402
_sys.path.insert(0, _os.path.dirname(_os.path.abspath(__file__)))
from zelda3d_paths import ZELDA3D_ROOT as _ZELDA3D_ROOT, zelda3d_tools as _zpaths  # noqa: E402
_zpaths()
from azahar_rpc import Rpc  # noqa: E402

GPLAYSTATE = 0x0050AF34
SKEL_OFF = 0x25c      # actor -> embedded skeleton object
ANIMPLAYER_OFF = 0x20 # skelobj -> anim player
MATPTR_OFF = 0xd4     # animplayer -> bone array + 0xc
NBONE = 25
STRIDE = 0x30

# geometric body-part label per OoT3D childlink_v2 bone (from rest world position)
LABEL = {
    0: "root", 1: "waist/pelvis", 2: "lower-pivot",
    3: "thigh(+X)", 4: "shin(+X)", 5: "foot(+X)",
    6: "thigh(-X)", 7: "shin(-X)", 8: "foot(-X)",
    9: "upper-pivot", 10: "chest", 11: "head", 12: "hat",
    13: "clavicle(+X)", 14: "shoulder(+X)", 15: "elbow(+X)", 16: "hand(+X)",
    17: "clavicle(-X)", 18: "shoulder(-X)", 19: "elbow(-X)", 20: "hand(-X)",
    21: "sheath", 22: "root2", 23: "root2.a", 24: "root2.b",
}


def link_actor(r):
    ps = r.read32(GPLAYSTATE)
    if not ps:
        raise SystemExit("no PlayState (title screen?) — boot into a scene first")
    return r.read32(ps + 0x208C + 0x0C + 2 * 8 + 4)  # actorCtx -> PLAYER list head


def bone_matrices(r, actor):
    skel = actor + SKEL_OFF
    animplayer = r.read32(skel + ANIMPLAYER_OFF)
    arr = r.read32(animplayer + MATPTR_OFF) - 0xc
    d = r.read(arr, NBONE * STRIDE)
    mats = []
    for i in range(NBONE):
        m = struct.unpack_from("<12f", d, i * STRIDE)
        mats.append(m)
    return arr, mats


def world_pos(m):
    return (m[6], m[10], m[2])


def main():
    r = Rpc()
    actor = link_actor(r)
    arr, mats = bone_matrices(r, actor)
    print(f"# Link actor @{actor:08x}  bone-matrix array @{arr:08x}")
    print(f"# {'bid':>3} {'world (x,y,z)':<28} body-part")
    for i, m in enumerate(mats):
        x, y, z = world_pos(m)
        print(f"  {i:>3} ({x:8.1f},{y:8.1f},{z:8.1f})   {LABEL.get(i,'?')}")


if __name__ == "__main__":
    main()
