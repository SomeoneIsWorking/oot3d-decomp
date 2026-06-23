#!/usr/bin/env python3
"""scene_anim_dashboard.py — per-scene animation-parity risk dashboard.

Crosses the static OoT3D scene-actor data with the anim_parity quality metrics
to produce a ranked, per-scene view of animation-mapping risk.  Stream 4 uses
this to prioritise which scenes to oracle-verify first.

## What it does

  1. Loads data/scene_actors/*.json  — which actor IDs spawn in each scene.
  2. Resolves actor_id → OoT3D ZAR via the same pipeline as parity_report.py
     (actor's own ActorInit.objectId → soh3d_object_zars.inc lookup, then
      special-cased actors in SPECIAL_COVERED).
  3. Runs (or loads) the anim_parity analysis to get per-ZAR suspicion scores.
  4. For each scene, aggregates across all covered actors' ZARs:
       - max_suspicion   : worst single anim-map row in any ZAR the scene uses
       - total_flagged   : sum of flagged rows across all ZARs the scene uses
       - zars_at_risk    : set of ZAR paths that contribute ≥1 flagged row
       - scene_risk      : composite score = max_suspicion * log2(1+total_flagged)
  5. Emits a human-readable ranked table + optionally JSON for Stream 4.
  6. HIGH_DFRAME panel: shows which scenes/actors have the worst unresolved
     frame-count mismatches, ranked for Stream 4 oracle-verification priority.

## Data sources (all committed, no oracle, no build needed)
  - data/scene_actors/*.json
  - tools/skeldata/csab_catalog.json
  - <soh3d>/Shipwright/soh/src/soh3d/soh3d_object_zars.inc
  - <soh3d>/Shipwright/soh/include/tables/actor_table.h
  - <soh3d>/Shipwright/soh/include/tables/object_table.h
  - <soh3d>/Shipwright/soh/src/overlays/actors/ovl_*/z_*.c  (ActorInit.objectId)
  - <soh3d>/tools/skeldata/animmap.json
  - <soh3d>/tools/skeldata/charcompare_overrides.tsv

## Usage
  cd .
  SOH3D_REPO=<SOH3D_REPO> python3 tools/scene_anim_dashboard.py
  python3 tools/scene_anim_dashboard.py --top 30
  python3 tools/scene_anim_dashboard.py --scene spot04
  python3 tools/scene_anim_dashboard.py --json scratch/scene_anim_dashboard.json
  python3 tools/scene_anim_dashboard.py --high-dframe         # show HIGH_DFRAME panel
  python3 tools/scene_anim_dashboard.py --high-dframe --top 20

## --apply-verified mode (Stream 4 bulk-apply workflow)
  Stream 4 produces a whitelist TSV of oracle-confirmed rows (subset of the
  patch_high_dframe.py output, with # VERIFIED comments stripped/added).
  Pass it with --apply-verified to bulk-append NEW rows to charcompare_overrides.tsv:

  python3 tools/scene_anim_dashboard.py --apply-verified scratch/verified.tsv
      --overrides <soh3d>/tools/skeldata/charcompare_overrides.tsv

  Rows already in the overrides file are skipped (idempotent).  Rows that have
  a # PROPOSAL prefix in the source are accepted (the comment is preserved as
  # VERIFIED).  Prints a summary of how many rows were added.
"""
import argparse
import json
import math
import os
import re
import sys
from collections import defaultdict

# ---------------------------------------------------------------------------
# Paths
# ---------------------------------------------------------------------------
TOOLS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_DIR  = os.path.dirname(TOOLS_DIR)
DATA_DIR  = os.path.join(REPO_DIR, "data", "scene_actors")
CSAB_CATALOG = os.path.join(TOOLS_DIR, "skeldata", "csab_catalog.json")

SOH3D_REPO = os.environ.get("SOH3D_REPO",
                            os.path.join(os.path.dirname(REPO_DIR), "soh3d"))
SOH3D_ANIMMAP   = os.path.join(SOH3D_REPO, "tools", "skeldata", "animmap.json")
SOH3D_OVERRIDES = os.path.join(SOH3D_REPO, "tools", "skeldata", "charcompare_overrides.tsv")
OBJECT_ZARS_INC = os.path.join(SOH3D_REPO, "Shipwright", "soh", "src", "soh3d",
                                "soh3d_object_zars.inc")
ACTOR_TABLE_H   = os.path.join(SOH3D_REPO, "Shipwright", "soh", "include", "tables",
                                "actor_table.h")
OBJECT_TABLE_H  = os.path.join(SOH3D_REPO, "Shipwright", "soh", "include", "tables",
                                "object_table.h")
ACTORS_DIR      = os.path.join(SOH3D_REPO, "Shipwright", "soh", "src", "overlays", "actors")
CODE_DIR        = os.path.join(SOH3D_REPO, "Shipwright", "soh", "src", "code")

