#!/usr/bin/env python3
"""azahar_cam.py — camera + framing primitives for the live OoT3D oracle.

Implements frozen-camera / free-cam for Azahar headless so distant actors can be framed for
screenshots without the auto-camera fighting back. Companion to link_ctl.py, oracle_export.py.

## Discovered camera layout (Kokiri Forest, scene 85, verified 2026-06-23)

    gPlayState @ 0x0050AF34  ->  PlayState*

    Camera EYE Vec3f  @  PlayState + 0x1b8   (live camera position, world space)
    Camera AT  Vec3f  @  PlayState + 0x1c4   (look-at point, tracks Link with ~35u y offset)

    Duplicate copies exist at PlayState+0x3f0/+0x408 (eye) and +0x3e4 (at) — these are likely
    "eyeNext"/"atNext" or interpolation buffers; writing the primary pair (+0x1b8/+0x1c4) is
    sufficient for a one-frame override.

    PlayState + 0x330c  ->  cam_path_ptr   (a spline/path buffer for cinematic cameras;
                                            cam_path_ptr+0x34 is NOT the live eye — it's a
                                            path-frame position used by fixed-camera modes like
                                            the Kokiri Forest overhead arc. Ignore for free-cam.)

## Usage

    azahar_cam.py status              # print current eye/at/link positions
    azahar_cam.py set_eye x y z       # override camera eye (one frame — use with screenshot)
    azahar_cam.py set_at  x y z       # override camera at (one frame)
    azahar_cam.py cam_freeze [--secs N] [ex ey ez ax ay az]
                              # spam-write eye+at at 100 Hz to hold view frozen.
                              # With no coords, reads current eye+at and freezes those.
                              # Ctrl-C or --secs N to stop.
    azahar_cam.py frame_actor <addr>  # teleport Link adjacent to actor, freeze Link, screenshot
    azahar_cam.py freeze_link x z [y] # spam-write Link pos to prevent player-update drift
    azahar_cam.py scan                # re-derive eye/at offsets (run after boot, in-game, link moving)

The "freeze_link" approach is: write Link's canonical Actor.world.pos in a tight loop at ~100 Hz.
The player update runs at 30 fps and reads the canonical pos for physics, so writing it at 3× the
frame rate keeps him approximately stationary (he may drift 0-3 units between writes). Combine with
a shot immediately after teleport for reliable actor framing.

The "cam_freeze" approach is analogous: spam-write BOTH eye and at at ~100 Hz so the camera update
(30 fps) cannot override the view. For screenshot use: freeze the view, then take the screenshot
immediately — the freeze holds while it runs. Add --secs 2 to auto-stop.
"""
import argparse, math, struct, sys, os, time, threading

sys.path.insert(0, os.path.join(os.path.dirname(__file__), "..", "..", "soh3d", "tools"))
from azahar_rpc import Rpc  # noqa: E402

GPLAYSTATE   = 0x0050AF34

# Verified camera field offsets (relative to PlayState base, world-space Vec3f):
CAM_EYE_OFF  = 0x1b8   # live camera eye (x,y,z)
CAM_AT_OFF   = 0x1c4   # live camera look-at (tracks Link head)
# Duplicate buffers (also written on override for consistency):
CAM_EYE_NEXT = 0x3f0
CAM_AT_NEXT  = 0x3e4

# Actor field offsets (from actor_layout.md):
ACTORCTX_OFF = 0x208C
A_NEXT       = 0x130
A_POS        = 0x08    # Vec3f (x,y,z) = Actor.world.pos


# ── helpers ──────────────────────────────────────────────────────────────────

def _r(r, play):
    """Return Rpc, PlayState ptr, Link head addr."""
    ps = r.read32(GPLAYSTATE)
    h = r.read32(ps + ACTORCTX_OFF + 0x0C + 2 * 8 + 4)  # PLAYER category head
    return ps, h


def read_eye(r, ps):
    return struct.unpack("<3f", r.read(ps + CAM_EYE_OFF, 12))


def read_at(r, ps):
    return struct.unpack("<3f", r.read(ps + CAM_AT_OFF, 12))


def write_eye(r, ps, x, y, z):
    data = struct.pack("<3f", x, y, z)
    r.write(ps + CAM_EYE_OFF, data)
    r.write(ps + CAM_EYE_NEXT, data)


