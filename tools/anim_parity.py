#!/usr/bin/env python3
"""anim_parity.py — static animation-parity diff: OoT3D CSAB catalog vs SoH3D animmap.

For every (N64 anim → OoT3D CSAB) row shipped in SoH3D's kSoH3dAnimMaps table, this tool
validates and scores the quality of the mapping against the ground-truth CSAB catalog.

## What it checks

  1. **CSAB exists** — is the mapped CSAB name present in csab_catalog.json?
     A missing name means SoH3D will silently fall back to the model default idle.

  2. **CSAB ZAR match** — does the CSAB belong to the ZAR that the animmap row targets?
     A CSAB from a different ZAR may still play (if the OTR loader finds it), but it
     indicates a likely copy-paste error or wrong match.

  3. **Frame-count quality** — how large is the frame-delta between the N64 anim's
     frameCount and the chosen CSAB's duration?  Large dframe → wrong candidate chosen
     by the auto-picker; the human probably needs to verify it.
     Score: dframe = |n64_frames - csab_duration|.

  4. **Ambiguity** — how many other CSABs in the same ZAR have a similar duration
     (within ±3 frames)?  High ambiguity = the auto-pick is a coin-flip.

  5. **Override applied?** — marks rows where a hand-verified charcompare override was
     applied, so reviewers can distinguish "auto-pick with confidence" from "human chose".

## Suspicion score (higher = more suspicious)
  score = dframe_normalized × ambiguity_weight × (1 if not overridden else 0.2)
  where dframe_normalized = dframe / max(n64_frames, 1)
        ambiguity_weight  = 1 + 0.3 × n_ambiguous_alternatives

Overridden rows are down-weighted (×0.2) because a human already verified them.

## Data sources (all static — no oracle, no build required)
  - <soh3d>/tools/skeldata/animmap.json               : auto-matched candidates
  - <soh3d>/tools/skeldata/charcompare_overrides.tsv  : hand-verified corrections
  - <oot3d-decomp>/tools/skeldata/csab_catalog.json   : CSAB name/duration/bonecount

## Usage
  cd .
  python3 tools/anim_parity.py        # superproject auto-resolved; override with ZELDA3D_REPO
  python3 tools/anim_parity.py --top 50
  python3 tools/anim_parity.py --zar /actor/zelda_km1.zar
  python3 tools/anim_parity.py --missing-only
  python3 tools/anim_parity.py --json scratch/anim_parity.json
  python3 tools/anim_parity.py --summary

Stream 4 should consume the output of `--json` (or `--top`) to prioritize which
N64-anim→CSAB pairs to hand-verify and correct via charcompare_overrides.tsv.
"""
import argparse
import json
import os
import sys

# ---------------------------------------------------------------------------
# Paths
# ---------------------------------------------------------------------------
TOOLS_DIR = os.path.dirname(os.path.abspath(__file__))
REPO_DIR  = os.path.dirname(TOOLS_DIR)
CSAB_CATALOG = os.path.join(TOOLS_DIR, "skeldata", "csab_catalog.json")

sys.path.insert(0, TOOLS_DIR)
from zelda3d_paths import ZELDA3D_ROOT  # noqa: E402

SOH3D_REPO = str(ZELDA3D_ROOT)
SOH3D_ANIMMAP   = os.path.join(SOH3D_REPO, "tools", "skeldata", "animmap.json")
SOH3D_OVERRIDES = os.path.join(SOH3D_REPO, "tools", "skeldata", "charcompare_overrides.tsv")
SOH3D_ANIMMAP_SRC = os.path.join(SOH3D_REPO, "tools", "animmap_source.py")


# ---------------------------------------------------------------------------
# Loaders
# ---------------------------------------------------------------------------

def load_csab_catalog(path: str) -> dict:
    """Return {csabName: {zarPath, duration, boneCount}} + {zarPath: {csabName: ...}}."""
    if not os.path.exists(path):
        sys.exit(f"ERROR: csab_catalog.json not found at {path}")
    raw = json.load(open(path))
    by_name: dict = {}
    by_zar: dict  = {}
    for zar_path, entry in raw.get("objects", {}).items():
        by_zar[zar_path] = {}
        for csab in entry.get("csabs", []):
            name = csab["name"]
            rec  = {"zarPath": zar_path,
                    "duration": csab["duration"],
                    "boneCount": csab.get("boneCount", 0)}
            by_name[name] = rec
            by_zar[zar_path][name] = rec
    return by_name, by_zar