# ---------------------------------------------------------------------------
# Borrowed from parity_report.py — actor-id → ZAR resolution
# ---------------------------------------------------------------------------

# Actors covered by bespoke soh3d.c code (not via sModelTable / ActorInit.objectId).
# These are actor *names* that parity_report already knows about.
SPECIAL_COVERED_NAMES = {
    "En_Ishi", "Obj_Hana", "En_Ko", "Player",
}

# Actor IDs with no visual model (invisible / engine triggers / keep-draw).
NO_MODEL_ACTORS = {
    9, 36, 59, 149, 151, 302, 327, 389, 387,
    8, 7, 24, 273, 274, 6, 139, 385, 391, 148, 427,
    174, 73, 128, 285, 298, 414, 62, 33,
}

# En_Ko multi-variant: boys = km1, girls = kw1
ENKO_ID = 355
ENKO_BOY_TYPES  = {0, 1, 2, 3, 4, 9, 10, 11, 12}
ENKO_GIRL_TYPES = {5, 6, 7, 8}


def _load_object_zars(path: str) -> dict:
    result = {}
    if not os.path.exists(path):
        return result
    for line in open(path):
        m = re.match(r'\s*/\*\s*0x([0-9A-Fa-f]+)[^*]*\*/\s*(NULL|\"([^\"]+)\")',
                     line.strip())
        if m:
            oid = int(m.group(1), 16)
            zar = m.group(3) if m.group(3) else None
            result[oid] = zar
    return result


def _load_actor_names(path: str) -> dict:
    """Return {actorId: name}."""
    result = {}
    if not os.path.exists(path):
        return result
    for line in open(path):
        m = re.match(
            r'/\*\s*0x([0-9A-Fa-f]+)\s*\*/\s*DEFINE_ACTOR(?:_INTERNAL)?\s*\(\s*([^,]+)',
            line)
        if m:
            result[int(m.group(1), 16)] = m.group(2).strip()
    return result


def _load_object_names(path: str) -> dict:
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


def _load_actor_object_map(actors_dir: str, actor_table_path: str,
                           object_names: dict,
                           code_dir: str | None = None) -> dict:
    """Parse ActorInit structs → {actorId: declared_objectId}."""
    if not os.path.isdir(actors_dir) or not os.path.exists(actor_table_path):
        return {}
    macro_to_id: dict = {}
    for line in open(actor_table_path):
        m = re.match(
            r"/\*\s*0x([0-9A-Fa-f]+)\s*\*/\s*DEFINE_ACTOR(?:_INTERNAL)?\s*\(\s*[^,]+,\s*([^,]+)",
            line)
        if m:
            macro_to_id[m.group(2).strip()] = int(m.group(1), 16)
    obj_name_to_id = {v: k for k, v in object_names.items()}

    def _scan(path: str, out: dict) -> None:
        try:
            content = open(path).read()
        except OSError:
            return
        for m in re.finditer(
            r"const\s+ActorInit\s+\w+\s*=\s*\{[^{]*?"
            r"(ACTOR_[A-Z0-9_]+)\s*,\s*ACTORCAT_\w+\s*,\s*[^\n]*\n"
            r"[^\n]*\n\s*(OBJECT_\w+)",
            content):
            aid = macro_to_id.get(m.group(1))
            oid = obj_name_to_id.get(m.group(2))
            if aid is not None and oid is not None:
                out[aid] = oid

    result: dict = {}
    for dirname in os.listdir(actors_dir):
        adir = os.path.join(actors_dir, dirname)
        if not os.path.isdir(adir):
            continue
        for fname in os.listdir(adir):
            if fname.endswith(".c"):
                _scan(os.path.join(adir, fname), result)
    if code_dir and os.path.isdir(code_dir):
        for fname in os.listdir(code_dir):
            if fname.endswith(".c"):
                _scan(os.path.join(code_dir, fname), result)
    return result


