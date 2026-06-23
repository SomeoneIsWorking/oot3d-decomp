#!/usr/bin/env python3
"""
lighting_parity.py — cross-reference OoT3D per-scene lighting vs N64 per-scene lighting,
emit a per-scene inconsistency report ranked by severity.

Usage:
    python3 tools/lighting_parity.py [--out report.md]

Inputs (auto-resolved):
  - oot3d-decomp/data/scene_lighting.json   (OoT3D ground truth)
  - soh3d/tools/skeldata/n64_scene_lighting.json  (N64/SoH data extracted by
    soh3d/tools/n64_scene_lighting_extract.py)

Output:
  data/lighting_parity_report.md  (default)

Comparison:
  Both sources have per-scene lists of lighting settings (one per time-of-day slot).
  We compare slot-by-slot for scenes present in BOTH sources.

  OoT3D fields mapped to N64 fields:
    oot3d.ambient[3]       vs n64.ambientColor[3]          (uint8 each)
    oot3d.light0.dir[3]    vs n64.light1Dir[3]             (s8 each)
    oot3d.light0.color[3]  vs n64.light1Color[3]           (uint8 each)
    oot3d.light1.dir[3]    vs n64.light2Dir[3]             (s8 each; N64 forces l2dir = -l1dir at runtime)
    oot3d.light1.color[3]  vs n64.light2Color[3]           (uint8 each)
    oot3d.fog_start        vs n64.fogNear & 0x3FF          (10-bit effective value)
    oot3d.fog_end          vs n64.fogFar                   (uint16)
  (OoT3D has no fogColor; N64 does — we report the N64 fogColor as informational.)

  N64 fog units: the N64 fogNear/fogFar are in "z-buffer"-relative range [0..1000] (typical
  game units), NOT world units.  OoT3D fog_start/fog_end are in world units (floats).
  These are NOT directly comparable numerically; we flag extreme outliers (fog_end delta > 1000).

  For ambient and light colors we report the mean absolute delta across R/G/B channels.
  A delta ≥ 30 per channel (0-255 scale) is flagged HIGH; ≥ 15 MEDIUM; else LOW.

  Scene-name mapping:
    soh3d_scene_names.inc maps SoH/N64 scene IDs to OoT3D folder names.  The N64 data
    from the OTR uses the N64 scene folder names (Bmori1, HIDAN, …) while the OoT3D
    JSON uses lower-case OoT3D names (bmori1, hidan, …).  We normalise N64 names via a
    hand-built map (derived from soh3d_scene_names.inc).
"""

from __future__ import annotations
import json
import math
import os
import sys
from pathlib import Path
from typing import Any

# ---------------------------------------------------------------------------
# Path resolution
# ---------------------------------------------------------------------------

REPO_ROOT    = Path(__file__).resolve().parents[2]  # soh3d repo root (parent of oot3d-decomp/)
DECOMP_ROOT  = Path(__file__).resolve().parents[1]  # oot3d-decomp/

OOT3D_JSON   = DECOMP_ROOT / "data" / "scene_lighting.json"
N64_JSON     = REPO_ROOT / "soh3d" / "tools" / "skeldata" / "n64_scene_lighting.json"
DEFAULT_OUT  = DECOMP_ROOT / "data" / "lighting_parity_report.md"

# ---------------------------------------------------------------------------
# N64 scene name -> OoT3D scene name normalisation
# Derived from soh3d/Shipwright/soh/src/soh3d/soh3d_scene_names.inc
# N64 name (lower-cased) -> oot3d name
# ---------------------------------------------------------------------------

