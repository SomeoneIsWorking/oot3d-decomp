# En_Ma2 CSAB binding chain — static RE (2026-06-23)

Static reverse-engineering of how OoT3D En_Ma2 (Adult Malon) selects its animation (CSAB).
En_Ma2 is a single-body NPC — one ZAR (`zelda_ma2.zar`), one skeleton, four CSABs.
En_Ma3 (post-credits Malon) shares the same ZAR, rig, and CSAB binding pattern (identical
OverrideLimbDraw/PostLimbDraw; see addresses below).

Head/torso tracking and facial wiring for both Ma2/Ma3 are already in
`docs/enko_override_and_ensa_facial.md` — this document covers the **CSAB selection** chain only.

---

## Actor identity

| field      | value          | notes                              |
|------------|----------------|------------------------------------|
| actor_id   | 0x00D9 (217)   | same as N64 ACTOR_EN_MA2           |
| category   | 4 (NPC)        |                                    |
| objId      | 0x00D0 (208)   | zelda_ma2.zar (shared w/ En_Ma3)   |
| instSize   | 0x04FC (1276)  | OoT3D instance                     |
| init       | `0x0018c614`   | EnMa2_Init                         |
| destroy    | `0x0018c964`   | EnMa2_Destroy                      |
| update     | `0x001da0d4`   | EnMa2_Update                       |
| draw       | `0x001da000`   | EnMa2_Draw                         |
| profile    | `0x0052c1c0`   | ActorProfile in code.bin           |

En_Ma3 (post-credits):
| actor_id | 0x01C5 | init `0x0018c990`, draw `0x001da28c`, same objId 0x00D0 |

---

## ZAR and CSAB catalog

ZAR: `/actor/zelda_ma2.zar` (4 CSABs, 20 bones each)

| csab_idx | name                | duration | N64 equivalent              |
|----------|---------------------|----------|-----------------------------|
| 0        | ma2_matsu           | 30f      | `gMalonAdultIdleAnim`        |
| 1        | ma2_moshikashite    | 15f      | (no direct N64 equivalent)   |
| 2        | ma2_shigoto         | 30f      | `gMalonAdultStandStillAnim`  |
| 3        | ma2_utau            | 58f      | `gMalonAdultSingAnim`        |

Note: `ma2_moshikashite` ("maybe/wonder" gesture, 15f) is preloaded into the CSAB player's
slot 1 but appears **not** to be referenced by the animation table's 5 entries — its role is
analogous to `ma1_hanasi` in En_Ma1 (buffer slot only, possibly mouth-anim related).

---

## Functions involved

| address      | name / role                                                    |
|--------------|----------------------------------------------------------------|
| `0x0018c614` | `EnMa2_Init` — skeleton init, CSAB preload, action/CSAB set   |
| `0x0018c964` | `EnMa2_Destroy` — trivial                                      |
| `0x001da0d4` | `EnMa2_Update` — blink, action dispatch, head-track            |
| `0x001da000` | `EnMa2_Draw` — CSAB draw, facial, ocarina-prop mesh toggle     |
| `0x00375c08` | `SetSkelAnimCSAB` — set + start a CSAB on a skeleton           |
| `0x0035c358` | 3-slot CSAB preloader (csab_idx → player double-buffer)        |
| `0x003731e0` | thin wrapper for CSAB step per frame                           |

---

## Animation (CSAB) selection mechanism

### Init: CSAB preload

`EnMa2_Init` calls:
```c
FUN_0035c358(actor + 0x228,   // CSAB player struct (matAnim base)
             actor + 0x1a4,   // skelAnime ptr
             0,               // slot 0: csab_idx=0 = ma2_matsu (30f)
             1,               // slot 1: csab_idx=1 = ma2_moshikashite (15f)
             0xffffffff);     // slot 2: -1 = none
```
This preloads ma2_matsu and ma2_moshikashite.

### Init: initial CSAB (scene-gated)

In special scene conditions (OoT3D Init branches), `EnMa2_Init` calls `FUN_00375c08`
(SetSkelAnimCSAB) directly with entries from the anim table (see below), then sets actionFunc.
In the **common spawning path** (Lon Lon Ranch adult timeline), Init falls through without
setting an explicit initial CSAB — the first actionFunc dispatch from Update selects it.

### Full animation table @ `0x0052c224` (stride=0x10)

The table layout matches En_Ma1: `[csab_idx(u32), speed(f32), unk(f32)=0, morph(f32)]`.
Table index = N64 `ENMA2_ANIM_*` enum value.