def build_actor_zar_map(soh3d_repo: str) -> tuple[dict, dict]:
    """Return ({actorId: [zarPath, ...]}, {actorId: name}).

    For multi-variant actors (En_Ko) multiple ZARs are returned.
    Returns only actors that have ≥1 OoT3D ZAR.
    """
    obj_zar  = _load_object_zars(OBJECT_ZARS_INC)
    act_name = _load_actor_names(ACTOR_TABLE_H)
    obj_name = _load_object_names(OBJECT_TABLE_H)
    act_obj  = _load_actor_object_map(ACTORS_DIR, ACTOR_TABLE_H, obj_name, CODE_DIR)

    # Special-covered actor IDs (by name lookup)
    special_ids: set[int] = set()
    name_to_id = {v: k for k, v in act_name.items()}
    for n in SPECIAL_COVERED_NAMES:
        if n in name_to_id:
            special_ids.add(name_to_id[n])

    actor_zars: dict[int, list[str]] = {}

    for actor_id, obj_id in act_obj.items():
        if actor_id in NO_MODEL_ACTORS:
            continue
        zar = obj_zar.get(obj_id)
        if zar:
            actor_zars[actor_id] = [zar]

    # En_Ko: add both km1 + kw1 (both appear in Kokiri)
    if ENKO_ID not in NO_MODEL_ACTORS:
        actor_zars[ENKO_ID] = [
            "/actor/zelda_km1.zar",
            "/actor/zelda_kw1.zar",
        ]

    # Special-covered actors that have bespoke ZAR wiring in soh3d.c.
    # En_Ko already handled; others:
    # En_Ishi (id via name lookup) — uses zelda_ishi.zar but NOT in object_zars (bespoke path)
    en_ishi_id = name_to_id.get("En_Ishi")
    if en_ishi_id and en_ishi_id not in actor_zars:
        actor_zars[en_ishi_id] = ["/actor/zelda_ishi.zar"]
    # Obj_Hana — zelda_obj_hana.zar (bespoke)
    obj_hana_id = name_to_id.get("Obj_Hana")
    if obj_hana_id and obj_hana_id not in actor_zars:
        actor_zars[obj_hana_id] = ["/actor/zelda_obj_hana.zar"]

    return actor_zars, act_name


# ---------------------------------------------------------------------------
# Anim parity analysis (inline — avoids subprocess; mirrors anim_parity.py)
# ---------------------------------------------------------------------------

def _load_csab_catalog(path: str):
    if not os.path.exists(path):
        sys.exit(f"ERROR: csab_catalog.json not found at {path}")
    raw = json.load(open(path))
    by_name: dict = {}
    by_zar: dict  = {}
    for zar_path, entry in raw.get("objects", {}).items():
        by_zar[zar_path] = {}
        for csab in entry.get("csabs", []):
            name = csab["name"]
            rec  = {"zarPath": zar_path, "duration": csab["duration"],
                    "boneCount": csab.get("boneCount", 0)}
            by_name[name] = rec
            by_zar[zar_path][name] = rec
    return by_name, by_zar


def _load_overrides(path: str) -> dict:
    ov = {}
    if not os.path.exists(path):
        return ov
    for line in open(path):
        line = line.rstrip("\n")
        if not line.strip() or line.lstrip().startswith("#"):
            continue
        parts = line.split("\t")
        if len(parts) >= 3:
            ov[(parts[0].strip(), parts[1].strip())] = parts[2].strip()
    return ov


def _load_animmap(path: str) -> dict:
    if not os.path.exists(path):
        sys.exit(f"ERROR: animmap.json not found at {path}")
    return json.load(open(path))


def build_zar_risk(soh3d_repo: str) -> dict:
    """Return {zarPath: {max_suspicion, total_rows, flagged_rows, wrong_zar, high_dframe, ambiguous}}.

    Mirrors the analysis in anim_parity.py but aggregated per-ZAR for fast
    scene-level lookup.
    """
    csab_by_name, csab_by_zar = _load_csab_catalog(CSAB_CATALOG)
    overrides = _load_overrides(SOH3D_OVERRIDES)
    animmap   = _load_animmap(SOH3D_ANIMMAP)

    zar_risk: dict = {}

    for zar, entry in animmap.items():
        zar_csabs = csab_by_zar.get(zar, {})
        rows = entry.get("rows", [])
        max_susp   = 0.0
        flagged    = 0
        wrong_zar  = 0
        high_df    = 0
        ambig      = 0

        for row in rows:
            n64         = row["n64"]
            n64_frames  = int(row.get("frameCount") or 0)
            override_k  = (zar, n64)
            if override_k in overrides:
                csab, overridden = overrides[override_k], True
            else:
                csab, overridden = row.get("best") or "", False

            if csab:
                cat_rec          = csab_by_name.get(csab)
                exists           = cat_rec is not None
                right_z          = (cat_rec["zarPath"] == zar) if exists else False
                csab_dur         = cat_rec["duration"] if exists else None
                dframe           = abs(n64_frames - csab_dur) if csab_dur is not None else None
            else:
                exists = right_z = False
                csab_dur = dframe = None

            n_ambig = 0
            if csab_dur is not None:
                n_ambig = sum(
                    1 for cn, cr in zar_csabs.items()
                    if cn != csab and abs(cr["duration"] - csab_dur) <= 3
                )

            if dframe is None:
                suspicion = 100.0
            else:
                human_w   = 0.2 if overridden else 1.0
                suspicion = round((dframe / max(n64_frames, 1)) * (1.0 + 0.3 * n_ambig) * human_w, 4)

            # Issue flags
            is_flagged = False
            if not csab or not exists:
                is_flagged = True
            if csab and exists and not right_z:
                wrong_zar += 1
                is_flagged = True
            if dframe is not None and dframe > 10 and not overridden:
                high_df   += 1
                is_flagged = True
            if n_ambig >= 2 and dframe is not None and dframe <= 3 and not overridden:
                ambig     += 1
                is_flagged = True

            if is_flagged:
                flagged += 1
            max_susp = max(max_susp, suspicion)

        zar_risk[zar] = {
            "total_rows":  len(rows),
            "flagged_rows": flagged,
            "wrong_zar":   wrong_zar,
            "high_dframe": high_df,
            "ambiguous":   ambig,
            "max_suspicion": round(max_susp, 4),
            "flag_rate":   round(flagged / max(len(rows), 1), 4),
        }

    return zar_risk


