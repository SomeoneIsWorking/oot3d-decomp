#!/usr/bin/env python3
"""parity_report.py — static OoT3D ⇄ SoH3D per-scene parity diff.

Compares the static OoT3D ground-truth scene data against SoH3D's object-replacement
coverage WITHOUT running the game or the oracle.  Output is a structured JSON + human
summary that answers:

  "In each scene, which actor IDs spawn and are covered by an OoT3D ZAR replacement?
   Which are NOT covered (always fall back to the N64 model)?"

## Data sources (all committed, no oracle, no build needed)
  - data/scene_actors/*.json        — per-scene OoT3D actor spawns (actor ID, pos, room)
  - tools/skeldata/csab_catalog.json — CSAB name/duration per ZAR
  - <soh3d>/Shipwright/soh/src/soh3d/soh3d_object_zars.inc
                                    — N64 objectId → OoT3D /actor/*.zar mapping (generated)
  - <soh3d>/Shipwright/soh/include/tables/actor_table.h  — actorId → actor name
  - <soh3d>/Shipwright/soh/include/tables/object_table.h — objectId → object name/enum
  - <soh3d>/Shipwright/soh/src/overlays/actors/ovl_*/z_*.c
                                    — parsed for ActorInit.objectId (actor-declared object)

## Coverage model
SoH3D replaces an N64 actor with its OoT3D counterpart when ANY of:

  (a) The actor appears in the explicit sModelTable (hand-calibrated entries:
      ACTOR_OBJ_TSUBO/pot, ACTOR_OBJ_KIBAKO2/kibako, ACTOR_EN_KUSA/bush,
      ACTOR_EN_GE1/geld-woman).  Hard-coded here from soh3d.c since parsing the
      C source reliably is not worth the fragility.

  (b) The actor's ActorInit declares an objectId whose N64 object maps to an OoT3D
      ZAR in kSoH3dObjectZars.  This is the PRIMARY coverage path for SOH3D_AUTO:
      the runtime uses actor->objBankIndex (the actor's own declared object, loaded
      at spawn) to look up the ZAR — NOT the room's preloaded objects list.  This
      fixes the previous false-positive gaps where actors like Obj_Syokudai, En_Rd,
      etc. appeared uncovered because their ZAR-mapped object wasn't in the room's
      static list but IS loaded via the actor's own ActorInit.objectId.

  (c) The actor's ROOM preloads an N64 object that maps to a ZAR (legacy check;
      still used for actors whose objectId is GAMEPLAY_KEEP or similar shared banks
      that don't uniquely identify the actor's ZAR).

  (d) Special-cased actors known to be 3DS-covered via bespoke code in soh3d.c,
      regardless of sModelTable / object bank (listed in SPECIAL_COVERED below).

An actor spawn is "uncovered" (N64 fallback) only if NONE of (a)-(d) apply.

## Usage
  cd .
  SOH3D_REPO=<SOH3D_REPO> python3 tools/parity_report.py
  python3 tools/parity_report.py --json scratch/parity_report.json
  python3 tools/parity_report.py --scene spot04      # single scene detail
  python3 tools/parity_report.py --uncovered-only    # just scenes with gaps
  python3 tools/parity_report.py --actor 355         # all scenes where id=355 appears + coverage
  python3 tools/parity_report.py --priority          # priority-ordered patch list for Stream 4
"""
import argparse
import json
import os
import re
import sys
from collections import Counter, defaultdict

# ---------------------------------------------------------------------------
# Paths
# ---------------------------------------------------------------------------
TOOLS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_DIR = os.path.dirname(TOOLS_DIR)
DATA_DIR = os.path.join(REPO_DIR, "data", "scene_actors")
CSAB_CATALOG = os.path.join(TOOLS_DIR, "skeldata", "csab_catalog.json")

SOH3D_REPO = os.environ.get("SOH3D_REPO", os.path.join(os.path.dirname(REPO_DIR), "soh3d"))
OBJECT_ZARS_INC = os.path.join(SOH3D_REPO, "Shipwright", "soh", "src", "soh3d",
                                "soh3d_object_zars.inc")
