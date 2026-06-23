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
  python3 tools/scene_readiness.py --scene <name>   # per-actor detail for one scene

Defaults: top 30 scenes, output to data/scene_readiness.md.
--scene prints a per-actor audit table to stdout (no file written).

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

OOT3D_LIGHTING_JSON = os.path.join(DATA_DIR, "scene_lighting.json")
N64_LIGHTING_JSON   = os.path.join(SOH3D_REPO, "tools", "skeldata", "n64_scene_lighting.json")

# N64 scene key -> OoT3D scene key (lower-cased), derived from soh3d_scene_names.inc
N64_TO_OOT3D: dict[str, str] = {
    "ydan": "ydan", "ddan": "ddan", "bdan": "bdan", "bmori1": "bmori1",
    "hidan": "hidan", "mizusin": "mizusin", "jyasinzou": "jyasinzou",
    "hakadan": "hakadan", "hakadanch": "hakadan_ch", "ice_doukutu": "ice_doukutu",
    "ganon": "ganon", "men": "men", "gerudoway": "gerudoway",
    "ganontika": "ganontika", "ganon_sonogo": "ganon_sonogo",
    "ganontikasonogo": "ganontikasonogo", "takaraya": "takaraya",
    "ydan_boss": "ydan_boss", "ddan_boss": "ddan_boss", "bdan_boss": "bdan_boss",
    "moribossroom": "moriboss", "fire_bs": "fire_bs", "mizusin_bs": "mizusin_boss",
    "jyasinboss": "jyasinzou_boss", "hakadan_bs": "hakadan_boss",
    "ganon_boss": "ganon_boss", "ganon_final": "ganon_final",
    "entra": "entra_day", "entra_n": "entra_night", "enrui": "entra_ruins",
    "market_alley": "market_alley", "market_alley_n": "market_alley_n",
    "market_day": "market_day", "market_night": "market_night",
    "market_ruins": "market_ruins", "shrine": "shrine", "shrine_n": "shrine_n",
    "shrine_r": "shrine_r", "kokiri_home": "k_home", "kokiri_home3": "k_home3",
    "kokiri_home4": "k_home4", "kokiri_home5": "k_home5",
    "kakariko": "kakariko", "kakariko3": "kakariko_home3",
    "shop1": "shop", "kokiri_shop": "shop", "golon": "shop_golon",
    "zoora": "zoora", "drag": "shop_drag", "alley_shop": "shop_alley",
    "night_shop": "shop_night", "face_shop": "shop_face",
    "link_home": "link", "impa": "kakariko_impa", "malon_stable": "stable",
    "labo": "labo", "hylia_labo": "hylia_labo", "tent": "tent", "hut": "hut",
    "daiyousei_izumi": "daiyousei_izumi",
    "yousei_izumi_tate": "yousei_izumi_tate",
    "yousei_izumi_yoko": "yousei_izumi_yoko",
    "kakusiana": "kakusiana", "hakaana": "hakaana", "hakaana2": "hakaana2",
    "hakaana_ouke": "hakaana_ouke", "syatekijyou": "syatekijyou",
    "tokinoma": "tokinoma", "kenjyanoma": "kenjyanoma",
    "hairal_niwa": "hairal_niwa", "hairal_niwa_n": "hairal_niwa_n",
    "hiral_demo": "hiral_demo", "hakasitarelay": "hakasitarelay",
    "turibori": "turibori", "nakaniwa": "nakaniwa", "bowling": "bowling",
    "souko": "souko", "miharigoya": "miharigoya", "mahouya": "mahouya",
    "ganon_demo": "ganon_demo", "kinsuta": "kinsuta",
    "spot00": "spot00", "spot01": "spot01", "spot02": "spot02",
    "spot03": "spot03", "spot04": "spot04", "spot05": "spot05",
    "spot06": "spot06", "spot07": "spot07", "spot08": "spot08",
    "spot09": "spot09", "spot10": "spot10", "spot11": "spot11",
    "spot12": "spot12", "spot13": "spot13", "spot15": "spot15",
    "spot16": "spot16", "spot17": "spot17", "spot18": "spot18",
    "spot20": "spot20", "ganon_tou": "ganon_tou",
}


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