# ---------------------------------------------------------------------------
# HIGH_DFRAME per-ZAR proposal map
# (mirrors patch_high_dframe.py logic inline — no subprocess, same data sources)
# ---------------------------------------------------------------------------

HIGH_DFRAME_THRESHOLD = 10  # must match anim_parity.py / patch_high_dframe.py


def build_high_dframe_by_zar(soh3d_repo: str) -> dict:
    """Return {zarPath: [proposal, ...]} for non-overridden HIGH_DFRAME rows.

    Each proposal dict has:
      n64, n64_frames, current_csab, current_dframe, proposed_csab,
      proposed_dframe, confidence, improvement
    Proposals are sorted best-improvement-first within each ZAR.
    Only rows where improvement > 0 are included (i.e. a better CSAB exists).
    """
    csab_by_name, csab_by_zar = _load_csab_catalog(CSAB_CATALOG)
    overrides = _load_overrides(SOH3D_OVERRIDES)
    animmap   = _load_animmap(SOH3D_ANIMMAP)

    CONF_RANK = {"HIGH": 3, "MED": 2, "LOW": 1, "NONE": 0}
    by_zar: dict[str, list] = {}

    for zar, entry in animmap.items():
        zar_csabs = csab_by_zar.get(zar, {})
        for row in entry.get("rows", []):
            n64        = row["n64"]
            n64_frames = int(row.get("frameCount") or 0)

            if (zar, n64) in overrides:
                continue  # already hand-verified

            current_csab = row.get("best") or ""
            if not current_csab:
                continue  # NO_CSAB is a separate issue

            zar_rec     = zar_csabs.get(current_csab)
            catalog_rec = csab_by_name.get(current_csab)
            if zar_rec is None and catalog_rec is None:
                continue
            current_dur    = (zar_rec or catalog_rec)["duration"]
            current_dframe = abs(n64_frames - current_dur)

            if current_dframe <= HIGH_DFRAME_THRESHOLD:
                continue

            # Rank all same-ZAR CSABs by frame proximity
            ranked = sorted(
                zar_csabs.items(),
                key=lambda kv: (abs(kv[1]["duration"] - n64_frames), kv[1]["duration"])
            )
            if not ranked:
                continue

            best_name, best_rec = ranked[0]
            best_dur    = best_rec["duration"]
            best_dframe = abs(n64_frames - best_dur)
            improvement = current_dframe - best_dframe

            if improvement <= 0:
                continue  # no better candidate

            if best_dframe == 0:
                confidence = "HIGH"
            elif best_dframe <= 5:
                confidence = "MED"
            else:
                confidence = "LOW"

            prop = {
                "n64":             n64,
                "n64_frames":      n64_frames,
                "current_csab":    current_csab,
                "current_dframe":  current_dframe,
                "proposed_csab":   best_name,
                "proposed_dframe": best_dframe,
                "confidence":      confidence,
                "improvement":     improvement,
            }
            by_zar.setdefault(zar, []).append(prop)

    # Sort each ZAR's list: best improvement first
    for zar in by_zar:
        by_zar[zar].sort(key=lambda p: (-p["improvement"],
                                        -CONF_RANK.get(p["confidence"], 0)))

    return by_zar


