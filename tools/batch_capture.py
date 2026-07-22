#!/usr/bin/env python3
"""batch_capture.py — batch ground-truth capture for the OoT3D ⇄ SoH3D parity pipeline.

For every scene in SCENE_LIST this tool:
  1. Warps the oracle to the scene (link_ctl warp) and waits for the scene to load.
  2. Optionally teleports Link through a gate trigger (tp_after_warp) for scenes where
     the entrance spawns Link at a boundary rather than inside the destination.
  3. Dismisses any intro textbox (some scenes fire Saria/NPC dialogue on spawn).
  4. Runs oracle_export.py --json to capture the authoritative per-actor state.
  5. Takes a screenshot of the scene (top screen via Azahar RPC).
  6. Writes <out_dir>/<scene_name>/actors.json + scene.png.

Outputs live in scratch/oracle_batch/ (soh3d repo, gitignored), one subdirectory per scene.
Stream 4 (PARITY CHECK + PATCH) consumes these directly without re-driving the oracle.

## Usage
  # From soh3d repo root, while holding the oracle lock:
  flock scratch/.oraclelock python3 ../oot3d-decomp/tools/batch_capture.py
  flock scratch/.oraclelock python3 ../oot3d-decomp/tools/batch_capture.py --scenes kokiri links_house
  flock scratch/.oraclelock python3 ../oot3d-decomp/tools/batch_capture.py --force  # re-capture all
  flock scratch/.oraclelock python3 ../oot3d-decomp/tools/batch_capture.py --dry-run
  python3 ../oot3d-decomp/tools/batch_capture.py --status          # no oracle needed

## Adding scenes
  Add a SceneSpec to SCENE_LIST.  Fields:
  - entrance:   hex entrance index from entrance_table.h (verified to match OoT3D, N64-identical).
  - name:       short identifier → output subdirectory name.
  - scene_num:  OoT3D scene index at play+0x104 AFTER a successful warp.  Set to 0 to disable
                scene-verify (just wait settle_secs after warp).
  - textboxes:  B-presses to clear intro dialogue (0 = none).
  - settle:     seconds to wait after textbox dismiss before export.
  - tp_after_warp: optional (x, y, z) — teleport Link to this position after the initial warp
                lands (useful for "gate" entrances that spawn in an adjacent scene; the TP
                pushes Link through the scene-change trigger).  None = no TP needed.

## Entrance behaviour notes + SCENE NUMBER MAP
  Scene numbers (play+0x104) come from scene_table.h, NOT the static scene_actors/*.json scene_num
  field (those were N64-era values that diverge).  VERIFIED live values:

    scene 52  link_home (0x34)  Link's House            — warp 0xBB → 52 ✓
    scene 32  market_day (0x20) Market (Day)            — warp 0xB1 → 32 ✓
    scene 67  tokinoma (0x43)   Temple of Time          — warp 0x053 → 67 (inferred)
    scene 81  spot00 (0x51)     Hyrule Field            — warp 0xCD → 81 ✓
    scene 82  spot01 (0x52)     Kakariko Village        — warp 0xDB → 82 ✓
    scene 84  spot03 (0x54)     Zoras River             — warp 0xEA → 84 (inferred)
    scene 85  spot04 (0x55)     Kokiri Forest           — warp 0xEE → 85 ✓
    scene 86  spot05 (0x56)     Sacred Forest Meadow    — warp 0x0FC → 86 (inferred)
    scene 87  spot06 (0x57)     Lake Hylia              — warp 0x102 → 87 (inferred)
    scene 88  spot07 (0x58)     Zoras Domain            — warp 0x108 → 88 (inferred)
    scene 89  spot08 (0x59)     Zoras Fountain          — warp 0x10E → 89 (inferred)
    scene 90  spot09 (0x5A)     Gerudo Valley           — warp 0x117 → 90 (inferred)
    scene 91  spot10 (0x5B)     Lost Woods              — warp 0x11E → 91 (inferred)
    scene 93  spot12 (0x5D)     Gerudos Fortress        — warp 0x129 → 93 (inferred)
    scene 96  spot16 (0x60)     Death Mountain Trail    — warp 0x13D → 96 (inferred)
    scene 98  spot18 (0x62)     Goron City              — warp 0x14D → 98 (inferred)
    scene 99  spot20 (0x63)     Lon Lon Ranch           — warp 0x157 → 99 (inferred)

  Note: the static data/scene_actors/*.json files use a different (older/N64) scene_num scheme.
  DO NOT use those numbers for warp detection; use the values above.

  No known "gate" entrance issues with this corrected mapping (0xDB→82=Kakariko verified direct).

## Architecture (entrance_idx → scene_num mapping)
  OoT3D reuses N64 entrance indices (verified 0xBB, 0xEE).
  Source: Shipwright/soh/include/tables/entrance_table.h.
"""
import argparse, json, os, struct, sys, time
from pathlib import Path
from typing import NamedTuple, Optional, Tuple