def load_lighting_jsons() -> tuple[dict, dict]:
    """Load OoT3D and N64 scene lighting JSONs.  Returns ({oot3d_key: [slots]}, {n64_key: [slots]})."""
    oot3d: dict = {}
    n64: dict = {}
    if os.path.exists(OOT3D_LIGHTING_JSON):
        with open(OOT3D_LIGHTING_JSON) as f:
            oot3d = json.load(f)
    if os.path.exists(N64_LIGHTING_JSON):
        with open(N64_LIGHTING_JSON) as f:
            n64 = json.load(f)
    return oot3d, n64


def _color_delta(a: list, b: list) -> float:
    return sum(abs(int(x) - int(y)) for x, y in zip(a, b)) / 3.0


def _dir_delta(a: list, b: list) -> float:
    return sum(abs(int(x) - int(y)) for x, y in zip(a, b)) / 3.0


def _sev(d: float) -> str:
    if d >= 30:
        return "HIGH"
    if d >= 15:
        return "MED"
    return "low"


OOT3D_TO_N64: dict[str, str] = {v: k for k, v in N64_TO_OOT3D.items()}


def compare_scene_lighting(
    scene_oot3d_key: str,
    oot3d_db: dict,
    n64_db: dict,
) -> list[dict] | None:
    """Compare lighting for one scene.  Returns per-slot diff list or None if data missing.

    scene_oot3d_key is the OoT3D scene name as used in scene_actors/ filenames
    (e.g. 'link', 'spot00', 'k_home').
    Returns list of dicts with per-field deltas and raw values.
    """
    oot3d_key = scene_oot3d_key.lower()
    n64_key_lc = OOT3D_TO_N64.get(oot3d_key, oot3d_key)

    oot3d_slots = oot3d_db.get(oot3d_key)
    n64_slots   = n64_db.get(n64_key_lc)
    if not oot3d_slots or not n64_slots:
        return None

    diffs = []
    for i, (o3d, n64s) in enumerate(zip(oot3d_slots, n64_slots)):
        amb_d   = _color_delta(o3d["ambient"],         n64s["ambientColor"])
        l0c_d   = _color_delta(o3d["light0"]["color"], n64s["light1Color"])
        l1c_d   = _color_delta(o3d["light1"]["color"], n64s["light2Color"])
        l0dir_d = _dir_delta(o3d["light0"]["dir"],     n64s["light1Dir"])
        l1dir_d = _dir_delta(o3d["light1"]["dir"],     n64s["light2Dir"])
        fog_near_d = abs(o3d.get("fog_start", 0) - (n64s["fogNear"] & 0x3FF))
        n64_fog_far = n64s["fogFar"]
        oot3d_fog_end = o3d.get("fog_end", 0)
        fog_ratio = (oot3d_fog_end / n64_fog_far) if n64_fog_far else float("inf")
        diffs.append({
            "slot":           i,
            "ambient_delta":  amb_d,
            "l0_color_delta": l0c_d,
            "l1_color_delta": l1c_d,
            "l0_dir_delta":   l0dir_d,
            "l1_dir_delta":   l1dir_d,
            "fog_near_delta": fog_near_d,
            "fog_ratio":      fog_ratio,
            # raw OoT3D
            "oot3d_ambient":  o3d["ambient"],
            "oot3d_l0_color": o3d["light0"]["color"],
            "oot3d_l0_dir":   o3d["light0"]["dir"],
            "oot3d_l1_color": o3d["light1"]["color"],
            "oot3d_fog_start": o3d.get("fog_start"),
            "oot3d_fog_end":  oot3d_fog_end,
            # raw N64
            "n64_ambient":    n64s["ambientColor"],
            "n64_l0_color":   n64s["light1Color"],
            "n64_l0_dir":     n64s["light1Dir"],
            "n64_l1_color":   n64s["light2Color"],
            "n64_fog_near_eff": n64s["fogNear"] & 0x3FF,
            "n64_fog_far":    n64_fog_far,
        })
    return diffs