def build_scene_high_dframe(scenes: list,
                             actor_zar_map: dict,
                             hdf_by_zar: dict) -> list:
    """Return per-scene HIGH_DFRAME summary, sorted by worst_dframe desc.

    Each entry:
      scene, worst_dframe, total_hdf_rows, high_conf_rows, zar_breakdown
    zar_breakdown is a list of {zar, n_rows, worst_dframe, sample_n64} for the
    top ZARs contributing HIGH_DFRAME rows to this scene.
    """
    results = []
    for scene in scenes:
        scene_name = scene.get("scene_name", "?")

        if "actor_id_set" in scene:
            unique_ids: set = set(scene["actor_id_set"])
        else:
            actors = scene.get("actors", [])
            for room in scene.get("rooms", []):
                actors += room.get("actors", [])
            actor_ids_raw = [a.get("id", a.get("actor_id")) for a in actors]
            unique_ids = set(a for a in actor_ids_raw if a is not None)

        scene_zars: set[str] = set()
        for aid in unique_ids:
            for z in actor_zar_map.get(aid, []):
                scene_zars.add(z)

        total_hdf   = 0
        worst_dframe = 0
        high_conf   = 0
        zar_breakdown: list = []

        for zar in sorted(scene_zars):
            props = hdf_by_zar.get(zar)
            if not props:
                continue
            zar_worst = max(p["current_dframe"] for p in props)
            zar_high  = sum(1 for p in props if p["confidence"] == "HIGH")
            worst_dframe = max(worst_dframe, zar_worst)
            total_hdf   += len(props)
            high_conf   += zar_high
            # sample: n64 anim with worst current_dframe in this ZAR
            sample_prop = max(props, key=lambda p: p["current_dframe"])
            zar_breakdown.append({
                "zar":         zar,
                "n_rows":      len(props),
                "worst_dframe": zar_worst,
                "sample_n64":  sample_prop["n64"],
                "sample_cur":  sample_prop["current_csab"],
                "sample_prop": sample_prop["proposed_csab"],
                "sample_conf": sample_prop["confidence"],
            })

        if total_hdf == 0:
            continue

        zar_breakdown.sort(key=lambda z: -z["worst_dframe"])
        results.append({
            "scene":         scene_name,
            "worst_dframe":  worst_dframe,
            "total_hdf_rows": total_hdf,
            "high_conf_rows": high_conf,
            "zar_breakdown": zar_breakdown,
        })

    results.sort(key=lambda r: (-r["worst_dframe"], -r["total_hdf_rows"]))
    return results


# ---------------------------------------------------------------------------
# --apply-verified: bulk-append oracle-confirmed rows to charcompare_overrides.tsv
# ---------------------------------------------------------------------------

def apply_verified(verified_tsv: str, overrides_path: str) -> None:
    """Read verified_tsv (patch_high_dframe.py TSV format) and append rows not
    already present in overrides_path to overrides_path.  Idempotent.
    """
    if not os.path.exists(verified_tsv):
        sys.exit(f"ERROR: --apply-verified file not found: {verified_tsv}")
    if not os.path.exists(overrides_path):
        sys.exit(f"ERROR: overrides file not found: {overrides_path}")

    # Load existing overrides keys
    existing: set = set()
    for line in open(overrides_path):
        line = line.rstrip("\n")
        if not line.strip() or line.lstrip().startswith("#"):
            continue
        parts = line.split("\t")
        if len(parts) >= 2:
            existing.add((parts[0].strip(), parts[1].strip()))

    # Parse new rows from verified_tsv
    new_rows: list[str] = []
    for line in open(verified_tsv):
        line = line.rstrip("\n")
        if not line.strip() or line.lstrip().startswith("#"):
            continue
        parts = line.split("\t")
        if len(parts) < 3:
            continue
        key = (parts[0].strip(), parts[1].strip())
        if key in existing:
            continue
        # Rewrite PROPOSAL → VERIFIED in comment field if present
        rest = "\t".join(parts[3:]).replace("# PROPOSAL", "# VERIFIED")
        row  = f"{parts[0]}\t{parts[1]}\t{parts[2]}"
        if rest:
            row += f"\t{rest}"
        new_rows.append(row)

    if not new_rows:
        print("apply-verified: nothing new to add (all rows already present).")
        return

    # Append to overrides file
    with open(overrides_path, "a") as fh:
        fh.write(f"\n# === apply-verified batch ({len(new_rows)} rows) ===\n")
        for r in new_rows:
            fh.write(r + "\n")

    print(f"apply-verified: appended {len(new_rows)} new row(s) to {overrides_path}")
    for r in new_rows:
        cols = r.split("\t")
        short_zar = os.path.basename(cols[0]).replace("zelda_", "z_").replace(".zar", "")
        print(f"  + {short_zar}  {cols[1][:50]}  →  {cols[2]}")


# ---------------------------------------------------------------------------
# Scene loading
# ---------------------------------------------------------------------------

def load_scenes(data_dir: str) -> list:
    scenes = []
    if not os.path.isdir(data_dir):
        return scenes
    for fname in sorted(os.listdir(data_dir)):
        if not fname.endswith(".json"):
            continue
        try:
            d = json.load(open(os.path.join(data_dir, fname)))
        except json.JSONDecodeError as e:
            print(f"WARNING: {fname}: {e}", file=sys.stderr)
            continue
        scenes.append(d)
    return scenes


# ---------------------------------------------------------------------------
# Per-scene risk aggregation
# ---------------------------------------------------------------------------

