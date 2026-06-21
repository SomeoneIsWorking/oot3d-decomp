#!/usr/bin/env python3
"""link_ctl.py — read Link's state and TELEPORT him via the actor chain (the durable
in-scene control primitive). Reaches Link's canonical Actor.world.pos @ head+0x08 through
gPlayState -> actorCtx -> PLAYER list head, and WRITING it teleports Link reliably.

KEY: the earlier RAM-scan poke-test (docs/ram_map.md) failed because it wrote a *copy*
(0x0821e638). The actor-chain pos @ head+0x08 is the CANONICAL world.pos — writing it moves
Link (collision then resolves the final spot; it will NOT cross walls — conservative). Verified
live 2026-06-21 at Link's House.

  link_ctl.py                 # print Link pos/rot + scene
  link_ctl.py tp <x> <z> [y]  # teleport Link (collision-resolved)
"""
import sys, os, struct
sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", "..", "soh3d", "tools"))
from azahar_rpc import Rpc  # noqa: E402

GPLAYSTATE = 0x0050AF34

def link_head(r):
    ps = r.read32(GPLAYSTATE)
    return ps, r.read32(ps + 0x208C + 0x0C + 2*8 + 4)   # actorCtx +0x0C, PLAYER=cat2, +4=head

def state(r):
    ps, h = link_head(r)
    sb = r.read(ps + 0x104, 2); scene = sb[0] | (sb[1] << 8)
    pos = (r.read_f32(h+0x08), r.read_f32(h+0x0C), r.read_f32(h+0x10))
    rot = struct.unpack("<3h", r.read(h+0x14, 6))
    return scene, pos, rot, h

def tp(r, x, z, y=0.0):
    _, h = link_head(r)
    r.write(h+0x08, struct.pack("<f", x))
    r.write(h+0x0C, struct.pack("<f", y))
    r.write(h+0x10, struct.pack("<f", z))

if __name__ == "__main__":
    r = Rpc()
    if len(sys.argv) > 1 and sys.argv[1] == "tp":
        x, z = float(sys.argv[2]), float(sys.argv[3])
        y = float(sys.argv[4]) if len(sys.argv) > 4 else 0.0
        tp(r, x, z, y)
        import time; time.sleep(0.3)
    sc, pos, rot, h = state(r)
    print("scene=%d head=%08x pos=(%.1f,%.1f,%.1f) rot=(%d,%d,%d)" % (sc, h, *pos, *rot))