ACTOR_TABLE_H = os.path.join(SOH3D_REPO, "Shipwright", "soh", "include", "tables",
                              "actor_table.h")
OBJECT_TABLE_H = os.path.join(SOH3D_REPO, "Shipwright", "soh", "include", "tables",
                               "object_table.h")
ACTORS_DIR = os.path.join(SOH3D_REPO, "Shipwright", "soh", "src", "overlays", "actors")

# ---------------------------------------------------------------------------
# Hard-coded SoH3D coverage constants (from soh3d.c, updated manually)
# ---------------------------------------------------------------------------

# (a) Explicit sModelTable entries: actor_id -> zar_or_description
SMTABLE_COVERED = {
    # ACTOR_OBJ_TSUBO = 0x109 = 265
    265: "/actor/zelda_tsubo.zar",      # pot
    # ACTOR_OBJ_KIBAKO2 = 0x1A0 = 416
    416: "/actor/zelda_kibako2.zar",    # wooden crate
    # ACTOR_EN_KUSA = 0x130 = 304 (guess; check against actor_table if off)
    304: "/actor/zelda_kusa.zar",       # bush
    # ACTOR_EN_GE1 = depends; search actor_table for En_Ge1
    # Will be patched from actor_table below
}

# (c) Special-cased actors covered by bespoke soh3d.c code (not via sModelTable or object bank):
#     En_Ishi (rocks), Obj_Hana (flowers/bushes/debris), En_Ko (Kokiri kids via per-type CSAB),
#     Player (Link — SoH3D_TryDrawPlayer hook, partially done), get-item actors.
SPECIAL_COVERED = {
    # actor name strings; we'll resolve to IDs from the actor_table
    "En_Ishi",   # bespoke "ISHI-rock(3DS)" branch in actorsnear
    "Obj_Hana",  # bespoke "HANA-*" branch
    "En_Ko",     # per-ENKO_TYPE CSAB override (#87)
    "Player",    # SoH3D_TryDrawPlayer (partial)
}

# Actor IDs that are purely engine/control (no visual model to replace):
# En_Door, En_Box trigger, En_Scene_Change, En_Holl, etc.
# These are expected to be N64 — don't flag them as gaps.
NO_MODEL_ACTORS = {
    # Door actors
    9,    # En_Door
    # Scene/room transition
    36,   # En_Scene_Change (0x24)
    # Environment / audio triggers (invisible)
    59,   # En_River_Sound — ambient water sound trigger
    149,  # En_Sw — floor/ceiling switch trigger
    151,  # Object_Kankyo — scene environment parameter actor (invisible)
    302,  # En_Okarina_Tag — ocarina song trigger zone (invisible)
    327,  # En_Wonder_Talk — invisible NPC text trigger
    389,  # En_Wonder_Talk2 — invisible NPC text trigger
    387,  # Shot_Sun — sun ocarina effect emitter (no persistent model)
    # Effect-only
    8,    # En_Light
    7,    # En_Part (particle effect)
    # Item actors (not character models — they use get-item path or are effects)
    24,   # En_Item00 (dropped item)
    273,  # En_Wonder_Item (spawned wonder drop)
    274,  # En_Wonder_Item (same family, params-variant)
}


# ---------------------------------------------------------------------------
# Loaders
# ---------------------------------------------------------------------------

def load_object_zars(path: str) -> dict:
    """Parse soh3d_object_zars.inc → {objectId: zarPath_or_None}."""
    result = {}
    if not os.path.exists(path):
        return result
    for line in open(path):
        # /* 0xNNNN OBJECT_NAME */ "/actor/..." or NULL
        m = re.match(r'\s*/\*\s*0x([0-9A-Fa-f]+)[^*]*\*/\s*(NULL|\"([^\"]+)\")', line.strip())
        if m:
            oid = int(m.group(1), 16)
            zar = m.group(3) if m.group(3) else None
            result[oid] = zar
    return result


def load_actor_names(path: str) -> dict:
    """Parse actor_table.h → {actorId: name}."""
    result = {}
    if not os.path.exists(path):
        return result
    for line in open(path):
        m = re.match(r'/\*\s*0x([0-9A-Fa-f]+)\s*\*/\s*DEFINE_ACTOR(?:_INTERNAL)?\s*\(\s*([^,]+)', line)
        if m:
            result[int(m.group(1), 16)] = m.group(2).strip()
    return result


