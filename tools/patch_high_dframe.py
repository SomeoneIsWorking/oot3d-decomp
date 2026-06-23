#!/usr/bin/env python3
"""patch_high_dframe.py — propose CSAB replacements for HIGH_DFRAME anim-map rows.

For every (ZAR, N64 anim) row in SoH3D's animmap that has a HIGH_DFRAME flag
(|n64_frames - csab_duration| > 10, not yet overridden), this tool:

  1. Searches ALL CSABs in that ZAR (full csab_catalog.json, not just the
     pre-filtered candidates stored in animmap.json).
  2. Ranks them by |n64_frames - csab_duration| ascending (best fit first).
  3. Assigns a confidence level:
       HIGH  — best-fit CSAB has dframe == 0 (exact frame match)
       MED   — best-fit dframe <= 5
       LOW   — best-fit dframe > 5 (still better than the current pick)
  4. Emits ranked proposals in charcompare_overrides.tsv format so Stream 4 can
     oracle-verify and apply them selectively.

These proposals are UNVERIFIED — Stream 4 must confirm against the OoT3D oracle
before committing any row to charcompare_overrides.tsv.

## Data sources (all static — no oracle, no build required)
  - <soh3d>/tools/skeldata/animmap.json               : auto-matched rows
  - <soh3d>/tools/skeldata/charcompare_overrides.tsv  : hand-verified corrections
  - <oot3d-decomp>/tools/skeldata/csab_catalog.json   : CSAB name/duration/bonecount

## Usage
  cd .
  SOH3D_REPO=<SOH3D_REPO> python3 tools/patch_high_dframe.py
  SOH3D_REPO=<SOH3D_REPO> python3 tools/patch_high_dframe.py --top 20
  SOH3D_REPO=<SOH3D_REPO> python3 tools/patch_high_dframe.py --tsv scratch/high_dframe_proposals.tsv
  SOH3D_REPO=<SOH3D_REPO> python3 tools/patch_high_dframe.py --json scratch/high_dframe_proposals.json
  SOH3D_REPO=<SOH3D_REPO> python3 tools/patch_high_dframe.py --min-confidence MED --tsv ...

## TSV output format (charcompare_overrides.tsv compatible)
  Each non-comment line: zar<TAB>n64anim<TAB>proposed_csab
  Comment fields after the third column (# PROPOSAL ...) are informational only
  and are ignored by the override loader.
"""
import argparse
import json
import os
import sys

# ---------------------------------------------------------------------------
# Paths
# ---------------------------------------------------------------------------
TOOLS_DIR     = os.path.dirname(os.path.abspath(__file__))
REPO_DIR      = os.path.dirname(TOOLS_DIR)
CSAB_CATALOG  = os.path.join(TOOLS_DIR, "skeldata", "csab_catalog.json")

SOH3D_REPO    = os.environ.get("SOH3D_REPO",
                               os.path.join(os.path.dirname(REPO_DIR), "soh3d"))
SOH3D_ANIMMAP   = os.path.join(SOH3D_REPO, "tools", "skeldata", "animmap.json")
SOH3D_OVERRIDES = os.path.join(SOH3D_REPO, "tools", "skeldata", "charcompare_overrides.tsv")

HIGH_DFRAME_THRESHOLD = 10  # must match anim_parity.py


# ---------------------------------------------------------------------------
# Loaders
# ---------------------------------------------------------------------------

def load_csab_catalog(path: str):
    """Return (by_name, by_zar).

    by_name: {csabName: {zarPath, duration, boneCount}}  — last-write-wins
    by_zar:  {zarPath:  {csabName: {zarPath, duration, boneCount}}}
    """
    if not os.path.exists(path):
        sys.exit(f"ERROR: csab_catalog.json not found at {path}")
    raw = json.load(open(path))
    by_name: dict = {}
    by_zar:  dict = {}
    for zar_path, entry in raw.get("objects", {}).items():
        by_zar[zar_path] = {}
        for csab in entry.get("csabs", []):
            name = csab["name"]
            rec  = {"zarPath":   zar_path,
                    "duration":  csab["duration"],
                    "boneCount": csab.get("boneCount", 0)}
            by_name[name] = rec
            by_zar[zar_path][name] = rec
    return by_name, by_zar


