#!/usr/bin/env python3
"""csab_lookup.py — resolve animLength → CSAB name for a known actor ZAR.

Given a ZAR path (e.g. "/actor/zelda_km1.zar") and an animLength float (the
per-CSAB frame count read from live OoT3D RAM), return the CSAB name(s) from the
committed csab_catalog.json.

Provides:
  CsabResolver         — class that loads the catalog once and answers queries
  CsabResolver.lookup  — (zarPath, animLength) → {"name": str, "ambiguous": bool,
                          "candidates": [str]}

## Disambiguation
When multiple CSABs in a ZAR share the same frame count (flagged in `ambiguous`),
the resolver returns ALL candidates.  Caller can:
  - Accept the ambiguity and log the list for manual triage.
  - Pass an additional hint (e.g. actor params / variant) to a future per-actor
    shim that maps params → CSAB name from the static oracle En_Ko table.

## Usage (standalone)
  python3 tools/csab_lookup.py /actor/zelda_km1.zar 40
  python3 tools/csab_lookup.py /actor/zelda_km1.zar 25

## Usage (import)
  from csab_lookup import CsabResolver
  res = CsabResolver()
  hit = res.lookup("/actor/zelda_km1.zar", 40.0)
  # hit == {"name": "fad_n_wait", "ambiguous": True,
  #          "candidates": ["fad_kusukusu", "fad_n_wait"]}
"""
import json
import os
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
_DEFAULT_CATALOG = os.path.join(_HERE, "skeldata", "csab_catalog.json")


class CsabResolver:
    """Resolves (zarPath, animLength) → CSAB name using the committed catalog."""

    def __init__(self, catalog_path: str = _DEFAULT_CATALOG):
        with open(catalog_path) as f:
            data = json.load(f)
        self._objects: dict = data.get("objects", {})

    # ------------------------------------------------------------------
    # Public API
    # ------------------------------------------------------------------

    def lookup(self, zar_path: str, anim_length: float) -> dict:
        """
        Resolve animLength to CSAB name(s) for a given ZAR.

        Returns:
          {
            "zar":        str,              # as passed
            "animLength": float,            # as passed
            "name":       str | None,       # unique match; None if ambiguous or not found
            "ambiguous":  bool,             # True when multiple CSABs share this duration
            "candidates": [str],            # all matching CSAB names (may be empty)
          }
        """
        dur_key = str(int(round(anim_length)))
        entry = self._objects.get(zar_path)
        if entry is None:
            return self._miss(zar_path, anim_length, reason="ZAR not in catalog")

        candidates = entry.get("byDuration", {}).get(dur_key, [])
        if not candidates:
            return self._miss(zar_path, anim_length, reason="duration not found in ZAR")

        ambiguous = len(candidates) > 1
        return {
            "zar": zar_path,
            "animLength": anim_length,
            "name": candidates[0] if not ambiguous else None,
            "ambiguous": ambiguous,
            "candidates": candidates,
        }

    def zar_paths(self) -> list:
        """Return sorted list of all ZAR paths in the catalog."""
        return sorted(self._objects.keys())

    def csabs_for_zar(self, zar_path: str) -> list:
        """Return list of {"name": str, "duration": int} for a ZAR, or []."""
        entry = self._objects.get(zar_path)
        if entry is None:
            return []
        return [{"name": c["name"], "duration": c["duration"]}
                for c in entry.get("csabs", [])]

    # ------------------------------------------------------------------
    # Internal
    # ------------------------------------------------------------------

    @staticmethod
    def _miss(zar_path: str, anim_length: float, reason: str) -> dict:
        return {
            "zar": zar_path,
            "animLength": anim_length,
            "name": None,
            "ambiguous": False,
            "candidates": [],
            "_miss_reason": reason,
        }


# ---------------------------------------------------------------------------
# CLI — quick test / lookup
# ---------------------------------------------------------------------------

def main():
    import argparse
    ap = argparse.ArgumentParser(description="Resolve animLength → CSAB name for a ZAR")
    ap.add_argument("zar", help="ZAR path, e.g. /actor/zelda_km1.zar")
    ap.add_argument("anim_length", type=float, nargs="?",
                    help="animLength float to look up (omit to list all CSABs for the ZAR)")
    ap.add_argument("--catalog", default=_DEFAULT_CATALOG)
    args = ap.parse_args()

    res = CsabResolver(args.catalog)

    if args.anim_length is None:
        csabs = res.csabs_for_zar(args.zar)
        if not csabs:
            print(f"ZAR '{args.zar}' not found in catalog.", file=sys.stderr)
            sys.exit(1)
        print(f"CSABs in {args.zar} ({len(csabs)} total):")
        for c in csabs:
            print(f"  {c['duration']:5d}  {c['name']}")
    else:
        hit = res.lookup(args.zar, args.anim_length)
        if hit["candidates"]:
            status = "AMBIGUOUS" if hit["ambiguous"] else "UNIQUE"
            print(f"{status}: animLength={args.anim_length} in {args.zar}")
            for c in hit["candidates"]:
                mark = "* " if not hit["ambiguous"] else "  "
                print(f"  {mark}{c}")
        else:
            reason = hit.get("_miss_reason", "unknown")
            print(f"NOT FOUND: animLength={args.anim_length} in {args.zar} — {reason}")
            sys.exit(1)


if __name__ == "__main__":
    main()