def load_overrides(path: str) -> dict:
    """Parse charcompare_overrides.tsv → {(zar, n64anim): csab}."""
    ov = {}
    if not os.path.exists(path):
        return ov
    for line in open(path):
        line = line.rstrip("\n")
        if not line.strip() or line.lstrip().startswith("#"):
            continue
        parts = line.split("\t")
        if len(parts) == 3:
            ov[(parts[0], parts[1])] = parts[2]
    return ov


def load_animmap(path: str) -> dict:
    """Load animmap.json → {zarPath: {object, rows:[{n64, otr, frameCount, best, candidates}]}}."""
    if not os.path.exists(path):
        sys.exit(f"ERROR: animmap.json not found at {path}")
    return json.load(open(path))


# ---------------------------------------------------------------------------
# Analysis
# ---------------------------------------------------------------------------

def analyse(animmap: dict, overrides: dict, csab_by_name: dict, csab_by_zar: dict) -> list:
    """Return a list of per-row result dicts, sorted by suspicion score descending."""
    results = []

    for zar, entry in animmap.items():
        zar_csabs = csab_by_zar.get(zar, {})
        for row in entry.get("rows", []):
            n64      = row["n64"]
            otr      = row.get("otr", "")
            n64_frames = int(row.get("frameCount") or 0)

            # Resolve final CSAB (same logic as animmap_source.py)
            override_key = (zar, n64)
            if override_key in overrides:
                csab       = overrides[override_key]
                overridden = True
            else:
                csab       = row.get("best") or ""
                overridden = False

            # --- check 1: does the CSAB exist in the catalog at all? ---
            if not csab:
                exists_in_catalog = False
                csab_in_right_zar = False
                csab_duration     = None
                dframe            = None
            else:
                catalog_rec       = csab_by_name.get(csab)
                exists_in_catalog = catalog_rec is not None
                if exists_in_catalog:
                    # A CSAB name can appear in multiple ZARs (shared animations).
                    # Check the target ZAR's own CSAB table first so shared CSABs
                    # are not falsely flagged as CSAB_WRONG_ZAR.
                    zar_rec           = zar_csabs.get(csab)
                    csab_in_right_zar = zar_rec is not None
                    # Use the duration from the target ZAR's entry when available
                    # (shared CSABs can have the same duration, but be explicit).
                    csab_duration     = (zar_rec or catalog_rec)["duration"]
                    dframe            = abs(n64_frames - csab_duration)
                else:
                    csab_in_right_zar = False
                    csab_duration     = None
                    dframe            = None

            # --- check 4: ambiguity (how many ZAR-local CSABs within ±3 frames?) ---
            if csab_duration is not None:
                n_ambiguous = sum(
                    1 for c_name, c_rec in zar_csabs.items()
                    if c_name != csab and abs(c_rec["duration"] - csab_duration) <= 3
                )
            else:
                n_ambiguous = 0

            # --- candidates from animmap (for context) ---
            candidates = row.get("candidates", [])
            # best candidate dframe (the auto-pick quality, regardless of override)
            auto_csab = row.get("best") or ""
            auto_dframe = None
            if auto_csab and candidates:
                auto_cand = next((c for c in candidates if c.get("base") == auto_csab), None)
                if auto_cand:
                    auto_dframe = auto_cand.get("dframe", None)

            # --- suspicion score ---
            if dframe is None:
                # Missing CSAB = maximum suspicion
                suspicion = 100.0
            else:
                dframe_norm = dframe / max(n64_frames, 1)
                ambiguity_w = 1.0 + 0.3 * n_ambiguous
                human_w     = 0.2 if overridden else 1.0
                suspicion   = round(dframe_norm * ambiguity_w * human_w, 4)

            # --- issues list ---
            issues = []
            if not csab:
                issues.append("NO_CSAB")
            elif not exists_in_catalog:
                issues.append("CSAB_MISSING_FROM_CATALOG")
            if csab and exists_in_catalog and not csab_in_right_zar:
                issues.append("CSAB_WRONG_ZAR")
            if dframe is not None and dframe > 10 and not overridden:
                issues.append(f"HIGH_DFRAME:{dframe}")
            if n_ambiguous >= 2 and dframe is not None and dframe <= 3 and not overridden:
                issues.append(f"AMBIGUOUS:{n_ambiguous}_alts")

            results.append({
                "zar":           zar,
                "n64":           n64,
                "otr":           otr,
                "n64_frames":    n64_frames,
                "csab":          csab,
                "overridden":    overridden,
                "exists":        exists_in_catalog,
                "right_zar":     csab_in_right_zar,
                "csab_duration": csab_duration,
                "dframe":        dframe,
                "auto_csab":     auto_csab,
                "auto_dframe":   auto_dframe,
                "n_ambiguous":   n_ambiguous,
                "n_candidates":  len(candidates),
                "suspicion":     suspicion,
                "issues":        issues,
            })

    results.sort(key=lambda r: -r["suspicion"])
    return results