def scene_risk_score(max_susp: float, flagged: int) -> float:
    """Composite scene risk = max_suspicion * log2(1 + total_flagged_rows)."""
    return round(max_susp * math.log2(1 + flagged), 4)


def compute_scene_risks(scenes: list,
                        actor_zar_map: dict,
                        zar_risk: dict) -> list:
    """Return list of per-scene risk dicts, sorted by scene_risk desc."""
    results = []

    for scene in scenes:
        scene_name = scene.get("scene_name", "?")

        # Prefer the pre-computed actor_id_set (flat list of unique IDs for the whole
        # scene, set by scene_actors.py).  Fall back to iterating rooms[*].actors for
        # older exports that lack it.
        if "actor_id_set" in scene:
            unique_ids: set = set(scene["actor_id_set"])
            actors = []  # not needed for count below — use total_actor_spawns
            total_spawns = scene.get("total_actor_spawns", len(unique_ids))
        else:
            actors = scene.get("actors", [])
            for room in scene.get("rooms", []):
                actors += room.get("actors", [])
            actor_ids_raw = [a.get("id", a.get("actor_id")) for a in actors]
            unique_ids = set(a for a in actor_ids_raw if a is not None)
            total_spawns = len(actors)

        # Resolve ZARs for the actors in this scene
        scene_zars: set[str] = set()
        covered_ids: set[int] = set()
        for aid in unique_ids:
            zars = actor_zar_map.get(aid, [])
            for z in zars:
                scene_zars.add(z)
                covered_ids.add(aid)

        # Aggregate risk across scene ZARs
        max_susp    = 0.0
        total_flag  = 0
        total_rows  = 0
        zars_at_risk: list[str] = []

        for zar in sorted(scene_zars):
            risk = zar_risk.get(zar)
            if risk is None:
                continue
            max_susp   = max(max_susp, risk["max_suspicion"])
            total_flag += risk["flagged_rows"]
            total_rows += risk["total_rows"]
            if risk["flagged_rows"] > 0:
                zars_at_risk.append(zar)

        risk_score = scene_risk_score(max_susp, total_flag)

        results.append({
            "scene":        scene_name,
            "actor_count":  total_spawns,
            "covered_ids":  len(covered_ids),
            "scene_zars":   len(scene_zars),
            "total_anim_rows": total_rows,
            "flagged_rows": total_flag,
            "max_suspicion": round(max_susp, 4),
            "scene_risk":   risk_score,
            "zars_at_risk": zars_at_risk,
        })

    results.sort(key=lambda r: -r["scene_risk"])
    return results


# ---------------------------------------------------------------------------
# Display
# ---------------------------------------------------------------------------

def print_dashboard(results: list, top: int, zar_risk: dict):
    total_scenes    = len(results)
    risky_scenes    = sum(1 for r in results if r["scene_risk"] > 0)
    total_flagged   = sum(r["flagged_rows"] for r in results)

    print("=" * 78)
    print("  OoT3D ⇄ SoH3D Scene Animation-Parity Dashboard  (static, no oracle)")
    print("=" * 78)
    print(f"  Scenes analysed : {total_scenes}")
    print(f"  Scenes with risk: {risky_scenes}  (≥1 flagged anim-map row for a scene actor)")
    print(f"  Total flagged rows (across all scenes): {total_flagged}")
    print()
    print("  Risk score = max_suspicion × log2(1 + flagged_rows_in_scene)")
    print("  Use this to prioritise which scene to oracle-verify next (Stream 4).")
    print()

    hdr = f"  {'scene':<30} {'risk':>6} {'max_susp':>8} {'flagged':>7} {'zars':>5}  {'ZARs at risk (sample)'}"
    print(hdr)
    print("  " + "-" * (len(hdr) - 2))
    for r in results[:top]:
        zar_sample = ", ".join(
            os.path.basename(z).replace("zelda_", "").replace(".zar", "")
            for z in r["zars_at_risk"][:3]
        )
        if len(r["zars_at_risk"]) > 3:
            zar_sample += f" +{len(r['zars_at_risk'])-3}"
        print(f"  {r['scene']:<30} {r['scene_risk']:>6.2f}  {r['max_suspicion']:>6.2f}   "
              f"{r['flagged_rows']:>5}   {r['scene_zars']:>3}  {zar_sample}")
    if total_scenes > top:
        print(f"  ... ({total_scenes - top} more scenes with lower risk)")

    print()
    print("=" * 78)
    print("  ZAR-level risk summary (ZARs with ≥5 flagged rows)")
    print("=" * 78)
    risky_zars = sorted(
        [(z, r) for z, r in zar_risk.items() if r["flagged_rows"] >= 5],
        key=lambda x: -x[1]["flagged_rows"]
    )
    print(f"  {'ZAR':<40} {'total':>6} {'flagged':>7} {'wrong_zar':>9} {'hi_df':>6} {'ambig':>6}")
    print("  " + "-" * 74)
    for zar, r in risky_zars[:20]:
        short = os.path.basename(zar).replace("zelda_", "").replace(".zar", "")
        print(f"  {short:<40} {r['total_rows']:>6} {r['flagged_rows']:>7} "
              f"{r['wrong_zar']:>9} {r['high_dframe']:>6} {r['ambiguous']:>6}")


