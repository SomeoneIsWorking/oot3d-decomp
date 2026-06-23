# En_Ma1 CSAB binding chain — static RE (2026-06-23)

Static reverse-engineering of how OoT3D En_Ma1 (Child Malon) selects its animation (CSAB).
En_Ma1 is a single-body NPC (no variant/type family) — one ZAR, one skeleton, two active CSABs.

---

## Actor identity

| field      | value          | notes                              |
|------------|----------------|------------------------------------|
| actor_id   | 0x00E7 (231)   | same as N64 ACTOR_EN_MA1           |
| category   | 4 (NPC)        |                                    |
| objId      | 0x0039 (57)    | zelda_ma1.zar (single object slot) |
| instSize   | 0x0C38 (3128)  | OoT3D instance (vs N64 0x0210)     |
| init       | `0x0018c334`   | EnMa1_Init                         |
| destroy    | `0x0018c5e4`   | EnMa1_Destroy                      |
| update     | `0x001d9e00`   | EnMa1_Update                       |
| draw       | `0x001d9d50`   | EnMa1_Draw                         |
| profile    | `0x0052c11c`   | ActorProfile in code.bin           |

---

## ZAR and CSAB catalog

ZAR: `/actor/zelda_ma1.zar` (3 CSABs, 19 bones each)

| csab_idx | name          | duration | N64 equivalent             |
|----------|---------------|----------|----------------------------|
| 0        | ma1_hanasi    | 7f       | (talk-flash/no N64 direct) |
| 1        | ma1_matsu     | 29f      | `gMalonChildIdleAnim`      |
| 2        | ma1_utau      | 60f      | `gMalonChildSingAnim`      |

---

## Functions involved

| address      | name / role                                                 |
|--------------|-------------------------------------------------------------|
| `0x0018c334` | `EnMa1_Init` — spawn-filter, skel init, initial anim set   |
| `0x0018c5e4` | `EnMa1_Destroy` — trivial                                   |
| `0x001d9e00` | `EnMa1_Update` — blink, action dispatch, head-track         |
| `0x001d9d50` | `EnMa1_Draw` — CSAB draw + facial slots                     |
| `0x003d2a14` | `EnMa1_Idle` — default idle action (no teach-song)          |
| `0x003c6128` | `EnMa1_IdleTeachSong` — idle + ocarina-teach branch         |
| `0x0035c358` | `EnMa1_LoadCSABSlots` — CSAB player init (3-slot preload)   |
| `0x00348800` | `EnMa1_ChangeAnim` — switch to anim table entry by index    |
| `0x003731e0` | thin wrapper for `FUN_0036b4ec` — CSAB step per frame       |
| `0x00372f0c` | ZAR CSAB index resolver (csab_idx → ptr from ZAR handle)   |

---

## Animation (CSAB) selection mechanism

### Init: CSAB preload

`EnMa1_Init` calls the 3-slot CSAB preloader:
```c
FUN_0035c358(actor + 0x9e0,   // CSAB player struct
             actor + 0x95c,   // skelAnime ptr
             0,               // slot 0: csab_idx=0 = ma1_hanasi (7f)
             1,               // slot 1: csab_idx=1 = ma1_matsu  (29f)
             0xffffffff);     // slot 2: -1 = none
```
This pre-loads ma1_hanasi and ma1_matsu into the player's double-buffer.

### Init: initial anim

After setup, **both** action branches (Idle and IdleTeachSong) call:
```c
FUN_00348800(actor, 2);  // anim table entry [2]
```
Entry [2] = csab_idx=2, speed=1.0, morph=0.0 → **ma1_utau (60f, sing anim)** at startup.

This mirrors N64 `EnMa1_ChangeAnim(this, ENMA1_ANIM_2)` = `gMalonChildSingAnim, morph=0`.

### Per-frame anim switches (action functions)

`EnMa1_Idle` and `EnMa1_IdleTeachSong` call `FUN_00348800(actor, slot_index)` to switch
animations, where `slot_index` maps into the anim table @ `0x0052c180`:

| talkState | call                     | anim table | csab_idx | CSAB           | morph  | N64 equiv         |
|-----------|--------------------------|------------|----------|----------------|--------|-------------------|
| IDLE      | `FUN_00348800(actor, 2)` | entry [2]  | 2        | ma1_utau (60f) | 0.0    | ENMA1_ANIM_2      |
| IDLE      | `FUN_00348800(actor, 3)` | entry [3]  | 2        | ma1_utau (60f) | -10.0  | ENMA1_ANIM_3      |
| TALKING   | `FUN_00348800(actor, 0)` | entry [0]  | 1        | ma1_matsu(29f) | 0.0    | ENMA1_ANIM_0      |
| TALKING   | `FUN_00348800(actor, 1)` | entry [1]  | 1        | ma1_matsu(29f) | -10.0  | ENMA1_ANIM_1      |

### Full animation table @ `0x0052c180` (stride=0x10)

| entry | csab_idx | speed | morph  | CSAB           | N64 sAnimationInfo           |
|-------|----------|-------|--------|----------------|------------------------------|
| [0]   | 1        | 1.0   | 0.0    | ma1_matsu(29f) | ENMA1_ANIM_0: IdleAnim loop  |
| [1]   | 1        | 1.0   | -10.0  | ma1_matsu(29f) | ENMA1_ANIM_1: IdleAnim morph |
| [2]   | 2        | 1.0   | 0.0    | ma1_utau (60f) | ENMA1_ANIM_2: SingAnim loop  |
| [3]   | 2        | 1.0   | -10.0  | ma1_utau (60f) | ENMA1_ANIM_3: SingAnim morph |

The mapping is **1:1 with N64** — N64 ENMA1_ANIM index == OoT3D table entry index.

---

## soh3d binding summary

En_Ma1 is a single-body NPC. No type variant table.

| N64 anim               | OoT3D CSAB     | duration | when used                         |
|------------------------|----------------|----------|-----------------------------------|
| gMalonChildIdleAnim    | ma1_matsu      | 29f      | while talking / not-idle          |
| gMalonChildSingAnim    | ma1_utau       | 60f      | default idle state (both branches)|

**Key result:** Malon's *default idle pose is the singing animation* (ma1_utau, 60f), not the
neutral stand — same as N64 where `EnMa1_Init` sets `ENMA1_ANIM_2` (SingAnim). She switches to
`ma1_matsu` (neutral/idle stand) only while the talkState is TALKING, then back to ma1_utau when
the conversation ends.

The short `ma1_hanasi` (7f, 7 frames) is preloaded into the CSAB player's slot 0 but is NOT
referenced by the animation table entries [0]-[3]. It appears to serve as a buffer slot only —
likely related to the facial/mouth animation channel, not the skeletal animation.

---

## Key structural offsets (OoT3D EnMa1 instance)

| offset  | field             | notes                              |
|---------|-------------------|------------------------------------|
| +0x95c  | skelAnime         | skeleton anim controller           |
| +0x9e0  | csabPlayer        | CSAB player (3 slots, stride 0x98) |
| +0xbb0  | collider          | ColliderCylinder                   |
| +0xbac  | actionFunc        | current action function ptr        |
| +0xc08  | singingEnabled    | s16: 0=no, 1=yes (audio)           |
| +0xc0a  | blinkTimer        | s16                                |
| +0xc0c  | eyeIndex          | s16 (0-2)                          |
| +0xc0e  | mouthIndex        | s16                                |
| +0xc10  | talkState         | s16 NPC_TALK_STATE_*               |

(instSize = 0x0C38; N64 had 0x0210 — the 3DS instance is ~15x larger due to 3DS scene/CSAB infra)