# ── path setup ────────────────────────────────────────────────────────────────
_HERE = Path(__file__).resolve().parent
import os as _os, sys as _sys  # noqa: E402
_sys.path.insert(0, _os.path.dirname(_os.path.abspath(__file__)))
from zelda3d_paths import ZELDA3D_ROOT as _ZELDA3D_ROOT, zelda3d_tools as _zpaths  # noqa: E402
_SOH3D = _ZELDA3D_ROOT
sys.path.insert(0, str(_SOH3D / "tools"))
sys.path.insert(0, str(_HERE))

from azahar_rpc import Rpc              # noqa: E402
from oracle_export import export as _oracle_export  # noqa: E402
from link_ctl import warp as _warp, link_head as _link_head     # noqa: E402
from oracle_textbox import wait_no_textbox as _wait_no_textbox  # noqa: E402


# ── scene spec ────────────────────────────────────────────────────────────────

class SceneSpec(NamedTuple):
    entrance:      int
    name:          str
    scene_num:     int   # expected play+0x104 value after warp; 0 = skip check
    textboxes:     int   # legacy: was B-press count; now ignored — wait_no_textbox handles it
    settle:        float # settle time (seconds) after dismiss before export
    tp_after_warp: Optional[Tuple[float, float, float]] = None
    # If tp_after_warp is set: after the warp lands in the intermediate scene,
    # teleport Link to this (x, y, z) in the hope of crossing a gate trigger.
    # The tool then re-waits for scene_num.


# ── scene list ────────────────────────────────────────────────────────────────
# Ordered roughly game-chronologically (child story arc → adult scenes → dungeons last).
#
# KAKARIKO NOTE: all ENTR_KAKARIKO_VILLAGE_* entrances land in Hyrule Field (82), not Kakariko (93).
# Kakariko entries are marked tp_after_warp=None for now with scene_num=93 so they will be
# attempted + logged as "warp_timeout" until the gate trigger coords are mapped.
# Once we have the gate trigger coords, set tp_after_warp=(x, y, z) to enable.
SCENE_LIST = [
    # entrance    name                    scene  txt  settle   tp_after_warp
    # ── confirmed warp→scene mapping (verified live) ─────────────────────────
    SceneSpec(0x00BB, "links_house",          52,    0,   3.0),
    SceneSpec(0x00EE, "kokiri_forest",        85,    4,   3.5),   # Saria fired 4 boxes on first entry only; wait_no_textbox handles repeat visits
    SceneSpec(0x020D, "kokiri_forest_lower",  85,    0,   3.0),   # lower room (Deku Tree side)
    SceneSpec(0x00CD, "hyrule_field",         81,    0,   3.5),
    SceneSpec(0x00DB, "kakariko_village",     82,    0,   3.5),
    SceneSpec(0x00B1, "market_day",           32,    0,   3.5),
    # ── inferred (scene_num from scene_table.h 0xNN → decimal, entrance verified N64-identical) ──
    SceneSpec(0x011E, "lost_woods",           91,    0,   3.0),
    SceneSpec(0x00FC, "sacred_forest_meadow", 86,    0,   3.0),
    SceneSpec(0x0053, "temple_of_time",       67,    0,   3.0),
    SceneSpec(0x0157, "lon_lon_ranch",        99,    0,   3.5),
    SceneSpec(0x013D, "death_mountain_trail", 96,    0,   3.0),
    SceneSpec(0x014D, "goron_city",           98,    0,   3.0),
    SceneSpec(0x00EA, "zoras_river",          84,    0,   3.0),
    SceneSpec(0x0108, "zoras_domain",         88,    0,   3.0),
    SceneSpec(0x010E, "zoras_fountain",       89,    0,   3.0),
    SceneSpec(0x0102, "lake_hylia",           87,    0,   3.5),
    SceneSpec(0x0117, "gerudo_valley",        90,    0,   3.0),
    SceneSpec(0x0129, "gerudos_fortress",     93,    0,   3.5),
]


