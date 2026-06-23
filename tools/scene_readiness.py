#!/usr/bin/env python3
"""scene_readiness.py — Scene readiness checklist cross-reference tool.

For the top-N lighting-diverged scenes, cross-references:
  1. Lighting divergence score (data/lighting_parity_report.md)
  2. Actor types present in the scene (data/scene_actors/*.json)
  3. Whether each actor has a verified OoT3D ZAR mapping
  4. Whether each ZAR has CSAB animations in the catalog
  5. Whether the ZAR has animmap entries (N64→CSAB binding)

Outputs a ranked Markdown table suitable for Stream 4 to pick the
highest-leverage scene to fix next (lighting + actor coverage together).

Usage
-----
  python3 tools/scene_readiness.py [--top N] [--out data/scene_readiness.md]

Defaults: top 30 scenes, output to data/scene_readiness.md.

Data sources (all static, no oracle needed):
  - data/lighting_parity_report.md                 (this repo)
  - data/scene_actors/<scene>.json                 (this repo)
  - ../soh3d/tools/skeldata/animmap.json            (soh3d repo)
  - ../soh3d/tools/skeldata/csab_catalog.json       (soh3d repo — from oot3d-decomp)
    OR tools/skeldata/csab_catalog.json             (oot3d-decomp copy)
  - ../soh3d/Shipwright/soh/src/soh3d/soh3d_object_zars.inc
  - ../soh3d/Shipwright/soh/src/soh3d/soh3d_animmap.inc
  - ../soh3d/Shipwright/soh/include/tables/actor_table.h
"""
from __future__ import annotations

import argparse
import json
import os
import re
import sys

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SOH3D_REPO = os.path.normpath(os.path.join(REPO, "..", "soh3d"))

DATA_DIR          = os.path.join(REPO, "data")
SCENE_ACTORS_DIR  = os.path.join(DATA_DIR, "scene_actors")
LIGHTING_REPORT   = os.path.join(DATA_DIR, "lighting_parity_report.md")

ACTOR_TABLE_H     = os.path.join(SOH3D_REPO, "Shipwright", "soh", "include",
                                  "tables", "actor_table.h")
OBJECT_ZARS_INC   = os.path.join(SOH3D_REPO, "Shipwright", "soh", "src", "soh3d",
                                  "soh3d_object_zars.inc")
ANIMMAP_INC       = os.path.join(SOH3D_REPO, "Shipwright", "soh", "src", "soh3d",
                                  "soh3d_animmap.inc")
ANIMMAP_JSON      = os.path.join(SOH3D_REPO, "tools", "skeldata", "animmap.json")

# csab_catalog.json may be in either repo
CSAB_CATALOG_CANDIDATES = [
    os.path.join(SOH3D_REPO, "tools", "skeldata", "csab_catalog.json"),
    os.path.join(REPO, "tools", "skeldata", "csab_catalog.json"),
]


# ---------------------------------------------------------------------------
# Parsers
# ---------------------------------------------------------------------------

def parse_lighting_report(path: str) -> list[dict]:
    """Parse the lighting parity report MD table.

    Returns list of dicts: {n64_key, oot3d_key, score, rank}.
    """
    rows = []
    with open(path) as f:
        for line in f:
            m = re.match(
                r"\|\s*(\d+)\s*\|\s*`(\S+)`\s*\|\s*`(\S+)`\s*\|\s*([\d.]+)",
                line,
            )
            if m:
                rows.append({
                    "rank": int(m.group(1)),
                    "n64_key": m.group(2),
                    "oot3d_key": m.group(3),
                    "score": float(m.group(4)),
                })
    return rows


def parse_actor_table(path: str) -> dict[int, str]:
    """Parse actor_table.h → {actor_id: actor_name}.

    Only DEFINE_ACTOR and DEFINE_ACTOR_INTERNAL are named; UNSET entries are
    recorded as "unset_<id>" so we can still count them.
    """
    id_to_name: dict[int, str] = {}
    with open(path) as f:
        for line in f:
            # /* 0x000A */ DEFINE_ACTOR(En_Box, ACTOR_EN_BOX, ...)
            m = re.match(
                r"/\*\s*0x([0-9A-Fa-f]+)\s*\*/\s*DEFINE_ACTOR(?:_INTERNAL)?\((\w+),",
                line,
            )
            if m:
                actor_id = int(m.group(1), 16)
                name = m.group(2)
                id_to_name[actor_id] = name
                continue
            m = re.match(
                r"/\*\s*0x([0-9A-Fa-f]+)\s*\*/\s*DEFINE_ACTOR_UNSET\((\w+)\)",
                line,
            )
            if m:
                actor_id = int(m.group(1), 16)
                id_to_name[actor_id] = f"unset_{m.group(1).lower()}"
    return id_to_name


