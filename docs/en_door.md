# En_Door (standard hinged door) — OoT3D ground truth for SoH3D #115

## Question
How does OoT3D render a standard house/dungeon hinged door? (N64 EnDoor draws a door DL from
KEEP objects; there is NO standalone generic-door ZAR — only special doors exist as ZARs:
zelda_boss_door, zelda_door_gerudo, zelda_haka_door, zelda_jya_door, zelda_killer_door.)

## Answer: the standard door is a separate door CMB inside the KEEP zar (mirrors N64)
OoT3D keeps the generic door model in **`/actor/zelda_keep.zar`** (the OoT3D equivalent of N64
`gameplay_keep`), under `door/model/`:

| CMB | meaning | bytes | bones | mats | tex |
|-----|---------|------:|------:|-----:|----:|
| `door/model/door_model.cmb`            | generic/default | 9216 | 4 | 2 | 1 |
| `door/model/m_Fnormaldoor_omote_model.cmb` | **Field** door  | 9216 | 4 | 2 | 1 |
| `door/model/m_Hnormaldoor_omote_model.cmb` | House door      | 9216 | 4 | 2 | 1 |
| `door/model/m_Wnormaldoor_omote_model.cmb` | Wood door       | 9216 | 4 | 2 | 1 |
| `door/model/obj_door_omote_model.cmb`  | object door      | 9216 | 4 | 2 | 1 |

"omote" = front face (Japanese). Shutter (DOOR_SHUTTER): `shutter/model/n_door_model.cmb`.

### Which CMB does a standard scene door use?
N64 `z_en_door.c` `sDoorInfo[]` maps scene -> (dListIndex, object). Standard (non-temple) doors
fall through to the two KEEP rows: `{-1, 0, GAMEPLAY_KEEP}` and `{-1, 4, GAMEPLAY_FIELD_KEEP}`.
The decomp note in z_en_door.c: **"Due to Object_GetIndex always returning 0, doors always use the
OBJECT_GAMEPLAY_FIELD_KEEP door."** So dListIndex resolves to **4 = `gFieldDoorLeftDL/RightDL`** —
the FIELD door is what the player actually sees on every standard house/building door. OoT3D's
faithful match is therefore **`m_Fnormaldoor_omote_model.cmb`** for all standard EN_DOOR.

Temple-specific doors (N64 sDoorInfo special rows) draw from per-dungeon objects, with OoT3D
equivalents in those objects' ZARs (handle later, lower priority — temples are fewer scenes):
- SCENE_FIRE_TEMPLE  -> dListIndex 1 (OBJECT_HIDAN_OBJECTS) -> object_hidan_objects equivalent
- SCENE_WATER_TEMPLE -> dListIndex 2 (OBJECT_MIZU_OBJECTS)
- SCENE_SHADOW_TEMPLE / BOTTOM_OF_THE_WELL -> dListIndex 3 (OBJECT_HAKA_DOOR -> zelda_haka_door.zar)
- SCENE_FOREST_TEMPLE -> dListIndex 0 (KEEP)