# ── RAM constants (from docs/ram_map.md + link_ctl.py) ───────────────────────
GPLAYSTATE   = 0x0050AF34
SCENE_OFF    = 0x104   # play+0x104: u16 current scene number
GAME_TID     = 0x0004000000033500


# ── helpers ───────────────────────────────────────────────────────────────────

def connect() -> Rpc:
    r = Rpc()
    for pid, tid, _ in r.processes():
        if tid == GAME_TID:
            r.select(pid)
            return r
    raise RuntimeError("OoT3D process not found — is Azahar running OoT3D?")


def current_scene(r: Rpc) -> int:
    ps = r.read32(GPLAYSTATE)
    sb = r.read(ps + SCENE_OFF, 2)
    return sb[0] | (sb[1] << 8)


def wait_for_scene(r: Rpc, expected: int, timeout: float = 18.0, poll: float = 0.4) -> bool:
    """Poll until scene_num == expected, or timeout. Returns True on success."""
    if expected == 0:
        return True
    end = time.time() + timeout
    while time.time() < end:
        sc = current_scene(r)
        if sc == expected:
            return True
        time.sleep(poll)
    return False


def link_teleport(r: Rpc, x: float, y: float, z: float) -> None:
    """Write Link's canonical Actor.world.pos (see link_ctl.tp)."""
    _, h = _link_head(r)
    r.write(h + 0x08, struct.pack("<f", x))
    r.write(h + 0x0C, struct.pack("<f", y))
    r.write(h + 0x10, struct.pack("<f", z))


def dismiss_textboxes(r: Rpc, count: int, hold: float = 0.15, gap: float = 0.5) -> None:
    """Dismiss any active textbox by pressing B until cleared (or no textbox present).

    The `count` parameter is kept for API compatibility but is no longer used as a hard
    limit — we now use oracle_textbox.wait_no_textbox() which polls the RAM heuristic and
    stops as soon as the textbox clears.  This is safe to call even when no textbox is
    present (it returns immediately in that case).
    """
    _wait_no_textbox(r, max_wait=15.0, press_interval=0.7, button="b", verbose=True)


def take_screenshot(r: Rpc, out_path: str) -> bool:
    """Take a screenshot → PNG. Returns True on success."""
    ppm = out_path.replace(".png", ".ppm")
    ok = r.screenshot(ppm)
    if not ok:
        return False
    try:
        from PIL import Image
        Image.open(ppm).save(out_path)
        try:
            os.unlink(ppm)
        except OSError:
            pass
        return True
    except ImportError:
        print("  [warn] PIL not available — screenshot saved as .ppm")
        return True
    except Exception as e:
        print(f"  [warn] screenshot conversion failed: {e}")
        return False