N64_TO_OOT3D: dict[str, str] = {
    "ydan":            "ydan",
    "ddan":            "ddan",
    "bdan":            "bdan",
    "bmori1":          "bmori1",
    "hidan":           "hidan",
    "mizusin":         "mizusin",
    "jyasinzou":       "jyasinzou",
    "hakadan":         "hakadan",
    "hakadanch":       "hakadan_ch",
    "ice_doukutu":     "ice_doukutu",
    "ganon":           "ganon",
    "men":             "men",
    "gerudoway":       "gerudoway",
    "ganontika":       "ganontika",
    "ganon_sonogo":    "ganon_sonogo",
    "ganontikasonogo": "ganontikasonogo",
    "takaraya":        "takaraya",
    "ydan_boss":       "ydan_boss",
    "ddan_boss":       "ddan_boss",
    "bdan_boss":       "bdan_boss",
    "moribossroom":    "moriboss",
    "fire_bs":         "fire_bs",
    "mizusin_bs":      "mizusin_boss",
    "jyasinboss":      "jyasinzou_boss",
    "hakadan_bs":      "hakadan_boss",
    "ganon_boss":      "ganon_boss",
    "ganon_final":     "ganon_final",
    "entra":           "entra_day",
    "entra_n":         "entra_night",
    "enrui":           "entra_ruins",
    "market_alley":    "market_alley",
    "market_alley_n":  "market_alley_n",
    "market_day":      "market_day",
    "market_night":    "market_night",
    "market_ruins":    "market_ruins",
    "shrine":          "shrine",
    "shrine_n":        "shrine_n",
    "shrine_r":        "shrine_r",
    "kokiri_home":     "k_home",
    "kokiri_home3":    "k_home3",
    "kokiri_home4":    "k_home4",
    "kokiri_home5":    "k_home5",
    "kakariko":        "kakariko",
    "kakariko3":       "kakariko_home3",
    "shop1":           "shop",
    "kokiri_shop":     "shop",
    "golon":           "shop_golon",
    "zoora":           "zoora",
    "drag":            "shop_drag",
    "alley_shop":      "shop_alley",
    "night_shop":      "shop_night",
    "face_shop":       "shop_face",
    "link_home":       "link",
    "impa":            "kakariko_impa",
    "malon_stable":    "stable",
    "labo":            "labo",
    "hylia_labo":      "hylia_labo",
    "tent":            "tent",
    "hut":             "hut",
    "daiyousei_izumi": "daiyousei_izumi",
    "yousei_izumi_tate": "yousei_izumi_tate",
    "yousei_izumi_yoko": "yousei_izumi_yoko",
    "kakusiana":       "kakusiana",
    "hakaana":         "hakaana",
    "hakaana2":        "hakaana2",
    "hakaana_ouke":    "hakaana_ouke",
    "syatekijyou":     "syatekijyou",
    "tokinoma":        "tokinoma",
    "kenjyanoma":      "kenjyanoma",
    "hairal_niwa":     "hairal_niwa",
    "hairal_niwa_n":   "hairal_niwa_n",
    "hiral_demo":      "hiral_demo",
    "hakasitarelay":   "hakasitarelay",
    "turibori":        "turibori",
    "nakaniwa":        "nakaniwa",
    "bowling":         "bowling",
    "souko":           "souko",
    "miharigoya":      "miharigoya",
    "mahouya":         "mahouya",
    "ganon_demo":      "ganon_demo",
    "kinsuta":         "kinsuta",
    "spot00":          "spot00",
    "spot01":          "spot01",
    "spot02":          "spot02",
    "spot03":          "spot03",
    "spot04":          "spot04",
    "spot05":          "spot05",
    "spot06":          "spot06",
    "spot07":          "spot07",
    "spot08":          "spot08",
    "spot09":          "spot09",
    "spot10":          "spot10",
    "spot11":          "spot11",
    "spot12":          "spot12",
    "spot13":          "spot13",
    "spot15":          "spot15",
    "spot16":          "spot16",
    "spot17":          "spot17",
    "spot18":          "spot18",
    "spot20":          "spot20",
    "ganon_tou":       "ganon_tou",
}

# ---------------------------------------------------------------------------
# Comparison helpers
# ---------------------------------------------------------------------------

def color_delta(a: list[int], b: list[int]) -> float:
    """Mean absolute delta across 3 channels."""
    return sum(abs(int(x) - int(y)) for x, y in zip(a, b)) / 3.0


def dir_delta(a: list[int], b: list[int]) -> float:
    """Mean absolute delta for direction vectors (s8 components)."""
    return sum(abs(int(x) - int(y)) for x, y in zip(a, b)) / 3.0


def severity(delta: float) -> str:
    if delta >= 30:
        return "HIGH"
    elif delta >= 15:
        return "MED"
    return "low"


def fog_flag(oot3d_fog_end: float, n64_fog_far: int) -> str:
    """Flag fog_end/far discrepancy.  Different units so only flag extreme cases."""
    # OoT3D fog_end in world units; N64 fogFar in 0-1000 z-buffer range (but
    # actually stored as world-unit-like values in several scenes — up to 32767).
    # Just note when they differ by a large ratio.
    if n64_fog_far == 0:
        return "HIGH (n64 fogFar=0)"
    ratio = oot3d_fog_end / n64_fog_far if n64_fog_far else float("inf")
    if ratio > 4 or ratio < 0.25:
        return f"HIGH (ratio={ratio:.1f})"
    if ratio > 2 or ratio < 0.5:
        return f"MED (ratio={ratio:.1f})"
    return f"low (ratio={ratio:.1f})"


