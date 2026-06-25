#!/usr/bin/env python3
"""gen_player_animid_table.py — emit the OoT3D player animId -> CSAB-name table.

GROUND TRUTH for the SoH3D anim-SELECTION parity sweep (#117). The Player's live
`curAnimId` (PLAYER+0x254+0x30) is an INDEX into the player ZAR's CSAB set, resolved by
`FUN_0034807c(animSet, animId)`:

    animSet  = *(skelAnime + 4)                 # PLAYER+0x258
    csabArr  = *(animSet + 0x50)                # array of csab-descriptor pointers
    csabDesc = csabArr[animId]                  # 0x14-byte descriptor
    csabData = *(csabDesc + 0)                  # the raw 'csab' resource

The descriptor array is built in ZAR file order, so **animId == file-order index into
`/actor/zelda_link_boy_new.zar`** (582 CSABs). Proven live 2026-06-25: live csab durations
read at csabArr[i] match `csab_catalog.json`'s csabs[i] in sequence for every parseable entry
(see docs/player_anim_states.md). So the name table is simply the catalog's ordered csab list.

Output: tools/skeldata/player_animid_names.json
  { "zar": "/actor/zelda_link_boy_new.zar", "count": 582,
    "names": ["sude_nwait", "o_get_mae", ...],            # index == animId
    "byId":  { "0": {"name":..., "duration":..., "boneCount":...}, ... } }
"""
import json, os, sys

HERE = os.path.dirname(os.path.abspath(__file__))
CATALOG = os.path.join(HERE, "skeldata", "csab_catalog.json")
OUT = os.path.join(HERE, "skeldata", "player_animid_names.json")
PLAYER_ZAR = "/actor/zelda_link_boy_new.zar"


def main():
    cat = json.load(open(CATALOG))
    zar = cat["objects"][PLAYER_ZAR]["csabs"]
    names = [c["name"] for c in zar]
    by_id = {
        str(i): {"name": c["name"], "duration": c.get("duration"),
                 "boneCount": c.get("boneCount")}
        for i, c in enumerate(zar)
    }
    out = {"zar": PLAYER_ZAR, "count": len(zar), "names": names, "byId": by_id}
    json.dump(out, open(OUT, "w"), indent=0)
    print(f"wrote {OUT}: {len(names)} animIds")
    # spot-check the known live values
    for i in (0x47, 0x50, 0x58, 0x71, 0x8f):
        print(f"  animId {i:#04x} ({i:>3}) = {names[i]}")


if __name__ == "__main__":
    main()