def capture_scene(r: Rpc, spec: SceneSpec, out_root: Path,
                  force: bool = False) -> dict:
    """Warp to scene, export oracle data, screenshot. Returns result dict."""
    scene_dir = out_root / spec.name
    json_path = scene_dir / "actors.json"
    png_path  = scene_dir / "scene.png"

    result = {
        "scene_name": spec.name,
        "entrance": hex(spec.entrance),
        "scene_num": spec.scene_num,
        "status": None,
        "actors": None,
        "screenshot": None,
    }

    if not force and json_path.exists() and png_path.exists():
        print(f"  [skip] {spec.name} — already captured (use --force to re-run)")
        result["status"] = "skipped"
        return result

    print(f"\n=== {spec.name} (entrance={hex(spec.entrance)}, expected_scene={spec.scene_num}) ===")

    # 1. Warp
    print(f"  Warping (entrance={hex(spec.entrance)})...")
    _warp(r, spec.entrance)

    # 2. If tp_after_warp: teleport Link to cross a gate trigger
    if spec.tp_after_warp is not None:
        # Wait for warp to settle in the intermediate scene before teleporting
        time.sleep(2.0)
        tx, ty, tz = spec.tp_after_warp
        print(f"  Gate-TP to ({tx:.0f},{ty:.0f},{tz:.0f})...")
        link_teleport(r, tx, ty, tz)

    # 3. Wait for scene to match expected
    if spec.scene_num != 0:
        print(f"  Waiting for scene {spec.scene_num}...", end=" ", flush=True)
        ok = wait_for_scene(r, spec.scene_num, timeout=18.0)
        actual = current_scene(r)
        if ok:
            print(f"loaded (scene={actual})")
        else:
            print(f"TIMEOUT — currently scene={actual}")
            result["status"] = "warp_timeout"
            return result
    else:
        time.sleep(4.0)

    # 4. Let scene finish loading (actors spawn)
    time.sleep(2.0)

    # 5. Dismiss textboxes
    if spec.textboxes > 0:
        print(f"  Dismissing {spec.textboxes} textbox(es)...")
        dismiss_textboxes(r, spec.textboxes)

    # 6. Settle
    print(f"  Settling {spec.settle}s...")
    time.sleep(spec.settle)

    # 7. Export oracle JSON
    print("  Exporting oracle actor data...")
    try:
        data = _oracle_export(r)
        scene_dir.mkdir(parents=True, exist_ok=True)
        with open(json_path, "w") as f:
            json.dump(data, f, indent=2)
        actor_count = len(data.get("actors", []))
        print(f"  -> actors.json ({actor_count} actors)")
        result["actors"] = actor_count
    except Exception as e:
        print(f"  [ERROR] oracle export failed: {e}")
        result["status"] = f"export_error: {e}"
        return result

    # 8. Screenshot
    print("  Taking screenshot...")
    scene_dir.mkdir(parents=True, exist_ok=True)
    ok = take_screenshot(r, str(png_path))
    if ok:
        print(f"  -> scene.png")
        result["screenshot"] = "ok"
    else:
        print("  [warn] screenshot failed (non-fatal)")
        result["screenshot"] = "failed"

    result["status"] = "ok"
    return result


# ── main ──────────────────────────────────────────────────────────────────────