| entry | csab_idx | CSAB                 | speed | morph  | N64 `sAnimationInfo` entry           |
|-------|----------|----------------------|-------|--------|--------------------------------------|
| [0]   | 0        | ma2_matsu (30f)      | 1.0   | 0.0    | ENMA2_ANIM_0: IdleAnim loop          |
| [1]   | 0        | ma2_matsu (30f)      | 1.0   | −10.0  | ENMA2_ANIM_1: IdleAnim morph         |
| [2]   | 2        | ma2_shigoto (30f)    | 1.0   | 0.0    | ENMA2_ANIM_2: StandStillAnim (→ work)|
| [3]   | 3        | ma2_utau (58f)       | 1.0   | 0.0    | ENMA2_ANIM_3: SingAnim loop          |
| [4]   | 3        | ma2_utau (58f)       | 1.0   | −10.0  | ENMA2_ANIM_4: SingAnim morph         |

**Key divergence from N64:** ENMA2_ANIM_2 maps to `ma2_shigoto` ("work/chore" animation, 30f)
rather than a strict stand-still. The frame count matches N64's 30f `gMalonAdultStandStillAnim`
but the motion content differs — OoT3D Malon does a subtle work gesture in this slot.

### Per-frame CSAB updates (action functions)

`EnMa2_Update` calls `FUN_003731e0(actor + 0x1a4)` each frame to advance the CSAB, then
dispatches via actionFunc `@+0x3f4`. The action functions call `FUN_00375c08` with table
entries to switch animations (by ENMA2_ANIM index), mirroring N64's `EnMa2_ChangeAnim`.

---

## soh3d binding summary

En_Ma2 / En_Ma3: single skeleton, no variant type. Table index == N64 enum value.

| N64 anim (ENMA2_ANIM_*) | OoT3D CSAB        | duration | when used                          |
|--------------------------|-------------------|----------|------------------------------------|
| ANIM_0 IdleAnim loop     | ma2_matsu         | 30f      | default idle / WaitToEndTalk       |
| ANIM_1 IdleAnim morph    | ma2_matsu         | 30f      | transition to idle (morph −10)     |
| ANIM_2 StandStillAnim    | **ma2_shigoto**   | 30f      | **OoT3D replaces standstill→work** |
| ANIM_3 SingAnim loop     | ma2_utau          | 58f      | WaitForOcarina / WaitForEpona      |
| ANIM_4 SingAnim morph    | ma2_utau          | 58f      | transition to singing (morph −10)  |

`ma2_moshikashite` (15f) is preloaded but **not in the anim table** — ignore for skeletal CSAB;
its slot likely serves the facial/mouth-anim channel at runtime.

---

## Key structural offsets (OoT3D EnMa2 instance)

| offset  | field             | notes                                      |
|---------|-------------------|--------------------------------------------|
| +0x1a4  | skelAnime         | skeleton anim controller (OoT3D)           |
| +0x228  | matAnimBase       | CSAB player / matAnim array (stride 0x98)  |
| +0x3f4  | actionFunc        | current action function pointer            |
| +0x3f8  | collider          | ColliderCylinder                           |
| +0x450  | talkState         | NpcInteractInfo (OoT3D-native base)        |
| +0x458  | headRot           | OoT3D-native; SoH3D reads N64 @ +0x1E8+8  |
| +0x45e  | torsoRot          | OoT3D-native; SoH3D reads N64 @ +0x1E8+0xE|
| +0x47a  | singingEnabled    | s16: 1=enabled                             |
| +0x47c  | blinkTimer        | s16                                        |
| +0x47e  | eyeIndex          | s16 (facial slot 0)                        |
| +0x480  | mouthIndex        | s16 (facial slot 1)                        |

(instSize = 0x04FC; much smaller than Ma1's 0x0C38 — Ma2 has simpler state machine.)

**N64 interactInfo base for SoH3D kTrackActors: `+0x1E0`** (from `z_en_ma2.h:39`).
Head bone = **8**, torso bone = **7** (from `EnMa2_OverrideLimbDraw @ 0x233648`).
Facial: eye slot 0 = `eyeIndex @ +0x47e`, mouth slot 1 = `mouthIndex @ +0x480`, direct (no
remap). CMB eye mat index = 4, mouth mat = 5; cmabs = `malon_eye.cmab` (3f) +
`malon_mouth.cmab` (3f). All in `enko_override_and_ensa_facial.md`.