# ---------------------------------------------------------------------------
# Display helpers
# ---------------------------------------------------------------------------

def print_summary(results: list):
    total       = len(results)
    missing     = sum(1 for r in results if "CSAB_MISSING_FROM_CATALOG" in r["issues"] or "NO_CSAB" in r["issues"])
    wrong_zar   = sum(1 for r in results if "CSAB_WRONG_ZAR" in r["issues"])
    high_dframe = sum(1 for r in results if any(i.startswith("HIGH_DFRAME") for i in r["issues"]))
    ambiguous   = sum(1 for r in results if any(i.startswith("AMBIGUOUS") for i in r["issues"]))
    overridden  = sum(1 for r in results if r["overridden"])
    flagged     = sum(1 for r in results if r["issues"])

    print("=" * 78)
    print("  OoT3D ⇄ SoH3D Animation Parity Report  (static, no oracle / no build)")
    print("=" * 78)
    print(f"  Total anim-map rows : {total:5d}")
    print(f"  Human-verified      : {overridden:5d}  (charcompare_overrides.tsv; down-weighted)")
    print(f"  Auto-picked         : {total - overridden:5d}")
    print()
    print(f"  ── Issue breakdown ──")
    print(f"  CSAB missing/none   : {missing:5d}  (SoH3D will silently fall back to default idle)")
    print(f"  CSAB in wrong ZAR   : {wrong_zar:5d}  (ZAR mismatch — likely copy-paste error)")
    print(f"  High dframe (>10)   : {high_dframe:5d}  (frame-count mismatch, possible wrong CSAB)")
    print(f"  Ambiguous (≥2 alts) : {ambiguous:5d}  (multiple CSABs near same duration)")
    print(f"  Total rows flagged  : {flagged:5d}  ({100*flagged/total:.1f}% of all rows)")
    print()


def print_top(results: list, n: int, missing_only: bool = False, zar_filter: str = None):
    rows = results
    if zar_filter:
        rows = [r for r in rows if r["zar"] == zar_filter]
    if missing_only:
        rows = [r for r in rows if "CSAB_MISSING_FROM_CATALOG" in r["issues"]
                or "NO_CSAB" in r["issues"]]
    rows = rows[:n]
    if not rows:
        print("  (no rows match filter)")
        return

    print(f"  {'score':>7}  {'zar':<35}  {'n64 anim':<35}  {'csab':<28}  issues")
    print(f"  {'-'*7}  {'-'*35}  {'-'*35}  {'-'*28}  ------")
    for r in rows:
        zar_short  = r["zar"].replace("/actor/zelda_", "z_").rstrip(".zar") if r["zar"] else ""
        n64_short  = r["n64"][:35] if r["n64"] else ""
        csab_short = (r["csab"] or "(none)")[:28]
        ov_mark    = " [OV]" if r["overridden"] else ""
        issues_str = ", ".join(r["issues"]) if r["issues"] else "ok"
        print(f"  {r['suspicion']:7.4f}  {zar_short:<35}  {n64_short:<35}  "
              f"{csab_short:<28}{ov_mark}  {issues_str}")


def print_zar_detail(results: list, zar: str):
    rows = [r for r in results if r["zar"] == zar]
    if not rows:
        print(f"  No rows for ZAR: {zar}")
        return
    print(f"\nZAR: {zar}  ({len(rows)} rows)")
    print(f"  {'n64 anim':<40}  {'csab':<28}  {'frames':>6}  {'dur':>3}  {'df':>3}  "
          f"{'ov':>2}  {'amb':>3}  issues")
    print(f"  {'-'*40}  {'-'*28}  {'-'*6}  {'-'*3}  {'-'*3}  {'-'*2}  {'-'*3}  ------")
    for r in sorted(rows, key=lambda x: -x["suspicion"]):
        dur    = r["csab_duration"] if r["csab_duration"] is not None else "?"
        df     = r["dframe"] if r["dframe"] is not None else "?"
        ov     = "Y" if r["overridden"] else " "
        issues = ", ".join(r["issues"]) if r["issues"] else ""
        print(f"  {r['n64']:<40}  {(r['csab'] or '(none)'):<28}  "
              f"{r['n64_frames']:6d}  {str(dur):>3}  {str(df):>3}  {ov:>2}  "
              f"{r['n_ambiguous']:3d}  {issues}")