def compare_slot(oot3d: dict, n64: dict) -> dict[str, Any]:
    """Return per-field deltas between one OoT3D slot and one N64 slot."""
    amb_d   = color_delta(oot3d["ambient"],       n64["ambientColor"])
    l0c_d   = color_delta(oot3d["light0"]["color"], n64["light1Color"])
    l1c_d   = color_delta(oot3d["light1"]["color"], n64["light2Color"])
    l0dir_d = dir_delta(oot3d["light0"]["dir"],   n64["light1Dir"])
    l1dir_d = dir_delta(oot3d["light1"]["dir"],   n64["light2Dir"])
    fog_note = fog_flag(oot3d.get("fog_end", 0), n64["fogFar"])
    n64_fog_near_eff = n64["fogNear"] & 0x3FF  # effective 10-bit value
    oot3d_fog_start  = oot3d.get("fog_start", 0)
    fog_near_d = abs(oot3d_fog_start - n64_fog_near_eff)
    return {
        "ambient_delta":    amb_d,
        "l0_color_delta":   l0c_d,
        "l1_color_delta":   l1c_d,
        "l0_dir_delta":     l0dir_d,
        "l1_dir_delta":     l1dir_d,
        "fog_far_flag":     fog_note,
        "fog_near_delta":   fog_near_d,
        # raw values for reporting
        "oot3d_ambient":    oot3d["ambient"],
        "n64_ambient":      n64["ambientColor"],
        "oot3d_l0_color":   oot3d["light0"]["color"],
        "n64_l0_color":     n64["light1Color"],
        "oot3d_l1_color":   oot3d["light1"]["color"],
        "n64_l1_color":     n64["light2Color"],
        "oot3d_l0_dir":     oot3d["light0"]["dir"],
        "n64_l0_dir":       n64["light1Dir"],
        "oot3d_fog_end":    oot3d.get("fog_end"),
        "n64_fog_far":      n64["fogFar"],
        "oot3d_fog_start":  oot3d_fog_start,
        "n64_fog_near_eff": n64_fog_near_eff,
    }


def scene_score(slot_diffs: list[dict]) -> float:
    """Aggregate severity score for a scene (mean of max per-field deltas)."""
    if not slot_diffs:
        return 0.0
    max_amb  = max(d["ambient_delta"]  for d in slot_diffs)
    max_l0c  = max(d["l0_color_delta"] for d in slot_diffs)
    max_l1c  = max(d["l1_color_delta"] for d in slot_diffs)
    return (max_amb + max_l0c + max_l1c) / 3.0


# ---------------------------------------------------------------------------
# Report generation
# ---------------------------------------------------------------------------