def load_object_names(path: str) -> dict:
    """Parse object_table.h → {objectId: enum_name}."""
    result = {}
    if not os.path.exists(path):
        return result
    for line in open(path):
        m = re.match(
            r'/\*\s*0x([0-9A-Fa-f]+)\s*\*/\s*DEFINE_OBJECT\s*\(\s*([^,]+)\s*,\s*(OBJECT_[A-Z0-9_]+)',
            line)
        if m:
            result[int(m.group(1), 16)] = m.group(3).strip()
    return result


def load_scene_files(data_dir: str) -> list:
    """Load all scene actor JSON files; return list of dicts."""
    scenes = []
    if not os.path.isdir(data_dir):
        return scenes
    for fname in sorted(os.listdir(data_dir)):
        if not fname.endswith(".json"):
            continue
        try:
            d = json.load(open(os.path.join(data_dir, fname)))
        except json.JSONDecodeError as e:
            print(f"WARNING: failed to parse {fname}: {e}", file=sys.stderr)
            continue
        scenes.append(d)
    return scenes


def load_csab_catalog(path: str) -> dict:
    """Load csab_catalog.json → {zarPath: entry}."""
    if not os.path.exists(path):
        return {}
    return json.load(open(path)).get("objects", {})


def load_actor_object_map(actors_dir: str, actor_table_path: str,
                          object_names: dict) -> dict:
    """Parse ActorInit structs in ovl_*/z_*.c → {actorId: declared_objectId}.

    SoH3D_TryAuto uses actor->objBankIndex (the actor's OWN declared object from
    ActorInit.objectId, loaded at spawn) to resolve the ZAR — NOT the room's preloaded
    objects list.  This map lets parity_report correctly mark actors as covered when
    their declared object maps to a ZAR, even when that object is absent from the
    static room-objects list in our scene data.
    """
    if not os.path.isdir(actors_dir) or not os.path.exists(actor_table_path):
        return {}

    # Build actor-macro → actorId from actor_table.h.
    # DEFINE_ACTOR(Name, ACTOR_MACRO, ALLOCTYPE) — we want the second field (ACTOR_MACRO).
    macro_to_id: dict = {}
    for line in open(actor_table_path):
        m = re.match(
            r"/\*\s*0x([0-9A-Fa-f]+)\s*\*/\s*DEFINE_ACTOR(?:_INTERNAL)?\s*\(\s*[^,]+,\s*([^,]+)",
            line,
        )
        if m:
            macro_to_id[m.group(2).strip()] = int(m.group(1), 16)

    # object_names is {objectId: OBJECT_ENUM_NAME}; invert for name→id lookup
    obj_name_to_id = {v: k for k, v in object_names.items()}

    result: dict = {}
    for dirname in os.listdir(actors_dir):
        actor_dir = os.path.join(actors_dir, dirname)
        if not os.path.isdir(actor_dir):
            continue
        for fname in os.listdir(actor_dir):
            if not fname.endswith(".c"):
                continue
            try:
                content = open(os.path.join(actor_dir, fname)).read()
            except OSError:
                continue
            # Match:  const ActorInit <Var> = {
            #             ACTOR_FOO,
            #             ACTORCAT_BAR,
            #             FLAGS,
            #             OBJECT_BAZ,      <- we want this
            m = re.search(
                r"const\s+ActorInit\s+\w+\s*=\s*\{[^{]*?"
                r"(ACTOR_[A-Z0-9_]+)\s*,\s*ACTORCAT_\w+\s*,\s*[^\n]*\n"
                r"[^\n]*\n\s*(OBJECT_\w+)",
                content,
            )
            if not m:
                continue
            actor_macro = m.group(1)
            obj_macro = m.group(2)
            actor_id = macro_to_id.get(actor_macro)
            obj_id = obj_name_to_id.get(obj_macro)
            if actor_id is not None and obj_id is not None:
                result[actor_id] = obj_id

    return result


