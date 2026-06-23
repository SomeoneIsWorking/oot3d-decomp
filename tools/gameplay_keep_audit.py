#!/usr/bin/env python3
"""gameplay_keep_audit.py — audit OoT3D ZAR mesh coverage for GAMEPLAY_KEEP-family actors.

Context
-------
parity_report.py identifies 23 "true gap" actor spawns across 8 scenes that have
NO OoT3D replacement in SoH3D.  All 23 come from actors whose ActorInit declares
OBJECT_GAMEPLAY_KEEP (id=1), OBJECT_GAMEPLAY_FIELD_KEEP (id=2),
OBJECT_GAMEPLAY_DANGEON_KEEP (id=3), or a handful of other shared/scene object banks.

These shared-bank ZARs (zelda_keep.zar, zelda_field_keep.zar, zelda_dangeon_keep.zar,
and scene-object ZARs) each contain MANY CMB meshes for MANY different actor types.
SoH3D's current kSoH3dObjectZars entry for object IDs 1–3 is NULL — the whole bank
is unmapped — so every actor that declares one of these is counted as a gap.

This tool answers:
  "Does the gap actor have a dedicated CMB in the relevant ZAR?"
  "Is it actionable (has a mesh → can be wired up) or permanently N64-only (no mesh)?"

For each of the 23 gap actors it reports:
  - which ZAR to look in (derived from declared objectId)
  - which CMB(s) inside that ZAR plausibly belong to this actor (heuristic name match)
  - whether any CMB was found (→ ACTIONABLE) or not (→ N64-only / no dedicated mesh)
  - suggested SoH3D path forward

Usage
-----
  cd .
  OOT3D_ROM=/path/to/oot3d.3ds python3 tools/gameplay_keep_audit.py
  OOT3D_ROM=<rom-dir>/"Legend of Zelda, The - Ocarina of Time 3D (USA) (En,Fr,Es).3ds" \\
      python3 tools/gameplay_keep_audit.py
  python3 tools/gameplay_keep_audit.py --json scratch/gameplay_keep_audit.json
  python3 tools/gameplay_keep_audit.py --actionable-only

Data sources (all static — no oracle, no soh build):
  - OoT3D ROM (set OOT3D_ROM env; required to read ZAR contents)
  - <soh3d>/Shipwright/soh/include/tables/actor_table.h
  - <soh3d>/Shipwright/soh/include/tables/object_table.h
  - <soh3d>/Shipwright/soh/src/overlays/actors/...z_*.c   (ActorInit objectId)
  - tools/parity_report.py (uncovered actor list)
"""
from __future__ import annotations
import argparse
import json
import os
import re
import sys
from typing import Optional

# ---------------------------------------------------------------------------
# Paths
# ---------------------------------------------------------------------------
TOOLS_DIR = os.path.dirname(os.path.abspath(__file__))
SOH3D_REPO = os.environ.get("SOH3D_REPO",
                            os.path.join(os.path.dirname(TOOLS_DIR), "..", "soh3d"))
OOT3D_ROM  = os.environ.get("OOT3D_ROM", "")

# Shared-bank object IDs and their ZAR paths inside the OoT3D RomFS
SHARED_OBJECT_ZARS: dict[int, list[str]] = {
    1: ["/actor/zelda_keep.zar"],                # OBJECT_GAMEPLAY_KEEP
    2: ["/actor/zelda_field_keep.zar"],          # OBJECT_GAMEPLAY_FIELD_KEEP
    3: ["/actor/zelda_dangeon_keep.zar"],        # OBJECT_GAMEPLAY_DANGEON_KEEP
}

# Additional per-actor ZAR overrides: for actors whose dedicated ZAR lives outside
# the keep banks.  Maps actorName → [zarPaths to search].
ACTOR_EXTRA_ZARS: dict[str, list[str]] = {
    # En_Item00 lives in src/code/ (not overlays/), so load_actor_object_map misses it.
    # Its ActorInit declares OBJECT_GAMEPLAY_KEEP (id=1).  item00/ subtree in zelda_keep.zar
    # has all the dropped-item drop meshes (rupee, heart, bomb, arrow, key, etc.).
    "En_Item00":        ["/actor/zelda_keep.zar"],
    "En_Trap":          ["/actor/dk_trap.zar"],
    "En_Torch":         ["/actor/zelda_keep.zar"],           # torch4/ subtree inside keep
    "Bg_Treemouth":     ["/scene/spot04.zar"],               # world geo, not actor ZAR
    "Bg_Haka_Megane":   ["/actor/zelda_haka_objects.zar",   # m_HADinv* / m_HADsec* blocks
                         "/actor/zelda_haka.zar"],
    "Bg_Hidan_Curtain": ["/actor/zelda_hidan_objects.zar"], # OB07_curtain — Fire Temple
    "En_Fish":          ["/actor/zelda_keep.zar",            # fish/model/fishsmall.cmb
                         "/actor/zelda_fishing.zar",
                         "/actor/zelda_gi_fish.zar"],
    "Obj_Switch":       ["/actor/zelda_dangeon_keep.zar",
                         "/actor/zelda_lightswitch.zar"],
    "En_Tubo_Trap":     ["/actor/zelda_dangeon_keep.zar"],
}

