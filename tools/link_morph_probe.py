#!/usr/bin/env python3
"""link_morph_probe.py — read OoT3D Link's LIVE animation/morph controller from the running
game (Azahar oracle), and optionally trace the morph weight across a transition.

This is the ground truth for soh3d's #70/#83/#86 "3d3 morph-blindness": OoT3D Link cross-fades
every animation transition with a decrementing morph weight, exactly like N64 SkelAnime. The
soh3d 3d3 named-CSAB path skips this (renders the incoming CSAB at full weight immediately =
hard cut), which is what produces the 1-frame arm pops.

Link's GREZZO base-animation controller lives in the PLAYER actor instance:
  +0x288  f32  morphWeight  -- starts at 1.0 on a transition, decrements by morphRate each
                               frame to 0.0; while >0 the pose = lerp(incoming CSAB, frozen
                               outgoing pose, morphWeight).
  +0x28c  f32  morphRate    -- = 1.0 / morphFrames (0.1667 observed for walk-stop => 6 frames)
  +0x290  f32  curFrame     -- animation playhead; resets to 0 when a new anim starts
  +0x294  f32  playSpeed
(Verified live 2026-06-21, Link's House: walk->stop reproduces morphWeight 1.0,0.83,0.67,0.50,
0.33,0.17,0.0 = exact 1/6 steps.)

Usage:
  link_morph_probe.py                # one-shot: print the controller fields
  link_morph_probe.py trace [secs]   # poll morphWeight/curFrame fast and print the series
                                     # (trigger a transition by hand, e.g. release the stick)
"""
import sys, os, time
sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", "..", "soh3d", "tools"))
from azahar_rpc import Rpc  # noqa: E402

GPLAYSTATE = 0x0050AF34
MORPH_W = 0x288
MORPH_RATE = 0x28c
CUR_FRAME = 0x290
PLAY_SPEED = 0x294


def link_actor(r):
    ps = r.read32(GPLAYSTATE)
    if not ps:
        raise SystemExit("no PlayState (title screen?) — boot into a scene first")
    return r.read32(ps + 0x208C + 0x0C + 2 * 8 + 4)


def read_ctl(r, a):
    return dict(morphWeight=r.read_f32(a + MORPH_W), morphRate=r.read_f32(a + MORPH_RATE),
                curFrame=r.read_f32(a + CUR_FRAME), playSpeed=r.read_f32(a + PLAY_SPEED))


def main():
    r = Rpc()
    a = link_actor(r)
    if len(sys.argv) > 1 and sys.argv[1] == "trace":
        dur = float(sys.argv[2]) if len(sys.argv) > 2 else 1.0
        wseq, fseq = [], []
        t0 = time.time()
        while time.time() - t0 < dur:
            wseq.append(r.read_f32(a + MORPH_W))
            fseq.append(r.read_f32(a + CUR_FRAME))
            time.sleep(0.02)
        print("morphWeight:", " ".join("%.2f" % v for v in wseq))
        print("curFrame   :", " ".join("%.1f" % v for v in fseq))
    else:
        c = read_ctl(r, a)
        print(f"Link actor @{a:08x}")
        print(f"  morphWeight = {c['morphWeight']:.3f}  (1.0->0.0 during a transition, else 0)")
        print(f"  morphRate   = {c['morphRate']:.4f}  (= 1/morphFrames)")
        print(f"  curFrame    = {c['curFrame']:.2f}")
        print(f"  playSpeed   = {c['playSpeed']:.3f}")


if __name__ == "__main__":
    main()