## Bone / pivot structure (m_Fnormaldoor_omote_model.cmb)
```
bone 0: parent -1, trans (0,0,0)          rot 0          -- root (= hinge axis origin)
bone 1: parent 0,  trans (-2700, 0, 0)    rot (-90deg X) -- door PANEL pivot (the swinging limb)
bone 2: parent 1,  trans (~0,0,0)         rot 0
bone 3: parent 2,  trans (0,0,0)          rot 0
```
The panel hangs off bone1; bone0 is the hinge axis. Closed = rest pose. The swing is procedural
(rotate the panel bone by the door's open angle), exactly like N64 EnDoor: in N64 the panel is
limb 4 and `EnDoor_OverrideLimbDraw` does `rot->z += this->actor.world.rot.y` (the open angle),
plus the open/close SkelAnime (gDoorAdultOpeningLeftAnim, 25-frame open / 60-70-frame close).
N64 also flips between front DL (temp_a2[0]) and back DL (temp_a2[1]) by viewer-vs-door yaw;
OoT3D ships only "omote" (front) CMBs, so the OoT3D mesh is authored to read correctly from both
sides (or back handled by the same mesh) — confirm visually.

## SoH3D port plan (#115, item C)
Behavior (swing state machine, open/close timing) is SHARED N64 code — SoH3D runs SoH's En_Door
actor unchanged. ONLY the draw differs. Port = intercept the door draw and substitute the OoT3D
CMB at the actor's world.pos + shape.rot.y + calibrated scale, suppressing the N64 door.
- Increment 1: static CLOSED door (rest pose) via the forced-CMB path (like the windmill/well-arch
  self-calibrating scale). Covers 24 scenes' standard doors with the OoT3D look. m_Fnormaldoor.
- Increment 2 (DONE 2026-06-25): swing — rotate the panel bone by the live open angle. See below.
- Increment 3: temple door variants + shutter (DOOR_SHUTTER) + DOOR_ANA holes.

Assets verified present in ROM via tools/ctr_romfs.py + tools/zar.py (2026-06-25).

## Increment 2 — panel swing (live-traced ground truth, 2026-06-25)
The swing angle a standard handle door applies to its panel is **`skelAnime.jointTable[3].z`**
(binang) — the animated rotation of the panel limb from the open/close SkelAnime — PLUS
`actor.world.rot.y` (the DOOR_AJAR term, which `EnDoor_OverrideLimbDraw` adds via `rot->z +=
world.rot.y`; standard handle doors keep world.rot.y == 0, so for them the whole swing is in
jointTable[3].z; AJAR doors keep jointTable ~0 and carry it in world.rot.y instead).

LIVE capture of a forced open (SoH `doorforce`; animStyle 0 = gDoorAdultOpeningLeftAnim, full
open+close cycle, frame 0→65), reading `jointTable[3].z` through the EnDoor C struct each step:

| anim frame | jointTable[3].z (binang) | ≈ degrees |
|-----------:|-------------------------:|----------:|
| 0–24       | 0                        |  0  (still closed; player walking up) |
| 28.5       | -336                     | -1.8 |
| 34.5       | -4756                    | -26  |
| 40.5       | -8383                    | -46  |
| 46.5       | -9380                    | -52  |
| 52.5       | **-10728** (peak)        | **-59** |
| 58.5       | -8809                    | -48  (closing) |
| 64.5       | -1308                    | -7   |
| 65         | 0                        |  0  (closed) |

So a standard door swings to **~-59°** open, not a full 90°. Sign is negative.

### SoH3D port (behaviors/actor/door.cpp, #115)
The OoT3D door CMB has no swing CSAB (the swing is procedural in OoT3D too), so the port renders the
CMB **bind pose with a procedural per-bone local-euler delta** on the panel bone — the OoT3D analogue
of N64's `rot->z +=`. New runtime support added for this:
- `SoH3D::restPoseSkinMatrices` (asset/csab.cpp) — skin matrices from the CMB REST TRS (no clip),
  with the existing boneRotDelta / bonePostRot channels applied; `SoH3D_UpdateBindPose` (soh3d_anim.cpp)
  is the C-ABI entry that consumes the per-bone rot-delta store and uploads the posed skin.
- door.cpp reads `swing = jointTable[3].z + world.rot.y` through the EnDoor C struct and sets a
  local-euler delta on **CMB bone 1** about its **local Y** axis (= the vertical hinge after bone1's
  -90°-X rest; rotating about local X or Z tilts the panel flat instead — confirmed on-screen),
  gain +1. The delta pivots at bone1's own origin (the -2700-X hinge edge), so the panel swings from
  the correct EDGE with no magic pivot translate (avoids the "revolving door about the centre" trap).
- Calibrated + verified LIVE 2026-06-25 (Kakariko cucco house, scene 0x52): held-pose A/B at
  jointTable peak -10728 swings the panel ~59° open about the edge hinge; closed (live, opening=0) is
  flush. Live tuning knobs retained: REPL `doorbone/dooraxis/doorgain`, `doorhold <binang>` (pin the
  swing for stills), `doorforce` (trigger a real open for tracing). Defaults are the calibrated values.
