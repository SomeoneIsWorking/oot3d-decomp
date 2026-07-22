#!/usr/bin/env python3
"""actors.py — enumerate the live OoT3D actor list via the durable static chain.

Reads the running game (through the Azahar oracle RPC, tools/azahar_rpc.py in the soh3d repo)
using only STATIC, run-stable anchors recovered by static decomp (see docs/actor_layout.md):

    gPlayState (0x0050af34, .data)  ->  PlayState
    PlayState + 0x208C              ->  actorCtx
    actorCtx + 0x08                  =  total live actor count (u32)
    actorCtx + 0x0C                  =  ActorListEntry[12] { s32 count; Actor* head }   (stride 8)
    walk each list via Actor.next (+0x130)

Per-actor fields (see Actor layout in docs/actor_layout.md): id@0, category@2, room@3, flags@4,
pos@0x08 (Vec3f), rot@0x14 (Vec3s), params@0x1c (s16), prev@0x12c, next@0x130,
init@0x134 / destroy@0x138 / update@0x13c / draw@0x140, overlayEntry@0x144.

Actor id -> profile via gActorOverlayTable (0x0050cd84, stride 0x20, +0x14 = ActorProfile*);
ActorProfile: id@0, category@2, flags@4, objectId@8, instanceSize@0xC, init@0x10..draw@0x1c.

  tools/actors.py                 # list all live actors grouped by category
  tools/actors.py --raw <vaddr>   # hex-dump one actor instance
"""
import argparse, struct, sys, os

import os as _os, sys as _sys  # noqa: E402
_sys.path.insert(0, _os.path.dirname(_os.path.abspath(__file__)))
from zelda3d_paths import ZELDA3D_ROOT as _ZELDA3D_ROOT, zelda3d_tools as _zpaths  # noqa: E402
_zpaths()
from azahar_rpc import Rpc  # noqa: E402

GPLAYSTATE = 0x0050AF34      # .data global holding the current PlayState pointer (30 code refs)
ACTORCTX_OFF = 0x208C        # PlayState + this = actorCtx (matches code: playState+0x2000+0x8c)
SCENENUM_OFF = 0x104         # PlayState + this = current scene number (s16)
OVLTABLE = 0x0050CD84        # gActorOverlayTable base
A_NEXT = 0x130

CATS = ["SWITCH", "BG", "PLAYER", "EXPLOSIVE", "NPC", "ENEMY", "PROP",
        "ITEMACTION", "MISC", "BOSS", "DOOR", "CHEST"]


def profile_for(r, actor_id):
    prof = r.read32(OVLTABLE + actor_id * 0x20 + 0x14)
    if not prof:
        return None
    p = r.read(prof, 0x20)
    return {
        "ptr": prof,
        "objectId": struct.unpack_from("<h", p, 8)[0],
        "instanceSize": struct.unpack_from("<I", p, 0xC)[0],
    }


def read_actor(r, a):
    d = r.read(a, 0x148)
    g = lambda fmt, o: struct.unpack_from(fmt, d, o)[0]
    return {
        "addr": a,
        "id": g("<H", 0), "category": d[2], "room": d[3], "flags": g("<I", 4),
        "pos": struct.unpack_from("<fff", d, 8),
        "rot": struct.unpack_from("<hhh", d, 0x14),
        "params": g("<h", 0x1C),
        "prev": g("<I", 0x12C), "next": g("<I", 0x130),
        "update": g("<I", 0x13C), "draw": g("<I", 0x140), "overlay": g("<I", 0x144),
    }


def enumerate_actors(r):
    ps = r.read32(GPLAYSTATE)
    ctx = ps + ACTORCTX_OFF
    scene = r.read32(ps + SCENENUM_OFF) & 0xFFFF
    total = r.read32(ctx + 8)
    lists = r.read(ctx + 0xC, 12 * 8)
    out = {"playState": ps, "actorCtx": ctx, "scene": scene, "total": total, "cats": {}}
    for c in range(12):
        cnt, head = struct.unpack_from("<iI", lists, c * 8)
        actors = []
        a, guard = head, 0
        while a and guard < cnt + 4:
            actors.append(read_actor(r, a))
            a = actors[-1]["next"]
            guard += 1
        out["cats"][c] = (cnt, actors)
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--raw", type=lambda s: int(s, 0), default=None,
                    help="hex-dump one actor instance at this vaddr")
    a = ap.parse_args()
    r = Rpc()
    if a.raw is not None:
        d = r.read(a.raw, 0x148)
        for i in range(0, len(d), 16):
            print(f"{a.raw+i:08x}  " + " ".join(f"{b:02x}" for b in d[i:i+16]))
        return
    info = enumerate_actors(r)
    print(f"PlayState={info['playState']:08x}  scene={info['scene']}  "
          f"actorCtx={info['actorCtx']:08x}  total={info['total']}")
    for c in range(12):
        cnt, actors = info["cats"][c]
        if cnt == 0:
            continue
        print(f"\ncat{c} {CATS[c]} (count={cnt}):")
        for ac in actors:
            prof = profile_for(r, ac["id"])
            obj = prof["objectId"] if prof else -1
            px, py, pz = ac["pos"]
            print(f"  @{ac['addr']:08x} id={ac['id']:3d} obj={obj:3d} params={ac['params']:6d} "
                  f"pos=({px:7.1f},{py:7.1f},{pz:7.1f}) update={ac['update']:08x}")


if __name__ == "__main__":
    main()
