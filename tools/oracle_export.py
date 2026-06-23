#!/usr/bin/env python3
"""oracle_export.py — export the AUTHORITATIVE per-actor truth from the live OoT3D game.

This is the #89 deliverable: OoT3D (3DS) is ground truth, not N64. For every live actor in the
current scene it emits {id, category, params (= variant selector), pos/rot/room, and the GREZZO
anim-controller state} read straight from emulated 3DS RAM via the Azahar oracle. Diff this JSON
against SoH3D's own per-actor variant/anim selection (REPL `actorsnear`) to find where SoH3D
diverges from the real 3DS game (the #87 inconsistency class).

## Generic anim controller (validated on En_Ko, scene 85)
Skeletal actors hold a GREZZO skeleton object (vtable 0x004EC030) via a pointer in the actor
instance. The per-instance animation controller floats sit at a FIXED delta +0x1C after that
pointer field:
    skeletonPtr @ actor + S          (the word whose target's first word == 0x004EC030)
    curFrame    @ actor + S + 0x1C   (f32, playhead; advances by playSpeed, wraps at animLength)
    playSpeed   @ actor + S + 0x20   (f32)
    endFrame    @ actor + S + 0x28   (f32)
    animLength  @ actor + S + 0x2C   (f32, per-CSAB frame count = stable anim discriminator)
(En_Ko: S=0x1C4 -> curFrame@0x1E0, matching enko_anim.py. animLength is valid even for distant
update-throttled actors; only curFrame freezes when far from Link — see docs/anim_system.md.)
Exact CSAB *naming* is still open (the linear pose-buffer ptrs are transient); animLength+endFrame
is the stable discriminator that proves two actors play different animations.

Usage:
  oracle_export.py                 # human table of every live actor + variant + anim
  oracle_export.py --json [path]   # structured JSON (stdout or file) for diffing vs SoH3D
"""
import argparse, json, struct, sys, os

sys.path.insert(0, os.path.dirname(__file__))
from actors import Rpc, enumerate_actors  # noqa: E402
from csab_lookup import CsabResolver      # noqa: E402

SKELETON_VTABLE = 0x004EC030
ARENA_LO, ARENA_HI = 0x09000000, 0x0A000000
CTRL_DELTA = 0x1C  # curFrame offset after the skeleton-ptr field

CAT_NAMES = ["SWITCH", "BG", "PLAYER", "EXPLOSIVE", "NPC", "ENEMY", "PROP", "ITEMACTION",
             "MISC", "BOSS", "DOOR", "CHEST"]

# Minimal id->name map (extend as needed; numeric id is always exported regardless).
ACTOR_NAMES = {0: "Player", 24: "En_Item00", 273: "En_Wonder_Item", 355: "En_Ko", 389: "En_Wood02"}

# actor_id -> OoT3D ZAR path (for CSAB name resolution via the catalog).
# Populated from kSoH3dObjectZars + actor overlays; extend as new actors are wired up.
# En_Ko (355) loads km1/kw1 dynamically — use variant (params & 0xFF) to pick:
#   types 0,1,2,5,6,12 = boy (km1) or girl (kw1); see enko_anim.py / docs/anim_system.md.
ACTOR_ZAR = {
    355: {  # En_Ko — keyed by variant (ENKO_TYPE, low byte of params)
        "boy_types": {0, 1, 2, 3, 4, 9, 10, 11, 12},  # zelda_km1.zar
        "girl_types": {5, 6, 7, 8},                    # zelda_kw1.zar
        "km1": "/actor/zelda_km1.zar",
        "kw1": "/actor/zelda_kw1.zar",
    },
    # Static single-ZAR actors (object bank -> ZAR is 1:1):
    # Gerudo warrior — En_Ge1 (actor id resolved at runtime; see actor_table.h)
    # Extend by adding {actor_id: "/actor/zelda_<name>.zar"} entries here.
    # The full mapping is in soh3d_object_zars.inc (SOH3D_REPO) but we keep a
    # curated subset here so oracle_export works standalone without SOH3D_REPO.
}

# Lazy-init CSAB resolver (None until first use).
_csab_res: "CsabResolver | None" = None


def csab_resolver() -> CsabResolver:
    global _csab_res
    if _csab_res is None:
        _csab_res = CsabResolver()
    return _csab_res


def resolve_csab(actor_id: int, variant: int, anim_length: float) -> dict | None:
    """Return CSAB resolution dict for (actor_id, variant, animLength), or None."""
    zar_info = ACTOR_ZAR.get(actor_id)
    if zar_info is None:
        return None  # ZAR not in our table yet

    # En_Ko multi-ZAR case
    if isinstance(zar_info, dict) and "km1" in zar_info:
        girl = variant in zar_info.get("girl_types", set())
        zar = zar_info["kw1"] if girl else zar_info["km1"]
    elif isinstance(zar_info, str):
        zar = zar_info
    else:
        return None

    hit = csab_resolver().lookup(zar, anim_length)
    return {
        "zar": zar,
        "csab": hit["name"],          # str if unambiguous, None if ambiguous/missing
        "ambiguous": hit["ambiguous"],
        "candidates": hit["candidates"],
    }