def load_overrides(path: str) -> dict:
    """Parse charcompare_overrides.tsv -> {(zar, n64anim): csab}."""
    ov = {}
    if not os.path.exists(path):
        return ov
    for line in open(path):
        line = line.rstrip("\n")
        if not line.strip() or line.lstrip().startswith("#"):
            continue
        parts = line.split("\t")
        if len(parts) >= 3:
            ov[(parts[0], parts[1])] = parts[2]
    return ov


def load_animmap(path: str) -> dict:
    if not os.path.exists(path):
        sys.exit(f"ERROR: animmap.json not found at {path}")
    return json.load(open(path))


# ---------------------------------------------------------------------------
# Core analysis
# ---------------------------------------------------------------------------

def find_high_dframe_rows(animmap: dict, overrides: dict,
                           by_name: dict, by_zar: dict) -> list:
    """Return a list of proposal dicts for every non-overridden HIGH_DFRAME row."""
    proposals = []

    for zar, entry in animmap.items():
        zar_csabs = by_zar.get(zar, {})  # {name: rec}
        for row in entry.get("rows", []):
            n64        = row["n64"]
            otr        = row.get("otr", "")
            n64_frames = int(row.get("frameCount") or 0)

            override_key = (zar, n64)
            if override_key in overrides:
                continue  # already hand-verified — skip

            current_csab = row.get("best") or ""
            if not current_csab:
                continue  # NO_CSAB is a separate issue

            # Resolve current duration from target-ZAR catalog entry (same logic
            # as anim_parity.py — prefer same-ZAR record, fall back to by_name)
            zar_rec      = zar_csabs.get(current_csab)
            catalog_rec  = by_name.get(current_csab)
            if zar_rec is None and catalog_rec is None:
                continue  # CSAB_MISSING_FROM_CATALOG — different issue
            current_rec  = zar_rec or catalog_rec
            current_dur  = current_rec["duration"]
            current_dframe = abs(n64_frames - current_dur)

            if current_dframe <= HIGH_DFRAME_THRESHOLD:
                continue  # not HIGH_DFRAME

            # --- rank ALL same-ZAR CSABs by frame proximity ---
            ranked = sorted(
                zar_csabs.items(),
                key=lambda kv: (abs(kv[1]["duration"] - n64_frames),
                                kv[1]["duration"])
            )

            if not ranked:
                # No CSABs in this ZAR at all — can't propose anything
                proposals.append({
                    "zar":           zar,
                    "n64":           n64,
                    "otr":           otr,
                    "n64_frames":    n64_frames,
                    "current_csab":  current_csab,
                    "current_dur":   current_dur,
                    "current_dframe": current_dframe,
                    "proposed_csab": None,
                    "proposed_dur":  None,
                    "proposed_dframe": None,
                    "confidence":    "NONE",
                    "improvement":   0,
                    "alternatives":  [],
                    "zar_csab_count": 0,
                })
                continue

            best_name, best_rec = ranked[0]
            best_dur   = best_rec["duration"]
            best_dframe = abs(n64_frames - best_dur)

            # Only emit a proposal when the best candidate is genuinely BETTER
            # than the current pick (lower dframe) — or the current is simply bad.
            # We always emit (even ties) so the caller can filter; mark improvement.
            improvement = current_dframe - best_dframe  # >0 = better, 0 = same

            if best_dframe == 0:
                confidence = "HIGH"
            elif best_dframe <= 5:
                confidence = "MED"
            else:
                confidence = "LOW"

            # Top-5 alternatives (excluding the proposed best)
            alts = []
            for name, rec in ranked[1:6]:
                alts.append({
                    "csab":     name,
                    "duration": rec["duration"],
                    "dframe":   abs(n64_frames - rec["duration"]),
                })

            proposals.append({
                "zar":             zar,
                "n64":             n64,
                "otr":             otr,
                "n64_frames":      n64_frames,
                "current_csab":    current_csab,
                "current_dur":     current_dur,
                "current_dframe":  current_dframe,
                "proposed_csab":   best_name,
                "proposed_dur":    best_dur,
                "proposed_dframe": best_dframe,
                "confidence":      confidence,
                "improvement":     improvement,
                "alternatives":    alts,
                "zar_csab_count":  len(zar_csabs),
            })

    # Sort: best improvement first, then by confidence (HIGH→MED→LOW), then zar
    CONF_RANK = {"HIGH": 3, "MED": 2, "LOW": 1, "NONE": 0}
    proposals.sort(key=lambda p: (
        -p["improvement"],
        -CONF_RANK.get(p["confidence"], 0),
        p["zar"],
        p["n64"],
    ))
    return proposals