def print_lighting_section(scene_oot3d_key: str, oot3d_db: dict, n64_db: dict) -> None:
    """Print per-slot lighting deltas for a scene (used inside --scene mode)."""
    diffs = compare_scene_lighting(scene_oot3d_key, oot3d_db, n64_db)
    if diffs is None:
        print("\n### Lighting: no data (scene not in both OoT3D + N64 lighting JSONs)")
        return

    oot3d_key = scene_oot3d_key.lower()
    n64_key_lc = OOT3D_TO_N64.get(oot3d_key, oot3d_key)
    print(f"\n### Lighting deltas — OoT3D `{oot3d_key}` vs N64 `{n64_key_lc}` "
          f"({len(diffs)} slot(s))\n")

    # Header
    hdr = (f"{'Slot':>4}  {'Amb Δ':>7} {'L0col Δ':>8} {'L1col Δ':>8} "
           f"{'L0dir Δ':>8} {'FogNear Δ':>10}  "
           f"{'OoT3D ambient':>15}  {'N64 ambient':>13}  "
           f"{'OoT3D L0col':>13}  {'N64 L0col':>11}  "
           f"{'OoT3D fog_end':>13}  {'N64 fogFar':>10}")
    print(hdr)
    print("-" * len(hdr))

    worst_amb = max(d["ambient_delta"] for d in diffs)
    worst_l0c = max(d["l0_color_delta"] for d in diffs)
    worst_l1c = max(d["l1_color_delta"] for d in diffs)

    for d in diffs:
        amb_sev  = _sev(d["ambient_delta"])
        l0c_sev  = _sev(d["l0_color_delta"])
        fog_r    = d["fog_ratio"]
        fog_flag = "HIGH" if fog_r > 4 or fog_r < 0.25 else ("MED" if fog_r > 2 or fog_r < 0.5 else "low")
        flags = []
        if amb_sev != "low":
            flags.append(f"Amb:{amb_sev}")
        if l0c_sev != "low":
            flags.append(f"L0:{l0c_sev}")
        if _sev(d["l1_color_delta"]) != "low":
            flags.append(f"L1:{_sev(d['l1_color_delta'])}")
        if fog_flag != "low":
            flags.append(f"Fog:{fog_flag}")
        flag_str = ",".join(flags) if flags else "ok"

        o3d_amb = "[{},{},{}]".format(*d["oot3d_ambient"])
        n64_amb = "[{},{},{}]".format(*d["n64_ambient"])
        o3d_l0c = "[{},{},{}]".format(*d["oot3d_l0_color"])
        n64_l0c = "[{},{},{}]".format(*d["n64_l0_color"])
        print(f"{d['slot']:>4}  {d['ambient_delta']:>7.1f} {d['l0_color_delta']:>8.1f} "
              f"{d['l1_color_delta']:>8.1f} {d['l0_dir_delta']:>8.1f} "
              f"{d['fog_near_delta']:>10.0f}  "
              f"{o3d_amb:>15}  {n64_amb:>13}  "
              f"{o3d_l0c:>13}  {n64_l0c:>11}  "
              f"{d['oot3d_fog_end']:>13.0f}  {d['n64_fog_far']:>10}  "
              f"{flag_str}")

    # Summary line
    mean_score = (worst_amb + worst_l0c + worst_l1c) / 3.0
    print(f"\nWorst-slot deltas: Amb={worst_amb:.1f} L0col={worst_l0c:.1f} "
          f"L1col={worst_l1c:.1f}  → scene score={mean_score:.1f} "
          f"({_sev(mean_score)})")


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

def parse_obj_name_to_id(obj_table_h: str) -> dict[str, int]:
    """Parse object_table.h → {OBJECT_ENUM: numeric_id}."""
    obj_name_to_id: dict[str, int] = {}
    if not os.path.exists(obj_table_h):
        return obj_name_to_id
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
    return obj_name_to_id