# ---------------------------------------------------------------------------
# Coverage logic
# ---------------------------------------------------------------------------

def build_special_ids(actor_names: dict) -> set:
    """Resolve SPECIAL_COVERED name strings to actor IDs."""
    name_to_id = {v: k for k, v in actor_names.items()}
    ids = set()
    for name in SPECIAL_COVERED:
        if name in name_to_id:
            ids.add(name_to_id[name])
    return ids


def patch_smtable_from_actor_table(actor_names: dict):
    """Patch SMTABLE_COVERED with actor IDs resolved from actor_table for En_Ge1 etc."""
    name_to_id = {v: k for k, v in actor_names.items()}
    ge1_id = name_to_id.get("En_Ge1")
    if ge1_id is not None:
        SMTABLE_COVERED[ge1_id] = "/actor/zelda_ge1.zar"
    # En_Kusa: actor name varies
    kusa_id = name_to_id.get("En_Kusa")
    if kusa_id is not None:
        SMTABLE_COVERED[kusa_id] = "/actor/zelda_kusa.zar"


def room_zar_set(room: dict, obj_zars: dict) -> set:
    """Return the set of non-null ZAR paths available from a room's preloaded objects."""
    zars = set()
    for oid in room.get("objects", []):
        zar = obj_zars.get(oid)
        if zar:
            zars.add(zar)
    return zars


def analyse_scene(scene: dict, obj_zars: dict, smtable_ids: set,
                  special_ids: set, no_model_ids: set,
                  actor_obj_map: dict | None = None) -> dict:
    """
    Returns per-scene coverage analysis:
    {
      "scene_name": str,
      "scene_num": int|None,
      "total_spawns": int,
      "covered_spawns": int,
      "uncovered_spawns": int,
      "coverage_pct": float,
      "actors": [
        {
          "id": int,
          "name": str,
          "room": int,
          "pos": [x,y,z],
          "params": int,
          "status": "covered"|"uncovered"|"no-model",
          "reason": str,   # why covered/uncovered
          "room_zars": [list of ZAR paths in room],
          "actor_zar": str|None,  # ZAR via actor's own declared objectId
        }, ...
      ]
    }
    """
    if actor_obj_map is None:
        actor_obj_map = {}

    scene_name = scene.get("scene_name") or "unknown"
    scene_num = scene.get("scene_num")

    actors_out = []
    for room in scene.get("rooms", []):
        room_num = room["room_num"]
        rzars = room_zar_set(room, obj_zars)
        for actor in room.get("actors", []):
            aid = actor["id"]
            # (b) actor's own declared objectId → ZAR (primary SOH3D_AUTO path)
            actor_oid = actor_obj_map.get(aid)
            actor_zar = obj_zars.get(actor_oid) if actor_oid is not None else None
            if aid in no_model_ids:
                status = "no-model"
                reason = "engine/control actor — no visual model"
            elif aid in smtable_ids:
                status = "covered"
                reason = "sModelTable explicit entry"
            elif aid in special_ids:
                status = "covered"
                reason = "special-cased in soh3d.c"
            elif actor_zar:
                status = "covered"
                reason = f"actor-declared objectId → {actor_zar}"
            elif rzars:
                status = "covered"
                reason = "room objects include ZAR(s)"
            else:
                status = "uncovered"
                reason = "no ZAR via actor objectId or room objects"
            actors_out.append({
                "id": aid,
                "room": room_num,
                "pos": actor.get("pos", []),
                "params": actor.get("params", 0),
                "status": status,
                "reason": reason,
                "room_zars": sorted(rzars),
                "actor_zar": actor_zar,
            })

    covered = sum(1 for a in actors_out if a["status"] == "covered")
    uncovered = sum(1 for a in actors_out if a["status"] == "uncovered")
    no_model = sum(1 for a in actors_out if a["status"] == "no-model")
    total = len(actors_out)
    # Coverage % excludes no-model actors (they're not visual gaps)
    visual_total = covered + uncovered
    pct = round(100.0 * covered / visual_total, 1) if visual_total > 0 else 100.0

    return {
        "scene_name": scene_name,
        "scene_num": scene_num,
        "total_spawns": total,
        "covered_spawns": covered,
        "uncovered_spawns": uncovered,
        "no_model_spawns": no_model,
        "visual_total": visual_total,
        "coverage_pct": pct,
        "actors": actors_out,
    }