# ---------------------------------------------------------------------------
# Output helpers
# ---------------------------------------------------------------------------

def print_proposals(proposals: list, top: int = 0):
    if not proposals:
        print("No HIGH_DFRAME rows found (threshold >10 frames, not overridden).")
        return

    rows = proposals[:top] if top else proposals

    hdr = (f"{'ZAR':<30} {'N64 anim':<38} {'cur CSAB':<25} {'prop CSAB':<25} "
           f"{'cur_df':>6} {'prop_df':>7} {'impr':>5}  conf")
    print(hdr)
    print("-" * len(hdr))
    for p in rows:
        zar_s    = p["zar"].replace("/actor/zelda_", "z_").replace(".zar", "")
        n64_s    = p["n64"][:38]
        cur_s    = (p["current_csab"] or "(none)")[:25]
        prop_s   = (p["proposed_csab"] or "(none)")[:25]
        cur_df   = str(p["current_dframe"]) if p["current_dframe"] is not None else "?"
        prop_df  = str(p["proposed_dframe"]) if p["proposed_dframe"] is not None else "?"
        impr     = str(p["improvement"]) if p["improvement"] is not None else "?"
        conf     = p["confidence"]
        print(f"{zar_s:<30} {n64_s:<38} {cur_s:<25} {prop_s:<25} "
              f"{cur_df:>6} {prop_df:>7} {impr:>5}  {conf}")