# For each gap actor, optionally provide CMB-name search keywords to make the
# heuristic match more precise.  Defaults to actor's short name fragments.
ACTOR_CMB_HINTS: dict[str, list[str]] = {
    # Bg_Haka_Megane = Shadow Temple "glasses" actor — invisible-platform revealer.
    # The haka_objects ZAR has m_HADinv* (invisible) and m_HADsec* (secret) floor blocks,
    # which are the meshes this actor reveals.
    "Bg_Haka_Megane": ["m_HADinv", "m_HADsec", "m_HADcoin", "m_Hinv"],
    # Obj_Comb = grass comb / patch actor in field scenes.  field_keep has hatisu (grass)
    # and grass05 (tall grass patch) meshes.
    "Obj_Comb":       ["hatisu", "grass05"],
    # Obj_Mure = crowd actor (small group of objects).  Uses kusa/obj_ha grass clumps and
    # objects/model/* pebble/stump props from zelda_keep.
    "Obj_Mure":       ["obj_ha", "field_kusa", "objects/model/field_"],
    # Bg_Hidan_Curtain = Fire Temple curtain.  zelda_hidan_objects has OB07_curtain.
    "Bg_Hidan_Curtain": ["curtain", "OB07_curtain"],
    # Demo_Effect is a pure particle-effect actor — no static mesh; classify via INVISIBLE.
    "Demo_Effect":    [],
    # Obj_Roomtimer = pure logic timer — no mesh.
    "Obj_Roomtimer":  [],
    "En_Fish":        ["fish"],
    "Obj_Switch":     ["switch"],
    "En_Trap":        ["trap"],
    "En_Tubo_Trap":   ["tubo"],
    "En_Torch":       ["torch4"],
    # Obj_Mure3 = same crowd mechanic as Obj_Mure (different params variant).
    "Obj_Mure3":      ["obj_ha", "field_kusa", "objects/model/field_"],
    "Bg_Treemouth":   ["tree", "mouth", "moriboss", "forest", "boss"],
    "En_Item00":      ["item00", "drop_gi"],
}

# Actors that are PURELY logic/trigger/effect with no static mesh — flagged as
# N64-only not because the 3DS lacks the asset but because the visual is ephemeral
# or the actor is invisible.
INVISIBLE_ACTORS: set[str] = {
    "Demo_Effect",    # particle-effect actor, no persistent mesh
    "Obj_Roomtimer",  # pure timer logic, no model
}

# ---------------------------------------------------------------------------
# ZAR / ROM utilities (import from soh3d/tools; fall back gracefully)
# ---------------------------------------------------------------------------

def _load_soh3d_tools():
    """Add soh3d/tools to path so we can reuse ctr_romfs.py + zar.py."""
    soh_tools = os.path.join(SOH3D_REPO, "tools")
    if soh_tools not in sys.path:
        sys.path.insert(0, soh_tools)


def _open_rom(rom_path: str):
    if not rom_path:
        return None
    _load_soh3d_tools()
    try:
        from ctr_romfs import CtrRom
        return CtrRom(rom_path)
    except Exception as e:
        print(f"WARNING: could not open ROM {rom_path}: {e}", file=sys.stderr)
        return None


def _read_zar(rom, zar_path: str):
    """Read a ZAR from the ROM and return (Zar, cmb_list) or (None, [])."""
    if rom is None:
        return None, []
    _load_soh3d_tools()
    from zar import Zar
    try:
        fe = rom.get(zar_path)
    except (KeyError, AttributeError):
        return None, []
    try:
        data = rom.read(fe)
        z = Zar(data)
        cmbs = [f.name for f in z.files if f.type == "cmb"]
        return z, cmbs
    except Exception as e:
        print(f"WARNING: could not parse {zar_path}: {e}", file=sys.stderr)
        return None, []