def write_at(r, ps, x, y, z):
    data = struct.pack("<3f", x, y, z)
    r.write(ps + CAM_AT_OFF, data)
    r.write(ps + CAM_AT_NEXT, data)


def link_pos(r, h):
    return tuple(r.read_f32(h + A_POS + i * 4) for i in range(3))


def link_write_pos(r, h, x, y, z):
    r.write(h + A_POS,     struct.pack("<f", x))
    r.write(h + A_POS + 4, struct.pack("<f", y))
    r.write(h + A_POS + 8, struct.pack("<f", z))


def read_actor_pos(r, addr):
    data = r.read(addr + A_POS, 12)
    return struct.unpack("<3f", data)


# ── commands ─────────────────────────────────────────────────────────────────

def cmd_status(r):
    ps, h = _r(r, None)
    eye = read_eye(r, ps)
    at  = read_at(r, ps)
    lp  = link_pos(r, h)
    print(f"PlayState @ {ps:#010x}")
    print(f"Link      @ ({lp[0]:8.2f}, {lp[1]:8.2f}, {lp[2]:8.2f})")
    print(f"Camera eye: ({eye[0]:8.2f}, {eye[1]:8.2f}, {eye[2]:8.2f})")
    print(f"Camera at:  ({at[0]:8.2f},  {at[1]:8.2f},  {at[2]:8.2f})")
    eye_to_at = math.sqrt(sum((at[i]-eye[i])**2 for i in range(3)))
    print(f"Eye→At dist: {eye_to_at:.1f}")


def cmd_set_eye(r, x, y, z):
    ps, _ = _r(r, None)
    write_eye(r, ps, x, y, z)
    print(f"eye set to ({x:.1f},{y:.1f},{z:.1f})")


def cmd_set_at(r, x, y, z):
    ps, _ = _r(r, None)
    write_at(r, ps, x, y, z)
    print(f"at set to ({x:.1f},{y:.1f},{z:.1f})")


def cmd_frame_actor(r, actor_addr, shot_path=None, freeze_secs=1.5):
    """Teleport Link to be adjacent to actor_addr, freeze there, screenshot.

    Uses a SEPARATE RPC connection for the freeze thread so the main thread's
    screenshot call doesn't race the freeze writes on the same UDP socket.
    """
    ps, h = _r(r, None)
    ax, ay, az = read_actor_pos(r, actor_addr)
    print(f"Actor @ {actor_addr:#010x}: pos=({ax:.1f},{ay:.1f},{az:.1f})")
    # Place Link 120 units behind the actor (in -Z) so the actor is slightly in FRONT of Link.
    # The default camera sits behind Link, so it will look toward the actor's position.
    lx, ly, lz = ax, ay, az + 120
    print(f"Teleporting Link to ({lx:.1f},{ly:.1f},{lz:.1f})...")
    link_write_pos(r, h, lx, ly, lz)
    time.sleep(0.5)

    # Freeze Link using a separate RPC connection so it doesn't race the main socket
    stop_flag = threading.Event()
    from azahar_rpc import Rpc as _Rpc  # noqa: F811

    def freeze():
        fr = _Rpc()
        for pid, tid, _ in fr.processes():
            if tid == 0x0004000000033500:
                fr.select(pid)
                break
        ps2 = fr.read32(GPLAYSTATE)
        h2 = fr.read32(ps2 + ACTORCTX_OFF + 0x0C + 2 * 8 + 4)
        while not stop_flag.is_set():
            link_write_pos(fr, h2, lx, ly, lz)
            time.sleep(0.010)  # ~100 Hz  >  game update 30 Hz

    t = threading.Thread(target=freeze, daemon=True)
    t.start()
    time.sleep(0.3)  # Let freeze thread spin up before we rely on it

    # Wait for camera to settle on Link's new position
    time.sleep(freeze_secs)

    if shot_path is None:
        repo = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", "..", "soh3d"))
        shot_path = os.path.join(repo, "scratch", "screenshots",
                                 f"actor_{actor_addr:#010x}.png")
    os.makedirs(os.path.dirname(shot_path), exist_ok=True)

    # Screenshot via main connection (freeze thread uses its own)
    ppm = (shot_path[:-4] if shot_path.endswith(".png") else shot_path) + ".ppm"
    ok = r.screenshot(ppm)
    stop_flag.set()
    t.join(timeout=0.5)

    if ok:
        try:
            from PIL import Image
            Image.open(ppm).save(shot_path)
            try:
                os.unlink(ppm)
            except OSError:
                pass
            print(f"Screenshot -> {shot_path}")
        except ImportError:
            print(f"Screenshot (PPM) -> {ppm}  (PIL not available for PNG conversion)")
    else:
        print("Screenshot FAILED")

    # Unfreeze
    lp2 = link_pos(r, h)
    print(f"Link released at ({lp2[0]:.1f},{lp2[1]:.1f},{lp2[2]:.1f})")
    return shot_path if ok else None