def build_tsv_block(proposals: list, min_confidence: str = "LOW") -> str:
    """Return TSV lines in charcompare_overrides.tsv format (tab-separated, 3 columns + comment)."""
    CONF_RANK = {"HIGH": 3, "MED": 2, "LOW": 1, "NONE": 0}
    min_rank  = CONF_RANK.get(min_confidence, 1)

    lines = [
        "# patch_high_dframe.py — HIGH_DFRAME proposals (UNVERIFIED)",
        "# Stream 4: oracle-verify each row before applying.",
        "# Columns: zar<TAB>n64anim<TAB>proposed_csab",
        "#   # PROPOSAL fields: conf=<level> prop_df=<dframe> cur_df=<old_dframe> impr=<delta>",
        "#",
    ]
    prev_zar = None
    for p in proposals:
        if CONF_RANK.get(p["confidence"], 0) < min_rank:
            continue
        if p["proposed_csab"] is None:
            continue
        if p["improvement"] <= 0:
            continue  # same or worse — not useful

        if p["zar"] != prev_zar:
            lines.append(f"# --- {p['zar']} ---")
            prev_zar = p["zar"]

        conf    = p["confidence"]
        prop_df = p["proposed_dframe"]
        cur_df  = p["current_dframe"]
        impr    = p["improvement"]
        lines.append(
            f"{p['zar']}\t{p['n64']}\t{p['proposed_csab']}"
            f"\t# PROPOSAL conf={conf} prop_df={prop_df} cur_df={cur_df} impr={impr}"
        )

    return "\n".join(lines)


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--top", metavar="N", type=int, default=0,
                    help="show only top-N proposals in the table (default: all)")
    ap.add_argument("--min-confidence", choices=["HIGH", "MED", "LOW"], default="LOW",
                    help="minimum confidence to include in TSV/JSON output (default: LOW)")
    ap.add_argument("--tsv", metavar="PATH",
                    help="write TSV proposal block to PATH (charcompare_overrides.tsv format)")
    ap.add_argument("--json", metavar="PATH",
                    help="write full proposal report to JSON (use - for stdout)")
    ap.add_argument("--improvement-only", action="store_true", default=True,
                    help="only show rows where the proposal is a genuine improvement (default: on)")
    ap.add_argument("--all", dest="improvement_only", action="store_false",
                    help="show all HIGH_DFRAME rows even where proposed == current")
    args = ap.parse_args()

    by_name, by_zar = load_csab_catalog(CSAB_CATALOG)
    overrides        = load_overrides(SOH3D_OVERRIDES)
    animmap          = load_animmap(SOH3D_ANIMMAP)

    proposals = find_high_dframe_rows(animmap, overrides, by_name, by_zar)

    # Count stats before filtering for display
    n_total      = len(proposals)
    n_improvable = sum(1 for p in proposals if p["improvement"] > 0)
    n_high       = sum(1 for p in proposals if p["confidence"] == "HIGH"  and p["improvement"] > 0)
    n_med        = sum(1 for p in proposals if p["confidence"] == "MED"   and p["improvement"] > 0)
    n_low        = sum(1 for p in proposals if p["confidence"] == "LOW"   and p["improvement"] > 0)
    n_unchanged  = n_total - n_improvable

    print("=" * 80)
    print("  HIGH_DFRAME Proposal Report  (static, no oracle / no build)")
    print("=" * 80)
    print(f"  HIGH_DFRAME rows (non-overridden, dframe > {HIGH_DFRAME_THRESHOLD}): {n_total}")
    print(f"  Improvable (proposed < current)  : {n_improvable}")
    print(f"    HIGH confidence (exact match)  : {n_high}")
    print(f"    MED  confidence (dframe <= 5)  : {n_med}")
    print(f"    LOW  confidence (dframe > 5)   : {n_low}")
    print(f"  No improvement possible          : {n_unchanged}  (no closer CSAB in ZAR)")
    print()

    if args.improvement_only:
        display = [p for p in proposals if p["improvement"] > 0]
    else:
        display = proposals

    print(f"Proposals (sorted best improvement first){'  [top ' + str(args.top) + ']' if args.top else ''}:")
    print()
    print_proposals(display, top=args.top)

    if args.tsv:
        tsv_block = build_tsv_block(proposals, min_confidence=args.min_confidence)
        os.makedirs(os.path.dirname(os.path.abspath(args.tsv)), exist_ok=True)
        open(args.tsv, "w").write(tsv_block + "\n")
        improvable_in_tsv = sum(
            1 for p in proposals
            if p["improvement"] > 0 and p["proposed_csab"] is not None
        )
        print(f"\nWrote {args.tsv}  ({improvable_in_tsv} improvable rows)")

    if args.json:
        CONF_RANK = {"HIGH": 3, "MED": 2, "LOW": 1, "NONE": 0}
        min_rank  = CONF_RANK.get(args.min_confidence, 1)
        report = {
            "summary": {
                "total_high_dframe":      n_total,
                "improvable":             n_improvable,
                "high_confidence":        n_high,
                "med_confidence":         n_med,
                "low_confidence":         n_low,
                "no_improvement_possible": n_unchanged,
                "threshold":              HIGH_DFRAME_THRESHOLD,
            },
            "proposals": [
                p for p in proposals
                if CONF_RANK.get(p["confidence"], 0) >= min_rank
            ],
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
