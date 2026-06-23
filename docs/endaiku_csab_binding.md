# En_Daiku / En_Daiku_Kakariko CSAB binding chain — static RE (2026-06-23)

Static reverse-engineering of how OoT3D En_Daiku (imprisoned carpenters, Gerudo Fortress) and
En_Daiku_Kakariko (same carpenter models, Kakariko Village) select their animations (CSAB).
Both actors share `zelda_daiku.zar`. Stream 4 needs this for Gerudo Fortress and Kakariko patches.

---

## Actor identities

### En_Daiku (Gerudo Fortress carpenters)

| field      | value          | notes                                    |
|------------|----------------|------------------------------------------|
| actor_id   | 0x0133 (307)   | same as N64 ACTOR_EN_DAIKU               |
| category   | 4 (NPC)        |                                          |
| objId      | 0x0122 (290)   | zelda_daiku.zar (shared w/ Daiku_Kakariko)|
| instSize   | 0x0BF4 (3060)  |                                          |
| init       | `0x001d6414`   | EnDaiku_Init                             |
| destroy    | `0x001d6730`   | EnDaiku_Destroy                          |
| update     | `0x0020f1a8`   | EnDaiku_Update                           |
| draw       | `0x0020f08c`   | EnDaiku_Draw                             |
| profile    | `0x00521c2c`   | ActorProfile in code.bin                 |

### En_Daiku_Kakariko (Kakariko Village carpenters)

| field      | value          | notes                                    |
|------------|----------------|------------------------------------------|
| actor_id   | 0x01BC (444)   | same as N64 ACTOR_EN_DAIKU_KAKARIKO      |
| category   | 4 (NPC)        |                                          |
| objId      | 0x0122 (290)   | zelda_daiku.zar (same ZAR)               |
| instSize   | 0x0BB0 (2992)  |                                          |
| init       | `0x002b12f4`   | EnDaikuKakariko_Init                     |
| destroy    | `0x002b1634`   | EnDaikuKakariko_Destroy                  |
| update     | `0x00386228`   | EnDaikuKakariko_Update                   |
| draw       | `0x00386110`   | EnDaikuKakariko_Draw                     |
| profile    | `0x00521d28`   | ActorProfile in code.bin                 |

---

## ZAR and CSAB catalog

ZAR: `/actor/zelda_daiku.zar` (6 CSABs, 20 bones each)

| csab_idx | name         | duration | semantic (Japanese)               |
|----------|--------------|----------|------------------------------------|
| 0        | dk2_hanasi   | 28f      | "talk/speak" — talking anim        |
| 1        | dk2_hashiru  | 18f      | "run" — running                    |
| 2        | dk2_matsu    | 59f      | "wait/stand" — idle stand          |
| 3        | dk2_roya     | 20f      | "jail/prison" — prisoner yell      |
| 4        | dk2_suwari   | 14f      | "sit/sit-down" — sitting           |
| 5        | dk2_tasuke   | 20f      | "rescue/save" — celebration/rescue |

⚠ The `csab_catalog.md` has a DIFFERENT ordering than the authoritative ZAR binary. Use the
`csab_catalog.json` (`tools/skeldata/csab_catalog.json`) — index order confirmed by `csab_lookup.py`.

---

## Functions involved

### En_Daiku

| address      | name / role                                                      |
|--------------|------------------------------------------------------------------|
| `0x001d6414` | `EnDaiku_Init` — type gate, skel init, init CSAB, set actionFunc|
| `0x001d6730` | `EnDaiku_Destroy`                                               |
| `0x0020f1a8` | `EnDaiku_Update` — CSAB step, actionFunc dispatch, head-track   |
| `0x0020f08c` | `EnDaiku_Draw` — per-type head mesh variant, bone colors, draw  |
| `0x0021a828` | `EnDaiku_OverrideLimbDraw` — head/torso rotation (shared helper)|
| `0x0014ffec` | `EnDaiku_PostLimbDraw` — focus.pos update on limb 9             |
| `0x0018315c` | `EnDaiku_Jailed` action fn (scene 0x0c = Gerudo Fortress)       |
| `0x0034b7e4` | `EnDaiku_Free` action fn (other scenes / post-rescue)           |

### Shared CSAB helpers (same as all other skeletal actors)

| address      | role                                                |
|--------------|-----------------------------------------------------|
| `0x00375c08` | `SetSkelAnimCSAB` — set + start a CSAB on a skel    |
| `0x00370734` | CSAB step per frame (called from Update)            |
| `0x0034df48` | head/torso rotate helper — **identical to `0x0034e01c`** (same bytes); same axis rule: `RotateX(rot.y)·RotateZ(rot.x)`, no negation |