def build_report(scenes: list, obj_zars: dict, smtable_ids: set,
                 special_ids: set, no_model_ids: set,
                 actor_names: dict, actor_obj_map: dict | None = None) -> dict:
    """Build the full cross-scene parity report."""
    scene_reports = []
    for scene in scenes:
        sr = analyse_scene(scene, obj_zars, smtable_ids, special_ids, no_model_ids,
                           actor_obj_map)
        # Annotate actor names
        for a in sr["actors"]:
            a["name"] = actor_names.get(a["id"], f"id{a['id']:#06x}")
        scene_reports.append(sr)

    # Global stats
    total_spawns = sum(s["total_spawns"] for s in scene_reports)
    total_covered = sum(s["covered_spawns"] for s in scene_reports)
    total_uncovered = sum(s["uncovered_spawns"] for s in scene_reports)
    total_visual = sum(s["visual_total"] for s in scene_reports)
    global_pct = round(100.0 * total_covered / total_visual, 1) if total_visual > 0 else 100.0

    # Per-actor-ID summary across all scenes
    actor_summary: dict = {}
    for sr in scene_reports:
        sname = sr["scene_name"]
        for a in sr["actors"]:
            aid = a["id"]
            if aid not in actor_summary:
                actor_summary[aid] = {
                    "id": aid,
                    "name": a["name"],
                    "covered_in": [],
                    "uncovered_in": [],
                    "no_model_in": [],
                }
            if a["status"] == "covered":
                actor_summary[aid]["covered_in"].append(sname)
            elif a["status"] == "uncovered":
                actor_summary[aid]["uncovered_in"].append(sname)
            else:
                actor_summary[aid]["no_model_in"].append(sname)

    # Sort actor summary: most-uncovered first
    actors_sorted = sorted(actor_summary.values(),
                           key=lambda x: -len(x["uncovered_in"]))

    return {
        "summary": {
            "total_scenes": len(scene_reports),
            "total_spawns": total_spawns,
            "total_covered": total_covered,
            "total_uncovered": total_uncovered,
            "global_coverage_pct": global_pct,
            "scenes_fully_covered": sum(1 for s in scene_reports if s["uncovered_spawns"] == 0),
            "scenes_with_gaps": sum(1 for s in scene_reports if s["uncovered_spawns"] > 0),
        },
        "scenes": scene_reports,
        "actor_gap_summary": actors_sorted,
    }


# ---------------------------------------------------------------------------
# CLI display helpers
# ---------------------------------------------------------------------------

def print_summary(report: dict, actor_names: dict):
    s = report["summary"]
    print("=" * 72)
    print("  OoT3D ⇄ SoH3D Parity Report  (static, no oracle / no build)")
    print("=" * 72)
    print(f"  Scenes:    {s['total_scenes']:4d}  "
          f"({s['scenes_fully_covered']} fully covered, {s['scenes_with_gaps']} with gaps)")
    print(f"  Spawns:    {s['total_spawns']:5d}  visual={s['total_covered']+s['total_uncovered']}")
    print(f"  Covered:   {s['total_covered']:5d}  ({s['global_coverage_pct']:.1f}%)")
    print(f"  Uncovered: {s['total_uncovered']:5d}  ({100-s['global_coverage_pct']:.1f}%)")
    print()
    print("Top 20 actor IDs with most uncovered scene appearances:")
    print(f"  {'id':>6}  {'name':<24}  {'uncovered_scenes':>16}  {'covered_scenes':>14}")
    print(f"  {'-'*6}  {'-'*24}  {'-'*16}  {'-'*14}")
    for a in report["actor_gap_summary"][:20]:
        nu = len(a["uncovered_in"])
        nc = len(a["covered_in"])
        if nu == 0:
            continue
        print(f"  {a['id']:6d}  {a['name']:<24}  {nu:16d}  {nc:14d}")
    print()