# ---------------------------------------------------------------------------
# parity_report integration (import the uncovered actor list)
# ---------------------------------------------------------------------------

def _get_uncovered_actors() -> list[dict]:
    """Return the list of uncovered actor entries from parity_report."""
    sys.path.insert(0, TOOLS_DIR)
    import parity_report as pr

    obj_zars    = pr.load_object_zars(pr.OBJECT_ZARS_INC)
    actor_names = pr.load_actor_names(pr.ACTOR_TABLE_H)
    obj_names   = pr.load_object_names(pr.OBJECT_TABLE_H)
    pr.patch_smtable_from_actor_table(actor_names)
    smtable_ids = set(pr.SMTABLE_COVERED.keys())
    special_ids = pr.build_special_ids(actor_names)
    no_model_ids = set(pr.NO_MODEL_ACTORS)
    actor_obj_map = pr.load_actor_object_map(pr.ACTORS_DIR, pr.ACTOR_TABLE_H, obj_names)

    scenes = pr.load_scene_files(pr.DATA_DIR)
    report = pr.build_report(scenes, obj_zars, smtable_ids, special_ids,
                             no_model_ids, actor_names, actor_obj_map)

    # Deduplicated per-actor-ID rows that have at least one uncovered scene
    result = []
    seen: set = set()
    for a in report["actor_gap_summary"]:
        if not a["uncovered_in"]:
            continue
        aid = a["id"]
        if aid in seen:
            continue
        seen.add(aid)
        oid = actor_obj_map.get(aid)
        result.append({
            "id": aid,
            "name": a["name"],
            "objectId": oid,
            "uncovered_scenes": a["uncovered_in"],
            "covered_scenes":   a["covered_in"],
        })
    return result


# ---------------------------------------------------------------------------
# Core audit logic
# ---------------------------------------------------------------------------

def _short_name(actor_name: str) -> str:
    """En_Fish → fish, Bg_Haka_Megane → haka_megane, etc."""
    parts = re.split(r"_", actor_name, maxsplit=1)
    return parts[1].lower() if len(parts) > 1 else actor_name.lower()


def _cmb_matches(cmb_name: str, keywords: list[str]) -> bool:
    low = cmb_name.lower()
    return any(kw.lower() in low for kw in keywords)


def audit_actor(actor: dict, rom) -> dict:
    """Return an audit entry for one gap actor."""
    aid        = actor["id"]
    name       = actor["name"]
    oid        = actor["objectId"]
    scenes_gap = actor["uncovered_scenes"]

    # Determine which ZARs to probe
    zar_paths: list[str] = []
    if oid in SHARED_OBJECT_ZARS:
        zar_paths.extend(SHARED_OBJECT_ZARS[oid])
    if name in ACTOR_EXTRA_ZARS:
        for z in ACTOR_EXTRA_ZARS[name]:
            if z not in zar_paths:
                zar_paths.append(z)
    # If no known ZAR, note as unknown
    if not zar_paths:
        zar_paths = ["(unknown)"]

    # Build keywords for CMB name matching
    keywords = ACTOR_CMB_HINTS.get(name, [_short_name(name)])

    # Scan each ZAR for matching CMBs
    per_zar_results: list[dict] = []
    matched_cmbs: list[str] = []
    for zpath in zar_paths:
        if zpath.startswith("("):
            per_zar_results.append({"zar": zpath, "cmbs": [], "matched": [],
                                    "zar_found": False})
            continue
        _, all_cmbs = _read_zar(rom, zpath)
        matched = [c for c in all_cmbs if _cmb_matches(c, keywords)]
        per_zar_results.append({
            "zar":       zpath,
            "cmbs":      all_cmbs,
            "matched":   matched,
            "zar_found": all_cmbs is not None and len(all_cmbs) >= 0,
        })
        matched_cmbs.extend(matched)

    is_invisible = name in INVISIBLE_ACTORS
    is_actionable = bool(matched_cmbs) and not is_invisible

    # Classification
    if is_invisible:
        classification = "N64-only (invisible/effect actor — no mesh)"
        action = "No 3DS mesh replacement needed; actor is purely logic/effect."
    elif not matched_cmbs:
        classification = "N64-only (no matching CMB found in any ZAR)"
        action = ("No dedicated 3DS mesh detected.  Verify manually by checking "
                  "the ZAR contents.  May use a generic mesh or be permanently N64-only.")
    else:
        n = len(matched_cmbs)
        zar0 = per_zar_results[0]["zar"] if per_zar_results else "?"
        classification = f"ACTIONABLE ({n} candidate CMB{'s' if n>1 else ''} found)"
        action = (f"Wire up {zar0!r} in soh3d_object_zars.inc for objectId={oid}, "
                  f"then add a per-actor CMB selector (similar to SOH3D_AUTO) that picks "
                  f"the correct mesh from: {matched_cmbs[:4]}")

    return {
        "id":               aid,
        "name":             name,
        "objectId":         oid,
        "uncovered_scenes": scenes_gap,
        "zar_paths":        zar_paths,
        "per_zar":          per_zar_results,
        "matched_cmbs":     matched_cmbs,
        "is_actionable":    is_actionable,
        "classification":   classification,
        "action":           action,
    }