def parse_object_zars(path: str) -> dict[int, str | None]:
    """Parse soh3d_object_zars.inc → {object_id: zar_path_or_None}."""
    obj_to_zar: dict[int, str | None] = {}
    with open(path) as f:
        for line in f:
            # /* 0x0007 OBJECT_OKUTA    */ "/actor/zelda_oc2.zar",
            m = re.match(r"\s*/\*\s*0x([0-9A-Fa-f]+)", line)
            if not m:
                continue
            obj_id = int(m.group(1), 16)
            zar_m = re.search(r'"(/actor/[^"]+\.zar)"', line)
            obj_to_zar[obj_id] = zar_m.group(1) if zar_m else None
    return obj_to_zar


def parse_animmap_zars(path: str) -> set[str]:
    """Return the set of ZAR paths that appear in soh3d_animmap.inc."""
    zars: set[str] = set()
    with open(path) as f:
        for line in f:
            # // ---- /actor/zelda_am.zar (object_am) ----
            m = re.search(r"//\s*----\s*(/actor/\S+\.zar)", line)
            if m:
                zars.add(m.group(1))
    return zars


def load_csab_catalog(candidates: list[str]) -> dict[str, dict]:
    """Load csab_catalog.json from first found path → {zar_path: {...}}."""
    for p in candidates:
        if os.path.exists(p):
            with open(p) as f:
                data = json.load(f)
            return data.get("objects", data)
    return {}


def load_animmap_json(path: str) -> dict[str, dict]:
    """Load animmap.json → {zar_path: {...rows...}}."""
    if not os.path.exists(path):
        return {}
    with open(path) as f:
        return json.load(f)


def parse_scene_actors(path: str) -> dict[int, int]:
    """Parse scene_actors/<scene>.json → {actor_id: spawn_count}."""
    with open(path) as f:
        data = json.load(f)
    counts: dict[int, int] = {}
    for room in data.get("rooms", []):
        for actor in room.get("actors", []):
            aid = actor["id"]
            counts[aid] = counts.get(aid, 0) + 1
    # Also count spawn_points (Link spawns — skip actor_id 0)
    # transition actors can be meaningful too
    for ta in data.get("transition_actors", []):
        aid = ta["id"]
        if aid > 0:
            counts[aid] = counts.get(aid, 0) + 1
    return counts


# ---------------------------------------------------------------------------
# Actor→Object mapping via overlay sources
# ---------------------------------------------------------------------------