def print_scene_detail(report: dict, scene_name: str, actor_names: dict):
    sr = next((s for s in report["scenes"]
               if s["scene_name"] == scene_name), None)
    if sr is None:
        print(f"Scene '{scene_name}' not found in report.", file=sys.stderr)
        return
    print(f"\nScene: {sr['scene_name']}  (num={sr['scene_num']})  "
          f"coverage={sr['coverage_pct']}%  "
          f"covered={sr['covered_spawns']}  uncovered={sr['uncovered_spawns']}")
    print(f"  {'id':>6}  {'name':<24}  {'room':>4}  {'status':<12}  reason")
    print(f"  {'-'*6}  {'-'*24}  {'-'*4}  {'-'*12}  ------")
    for a in sorted(sr["actors"], key=lambda x: (x["status"] != "uncovered", x["id"])):
        mark = "!!!" if a["status"] == "uncovered" else "   "
        print(f"  {mark}{a['id']:6d}  {a['name']:<24}  {a['room']:4d}  "
              f"{a['status']:<12}  {a['reason']}")
        if a["status"] == "covered" and a["room_zars"]:
            for zar in a["room_zars"][:2]:
                print(f"            └── {zar}")


def print_actor_scenes(report: dict, actor_id: int):
    entry = next((a for a in report["actor_gap_summary"] if a["id"] == actor_id), None)
    if entry is None:
        print(f"Actor id={actor_id} not found in any scene.", file=sys.stderr)
        return
    print(f"\nActor {actor_id} ({entry['name']}):")
    print(f"  Covered in {len(entry['covered_in'])} scenes: {', '.join(entry['covered_in'][:10])}"
          + (" ..." if len(entry["covered_in"]) > 10 else ""))
    print(f"  Uncovered in {len(entry['uncovered_in'])} scenes: "
          f"{', '.join(entry['uncovered_in'][:10])}"
          + (" ..." if len(entry["uncovered_in"]) > 10 else ""))