def build_actor_to_object_map(
    overlays_dir: str,
    actor_id_to_name: dict[int, str],
    obj_name_to_id: dict[str, int],
) -> dict[int, int]:
    """Scan overlay source files to extract actor_id → object_id.

    For each actor name, looks for its z_<name>.c (lowercased) and reads the
    ActorInit struct's objectId field (4th positional argument).
    """
    # Build name -> actor_id reverse map for lookup
    name_to_actor: dict[str, int] = {v: k for k, v in actor_id_to_name.items()
                                      if not v.startswith("unset_")}

    actor_to_obj: dict[int, int] = {}
    if not os.path.isdir(overlays_dir):
        return actor_to_obj

    # Pattern: match the ActorInit struct literal and extract the 4th positional
    # argument (objectId field at offset 0x08).  The struct layout is always:
    #   { ACTOR_ID, ACTORCAT_*, FLAGS, OBJECT_*, sizeof(...), ... }
    # We capture everything between the opening brace and the first sizeof() so
    # we can reliably pull the 4th comma-separated token.
    # Re-assembled on full file text (re.DOTALL) to handle multi-line structs.
    _ACTORINIT_RE = re.compile(
        r"ActorInit\s+\w+\s*=\s*\{([^}]+)\}",
        re.DOTALL,
    )

    import glob as _glob

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
            matches = _glob.glob(os.path.join(entry.path, "z_*.c"))
            src = matches[0] if matches else None
        if not src or not os.path.exists(src):
            continue
        with open(src) as f:
            text = f.read()

        # Extract objectId from the ActorInit struct literal — it is always the
        # 4th field (index 3 after splitting on commas, stripping whitespace and
        # C-style cast syntax like "(ActorFunc)").
        obj_enum: str | None = None
        m = _ACTORINIT_RE.search(text)
        if m:
            body = m.group(1)
            # Split into fields; strip whitespace and cast wrappers
            fields = [f.strip() for f in body.split(",") if f.strip()]
            if len(fields) >= 4:
                field4 = fields[3]
                # Strip any leading cast like "(s16)" or extra parens
                field4 = re.sub(r"^\([^)]+\)", "", field4).strip()
                if field4.startswith("OBJECT_"):
                    obj_enum = field4
        # Fall back to first OBJECT_* in file only when struct parse fails
        if obj_enum is None:
            mf = re.search(r"\bOBJECT_\w+\b", text)
            obj_enum = mf.group(0) if mf else None

        if obj_enum and obj_enum in obj_name_to_id:
            actor_to_obj[actor_id] = obj_name_to_id[obj_enum]

    return actor_to_obj


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def print_scene_detail(
    scene_name: str,
    actor_id_to_name: dict[int, str],
    actor_to_obj: dict[int, int],
    obj_to_zar: dict[int, str | None],
    csab_catalog: dict[str, dict],
    animmap_json: dict[str, dict],
    obj_name_to_id: dict[str, int],
    oot3d_lighting: dict | None = None,
    n64_lighting: dict | None = None,
) -> None:
    """Print per-actor detail AND lighting deltas for a single scene (--scene mode).

    Columns: actor_id, actor_name, object_id, object_enum, ZAR, csab_count,
             animmap_entries, status.  Useful for Stream 4 pre-fix audits.
    Lighting section shows per-slot ambient/light-color/dir/fog deltas between
    OoT3D ground truth and N64/SoH3D, so the caller sees everything in one report.
    """
    # Build object_id -> name reverse
    obj_id_to_name: dict[int, str] = {v: k for k, v in obj_name_to_id.items()}

    scene_file = os.path.join(SCENE_ACTORS_DIR, f"{scene_name}.json")
    if not os.path.exists(scene_file):
        print(f"ERROR: no scene actor data for '{scene_name}' at {scene_file}", file=sys.stderr)
        sys.exit(1)

    actor_counts = parse_scene_actors(scene_file)
    if not actor_counts:
        print(f"No actors found in {scene_file}.")
        return

    # Header
    print(f"\n### Scene: {scene_name}  ({len(actor_counts)} unique actor types, "
          f"{sum(actor_counts.values())} total spawns)\n")
    col_w = [6, 28, 6, 24, 30, 6, 7, 16]
    header = (f"{'ActorID':<{col_w[0]}}  {'ActorName':<{col_w[1]}}  "
              f"{'ObjID':<{col_w[2]}}  {'ObjectEnum':<{col_w[3]}}  "
              f"{'ZAR':<{col_w[4]}}  {'CSABs':>{col_w[5]}}  "
              f"{'AnimMap':>{col_w[6]}}  {'Status':<{col_w[7]}}")
    print(header)
    print("-" * len(header))

    # Sort by status (unmapped first), then spawn count descending
    STATUS_ORDER = {"no-ZAR": 0, "no-CSAB": 1, "CSAB-unmapped": 2, "mapped": 3, "unset": 4}

    rows: list[tuple] = []
    for actor_id, spawn_count in actor_counts.items():
        actor_name = actor_id_to_name.get(actor_id, f"#{actor_id:04X}")
        if actor_name.startswith("unset_"):
            rows.append((STATUS_ORDER["unset"], -spawn_count, actor_id, actor_name,
                         None, None, 0, 0, 0, "unset"))
            continue

        obj_id = actor_to_obj.get(actor_id)
        obj_enum = obj_id_to_name.get(obj_id, f"#{obj_id:04X}" if obj_id is not None else "?")
        zar = obj_to_zar.get(obj_id) if obj_id is not None else None

        cat_entry = csab_catalog.get(zar) if zar else None
        csab_count = cat_entry["totalCsabs"] if cat_entry else 0

        am_entry = animmap_json.get(zar) if zar else None
        am_entries = len(am_entry["rows"]) if am_entry else 0

        if zar is None:
            status = "no-ZAR"
        elif csab_count == 0:
            status = "no-CSAB"
        elif am_entries == 0:
            status = "CSAB-unmapped"
        else:
            status = "mapped"

        rows.append((STATUS_ORDER.get(status, 9), -spawn_count, actor_id, actor_name,
                     obj_id, obj_enum, zar or "", csab_count, am_entries, status))

    rows.sort()

    for row in rows:
        _, neg_sc, actor_id, actor_name, obj_id, obj_enum, zar, csab_count, am_entries, status = row
        spawn_count = -neg_sc
        obj_id_str = f"0x{obj_id:04X}" if obj_id is not None else "?"
        zar_display = zar if zar else "-"
        print(f"{actor_id:<{col_w[0]}X}  {actor_name+'(×'+str(spawn_count)+')':<{col_w[1]}}  "
              f"{obj_id_str:<{col_w[2]}}  {(obj_enum or '?'):<{col_w[3]}}  "
              f"{zar_display:<{col_w[4]}}  {csab_count:>{col_w[5]}}  "
              f"{am_entries:>{col_w[6]}}  {status:<{col_w[7]}}")

    # Summary
    typed = [r for r in rows if r[-1] != "unset"]
    mapped = sum(1 for r in typed if r[-1] == "mapped")
    csab_have = sum(1 for r in typed if r[7] > 0)  # type: ignore[index]
    print(f"\nSummary: {mapped}/{len(typed)} actor types fully mapped"
          f"  |  {csab_have}/{len(typed)} have CSABs")

    # Lighting section — compare OoT3D ground truth vs N64/SoH3D
    if oot3d_lighting is not None and n64_lighting is not None:
        print_lighting_section(scene_name, oot3d_lighting, n64_lighting)


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__,
                                  formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--top", type=int, default=30,
                    help="Number of top lighting-diverged scenes to include (default 30)")
    ap.add_argument("--out", default=os.path.join(DATA_DIR, "scene_readiness.md"),
                    help="Output Markdown file path")
    ap.add_argument("--scene", metavar="NAME",
                    help="Print per-actor audit detail for a single scene and exit")
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

    print("Loading lighting JSONs...", flush=True)
    oot3d_lighting, n64_lighting = load_lighting_jsons()

    print("Building actor→object map from overlays...", flush=True)
    overlays_dir = os.path.join(SOH3D_REPO, "Shipwright", "soh", "src", "overlays", "actors")
    obj_table_h = os.path.join(SOH3D_REPO, "Shipwright", "soh", "include", "tables", "object_table.h")
    obj_name_to_id = parse_obj_name_to_id(obj_table_h)
    actor_to_obj = build_actor_to_object_map(overlays_dir, actor_id_to_name, obj_name_to_id)

    # --scene mode: print per-actor detail + lighting for a single scene and exit
    if args.scene:
        print_scene_detail(
            scene_name=args.scene,
            actor_id_to_name=actor_id_to_name,
            actor_to_obj=actor_to_obj,
            obj_to_zar=obj_to_zar,
            csab_catalog=csab_catalog,
            animmap_json=animmap_json,
            obj_name_to_id=obj_name_to_id,
            oot3d_lighting=oot3d_lighting,
            n64_lighting=n64_lighting,
        )
        return

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