---

## Head/torso limb indices and rotation

`EnDaiku_OverrideLimbDraw @ 0x0021a828`:
```c
if (limbIndex == 8) { actor = actor + 0xb16; FUN_0034df48(mtx, actor); }  // TORSO via torsoRot
if (limbIndex == 9) { actor = actor + 0xb10; FUN_0034df48(mtx, actor); }  // HEAD  via headRot
```
- `+0xb08` = NpcInteractInfo base (OoT3D-native)
- `+0xb10` = headRot  = +0xb08 + 0x08  (NpcInteractInfo.headRot)
- `+0xb16` = torsoRot = +0xb08 + 0x0E  (NpcInteractInfo.torsoRot)

⇒ **head = bone 9, torso = bone 8** (same as Mido).  
Axis rule = `RotateX(rot.y)·RotateZ(rot.x)`, **no Y negation**, no pivot translate.
(FUN_0034df48 is byte-identical to the shared helper FUN_0034e01c — confirmed.)

**N64 interactInfo for SoH3D kTrackActors: `+0x0244`** (from `z_en_daiku.h`).

En_Daiku has **no eye/facial animation** — the Draw function does NOT call `FUN_0035e3a4`
(the material-anim frame setter). The carpenters are expressionless.

---

## Per-type head mesh variants (Draw)

`EnDaiku_Draw @ 0x0020f08c` selects the carpenter head mesh by `actor.params & 3` (0–3):
```c
// Hide all 4 head mesh variants
FUN_0036932c(model, 0); FUN_0036932c(model, 1);
FUN_0036932c(model, 2); FUN_0036932c(model, 3);
// Show only the matching type's head
FUN_0037266c(model, carpenterType & 3);
```
Then sets per-type bone colors via `FUN_00357a50(skel, 0, 4, DAT_0020f19c + type*0x10, 1)`.
Four color entries × 0x10 bytes each live at `DAT_0020f19c @ 0x521bf8`.

---

## Animation (CSAB) selection mechanism

### En_Daiku anim table @ `0x00521c98` (stride=0x10)

Init resolves `DAT_001d671c = 0x00521c98` (table base), then calls `SetSkelAnimCSAB` with
`*table[0]` as the initial CSAB (csab_idx=2 = `dk2_matsu`, the idle stand).

| entry | csab_idx | CSAB              | speed | morph | N64 `EnDaikuAnimation` equiv     |
|-------|----------|-------------------|-------|-------|----------------------------------|
| [0]   | 2        | dk2_matsu (59f)   | 1.0   | 0.0   | SHOUT (0) — initial state        |
| [1]   | 3        | dk2_roya (20f)    | 1.0   | 0.0   | STAND (1)                        |
| [2]   | 5        | dk2_tasuke (20f)  | 1.0   | 0.0   | CELEBRATE (2)                    |
| [3]   | 1        | dk2_hashiru (18f) | 1.0   | 0.0   | RUN (3)                          |
| [4]   | 4        | dk2_suwari (14f)  | 1.0   | 0.0   | SIT (4)                          |

**Note on "SHOUT→dk2_matsu" mapping:** The anim table indices do NOT correspond 1:1 to the N64
`ENDAIKU_ANIM_*` enum values. The init sets `dk2_matsu` (idle stand) as the boot animation,
whereas N64 Init starts at `ENDAIKU_ANIM_SHOUT`. The **semantic** N64→CSAB mapping (by
behavior) is:

| N64 ENDAIKU_ANIM | N64 symbol                     | OoT3D CSAB        | semantic match                   |
|------------------|--------------------------------|-------------------|----------------------------------|
| SHOUT (0)        | `object_daiku_Anim_001AB0`     | **dk2_roya** (20f)| prisoner yelling in jail         |
| STAND (1)        | `object_daiku_Anim_007DE0`     | **dk2_matsu** (59f)| idle stand/wait                  |
| CELEBRATE (2)    | `object_daiku_Anim_00885C`     | **dk2_tasuke** (20f)| rescue/celebration               |
| RUN (3)          | `object_daiku_Anim_000C44`     | **dk2_hashiru** (18f)| run ✓                           |
| SIT (4)          | `object_daiku_Anim_008164`     | **dk2_suwari** (14f)| sit ✓                           |

`dk2_hanasi` (28f, csab_idx=0) is **not in the 5-entry En_Daiku table** — it only appears in
the Daiku_Kakariko table (see below). En_Daiku doesn't need a "talk" animation.