# ---------------------------------------------------------------------------
# CLI output
# ---------------------------------------------------------------------------

def print_report(results: list[dict], actionable_only: bool = False,
                 rom_available: bool = True):
    total       = len(results)
    actionable  = [r for r in results if r["is_actionable"]]
    n64_only    = [r for r in results if not r["is_actionable"]]

    print("=" * 76)
    print("  OoT3D gameplay_keep / shared-bank actor mesh audit")
    print("=" * 76)
    if not rom_available:
        print("  WARNING: No ROM provided (OOT3D_ROM unset) — ZAR contents not available.")
        print("  CMB match results will be empty. Set OOT3D_ROM to a decrypted .3ds image.")
        print()
    print(f"  Total gap actors:  {total}")
    print(f"  ACTIONABLE:        {len(actionable)}  (OoT3D mesh found → can wire up)")
    print(f"  N64-only:          {len(n64_only)}   (no dedicated OoT3D mesh found)")
    print()

    rows = actionable if actionable_only else results
    for r in rows:
        mark = "ACTION" if r["is_actionable"] else "N64   "
        gap_count = len(r["uncovered_scenes"])
        zars_str = ", ".join(r["zar_paths"])
        print(f"[{mark}]  id={r['id']:4d}  {r['name']:<24}  obj={r['objectId']!r:<4}  "
              f"gaps={gap_count}  zar={zars_str}")
        print(f"        {r['classification']}")
        if r["matched_cmbs"] and r["is_actionable"]:
            for c in r["matched_cmbs"][:4]:
                print(f"          CMB: {c}")
            if len(r["matched_cmbs"]) > 4:
                print(f"          ... +{len(r['matched_cmbs'])-4} more")
        if not actionable_only or r["is_actionable"]:
            print(f"        => {r['action']}")
        print()

    print("-" * 76)
    print("ACTIONABLE actors (Stream 4 priority order by gap count):")
    by_gap = sorted(actionable, key=lambda r: -len(r["uncovered_scenes"]))
    for r in by_gap:
        print(f"  id={r['id']:4d}  {r['name']:<24}  gaps={len(r['uncovered_scenes'])}")
        if r["matched_cmbs"]:
            best = r["matched_cmbs"][0]
            print(f"           CMB → {best!r}")
    print()
    print("N64-only actors (no OoT3D mesh — low/no priority):")
    for r in n64_only:
        print(f"  id={r['id']:4d}  {r['name']:<24}  {r['classification']}")


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(
        description=__doc__,
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    ap.add_argument("--json", metavar="PATH",
                    help="write full audit JSON to PATH (- for stdout)")
    ap.add_argument("--actionable-only", action="store_true",
                    help="show only actors with found CMBs (omit N64-only)")
    args = ap.parse_args()

    rom_path = OOT3D_ROM
    if not rom_path:
        # Try the .env sourcing path used by game scripts
        env_file = os.path.join(os.path.dirname(TOOLS_DIR), ".env")
        if os.path.exists(env_file):
            for line in open(env_file):
                m = re.match(r'export\s+SOH3D_3DS_ROM=["\']?([^"\']+)["\']?', line.strip())
                if m:
                    rom_path = m.group(1).strip()
                    break

    rom = _open_rom(rom_path)
    rom_available = rom is not None

    uncovered = _get_uncovered_actors()
    results   = [audit_actor(a, rom) for a in uncovered]

    if args.json:
        payload = json.dumps(results, indent=2)
        if args.json == "-":
            print(payload)
        else:
            os.makedirs(os.path.dirname(os.path.abspath(args.json)), exist_ok=True)
            open(args.json, "w").write(payload)
            print(f"Wrote {args.json}")

    print_report(results, actionable_only=args.actionable_only,
                 rom_available=rom_available)


if __name__ == "__main__":
    main()