# ---------------------------------------------------------------------------
# Per-ZAR stats helper (for JSON output)
# ---------------------------------------------------------------------------

def build_zar_stats(results: list) -> list:
    from collections import defaultdict
    zar_rows: dict = defaultdict(list)
    for r in results:
        zar_rows[r["zar"]].append(r)
    stats = []
    for zar, rows in sorted(zar_rows.items()):
        n_total    = len(rows)
        n_flagged  = sum(1 for r in rows if r["issues"])
        n_missing  = sum(1 for r in rows if "CSAB_MISSING_FROM_CATALOG" in r["issues"] or "NO_CSAB" in r["issues"])
        n_hdframe  = sum(1 for r in rows if any(i.startswith("HIGH_DFRAME") for i in r["issues"]))
        n_ov       = sum(1 for r in rows if r["overridden"])
        worst_score = rows[0]["suspicion"] if rows else 0  # rows already sorted desc
        stats.append({
            "zar":          zar,
            "total_rows":   n_total,
            "flagged":      n_flagged,
            "missing":      n_missing,
            "high_dframe":  n_hdframe,
            "overridden":   n_ov,
            "worst_score":  worst_score,
        })
    stats.sort(key=lambda x: -x["worst_score"])
    return stats


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--top", metavar="N", type=int, default=40,
                    help="print top-N most suspicious rows (default 40)")
    ap.add_argument("--zar", metavar="PATH",
                    help="show all rows for a specific ZAR path (e.g. /actor/zelda_km1.zar)")
    ap.add_argument("--missing-only", action="store_true",
                    help="show only rows where the CSAB is missing from the catalog")
    ap.add_argument("--summary", action="store_true",
                    help="print only the summary stats (no row table)")
    ap.add_argument("--json", metavar="PATH",
                    help="write full report JSON to PATH (- for stdout)")
    args = ap.parse_args()

    # Load data
    csab_by_name, csab_by_zar = load_csab_catalog(CSAB_CATALOG)
    overrides = load_overrides(SOH3D_OVERRIDES)
    animmap   = load_animmap(SOH3D_ANIMMAP)

    if not animmap:
        sys.exit(f"ERROR: animmap.json is empty — check {SOH3D_ANIMMAP}")

    results = analyse(animmap, overrides, csab_by_name, csab_by_zar)

    print_summary(results)

    if args.summary:
        return

    if args.zar:
        print_zar_detail(results, args.zar)
    elif args.missing_only:
        print(f"\nMissing-CSAB rows (not in csab_catalog.json):")
        print_top(results, args.top, missing_only=True)
    else:
        print(f"\nTop {args.top} most suspicious anim-map rows (sorted by suspicion score):")
        print_top(results, args.top)

    if args.json:
        report = {
            "summary": {
                "total_rows":    len(results),
                "overridden":    sum(1 for r in results if r["overridden"]),
                "missing":       sum(1 for r in results if "CSAB_MISSING_FROM_CATALOG" in r["issues"] or "NO_CSAB" in r["issues"]),
                "wrong_zar":     sum(1 for r in results if "CSAB_WRONG_ZAR" in r["issues"]),
                "high_dframe":   sum(1 for r in results if any(i.startswith("HIGH_DFRAME") for i in r["issues"])),
                "ambiguous":     sum(1 for r in results if any(i.startswith("AMBIGUOUS") for i in r["issues"])),
                "flagged":       sum(1 for r in results if r["issues"]),
            },
            "zar_stats": build_zar_stats(results),
            "rows": results,
        }
        js = json.dumps(report, indent=2)
        if args.json == "-":
            print(js)
        else:
            os.makedirs(os.path.dirname(os.path.abspath(args.json)), exist_ok=True)
            open(args.json, "w").write(js)
            print(f"\nWrote {args.json}")


if __name__ == "__main__":
    main()
