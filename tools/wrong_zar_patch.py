#!/usr/bin/env python3
"""wrong_zar_patch.py — emit patch proposals for CSAB_WRONG_ZAR anim-map rows.

For every (ZAR, N64 anim) row in SoH3D's animmap where the mapped CSAB does NOT
exist in the target ZAR, this tool finds the best same-ZAR CSAB (closest frame count)
and emits a ready-to-apply patch in charcompare_overrides.tsv format.

The output can be:
  - Printed to stdout (default) for review
  - Written directly to charcompare_overrides.tsv with --apply (appends only new rows)
  - Saved as a JSON report with --json <path>

Stream 4 should oracle-verify the proposals before applying them: check the OoT3D
game in the target scene to confirm the proposed CSAB name matches what plays.

Usage:
  cd .
  SOH3D_REPO=<SOH3D_REPO> python3 tools/wrong_zar_patch.py
  SOH3D_REPO=<SOH3D_REPO> python3 tools/wrong_zar_patch.py --apply
  SOH3D_REPO=<SOH3D_REPO> python3 tools/wrong_zar_patch.py --json scratch/wrong_zar_proposals.json

Note: as of 2026-06-23, running anim_parity.py will show 0 CSAB_WRONG_ZAR rows
because the prior bug that used a last-write-wins by_name dict has been fixed —
shared CSABs present in the target ZAR are no longer falsely flagged. This tool
remains useful as a safety net when new animmap rows are added.
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


# ---------------------------------------------------------------------------
# Loaders (same as anim_parity.py)
# ---------------------------------------------------------------------------

def load_csab_catalog(path: str):
    """Return by_name (last-write-wins across ZARs) and by_zar dicts."""
    if not os.path.exists(path):
        sys.exit(f"ERROR: csab_catalog.json not found at {path}")
    raw = json.load(open(path))
    by_name: dict = {}
    by_zar:  dict = {}
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
    """Parse charcompare_overrides.tsv -> {(zar, n64anim): csab}."""
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
    if not os.path.exists(path):
        sys.exit(f"ERROR: animmap.json not found at {path}")
    return json.load(open(path))


# ---------------------------------------------------------------------------
# Core analysis
# ---------------------------------------------------------------------------

def find_wrong_zar_rows(animmap, overrides, by_name, by_zar):
    """Return list of rows where the resolved CSAB is NOT present in the target ZAR."""
    wrong = []
    for zar, entry in animmap.items():
        zar_csabs = by_zar.get(zar, {})
        for row in entry.get("rows", []):
            n64        = row["n64"]
            n64_frames = int(row.get("frameCount") or 0)

            # Resolve final CSAB (override wins over auto-pick)
            override_key = (zar, n64)
            if override_key in overrides:
                csab       = overrides[override_key]
                overridden = True
            else:
                csab       = row.get("best") or ""
                overridden = False

            if not csab:
                continue  # NO_CSAB is a separate issue
            if csab not in by_name:
                continue  # CSAB_MISSING_FROM_CATALOG is a separate issue

            # True CSAB_WRONG_ZAR: CSAB exists in catalog but NOT in the target ZAR
            if csab in zar_csabs:
                continue  # correct ZAR (or legitimately shared)

            wrong.append({
                "zar":         zar,
                "n64":         n64,
                "otr":         row.get("otr", ""),
                "n64_frames":  n64_frames,
                "bad_csab":    csab,
                "bad_csab_zar": by_name[csab]["zarPath"],
                "overridden":  overridden,
                "zar_csab_count": len(zar_csabs),
            })
    return wrong


def propose_replacement(row: dict, by_zar: dict) -> dict | None:
    """For a wrong-ZAR row, find the best same-ZAR CSAB by frame proximity."""
    zar_csabs = by_zar.get(row["zar"], {})
    if not zar_csabs:
        return None

    n64f = row["n64_frames"]
    candidates = sorted(
        zar_csabs.values(),
        key=lambda c: (abs(c["duration"] - n64f), c["duration"])
    )
    if not candidates:
        return None

    best = candidates[0]
    dframe = abs(best["duration"] - n64f)

    # Gather top-3 alternatives with their deltas
    top3 = [
        {"csab": c["duration"], "name": c.get("name", "?"), "dframe": abs(c["duration"] - n64f)}
        for c in candidates[:3]
    ]
    # Get names from zar_csabs dict (values don't carry 'name' as a field — fix that)
    top3_named = []
    for csab_name, c_rec in sorted(zar_csabs.items(),
                                   key=lambda kv: abs(kv[1]["duration"] - n64f)):
        top3_named.append({
            "csab": csab_name,
            "duration": c_rec["duration"],
            "dframe": abs(c_rec["duration"] - n64f),
        })
        if len(top3_named) >= 3:
            break

    best_name = top3_named[0]["csab"] if top3_named else None
    best_dur  = top3_named[0]["duration"] if top3_named else None
    best_df   = top3_named[0]["dframe"] if top3_named else None

    return {
        "proposed_csab": best_name,
        "proposed_dur":  best_dur,
        "proposed_dframe": best_df,
        "alternatives":  top3_named[1:3],
        "confidence":    "HIGH" if best_df == 0 else
                         "MED"  if best_df <= 3 else
                         "LOW",
    }


# ---------------------------------------------------------------------------
# Output helpers
# ---------------------------------------------------------------------------

def print_proposals(proposals: list):
    if not proposals:
        print("No CSAB_WRONG_ZAR rows found — animmap is clean.")
        return

    print(f"{'ZAR':<35} {'N64 anim':<38} {'bad CSAB':<25} {'proposed CSAB':<25} {'df':>4}  conf  ov")
    print(f"{'-'*35} {'-'*38} {'-'*25} {'-'*25} {'-'*4}  ----  --")
    for p in proposals:
        zar_s   = p["zar"].replace("/actor/zelda_", "z_").replace(".zar", "")
        n64_s   = p["n64"][:38]
        bad_s   = p["bad_csab"][:25]
        prop    = p.get("proposed_csab") or "(none)"
        df_s    = str(p.get("proposed_dframe", "?"))
        conf    = p.get("confidence", "?")
        ov      = "Y" if p["overridden"] else " "
        print(f"{zar_s:<35} {n64_s:<38} {bad_s:<25} {prop:<25} {df_s:>4}  {conf:<4}  {ov}")


def overrides_tsv_block(proposals: list) -> str:
    """Return lines ready to append to charcompare_overrides.tsv."""
    lines = []
    lines.append("# wrong_zar_patch.py auto-proposals (UNVERIFIED — oracle-check before shipping)")
    prev_zar = None
    for p in proposals:
        if p.get("proposed_csab") is None:
            continue  # no same-ZAR CSABs exist (empty ZAR)
        if p["zar"] != prev_zar:
            lines.append(f"# --- {p['zar']} ---")
            prev_zar = p["zar"]
        conf  = p.get("confidence", "?")
        df    = p.get("proposed_dframe", "?")
        lines.append(f"{p['zar']}\t{p['n64']}\t{p['proposed_csab']}"
                     f"\t# PROPOSAL conf={conf} dframe={df} bad_was={p['bad_csab']}")
    return "\n".join(lines)


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--apply", action="store_true",
                    help="append HIGH-confidence proposals to charcompare_overrides.tsv "
                         "(skips rows already present; still needs oracle verification)")
    ap.add_argument("--json", metavar="PATH",
                    help="write full proposal report to JSON (use - for stdout)")
    ap.add_argument("--min-confidence", choices=["HIGH", "MED", "LOW"], default="LOW",
                    help="minimum confidence level to include in output (default: LOW)")
    args = ap.parse_args()

    by_name, by_zar = load_csab_catalog(CSAB_CATALOG)
    overrides        = load_overrides(SOH3D_OVERRIDES)
    animmap          = load_animmap(SOH3D_ANIMMAP)

    wrong_rows = find_wrong_zar_rows(animmap, overrides, by_name, by_zar)

    proposals = []
    for row in wrong_rows:
        proposal = propose_replacement(row, by_zar)
        merged   = {**row, **(proposal or {})}
        proposals.append(merged)

    # Filter by confidence
    conf_rank = {"HIGH": 3, "MED": 2, "LOW": 1}
    min_rank  = conf_rank[args.min_confidence]
    proposals = [p for p in proposals
                 if conf_rank.get(p.get("confidence", "LOW"), 1) >= min_rank]

    # Sort: overridden last, then by confidence desc, then by zar+n64
    proposals.sort(key=lambda p: (
        p["overridden"],
        -conf_rank.get(p.get("confidence", "LOW"), 1),
        p["zar"],
        p["n64"],
    ))

    print(f"CSAB_WRONG_ZAR rows (true ZAR mismatches, not shared-CSAB false positives): "
          f"{len(proposals)}\n")
    print_proposals(proposals)

    if args.apply and proposals:
        # Load existing overrides to skip duplicates
        existing = load_overrides(SOH3D_OVERRIDES)
        new_lines = []
        skipped = 0
        for p in proposals:
            if p.get("proposed_csab") is None:
                continue
            if p.get("confidence") != "HIGH":
                continue  # only auto-apply HIGH confidence
            key = (p["zar"], p["n64"])
            if key in existing:
                skipped += 1
                continue
            new_lines.append(f"{p['zar']}\t{p['n64']}\t{p['proposed_csab']}"
                             f"\t# PROPOSAL conf=HIGH dframe={p.get('proposed_dframe','?')}"
                             f" bad_was={p['bad_csab']}")
        if new_lines:
            with open(SOH3D_OVERRIDES, "a") as f:
                f.write("\n# wrong_zar_patch.py auto-proposals (HIGH confidence only)"
                        " — oracle-verify before shipping\n")
                f.write("\n".join(new_lines) + "\n")
            print(f"\nAppended {len(new_lines)} HIGH-confidence proposals to:\n  {SOH3D_OVERRIDES}")
            print("WARNING: These are UNVERIFIED — run oracle comparison before committing.")
        else:
            print(f"\nNothing to apply ({skipped} already present, 0 new HIGH-confidence rows).")
    elif args.apply:
        print("\nNothing to apply (no wrong-ZAR rows detected).")

    if args.json:
        report = {
            "summary": {
                "wrong_zar_count": len(proposals),
                "high_confidence": sum(1 for p in proposals if p.get("confidence") == "HIGH"),
                "med_confidence":  sum(1 for p in proposals if p.get("confidence") == "MED"),
                "low_confidence":  sum(1 for p in proposals if p.get("confidence") == "LOW"),
            },
            "proposals": proposals,
            "tsv_block": overrides_tsv_block(proposals),
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