### Init: actionFunc assignment

Scene-gated at Init:
- Scene `0x0c` (Gerudo Fortress): `actionFunc = 0x0018315c` (EnDaiku_Jailed)
- Other scenes (params type 1 or 3, pathfinding): `actionFunc = 0x0034b7e4` (EnDaiku_Free)

The jailed actionFunc drives the sit→yell→look behavior. The free actionFunc drives the
escape/path-walk behavior.

---

## En_Daiku_Kakariko anim table @ `0x00521d9c` (stride=0x10)

6 entries — adds `dk2_hanasi` (talk) and `dk2_suwari` (sit) as separate slots vs En_Daiku.
Morphs are **−7.0** (vs En_Daiku's 0.0), mirroring N64's `morphFrames = -7.0f`.

| entry | csab_idx | CSAB              | speed | morph  | N64 ENDAIKUKAKARIKO_ANIM equiv     |
|-------|----------|-------------------|-------|--------|------------------------------------|
| [0]   | 2        | dk2_matsu (59f)   | 1.0   | −7.0   | ANIM_0 (initial / idle stand)      |
| [1]   | 3        | dk2_roya (20f)    | 1.0   | −7.0   | ANIM_1                             |
| [2]   | 5        | dk2_tasuke (20f)  | 1.0   | −7.0   | ANIM_2                             |
| [3]   | 1        | dk2_hashiru (18f) | 1.0   | −7.0   | ANIM_3 (run)                       |
| [4]   | 0        | dk2_hanasi (28f)  | 1.0   | −7.0   | ANIM_4 (`object_daiku_Anim_000600`)|
| [5]   | 4        | dk2_suwari (14f)  | 1.0   | −7.0   | ANIM_5 (sit)                       |

N64 Kakariko has a 6th anim `object_daiku_Anim_000600` at index 4 (not in N64 En_Daiku) —
mapped to `dk2_hanasi` (talk/gesture, 28f) in OoT3D. Entry [6] is a terminator (speed=0).

---

## soh3d binding summary

### kTrackActors rows (head/torso override)

```c
// En_Daiku (Gerudo Fortress carpenters) — head=9, torso=8, N64 interactOff=0x244
{ "/actor/zelda_daiku.zar", 0x244, 9, 8 },
// En_Daiku_Kakariko reuses the same ZAR and bone layout.
```

### N64 CSAB map (for `kAnimOverrides` / animdbg resolution)

**En_Daiku:**
| N64 ENDAIKU_ANIM | OoT3D CSAB        | duration |
|------------------|-------------------|----------|
| SHOUT (0)        | dk2_roya          | 20f      |
| STAND (1)        | dk2_matsu         | 59f      |
| CELEBRATE (2)    | dk2_tasuke        | 20f      |
| RUN (3)          | dk2_hashiru       | 18f      |
| SIT (4)          | dk2_suwari        | 14f      |

**En_Daiku_Kakariko:**
| N64 ENDAIKUKAKARIKO_ANIM | OoT3D CSAB        | duration |
|--------------------------|-------------------|----------|
| ANIM_0 (idle/initial)    | dk2_matsu         | 59f      |
| ANIM_1                   | dk2_roya          | 20f      |
| ANIM_2 (celebrate)       | dk2_tasuke        | 20f      |
| ANIM_3 (run)             | dk2_hashiru       | 18f      |
| ANIM_4 (extra walk/talk) | dk2_hanasi        | 28f      |
| ANIM_5 (sit)             | dk2_suwari        | 14f      |

---

## Key structural offsets (OoT3D EnDaiku instance)

| offset  | field             | notes                                         |
|---------|-------------------|-----------------------------------------------|
| +0x1a4  | skelAnime         | skeleton anim controller                      |
| +0x148  | jointTable        | bone joint array (passed to draw)             |
| +0x1cc  | model             | CMB model handle (for mesh show/hide)         |
| +0xa48  | actionFunc        | current action function pointer               |
| +0xab8  | escape/path state | s32 state machine field                       |
| +0xb00  | stateFlags        | u32 — bits 1,2,4 control tracking/escape path|
| +0xb04  | carpenterIdInScene| u32 (params & 0x3f) — which carpenter         |
| +0xb08  | interactInfo (3DS)| NpcInteractInfo base (OoT3D-native)           |
| +0xb10  | headRot           | = +0xb08 + 0x08                               |
| +0xb16  | torsoRot          | = +0xb08 + 0x0E                               |

(N64 interactInfo = `+0x0244`; used by SoH3D kTrackActors.)
