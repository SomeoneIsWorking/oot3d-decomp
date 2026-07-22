#!/usr/bin/env python3
"""csab_names.py — enumerate ALL CSAB animations (name + frameCount) from every ZAR in the
OoT3D RomFS, closing the gap between the oracle_export.py animLength discriminator and a human-
readable animation name.

PURPOSE
-------
oracle_export.py reads each actor's runtime anim-controller and emits `animLength` (the CSAB
frame count) as the only stable CSAB discriminator — the live vtable/pointer chains are too
transient to dereference a name. This tool bridges the gap STATICALLY: for every animated ZAR
(one that contains CSAB files) it extracts each CSAB's name and frame count so you can match a
live `animLength` back to a named animation within that object's set.

OUTPUT
------
  tools/skeldata/csab_catalog.json  — full machine-readable catalog
  docs/csab_catalog.md              — human-readable per-ZAR table

JSON schema:
  { "objects": {
      "<zarPath>": {
        "zarPath": "/actor/zelda_km1.zar",
        "totalCsabs": 34,
        "csabs": [
          { "csabPath": "Anim/km1_ishi_wait.csab",
            "name":     "km1_ishi_wait",
            "duration": 19,
            "boneCount": 19 },
          ...
        ],
        "byDuration": {
          "19": ["km1_ishi_wait", "km1_kusakari"],
          "40": ["fad_kusukusu", "fad_n_wait"]
        },
        "ambiguous": [19, 40]   // durations with >1 CSAB (cannot be resolved by frameCount alone)
      },
      ...
  } }

VALIDATION (En_Ko)
------------------
The oracle reported 8 animLengths for the Kokiri En_Ko actor (scene 85):
  type 0 (boy)  len=19   type 1 (girl) len=25   type 2 (boy)  len=20
  type 3 (boy)  len=14   type 4 (boy)  len=19   type 5 (girl) len=21
  type 6 (girl) len=25   type 12 Fado  len=40

En_Ko uses zelda_km1.zar (boy model) and zelda_kw1.zar (girl model). This tool confirms which
named CSABs have those durations and flags which are ambiguous (multiple CSABs at the same
duration).

USAGE
-----
  python3 tools/csab_names.py                  # enumerate all, write output files
  python3 tools/csab_names.py --zar zelda_km1  # single ZAR lookup (print to stdout)
  python3 tools/csab_names.py --dur 19 --zar zelda_km1  # find all CSABs with duration 19

Set ZELDA3D_OOT3D_ROM to the decrypted OoT3D .3ds image path (or put it in the
superproject's .env).
"""
from __future__ import annotations

import argparse
import json
import os
import sys
from collections import defaultdict

# ---- Resolve the superproject's tools (zelda3d, our parent) -------------
_HERE = os.path.dirname(os.path.abspath(__file__))
_REPO_ROOT = os.path.dirname(_HERE)           # oot3d-decomp root
sys.path.insert(0, _HERE)
from zelda3d_paths import find_oot3d_rom, zelda3d_tools  # noqa: E402
zelda3d_tools()

from ctr_romfs import CtrRom   # noqa: E402
from zar import Zar            # noqa: E402
from csab import Csab          # noqa: E402

# ---- Output paths -------------------------------------------------------
_SKELDATA = os.path.join(_HERE, "skeldata")
_CATALOG_JSON = os.path.join(_SKELDATA, "csab_catalog.json")
_DOCS = os.path.join(_REPO_ROOT, "docs")
_CATALOG_MD = os.path.join(_DOCS, "csab_catalog.md")


def _load_rom() -> CtrRom:
    try:
        return CtrRom(find_oot3d_rom())
    except RuntimeError as e:
        sys.exit(str(e))