# gActorOverlayTable @ 0x50CD84, stride 0x20, +0x14 -> ActorProfile*, ActorProfile+0xC = instanceSize.
OVERLAY_TABLE = 0x0050CD84


def f32(data, off):
    return struct.unpack_from("<f", data, off)[0]


def inst_size(r, actor_id):
    try:
        prof = r.read32(OVERLAY_TABLE + actor_id * 0x20 + 0x14)
        if prof:
            sz = r.read32(prof + 0x0C)
            if 0x100 <= sz <= 0x8000:
                return sz
    except Exception:
        pass
    return 0x600  # safe default that covers the controller region of most actors


def find_anim_ctrl(r, addr, size):
    """Return actor offset S of the skeleton-ptr field, or None. Caches vtable reads."""
    data = r.read(addr, size)
    seen = {}
    for off in range(0x140, size - 3, 4):
        ptr = struct.unpack_from("<I", data, off)[0]
        if not (ARENA_LO <= ptr < ARENA_HI):
            continue
        vt = seen.get(ptr)
        if vt is None:
            try:
                vt = r.read32(ptr)
            except Exception:
                vt = 0
            seen[ptr] = vt
        if vt == SKELETON_VTABLE:
            return off, data
    return None, data


def read_anim(data, s):
    cf, sp, ef, ln = (f32(data, s + 0x1C), f32(data, s + 0x20),
                      f32(data, s + 0x28), f32(data, s + 0x2C))
    # Validate it looks like a real controller before trusting it.
    ok = (ln >= 2.0 and ln <= 4096.0 and -1.0 <= cf <= ln + 1.0 and abs(ef - (ln - 1.0)) <= 1.5
          and 0.0 <= sp <= 16.0)
    if not ok:
        return None
    return dict(curFrame=round(cf, 3), playSpeed=round(sp, 3),
                endFrame=round(ef, 2), animLength=round(ln, 2))


def export(r):
    info = enumerate_actors(r)
    out = {"scene": info["scene"], "actors": []}
    for cat, (cnt, actors) in sorted(info["cats"].items()):
        for a in actors:
            size = inst_size(r, a["id"])
            s, data = find_anim_ctrl(r, a["addr"], size)
            anim = read_anim(data, s) if s is not None else None
            variant = a["params"] & 0xFF
            # Attach CSAB name resolution alongside the raw animLength.
            csab = None
            if anim is not None:
                csab = resolve_csab(a["id"], variant, anim["animLength"])
            out["actors"].append({
                "addr": f"{a['addr']:#x}",
                "id": a["id"],
                "name": ACTOR_NAMES.get(a["id"], f"id{a['id']}"),
                "category": CAT_NAMES[cat] if cat < len(CAT_NAMES) else cat,
                "params": a["params"],
                "variant": variant,
                "pos": [round(p, 1) for p in a["pos"]],
                "skelOff": f"{s:#x}" if s is not None else None,
                "anim": anim,
                "csab": csab,   # None when actor ZAR not in ACTOR_ZAR table yet
            })
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--json", nargs="?", const="-", help="emit JSON (stdout, or a path)")
    args = ap.parse_args()
    r = Rpc()
    data = export(r)
    if args.json is not None:
        js = json.dumps(data, indent=2)
        if args.json == "-":
            print(js)
        else:
            open(args.json, "w").write(js)
            print(f"wrote {args.json} ({len(data['actors'])} actors, scene {data['scene']})")
        return
    print(f"scene={data['scene']}  actors={len(data['actors'])}")
    print(f"{'addr':>10} {'id':>4} {'name':<16} {'cat':<10} {'var':>4} {'curF':>7} "
          f"{'endF':>6} {'len':>6}  {'csab':<28}  pos")
    for a in data["actors"]:
        an = a["anim"]
        cf = f"{an['curFrame']:7.2f}" if an else "      -"
        ef = f"{an['endFrame']:6.1f}" if an else "     -"
        ln = f"{an['animLength']:6.1f}" if an else "     -"
        px, py, pz = a["pos"]
        # CSAB column: show resolved name, or "?" for ambiguous, or "-" if no table entry.
        csab_info = a.get("csab")
        if csab_info is None:
            csab_col = "-"
        elif csab_info["csab"] is not None:
            csab_col = csab_info["csab"]
        elif csab_info["ambiguous"]:
            csab_col = "?(" + "|".join(csab_info["candidates"][:2]) + ("..." if len(csab_info["candidates"]) > 2 else "") + ")"
        else:
            csab_col = "!notfound"
        print(f"{a['addr']:>10} {a['id']:4d} {a['name']:<16} {str(a['category']):<10} "
              f"{a['variant']:4d} {cf} {ef} {ln}  {csab_col:<28}  ({px:7.1f},{py:6.1f},{pz:7.1f})")


if __name__ == "__main__":
    main()