def print_high_dframe_panel(scene_hdf: list, top: int):
    """Print the HIGH_DFRAME scene-ranking panel.

    scene_hdf is the output of build_scene_high_dframe() — scenes ranked by
    worst unresolved frame mismatch.  Stream 4 uses this to pick which scene
    to oracle-verify next for frame-count improvements.
    """
    total_scenes = len(scene_hdf)
    total_rows   = sum(r["total_hdf_rows"]  for r in scene_hdf)
    total_high   = sum(r["high_conf_rows"]  for r in scene_hdf)

    print()
    print("=" * 78)
    print("  HIGH_DFRAME Scene Panel  (unresolved frame mismatches > 10 — verify with oracle)")
    print("=" * 78)
    print(f"  Scenes with unresolved HIGH_DFRAME rows : {total_scenes}")
    print(f"  Total improvable HIGH_DFRAME rows       : {total_rows}")
    print(f"  Of which HIGH-confidence (exact match)  : {total_high}")
    print()
    print("  'worst_df' = current |n64_frames - csab_duration| for the worst row in scene.")
    print("  Stream 4: verify the top scenes against the OoT3D oracle; apply with --apply-verified.")
    print()

    hdr = (f"  {'scene':<30} {'worst_df':>8} {'hdf_rows':>8} {'hi_conf':>7}  "
           f"{'worst ZAR / sample N64 anim'}")
    print(hdr)
    print("  " + "-" * (len(hdr) - 2))

    for r in scene_hdf[:top]:
        if not r["zar_breakdown"]:
            continue
        top_zar  = r["zar_breakdown"][0]
        zar_s    = os.path.basename(top_zar["zar"]).replace("zelda_", "z_").replace(".zar", "")
        n64_s    = top_zar["sample_n64"]
        # Truncate long N64 anim names
        sample_s = f"{zar_s}: {n64_s}"
        if len(sample_s) > 45:
            sample_s = sample_s[:44] + "…"
        conf_tag = f"[{top_zar['sample_conf']}]"
        print(f"  {r['scene']:<30} {r['worst_dframe']:>8} {r['total_hdf_rows']:>8} "
              f"{r['high_conf_rows']:>7}  {sample_s} {conf_tag}")

    if total_scenes > top:
        print(f"  ... ({total_scenes - top} more scenes)")

    print()

    # Per-ZAR breakdown table across ALL scenes (deduplicated, sorted by worst_dframe)
    zar_seen: dict[str, dict] = {}
    for r in scene_hdf:
        for zb in r["zar_breakdown"]:
            zar = zb["zar"]
            if zar not in zar_seen or zb["worst_dframe"] > zar_seen[zar]["worst_dframe"]:
                zar_seen[zar] = zb
    zar_sorted = sorted(zar_seen.values(), key=lambda z: -z["worst_dframe"])

    print("=" * 78)
    print("  ZAR-level HIGH_DFRAME summary (top ZARs by worst frame mismatch)")
    print("=" * 78)
    print(f"  {'ZAR':<32} {'rows':>5} {'worst_df':>8}  {'sample N64 anim (cur → proposed)'}")
    print("  " + "-" * 74)
    for zb in zar_sorted[:20]:
        short   = os.path.basename(zb["zar"]).replace("zelda_", "z_").replace(".zar", "")
        cur_s   = (zb["sample_cur"]  or "")[:18]
        prop_s  = (zb["sample_prop"] or "?")[:18]
        n64_s   = zb["sample_n64"][:28]
        print(f"  {short:<32} {zb['n_rows']:>5} {zb['worst_dframe']:>8}  "
              f"{n64_s:<30} {cur_s} → {prop_s}")