def catalog_zar(rom: CtrRom, zar_path: str) -> dict | None:
    """Parse one ZAR and return its catalog entry, or None if it has no CSABs."""
    try:
        fe = rom.get(zar_path)
        z = Zar(rom.read(fe))
    except Exception as e:
        return {"zarPath": zar_path, "error": str(e), "totalCsabs": 0, "csabs": []}

    csab_entries = []
    for f in z.files:
        if not f.name.lower().endswith(".csab"):
            continue
        base = os.path.splitext(os.path.basename(f.name))[0]
        try:
            c = Csab(z.read(f))
            csab_entries.append({
                "csabPath": f.name,
                "name": base,
                "duration": c.duration,
                "boneCount": c.bone_count,
            })
        except Exception as e:
            csab_entries.append({
                "csabPath": f.name,
                "name": base,
                "duration": None,
                "boneCount": None,
                "error": str(e)[:80],
            })

    if not csab_entries:
        return None

    # Build byDuration index and find ambiguous durations
    by_dur: dict[int, list[str]] = defaultdict(list)
    for e in csab_entries:
        if e["duration"] is not None:
            by_dur[e["duration"]].append(e["name"])

    ambiguous = sorted(d for d, names in by_dur.items() if len(names) > 1)

    return {
        "zarPath": zar_path,
        "totalCsabs": len(csab_entries),
        "csabs": csab_entries,
        "byDuration": {str(k): v for k, v in sorted(by_dur.items())},
        "ambiguous": ambiguous,
    }


def build_catalog(rom: CtrRom) -> dict:
    """Enumerate all ZARs in the ROM and build the full catalog."""
    objects = {}
    for fe in rom.iter_files():
        if not fe.name.endswith(".zar"):
            continue
        entry = catalog_zar(rom, fe.path)
        if entry is not None:
            objects[fe.path] = entry

    return {
        "totalZarsWithCsabs": len(objects),
        "objects": objects,
    }


# ---- Markdown renderer --------------------------------------------------

def render_md(catalog: dict) -> str:
    lines = [
        "# OoT3D CSAB Catalog",
        "",
        "Generated by `tools/csab_names.py` from the RomFS of the decrypted OoT3D ROM.",
        "Maps every CSAB animation name → frame count so that a runtime `animLength` (from",
        "`oracle_export.py`) can be matched to a human-readable animation name.",
        "",
        f"**Total animated ZARs:** {catalog['totalZarsWithCsabs']}  ",
        f"**Total CSABs:** {sum(v['totalCsabs'] for v in catalog['objects'].values())}",
        "",
        "---",
        "",
    ]

    for zar_path, entry in sorted(catalog["objects"].items()):
        if entry.get("error"):
            lines.append(f"## `{zar_path}` — ERROR: {entry['error']}")
            lines.append("")
            continue

        ambig_note = ""
        if entry["ambiguous"]:
            ambig_note = f"  ⚠ ambiguous durations: {', '.join(str(d) for d in entry['ambiguous'])}"

        lines.append(f"## `{zar_path}`  ({entry['totalCsabs']} CSABs){ambig_note}")
        lines.append("")
        lines.append("| name | duration | bones | ambiguous? |")
        lines.append("|------|----------|-------|------------|")

        for e in sorted(entry["csabs"], key=lambda x: (x.get("duration") or 9999, x["name"])):
            dur = str(e["duration"]) if e["duration"] is not None else "ERR"
            bn = str(e["boneCount"]) if e["boneCount"] is not None else "ERR"
            is_ambig = e["duration"] in entry["ambiguous"] if e["duration"] is not None else False
            ambig_col = "yes" if is_ambig else ""
            err = f" `[{e.get('error','')}]`" if e.get("error") else ""
            lines.append(f"| `{e['name']}`{err} | {dur} | {bn} | {ambig_col} |")

        lines.append("")

    return "\n".join(lines)


# ---- En_Ko validation report (printed to stdout) ------------------------

EN_KO_ORACLE = [
    # (enko_type, sex, animLength) from docs/anim_system.md ground truth
    (0,  "boy",  19),
    (1,  "girl", 25),
    (2,  "boy",  20),
    (3,  "boy",  14),
    (4,  "boy",  19),
    (5,  "girl", 21),
    (6,  "girl", 25),
    (12, "Fado", 40),
]


