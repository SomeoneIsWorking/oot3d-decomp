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
  link_ctl.py warp <entrance> [dayTime]  # scene-transition warp (e.g. 0xEE = Kokiri Forest);
                                          # optional dayTime u16 (0x0000..0xFFFF, e.g. 0x8000 noon)
                                          # is written to gSaveContext.dayTime BEFORE the trigger so
                                          # the loaded scene picks the right day/night variant
  link_ctl.py time <dayTime>  # set gSaveContext.dayTime (in place; no warp)

WARP: PlayState.transitionTrigger @ play+0x5c2d (s8) is polled every frame by Play_Update
(fn 0x2e2e60, reached via Play_Main @ 0x45238c). Setting it to 20 (TRANS_TRIGGER_START) with
PlayState.nextEntranceIndex @ play+0x5c32 (s16) set to an entrance index kicks off the fade +
scene (re)load. Entrance table @ 0x543bb8 (4-byte entries). Verified live 2026-06-21: warped
Link's House (52) -> Kokiri Forest (85) with entrance 0xEE. Entrance indices match N64 OoT.
"""
import sys, os, struct
import os as _os, sys as _sys  # noqa: E402
_sys.path.insert(0, _os.path.dirname(_os.path.abspath(__file__)))
from zelda3d_paths import ZELDA3D_ROOT as _ZELDA3D_ROOT, zelda3d_tools as _zpaths  # noqa: E402
_zpaths()
from azahar_rpc import Rpc  # noqa: E402

GPLAYSTATE = 0x0050AF34
TRANS_TRIGGER = 0x5c2d   # play+offset, s8 (20 = TRANS_TRIGGER_START)
NEXT_ENTRANCE = 0x5c32   # play+offset, s16

# gSaveContext @ 0x00587958 (.bss; docs/ram_map.md CONFIRMED). dayTime u16 @ +0x0C.
# Scene-select forks that pick day-vs-night variants (Market Day/Night, Market Ruins,
# Kakariko Day/Night, etc.) read this at entrance-warp time — write it BEFORE triggering
# the transition or the loaded scene uses whatever time the save state carried.
GSAVECONTEXT = 0x00587958
DAY_TIME = GSAVECONTEXT + 0x0C

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

def warp(r, entrance, day_time=None):
    """Scene-transition warp: optionally pin dayTime, set nextEntranceIndex, trigger fade/load."""
    ps = r.read32(GPLAYSTATE)
    if day_time is not None:
        set_day_time(r, day_time)
    r.write(ps + NEXT_ENTRANCE, struct.pack("<h", entrance))
    r.write(ps + TRANS_TRIGGER, bytes([20]))   # TRANS_TRIGGER_START

def set_day_time(r, day_time):
    """Set gSaveContext.dayTime (u16). Callers should hold this a few frames post-load if
    the game clock ticks past what they want (dayTime auto-advances at ~one unit per frame)."""
    r.write(DAY_TIME, struct.pack("<H", day_time & 0xFFFF))

if __name__ == "__main__":
    r = Rpc()
    if len(sys.argv) > 1 and sys.argv[1] == "tp":
        x, z = float(sys.argv[2]), float(sys.argv[3])
        y = float(sys.argv[4]) if len(sys.argv) > 4 else 0.0
        tp(r, x, z, y)
        import time; time.sleep(0.3)
    elif len(sys.argv) > 1 and sys.argv[1] == "warp":
        ent = int(sys.argv[2], 0)
        day_time = int(sys.argv[3], 0) if len(sys.argv) > 3 else None
        warp(r, ent, day_time)
        import time; time.sleep(3.0)
        # Re-pin dayTime post-load so the game clock (which advances ~1/frame during scene
        # load) doesn't drift past the requested value before we screenshot.
        if day_time is not None:
            set_day_time(r, day_time)
    elif len(sys.argv) > 1 and sys.argv[1] == "time":
        set_day_time(r, int(sys.argv[2], 0))
    sc, pos, rot, h = state(r)
    print("scene=%d head=%08x pos=(%.1f,%.1f,%.1f) rot=(%d,%d,%d)" % (sc, h, *pos, *rot))