def main():
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--scenes", nargs="*", metavar="NAME",
                    help="Only capture these scene names (default: all)")
    ap.add_argument("--force", action="store_true",
                    help="Re-capture even if actors.json + scene.png already exist")
    ap.add_argument("--dry-run", action="store_true",
                    help="Print what would be captured without driving the oracle")
    ap.add_argument("--status", action="store_true",
                    help="Print capture status of all scenes (no oracle needed) then exit")
    ap.add_argument("--out", metavar="DIR", default=None,
                    help="Output root dir (default: <soh3d>/scratch/oracle_batch/)")
    args = ap.parse_args()

    # Determine output root
    if args.out:
        out_root = Path(args.out)
    else:
        out_root = _SOH3D / "scratch" / "oracle_batch"
    out_root.mkdir(parents=True, exist_ok=True)
    print(f"Output root: {out_root}")

    # --status: print capture status for all scenes without oracle, then exit
    if args.status:
        ok_n = skip_n = miss_n = 0
        for spec in SCENE_LIST:
            json_path = out_root / spec.name / "actors.json"
            png_path  = out_root / spec.name / "scene.png"
            j = json_path.exists()
            p = png_path.exists()
            if j:
                count = len(json.load(open(json_path)).get("actors", []))
                status = "ok" if p else "ok(no-png)"
                ok_n += 1
            else:
                count = None
                status = "MISSING"
                miss_n += 1
            actors_str = f"{count:>3} actors" if count is not None else "       "
            print(f"  {spec.name:<28} {status:<12} {actors_str}")
        print(f"\nTotal: {ok_n} captured, {miss_n} missing")
        return

    # Filter scene list
    scene_filter = set(args.scenes) if args.scenes else None
    scenes = list(SCENE_LIST)
    if scene_filter:
        scenes = [s for s in scenes if s.name in scene_filter]
        missing = scene_filter - {s.name for s in scenes}
        if missing:
            print(f"[warn] Unknown scene names: {', '.join(sorted(missing))}")
            print(f"Known: {', '.join(s.name for s in SCENE_LIST)}")

    if not scenes:
        print("[error] No scenes to capture.")
        sys.exit(1)

    if args.dry_run:
        print(f"\nDry run — would capture {len(scenes)} scene(s):")
        for sp in scenes:
            tp_str = f"  gate-tp={sp.tp_after_warp}" if sp.tp_after_warp else ""
            print(f"  {sp.name:<28} entrance={hex(sp.entrance):<8} scene={sp.scene_num:<4}"
                  f"  txt={sp.textboxes}  settle={sp.settle}s{tp_str}")
        return

    # Connect to oracle
    print("Connecting to Azahar oracle (RPC :45987)...")
    r = connect()
    init_scene = current_scene(r)
    print(f"Connected. Current scene: {init_scene}")

    # Run batch
    results = []
    ok_count = 0
    skip_count = 0
    fail_count = 0

    for spec in scenes:
        res = capture_scene(r, spec, out_root, force=args.force)
        results.append(res)
        if res["status"] == "ok":
            ok_count += 1
        elif res["status"] == "skipped":
            skip_count += 1
        else:
            fail_count += 1

    # Write summary — merge new results into full summary so partial runs don't lose old data.
    # The summary always covers ALL scenes in SCENE_LIST.
    summary_path = out_root / "batch_summary.json"
    # Load existing summary keyed by scene_name
    existing: dict = {}
    if summary_path.exists():
        try:
            old = json.load(open(summary_path))
            for entry in old.get("scenes", []):
                existing[entry["scene_name"]] = entry
        except Exception:
            pass
    # Merge: new results overwrite old for the scenes we just ran.
    # "skipped" = already on disk; treat as "ok" in the summary by reading disk.
    for r2 in results:
        if r2["status"] == "skipped":
            json_path = out_root / r2["scene_name"] / "actors.json"
            png_path  = out_root / r2["scene_name"] / "scene.png"
            if json_path.exists():
                r2 = dict(r2)
                r2["status"] = "ok"
                r2["actors"] = len(json.load(open(json_path)).get("actors", []))
                r2["screenshot"] = "ok" if png_path.exists() else "failed"
        existing[r2["scene_name"]] = r2
    # Rebuild full list in SCENE_LIST order; fill gaps from disk for scenes not run this time
    full_results = []
    for spec in SCENE_LIST:
        if spec.name in existing:
            full_results.append(existing[spec.name])
        else:
            # Check disk directly
            json_path = out_root / spec.name / "actors.json"
            png_path  = out_root / spec.name / "scene.png"
            if json_path.exists():
                count = len(json.load(open(json_path)).get("actors", []))
                full_results.append({
                    "scene_name": spec.name, "entrance": hex(spec.entrance),
                    "scene_num": spec.scene_num, "status": "ok",
                    "actors": count, "screenshot": "ok" if png_path.exists() else "failed",
                })
            else:
                full_results.append({
                    "scene_name": spec.name, "entrance": hex(spec.entrance),
                    "scene_num": spec.scene_num, "status": "missing",
                    "actors": None, "screenshot": None,
                })
    full_ok   = sum(1 for r2 in full_results if r2["status"] == "ok")
    full_skip = sum(1 for r2 in full_results if r2["status"] == "skipped")
    full_fail = sum(1 for r2 in full_results if r2["status"] not in ("ok", "skipped"))
    summary = {
        "captured": full_ok,
        "skipped":  full_skip,
        "failed":   full_fail,
        "scenes":   full_results,
    }
    with open(summary_path, "w") as f:
        json.dump(summary, f, indent=2)

    print(f"\n=== Run complete: {ok_count} captured, {skip_count} skipped, {fail_count} failed ===")
    print(f"Full summary ({full_ok}/{len(SCENE_LIST)} scenes captured): {summary_path}")
    if fail_count:
        failed = [r2 for r2 in results if r2["status"] not in ("ok", "skipped")]
        print("Failed scenes (this run):")
        for r2 in failed:
            print(f"  {r2['scene_name']}: {r2['status']}")


if __name__ == "__main__":
    main()