def validate_enko(catalog: dict) -> str:
    """Cross-check oracle animLengths against km1/kw1 CSABs. Returns a report string."""
    km1 = catalog["objects"].get("/actor/zelda_km1.zar")
    kw1 = catalog["objects"].get("/actor/zelda_kw1.zar")
    if not km1 or not kw1:
        return "MISSING km1/kw1 in catalog — cannot validate En_Ko"

    lines = [
        "## En_Ko Oracle Validation",
        "",
        "Cross-checking live oracle animLengths (docs/anim_system.md) against km1/kw1 CSABs.",
        "boy types use zelda_km1.zar; girl types use zelda_kw1.zar.",
        "",
        "| enko_type | sex  | animLen | CSAB candidates | ambiguous? |",
        "|-----------|------|---------|-----------------|------------|",
    ]

    for enko_type, sex, animlen in EN_KO_ORACLE:
        zar_entry = km1 if sex in ("boy", "Fado") else kw1
        candidates = zar_entry["byDuration"].get(str(animlen), [])
        ambig = len(candidates) > 1
        cand_str = ", ".join(f"`{c}`" for c in candidates) if candidates else "**MISSING**"
        flag = "yes" if ambig else ""
        lines.append(f"| {enko_type:9d} | {sex:<4} | {animlen:7d} | {cand_str} | {flag} |")

    lines.append("")

    # Summarise unambiguous matches
    matched = 0
    ambiguous = 0
    missing = 0
    for enko_type, sex, animlen in EN_KO_ORACLE:
        zar_entry = km1 if sex in ("boy", "Fado") else kw1
        candidates = zar_entry["byDuration"].get(str(animlen), [])
        if not candidates:
            missing += 1
        elif len(candidates) > 1:
            ambiguous += 1
        else:
            matched += 1

    lines.append(f"**Result:** {matched} unique matches, {ambiguous} ambiguous, {missing} missing "
                 f"out of {len(EN_KO_ORACLE)} oracle entries.")

    return "\n".join(lines)


# ---- CLI ----------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(description="OoT3D CSAB name/duration catalog")
    ap.add_argument("--zar", help="Only process this ZAR (base name like 'zelda_km1' or full path)")
    ap.add_argument("--dur", type=int, help="Filter to CSABs with this duration (use with --zar)")
    ap.add_argument("--validate-enko", action="store_true",
                    help="Print the En_Ko oracle validation cross-check")
    ap.add_argument("--no-write", action="store_true",
                    help="Skip writing output files (print to stdout only)")
    args = ap.parse_args()

    rom = _load_rom()

    # Single ZAR mode
    if args.zar:
        zp = args.zar if args.zar.startswith("/") else f"/actor/{args.zar}.zar"
        entry = catalog_zar(rom, zp)
        if entry is None:
            print(f"{zp}: no CSABs found")
            return
        if entry.get("error"):
            print(f"ERROR: {entry['error']}")
            return
        print(f"{zp}: {entry['totalCsabs']} CSABs")
        for e in sorted(entry["csabs"], key=lambda x: (x.get("duration") or 9999, x["name"])):
            if args.dur is not None and e["duration"] != args.dur:
                continue
            ambig = " [AMBIGUOUS]" if e["duration"] in entry["ambiguous"] else ""
            err = f"  ERROR: {e['error']}" if e.get("error") else ""
            print(f"  dur={e['duration']:4}  bones={e['boneCount']:3}  {e['name']}{ambig}{err}")
        if entry["ambiguous"]:
            print(f"  Ambiguous durations: {entry['ambiguous']}")
        return

    # Full catalog
    print("Building CSAB catalog from ROM (this may take 30-60 s)...", flush=True)
    catalog = build_catalog(rom)
    total_csabs = sum(v["totalCsabs"] for v in catalog["objects"].values())
    print(f"  {catalog['totalZarsWithCsabs']} ZARs with CSABs, {total_csabs} total CSABs")

    # En_Ko validation (always run)
    enko_report = validate_enko(catalog)
    print()
    print(enko_report)

    if args.validate_enko:
        return  # user only wanted the validation

    if not args.no_write:
        os.makedirs(_SKELDATA, exist_ok=True)
        os.makedirs(_DOCS, exist_ok=True)

        with open(_CATALOG_JSON, "w") as fh:
            json.dump(catalog, fh, indent=2)
        print(f"\nWrote {_CATALOG_JSON}")

        md = render_md(catalog)
        with open(_CATALOG_MD, "w") as fh:
            fh.write(md)
        print(f"Wrote {_CATALOG_MD}")


if __name__ == "__main__":
    main()