def print_scenes_with_gaps(report: dict):
    gaps = [(s["scene_name"], s["uncovered_spawns"], s["coverage_pct"])
            for s in report["scenes"] if s["uncovered_spawns"] > 0]
    gaps.sort(key=lambda x: -x[1])
    print(f"\nScenes with uncovered actor spawns ({len(gaps)} total):")
    print(f"  {'scene':<28}  {'uncovered':>9}  {'coverage':>8}")
    print(f"  {'-'*28}  {'-'*9}  {'-'*8}")
    for name, nu, pct in gaps:
        print(f"  {name:<28}  {nu:9d}  {pct:7.1f}%")


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def print_priority_list(report: dict, obj_zars: dict, csab_catalog: dict,
                        actor_obj_map: dict, actor_names: dict):
    """Print a priority-ordered patch list for Stream 4.

    Priority = gap_count × scene_importance (scenes_with_gaps / total_scenes_actor_appears).
    Only actors with at least one ZAR in the catalog are listed (skeleton actors worth patching
    now); actors whose ZAR is missing from the catalog are noted separately.
    """
    gaps = [a for a in report["actor_gap_summary"] if len(a["uncovered_in"]) > 0]

    # Compute ZAR and catalog status per actor
    rows = []
    for a in gaps:
        aid = a["id"]
        oid = actor_obj_map.get(aid)
        zar = obj_zars.get(oid) if oid is not None else None
        in_catalog = zar is not None and zar in csab_catalog
        n_csabs = csab_catalog[zar]["totalCsabs"] if in_catalog else 0
        n_uncov = len(a["uncovered_in"])
        n_total = n_uncov + len(a["covered_in"]) + len(a["no_model_in"])
        # priority = gap_count weighted by fraction of appearances that are gaps
        priority = n_uncov * (n_uncov / n_total) if n_total > 0 else 0
        rows.append({
            "id": aid,
            "name": a["name"],
            "uncovered_scenes": n_uncov,
            "total_scenes": n_total,
            "zar": zar,
            "in_catalog": in_catalog,
            "n_csabs": n_csabs,
            "priority": round(priority, 2),
        })

    rows.sort(key=lambda x: -x["priority"])

    print("\nStream 4 patch priority list (uncovered actors, descending priority):")
    print(f"  priority = gap_count × (gap_count / total_scene_appearances)")
    print()
    print(f"  {'id':>6}  {'name':<24}  {'gaps':>5}  {'total':>5}  {'prio':>6}  {'csabs':>5}  ZAR")
    print(f"  {'-'*6}  {'-'*24}  {'-'*5}  {'-'*5}  {'-'*6}  {'-'*5}  ---")
    for r in rows[:30]:
        zar_display = r["zar"] or "NO ZAR"
        catalog_mark = "" if r["in_catalog"] else " (!not in catalog)"
        print(f"  {r['id']:6d}  {r['name']:<24}  {r['uncovered_scenes']:5d}  "
              f"{r['total_scenes']:5d}  {r['priority']:6.2f}  {r['n_csabs']:5d}  "
              f"{zar_display}{catalog_mark}")


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--json", metavar="PATH", help="write full report JSON to PATH (use - for stdout)")
    ap.add_argument("--scene", metavar="NAME", help="print detail for a single scene")
    ap.add_argument("--uncovered-only", action="store_true",
                    help="list only scenes that have uncovered actor spawns")
    ap.add_argument("--actor", metavar="ID", type=lambda x: int(x, 0),
                    help="show coverage for a specific actor ID across all scenes")
    ap.add_argument("--priority", action="store_true",
                    help="print priority-ordered patch list for Stream 4 (true gaps only)")
    args = ap.parse_args()

    # Load data
    obj_zars = load_object_zars(OBJECT_ZARS_INC)
    if not obj_zars:
        print(f"WARNING: could not load object ZARs from {OBJECT_ZARS_INC}", file=sys.stderr)

    actor_names = load_actor_names(ACTOR_TABLE_H)
    obj_names = load_object_names(OBJECT_TABLE_H)

    # Patch sModelTable IDs using actual actor IDs from actor_table
    patch_smtable_from_actor_table(actor_names)
    smtable_ids = set(SMTABLE_COVERED.keys())

    # Resolve special-cased actor names to IDs
    special_ids = build_special_ids(actor_names)

    # Resolve no-model actor names
    name_to_id = {v: k for k, v in actor_names.items()}
    no_model_ids = set(NO_MODEL_ACTORS)
    for name in ("En_Door", "En_Holl", "En_Scene_Change", "En_Light", "En_Part",
                 "En_Item00", "En_Wonder_Item", "En_Arrow", "En_Bom",
                 "En_River_Sound", "En_Sw", "Object_Kankyo", "En_Okarina_Tag",
                 "En_Wonder_Talk", "En_Wonder_Talk2", "Shot_Sun"):
        aid = name_to_id.get(name)
        if aid is not None:
            no_model_ids.add(aid)

    # Build actor -> declared objectId map (fixes false-positive gaps in SOH3D_AUTO path)
    actor_obj_map = load_actor_object_map(ACTORS_DIR, ACTOR_TABLE_H, obj_names)

    scenes = load_scene_files(DATA_DIR)
    if not scenes:
        print(f"ERROR: no scene JSON files found in {DATA_DIR}", file=sys.stderr)
        sys.exit(1)

    report = build_report(scenes, obj_zars, smtable_ids, special_ids, no_model_ids,
                          actor_names, actor_obj_map)

    csab_catalog = load_csab_catalog(CSAB_CATALOG)

    if args.json:
        js = json.dumps(report, indent=2)
        if args.json == "-":
            print(js)
        else:
            os.makedirs(os.path.dirname(os.path.abspath(args.json)), exist_ok=True)
            open(args.json, "w").write(js)
            print(f"Wrote {args.json}")

    if args.scene:
        print_scene_detail(report, args.scene, actor_names)
    elif args.actor is not None:
        print_summary(report, actor_names)
        print_actor_scenes(report, args.actor)
    elif args.priority:
        print_summary(report, actor_names)
        print_priority_list(report, obj_zars, csab_catalog, actor_obj_map, actor_names)
    elif args.uncovered_only:
        print_summary(report, actor_names)
        print_scenes_with_gaps(report)
    else:
        print_summary(report, actor_names)
        print_scenes_with_gaps(report)


if __name__ == "__main__":
    main()