def build_actor_to_object_map(overlays_dir: str, actor_id_to_name: dict[int, str]) -> dict[int, int]:
    """Scan overlay source files to extract actor_id → object_id.

    For each actor name, looks for its z_<name>.c (lowercased) and reads the
    ActorInit struct's objectId field.
    """
    # Build name -> actor_id reverse map for lookup
    name_to_actor: dict[str, int] = {v: k for k, v in actor_id_to_name.items()
                                      if not v.startswith("unset_")}

    # Object name enum → numeric id: parse the object_table.h
    # overlays_dir = .../Shipwright/soh/src/overlays/actors
    # object_table.h is at .../Shipwright/soh/include/tables/object_table.h
    obj_table_h = os.path.normpath(os.path.join(
        overlays_dir, "..", "..", "..", "include", "tables", "object_table.h"
    ))
    obj_name_to_id: dict[str, int] = {}
    if os.path.exists(obj_table_h):
        with open(obj_table_h) as f:
            for line in f:
                # /* 0x0013 */ DEFINE_OBJECT(object_niw, OBJECT_NIW)
                m = re.match(
                    r"\s*/\*\s*0x([0-9A-Fa-f]+)\s*\*/\s*DEFINE_OBJECT\([^,]+,\s*(\w+)\)",
                    line,
                )
                if m:
                    obj_name_to_id[m.group(2)] = int(m.group(1), 16)
                    continue
                # /* 0x0000 */ DEFINE_OBJECT_UNSET(OBJECT_INVALID)
                m = re.match(
                    r"\s*/\*\s*0x([0-9A-Fa-f]+)\s*\*/\s*DEFINE_OBJECT_(?:UNSET|NULL)\((\w+)\)",
                    line,
                )
                if m:
                    obj_name_to_id[m.group(2)] = int(m.group(1), 16)

    actor_to_obj: dict[int, int] = {}
    if not os.path.isdir(overlays_dir):
        return actor_to_obj

    for entry in os.scandir(overlays_dir):
        if not entry.is_dir():
            continue
        # ovl_En_Niw -> En_Niw
        actor_name = entry.name.removeprefix("ovl_")
        actor_id = name_to_actor.get(actor_name)
        if actor_id is None:
            continue
        # Find the C source
        src = os.path.join(entry.path, f"z_{actor_name.lower()}.c")
        if not os.path.exists(src):
            # Try case-insensitive glob
            import glob as _glob
            matches = _glob.glob(os.path.join(entry.path, "z_*.c"))
            src = matches[0] if matches else None
        if not src or not os.path.exists(src):
            continue
        with open(src) as f:
            text = f.read()
        # Find OBJECT_xxx in ActorInit block — take the first occurrence
        # which is almost always the primary object slot.
        m = re.search(r"\bOBJECT_(\w+)\b", text)
        if m:
            obj_enum = f"OBJECT_{m.group(1)}"
            if obj_enum in obj_name_to_id:
                actor_to_obj[actor_id] = obj_name_to_id[obj_enum]

    return actor_to_obj


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__,
                                  formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--top", type=int, default=30,
                    help="Number of top lighting-diverged scenes to include (default 30)")
    ap.add_argument("--out", default=os.path.join(DATA_DIR, "scene_readiness.md"),
                    help="Output Markdown file path")
    args = ap.parse_args()

    print("Loading lighting parity report...", flush=True)
    lighting = parse_lighting_report(LIGHTING_REPORT)
    top_scenes = lighting[:args.top]

    print("Loading actor table...", flush=True)
    actor_id_to_name = parse_actor_table(ACTOR_TABLE_H)

    print("Loading object→ZAR mapping...", flush=True)
    obj_to_zar = parse_object_zars(OBJECT_ZARS_INC)

    print("Loading animmap entries...", flush=True)
    animmap_zars = parse_animmap_zars(ANIMMAP_INC)
    animmap_json = load_animmap_json(ANIMMAP_JSON)

    print("Loading CSAB catalog...", flush=True)
    csab_catalog = load_csab_catalog(CSAB_CATALOG_CANDIDATES)

    print("Building actor→object map from overlays...", flush=True)
    overlays_dir = os.path.join(SOH3D_REPO, "Shipwright", "soh", "src", "overlays", "actors")
    actor_to_obj = build_actor_to_object_map(overlays_dir, actor_id_to_name)

    # Helper: given a zar, classify CSAB/animmap state
    def zar_status(zar: str | None) -> tuple[int, int, str]:
        """Returns (csab_count, animmap_entries, status_str)."""
        if zar is None:
            return 0, 0, "no-ZAR"
        cat_entry = csab_catalog.get(zar)
        csab_count = cat_entry["totalCsabs"] if cat_entry else 0
        # Count animmap entries for this ZAR
        am_entry = animmap_json.get(zar)
        am_entries = len(am_entry["rows"]) if am_entry else 0
        if csab_count == 0:
            status = "no-CSAB"
        elif am_entries == 0:
            status = "CSAB-unmapped"
        else:
            status = "mapped"
        return csab_count, am_entries, status

    # Build per-scene stats
    rows = []
    for scene in top_scenes:
        n64_key = scene["n64_key"]
        oot3d_key = scene["oot3d_key"]
        score = scene["score"]
        rank = scene["rank"]

        scene_file = os.path.join(SCENE_ACTORS_DIR, f"{oot3d_key}.json")
        if not os.path.exists(scene_file):
            # Try n64_key
            scene_file = os.path.join(SCENE_ACTORS_DIR, f"{n64_key}.json")
        if not os.path.exists(scene_file):
            rows.append({
                "rank": rank, "n64_key": n64_key, "oot3d_key": oot3d_key,
                "score": score, "total_actors": "?", "unique_actor_types": "?",
                "zar_mapped": "?", "csab_have": "?", "animmap_have": "?",
                "combo_score": 0, "status_summary": "NO-ACTOR-DATA",
                "top_unmapped": "",
            })
            continue

        actor_counts = parse_scene_actors(scene_file)
        total_spawns = sum(actor_counts.values())
        unique_types = len(actor_counts)

        # Per-actor: evaluate ZAR/CSAB/animmap
        mapped = 0
        csab_have = 0
        unmapped_actors = []   # (spawn_count, actor_name, status)

        for actor_id, spawn_count in sorted(actor_counts.items(),
                                             key=lambda x: -x[1]):
            actor_name = actor_id_to_name.get(actor_id, f"#{actor_id}")
            if actor_name.startswith("unset_"):
                continue  # skip unset/unknown

            obj_id = actor_to_obj.get(actor_id)
            zar = obj_to_zar.get(obj_id) if obj_id is not None else None
            csab_cnt, am_cnt, status = zar_status(zar)

            if status == "mapped":
                mapped += 1
            if csab_cnt > 0:
                csab_have += 1
            if status != "mapped":
                unmapped_actors.append((spawn_count, actor_name, status))

        # Combo score: weight lighting score by fraction of un-mapped actors
        named_types = sum(1 for aid in actor_counts
                          if not actor_id_to_name.get(aid, "unset").startswith("unset_"))
        unmapped_frac = (named_types - mapped) / named_types if named_types > 0 else 0
        # combo_score: higher = more work needed + more lighting divergence
        # We want scenes that are HIGH lighting divergence AND have un-mapped actors
        combo_score = round(score * (0.5 + 0.5 * unmapped_frac), 1)

        top_unmapped = "; ".join(
            f"{name}(×{cnt},{st})"
            for cnt, name, st in sorted(unmapped_actors, reverse=True)[:4]
        )

        rows.append({
            "rank": rank,
            "n64_key": n64_key,
            "oot3d_key": oot3d_key,
            "score": score,
            "total_actors": total_spawns,
            "unique_actor_types": named_types,
            "zar_mapped": mapped,
            "csab_have": csab_have,
            "animmap_have": mapped,
            "combo_score": combo_score,
            "unmapped_frac": round(unmapped_frac * 100),
            "status_summary": f"{mapped}/{named_types} mapped",
            "top_unmapped": top_unmapped,
        })

    # Sort by combo_score descending
    rows.sort(key=lambda r: -r["combo_score"] if isinstance(r["combo_score"], (int, float)) else 0)

    # Write output
    lines = [
        "# Scene Readiness Checklist — Lighting × Actor Coverage",
        "",
        "Cross-reference of lighting divergence (vs OoT3D ground truth) and actor",
        "CSAB/animmap coverage for the top lighting-diverged scenes. Higher **combo**",
        "score = more urgent: large lighting gap AND actors not yet fully mapped.",
        "",
        "**Columns:**",
        "- **LightScore**: mean ambient+light-color delta (0–255 scale); higher = worse",
        "- **Actors**: total_spawns / unique_named_types",
        "- **Mapped**: actor types with ZAR + CSAB + animmap entries",
        "- **Unmapped%**: percent of actor types lacking full CSAB binding",
        "- **Combo**: LightScore × (0.5 + 0.5×UnmappedFrac) — primary sort key",
        "- **Top unmapped actors**: highest-spawn actors missing animmap (name×count,status)",
        "",
        "| Rank | Scene (N64) | OoT3D key | LightScore | Actors | Mapped | Unmapped% | Combo | Top unmapped |",
        "|------|-------------|-----------|-----------|--------|--------|-----------|-------|-------------|",
    ]

    for row in rows:
        lines.append(
            f"| {row['rank']} | `{row['n64_key']}` | `{row['oot3d_key']}` "
            f"| {row['score']} "
            f"| {row['total_actors']}/{row['unique_actor_types']} "
            f"| {row['zar_mapped']} "
            f"| {row['unmapped_frac'] if 'unmapped_frac' in row else '?'}% "
            f"| **{row['combo_score']}** "
            f"| {row['top_unmapped']} |"
        )

    lines += [
        "",
        "---",
        "",
        f"_Generated by `tools/scene_readiness.py`. "
        f"Sources: `data/lighting_parity_report.md`, `data/scene_actors/`, "
        f"`soh3d/tools/skeldata/animmap.json`, `soh3d/tools/skeldata/csab_catalog.json`, "
        f"`soh3d_object_zars.inc`, `soh3d_animmap.inc`._",
    ]

    out_text = "\n".join(lines) + "\n"
    with open(args.out, "w") as f:
        f.write(out_text)
    print(f"Wrote {args.out}")

    # Print a quick top-10 summary
    print("\nTop 10 scenes by combo score:")
    print(f"{'Scene':<25} {'LightScore':>10} {'Mapped':>8} {'Combo':>8}")
    print("-" * 56)
    for row in rows[:10]:
        print(f"{row['n64_key']:<25} {row['score']:>10} "
              f"{row['status_summary']:>8} {row['combo_score']:>8}")


if __name__ == "__main__":
    main()
