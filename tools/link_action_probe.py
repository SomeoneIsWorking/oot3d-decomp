#!/usr/bin/env python3
"""link_action_probe.py — read Link's LIVE action-state from the running oracle (Azahar).

This is the disambiguator for the player port: the exact OoT3D function driving any behavior is
`*(u32*)(playerInstance + 0x1708)` (the actionFunc; see docs/player_port.md). Drive Link into a
state (idle, carrying, climbing, in a door, walking) and run this to print the actionFunc address
to decompile + align to its N64 twin.

  link_action_probe.py            # one-shot: print actionFunc + key state fields
  link_action_probe.py watch      # poll ~5x/s, print whenever actionFunc changes

Player offsets (verified, docs/player_port.md): actionFunc+0x1708, stateFlags1+0x1710,
stateFlags2+0x1714, linearVelocity+0x221c (f32), yaw+0x2220 (s16), shape.rot.y+0xbe (s16),
bgCheckFlags+0x90, focusActor+0x16f8, curAnimId+0x284.
"""
import sys, os, struct, time
sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", "..", "soh3d", "tools"))
from azahar_rpc import Rpc  # noqa: E402

GPLAYSTATE = 0x0050AF34


def link_head(r):
    ps = r.read32(GPLAYSTATE)
    if not ps:
        raise SystemExit("no PlayState (title/menu?) — boot into a scene first")
    return ps, r.read32(ps + 0x208C + 0x0C + 2 * 8 + 4)  # actorCtx -> PLAYER list head


def snap(r):
    ps, h = link_head(r)
    if not h:
        raise SystemExit("no PLAYER actor (not in gameplay yet)")
    sb = r.read(ps + 0x104, 2)
    return {
        "scene": sb[0] | (sb[1] << 8),
        "player": h,
        "actionFunc": r.read32(h + 0x1708),
        "stateFlags1": r.read32(h + 0x1710),
        "stateFlags2": r.read32(h + 0x1714),
        "linVel": r.read_f32(h + 0x221c),
        "yaw": struct.unpack("<h", r.read(h + 0x2220, 2))[0],
        "shapeY": struct.unpack("<h", r.read(h + 0xbe, 2))[0],
        "bgCheck": struct.unpack("<H", r.read(h + 0x90, 2))[0],
        "focusActor": r.read32(h + 0x16f8),
        "curAnim": r.read32(h + 0x284),
    }


def fmt(s):
    return (f"scene={s['scene']:#06x} player={s['player']:08x} "
            f"**actionFunc={s['actionFunc']:08x}** sf1={s['stateFlags1']:08x} "
            f"sf2={s['stateFlags2']:08x} linVel={s['linVel']:.2f} yaw={s['yaw']:#06x} "
            f"shapeY={s['shapeY']:#06x} bg={s['bgCheck']:#06x} "
            f"focus={s['focusActor']:08x} anim={s['curAnim']:#x}")


def main():
    r = Rpc()
    if len(sys.argv) > 1 and sys.argv[1] == "watch":
        last = None
        while True:
            try:
                s = snap(r)
            except SystemExit as e:
                print(e); time.sleep(0.5); continue
            if s["actionFunc"] != last:
                print(fmt(s)); last = s["actionFunc"]
            time.sleep(0.2)
    else:
        print(fmt(snap(r)))


if __name__ == "__main__":
    main()