def cmd_cam_freeze(r, eye_xyz=None, at_xyz=None, duration_secs=0.0):
    """Spam-write camera eye+at at ~100 Hz to hold the viewpoint frozen.

    If eye_xyz / at_xyz are None, reads the current live values and freezes those.
    duration_secs=0 → run until Ctrl-C.  duration_secs>0 → auto-stop after N secs.
    """
    ps, _ = _r(r, None)
    if eye_xyz is None:
        eye_xyz = read_eye(r, ps)
    if at_xyz is None:
        at_xyz = read_at(r, ps)
    ex, ey, ez = eye_xyz
    ax, ay, az = at_xyz
    print(f"cam_freeze: eye=({ex:.1f},{ey:.1f},{ez:.1f}) at=({ax:.1f},{ay:.1f},{az:.1f})")
    print("  Holding at 100 Hz — " + (f"auto-stop after {duration_secs:.1f}s" if duration_secs > 0 else "Ctrl-C to stop"))
    end = (time.time() + duration_secs) if duration_secs > 0 else None
    n = 0
    try:
        while True:
            ps2 = r.read32(GPLAYSTATE)
            write_eye(r, ps2, ex, ey, ez)
            write_at(r, ps2, ax, ay, az)
            n += 1
            time.sleep(0.008)  # ~125 Hz >> 30 fps game update
            if end is not None and time.time() >= end:
                break
    except KeyboardInterrupt:
        pass
    print(f"  cam_freeze stopped ({n} writes).")


def cmd_freeze_link(r, x, y, z, duration_secs=5.0):
    """Spam-write Link pos for `duration_secs` seconds to prevent player drift."""
    ps, h = _r(r, None)
    print(f"Freezing Link at ({x:.1f},{y:.1f},{z:.1f}) for {duration_secs:.1f}s...")
    end = time.time() + duration_secs
    n = 0
    while time.time() < end:
        link_write_pos(r, h, x, y, z)
        time.sleep(0.008)
        n += 1
    print(f"Unfreeze ({n} writes).")