def print_scene_detail(results: list, scene_name: str, actor_zar_map: dict,
                       actor_names: dict, zar_risk: dict, scenes: list):
    """Print detailed breakdown for a single scene."""
    scene_data = next((s for s in scenes if s.get("scene_name") == scene_name), None)
    rec = next((r for r in results if r["scene"] == scene_name), None)
    if rec is None:
        print(f"Scene '{scene_name}' not found.", file=sys.stderr)
        return

    print(f"\nScene: {scene_name}  (risk={rec['scene_risk']:.2f}, "
          f"max_susp={rec['max_suspicion']:.2f}, flagged={rec['flagged_rows']})\n")

    if scene_data:
        # Flatten actors from rooms (scene JSON nests them under rooms[*].actors)
        flat_actors = scene_data.get("actors", [])
        for room in scene_data.get("rooms", []):
            flat_actors = flat_actors + room.get("actors", [])
        actors = flat_actors
        seen_ids: set = set()
        print(f"  {'actor_id':>9}  {'name':<28}  {'zar(s)'}")
        print("  " + "-" * 70)
        for a in sorted(actors, key=lambda x: x.get("id", 0)):
            aid = a.get("id", a.get("actor_id"))
            if aid is None or aid in seen_ids:
                continue
            seen_ids.add(aid)
            name  = actor_names.get(aid, "?")
            zars  = actor_zar_map.get(aid, [])
            for z in zars:
                r = zar_risk.get(z, {})
                flag_str = f"flagged={r.get('flagged_rows',0)}/{r.get('total_rows',0)}" if r else "no anim data"
                print(f"  {aid:>9}  {name:<28}  {os.path.basename(z)}  ({flag_str})")
            if not zars:
                print(f"  {aid:>9}  {name:<28}  (no ZAR / N64 fallback)")


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--top", metavar="N", type=int, default=30,
                    help="print top-N riskiest scenes (default 30)")
    ap.add_argument("--scene", metavar="NAME",
                    help="show detailed breakdown for a single scene")
    ap.add_argument("--json", metavar="PATH",
                    help="write full report JSON to PATH (- for stdout)")
    ap.add_argument("--high-dframe", action="store_true",
                    help="show HIGH_DFRAME panel: scenes ranked by worst unresolved "
                         "frame mismatch (for Stream 4 oracle-verify priority)")
    ap.add_argument("--apply-verified", metavar="TSV",
                    help="bulk-append oracle-confirmed rows from TSV to "
                         "charcompare_overrides.tsv (idempotent; use with --overrides)")
    ap.add_argument("--overrides", metavar="PATH", default=SOH3D_OVERRIDES,
                    help=f"path to charcompare_overrides.tsv (default: {SOH3D_OVERRIDES})")
    args = ap.parse_args()

    # ---- --apply-verified: early-exit mode, no scene data needed ----
    if args.apply_verified:
        apply_verified(args.apply_verified, args.overrides)
        return

    # ---- Build actor→ZAR map ----
    print("Loading actor→ZAR map ...", file=sys.stderr, end=" ", flush=True)
    actor_zar_map, actor_names = build_actor_zar_map(SOH3D_REPO)
    print(f"{len(actor_zar_map)} actors with ZARs", file=sys.stderr)

    # ---- Build per-ZAR risk ----
    print("Building per-ZAR anim risk ...", file=sys.stderr, end=" ", flush=True)
    zar_risk = build_zar_risk(SOH3D_REPO)
    print(f"{len(zar_risk)} ZARs in animmap", file=sys.stderr)

    # ---- Load scene data ----
    print("Loading scene actor data ...", file=sys.stderr, end=" ", flush=True)
    scenes = load_scenes(DATA_DIR)
    print(f"{len(scenes)} scenes", file=sys.stderr)

    # ---- Compute per-scene risk ----
    results = compute_scene_risks(scenes, actor_zar_map, zar_risk)

    # ---- Output ----
    if args.scene:
        print_scene_detail(results, args.scene, actor_zar_map, actor_names,
                           zar_risk, scenes)
    else:
        print_dashboard(results, args.top, zar_risk)

    if args.high_dframe:
        print("Building HIGH_DFRAME proposals ...", file=sys.stderr, end=" ", flush=True)
        hdf_by_zar = build_high_dframe_by_zar(SOH3D_REPO)
        hdf_total  = sum(len(v) for v in hdf_by_zar.values())
        print(f"{hdf_total} improvable rows across {len(hdf_by_zar)} ZARs", file=sys.stderr)
        scene_hdf  = build_scene_high_dframe(scenes, actor_zar_map, hdf_by_zar)
        print_high_dframe_panel(scene_hdf, args.top)

    if args.json:
        report: dict = {
            "summary": {
                "total_scenes":   len(results),
                "risky_scenes":   sum(1 for r in results if r["scene_risk"] > 0),
                "total_flagged":  sum(r["flagged_rows"] for r in results),
            },
            "scenes":  results,
            "zar_risk": {k: v for k, v in sorted(zar_risk.items(),
                                                  key=lambda x: -x[1]["flagged_rows"])},
        }
        if args.high_dframe:
            report["high_dframe_scenes"] = scene_hdf  # type: ignore[possibly-undefined]
        js = json.dumps(report, indent=2)
        if args.json == "-":
            print(js)
        else:
            os.makedirs(os.path.dirname(os.path.abspath(args.json)), exist_ok=True)
            open(args.json, "w").write(js)
            print(f"\nWrote {args.json}", file=sys.stderr)


if __name__ == "__main__":
    main()