def generate_report(oot3d_data: dict, n64_data: dict, out_path: str) -> None:
    lines: list[str] = []
    lines.append("# SoH3D Lighting Parity Report")
    lines.append("")
    lines.append("Cross-reference of OoT3D scene lighting (ground truth) vs N64 scene lighting (SoH3D source).")
    lines.append("")
    lines.append("**Score** = mean of (max ambient delta, max light0-color delta, max light1-color delta) "
                 "across all time-of-day slots for a scene.  Higher = more diverged.")
    lines.append("")
    lines.append("Color deltas are on the 0–255 scale (mean over R/G/B).  "
                 "Threshold: HIGH ≥ 30, MED ≥ 15, low < 15.")
    lines.append("")

    # Build scene results
    scene_results: list[tuple[float, str, list[dict]]] = []
    skipped_no_oot3d = []
    skipped_no_n64   = []

    for n64_name_raw, n64_settings in n64_data.items():
        oot3d_name = N64_TO_OOT3D.get(n64_name_raw.lower())
        if oot3d_name is None:
            skipped_no_oot3d.append(n64_name_raw)
            continue
        oot3d_settings = oot3d_data.get(oot3d_name)
        if oot3d_settings is None:
            skipped_no_oot3d.append(f"{n64_name_raw} (oot3d key: {oot3d_name})")
            continue

        # Compare slot by slot (use min count, skip extra slots)
        n_slots = min(len(n64_settings), len(oot3d_settings))
        slot_diffs = []
        for i in range(n_slots):
            try:
                d = compare_slot(oot3d_settings[i], n64_settings[i])
                slot_diffs.append(d)
            except (KeyError, IndexError):
                pass  # malformed entry, skip

        score = scene_score(slot_diffs)
        scene_results.append((score, n64_name_raw, slot_diffs))

    for oot3d_name in oot3d_data:
        # check if any N64 key maps to it
        if not any(N64_TO_OOT3D.get(k.lower()) == oot3d_name for k in n64_data):
            skipped_no_n64.append(oot3d_name)

    # Sort by score descending
    scene_results.sort(key=lambda x: -x[0])

    # Summary table
    lines.append("## Summary (sorted by severity)")
    lines.append("")
    lines.append("| Rank | Scene (N64) | OoT3D key | Score | Amb HIGH slots | L0col HIGH slots | L1col HIGH slots |")
    lines.append("|------|-------------|-----------|-------|----------------|------------------|------------------|")

    for rank, (score, n64_name, slot_diffs) in enumerate(scene_results, 1):
        oot3d_name = N64_TO_OOT3D.get(n64_name.lower(), "?")
        amb_high  = sum(1 for d in slot_diffs if d["ambient_delta"] >= 30)
        l0c_high  = sum(1 for d in slot_diffs if d["l0_color_delta"] >= 30)
        l1c_high  = sum(1 for d in slot_diffs if d["l1_color_delta"] >= 30)
        lines.append(
            f"| {rank} | `{n64_name}` | `{oot3d_name}` | {score:.1f} | {amb_high} | {l0c_high} | {l1c_high} |"
        )

    lines.append("")

    # Per-scene detail (top 20 only to keep report manageable)
    lines.append("## Per-scene detail (top 20 most diverged)")
    lines.append("")
    for score, n64_name, slot_diffs in scene_results[:20]:
        oot3d_name = N64_TO_OOT3D.get(n64_name.lower(), "?")
        lines.append(f"### `{n64_name}` → OoT3D `{oot3d_name}`  (score {score:.1f})")
        lines.append("")
        lines.append("| Slot | Amb Δ | L0-col Δ | L1-col Δ | L0-dir Δ | "
                     "fog-near Δ | fog-far flag | OoT3D ambient | N64 ambient |")
        lines.append("|------|-------|---------|---------|---------|"
                     "-----------|------------|--------------|------------|")
        for i, d in enumerate(slot_diffs):
            lines.append(
                f"| {i} | {d['ambient_delta']:.0f} ({severity(d['ambient_delta'])}) "
                f"| {d['l0_color_delta']:.0f} ({severity(d['l0_color_delta'])}) "
                f"| {d['l1_color_delta']:.0f} ({severity(d['l1_color_delta'])}) "
                f"| {d['l0_dir_delta']:.0f} "
                f"| {d['fog_near_delta']} "
                f"| {d['fog_far_flag']} "
                f"| {d['oot3d_ambient']} "
                f"| {d['n64_ambient']} |"
            )
        lines.append("")

    # Coverage stats
    n_compared = len(scene_results)
    n_total    = len(oot3d_data)
    lines.append(f"## Coverage")
    lines.append("")
    lines.append(f"- OoT3D scenes: {n_total}")
    lines.append(f"- N64 scenes:   {len(n64_data)}")
    lines.append(f"- Compared:     {n_compared}")
    if skipped_no_oot3d:
        lines.append(f"- N64 scenes with no OoT3D match ({len(skipped_no_oot3d)}): "
                     + ", ".join(f"`{x}`" for x in sorted(skipped_no_oot3d)[:30]))
    if skipped_no_n64:
        lines.append(f"- OoT3D scenes with no N64 match ({len(skipped_no_n64)}): "
                     + ", ".join(f"`{x}`" for x in sorted(skipped_no_n64)[:30]))
    lines.append("")
    lines.append("---")
    lines.append("*Generated by oot3d-decomp/tools/lighting_parity.py*")

    out_path_obj = Path(out_path)
    out_path_obj.parent.mkdir(parents=True, exist_ok=True)
    with open(out_path, "w") as f:
        f.write("\n".join(lines) + "\n")
    print(f"Wrote {out_path}")


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main() -> None:
    out_path = str(DEFAULT_OUT)
    if "--out" in sys.argv:
        idx = sys.argv.index("--out")
        if idx + 1 < len(sys.argv):
            out_path = sys.argv[idx + 1]

    if not OOT3D_JSON.exists():
        raise FileNotFoundError(f"OoT3D lighting JSON not found: {OOT3D_JSON}")
    if not N64_JSON.exists():
        raise FileNotFoundError(
            f"N64 lighting JSON not found: {N64_JSON}\n"
            f"Run: python3 soh3d/tools/n64_scene_lighting_extract.py"
        )

    oot3d_data = json.loads(OOT3D_JSON.read_text())
    n64_data   = json.loads(N64_JSON.read_text())

    print(f"OoT3D: {len(oot3d_data)} scenes")
    print(f"N64:   {len(n64_data)} scenes")

    generate_report(oot3d_data, n64_data, out_path)


if __name__ == "__main__":
    main()