def cmd_scan(r):
    """Re-derive camera eye/at offsets by walking Link and diffing PlayState Vec3f changes."""
    ps, h = _r(r, None)
    print(f"PlayState @ {ps:#010x}")
    print("This scan walks Link for ~4 seconds. Make sure Link is in an open area first.")
    print("Snapshot 1 (still)...")
    time.sleep(1.0)
    s1 = r.read(ps, 0x8000)
    p1 = link_pos(r, h)
    print(f"Link S1: {p1[0]:.1f},{p1[1]:.1f},{p1[2]:.1f}")

    print("Walking (90,0) 4s...")
    r.set_input(0, (90, 0)); time.sleep(4.0); r.set_input(0, None)
    time.sleep(1.0)

    s2 = r.read(ps, 0x8000)
    p2 = link_pos(r, h)
    moved_x = p2[0] - p1[0]
    print(f"Link S2: {p2[0]:.1f},{p2[1]:.1f},{p2[2]:.1f}  delta_x={moved_x:.1f}")

    if abs(moved_x) < 30:
        print("ERROR: Link barely moved. Ensure he's in an open area with no walls in +X.")
        return

    # Find Vec3f x-components that moved in the same direction as Link, but not by the same amount
    # (exact same = Link pos copy; less = camera tracking)
    hits = []
    n = (min(len(s1), len(s2)) // 4) * 4
    for i in range(0, n - 8, 4):
        x1, y1, z1 = struct.unpack_from("<3f", s1, i)
        x2, y2, z2 = struct.unpack_from("<3f", s2, i)
        if not all(math.isfinite(v) for v in (x1, y1, z1, x2, y2, z2)):
            continue
        dx = x2 - x1
        if dx * moved_x > 0 and abs(dx) > 15 and abs(dx) < abs(moved_x) * 1.3:
            if all(abs(v) < 5000 for v in (x2, y2, z2)):
                hits.append((ps + i, (x1, y1, z1), (x2, y2, z2), dx))

    print(f"\nTracking Vec3f candidates (moved same dir as Link, 15..130% magnitude):")
    print(f"{'addr':>12} {'off':>8}  {'S1 x,y,z':>30}  ->  {'S2 x,y,z':>30}  dx")
    for addr, (x1, y1, z1), (x2, y2, z2), dx in sorted(hits, key=lambda t: t[0])[:30]:
        exact_match = abs(abs(dx) - abs(moved_x)) < 5
        tag = " <- LINK-POS-COPY" if exact_match else ""
        print(f"  {addr:#010x} +{addr-ps:#8x}  ({x1:7.1f},{y1:7.1f},{z1:7.1f})  "
              f"({x2:7.1f},{y2:7.1f},{z2:7.1f})  dx={dx:7.1f}{tag}")

    print("\nNon-link-pos-copy candidates are likely eye/at offsets.")
    print(f"Expected: eye @ ps+{CAM_EYE_OFF:#x}, at @ ps+{CAM_AT_OFF:#x}")


# ── main ─────────────────────────────────────────────────────────────────────

def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd")

    sub.add_parser("status", help="Print camera eye/at and Link positions")

    p = sub.add_parser("set_eye", help="Override camera eye Vec3f (one frame)")
    p.add_argument("x", type=float); p.add_argument("y", type=float); p.add_argument("z", type=float)

    p = sub.add_parser("set_at", help="Override camera at Vec3f (one frame)")
    p.add_argument("x", type=float); p.add_argument("y", type=float); p.add_argument("z", type=float)

    p = sub.add_parser("frame_actor", help="Teleport Link adjacent to actor, freeze, screenshot")
    p.add_argument("actor_addr", type=lambda s: int(s, 0))
    p.add_argument("--shot", default=None, help="Output PNG path")
    p.add_argument("--freeze-secs", type=float, default=1.5,
                   help="Seconds to hold Link frozen while camera settles (default 1.5)")

    p = sub.add_parser("cam_freeze", help="Spam-write camera eye+at at 100 Hz to hold view frozen")
    p.add_argument("ex", type=float, nargs="?", default=None, help="Eye X (omit to use current)")
    p.add_argument("ey", type=float, nargs="?", default=None)
    p.add_argument("ez", type=float, nargs="?", default=None)
    p.add_argument("ax", type=float, nargs="?", default=None, help="At X (omit to use current)")
    p.add_argument("ay", type=float, nargs="?", default=None)
    p.add_argument("az", type=float, nargs="?", default=None)
    p.add_argument("--secs", type=float, default=0.0, help="Auto-stop after N seconds (0=until Ctrl-C)")

    p = sub.add_parser("freeze_link", help="Spam-write Link pos for N seconds")
    p.add_argument("x", type=float); p.add_argument("z", type=float)
    p.add_argument("y", type=float, nargs="?", default=0.0)
    p.add_argument("--secs", type=float, default=5.0)

    sub.add_parser("scan", help="Re-derive camera offsets by walking Link")

    args = ap.parse_args()

    r = Rpc()
    for pid, tid, _ in r.processes():
        if tid == 0x0004000000033500:
            r.select(pid)
            break

    if args.cmd == "status":
        cmd_status(r)
    elif args.cmd == "set_eye":
        cmd_set_eye(r, args.x, args.y, args.z)
    elif args.cmd == "set_at":
        cmd_set_at(r, args.x, args.y, args.z)
    elif args.cmd == "frame_actor":
        cmd_frame_actor(r, args.actor_addr, args.shot, args.freeze_secs)
    elif args.cmd == "cam_freeze":
        eye = (args.ex, args.ey, args.ez) if args.ex is not None else None
        at  = (args.ax, args.ay, args.az) if args.ax is not None else None
        cmd_cam_freeze(r, eye, at, args.secs)
    elif args.cmd == "freeze_link":
        cmd_freeze_link(r, args.x, args.y, args.z, args.secs)
    elif args.cmd == "scan":
        cmd_scan(r)
    else:
        ap.print_help()


if __name__ == "__main__":
    main()
