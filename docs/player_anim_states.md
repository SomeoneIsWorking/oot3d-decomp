# OoT3D Player Animation & Morph System — RE doc

Deliverable for soh3d cards #70/#83/#86/#88/#8 (the 3d3-Link animation cluster).
Based on static decomp of the player action-func block + the ring-1/2 helper sweep.
Cross-references: `docs/player_port.md`, `docs/anim_system.md`.

---

## 1. OoT3D SkelAnime controller layout (the CSAB anim object)

The N64 `SkelAnime` struct is at `player+0x254` (a 0x44-byte embedded struct in the Player instance).
OoT3D's equivalent GREZZO C++ controller sits at the same embed point.  The struct
**preserves the same logical field semantics** as N64 SkelAnime — confirmed by aligning every
caller in the player action-func block.

### Field map: OoT3D offset (relative to Player+0x254) → N64 SkelAnime offset

| Player+0x254+off | OoT3D role | N64 SkelAnime off | N64 field name | notes |
|---|---|---|---|---|
| +0x30 | current anim id | +0x00 | `animation` (ptr/id) | `player+0x284` = anim id for `sFidgetAnimations` compare |
| +0x34 | morph weight | +0x28 | `morphWeight` | 1.0 at transition start, decrements to 0.0 |
| +0x38 | morph rate   | +0x2C | `morphRate`   | = 1.0 / morphFrames |
| +0x3c | cur frame    | +0x18 | `curFrame`    | playhead; reset to 0.0 on anim change |
| +0x40 | play speed   | +0x1C | `playSpeed`   | multiplied by dt_scale (Grezzo addition) |
| +0x44 | start frame  | +0x0C | `startFrame`  | partial-loop start or LOOP_PARTIAL |
| +0x48 | end frame    | +0x10 | `endFrame`    | ANIMMODE_ONCE triggers done when curFrame==endFrame |
| +0x4c | anim length  | —     | (from anim header via vtable) | frameCount |
| +0x70 | mode byte    | +0x08 | `animMode` (AnimationMode enum) | ANIMMODE_LOOP=0/ONCE=2/etc — see below |
| +0x71 | update-state | computed | (drives switch in LinkAnimation_Update) | 1=loop, 2=once, 3=morph-blend, 4..8=3DS-only |
| +0x74 | limb count   | — | — | used in morph-table copy loop |
| +0x78 | jointTable ptr | +0x20 | `jointTable` | current limb rotations |
| +0x7c | morphTable ptr | +0x24 | `morphTable` | outgoing (frozen) pose for blend |

**Evidence:** every field is cited by the Ghidra decomp of `FUN_00360190` (`LinkAnimation_Change`),
`FUN_0036b4ec` (the update dispatcher switch), and `FUN_003603f8` (root-motion commit).
N64 offsets from `Shipwright/soh/include/z64animation.h`.

### jointTable element format — RE'd live 2026-06-25 (the live pose source for the parity sweep)

The `+0x78` jointTable is NOT N64-style `Vec3s` rotations — OoT3D stores **per-bone LOCAL 3×4 float
transforms**, **stride = 13 floats (0x34 bytes) per bone**, in skeleton-bone order (25 for child Link):

```
float[0..11] = 3×4 row-major matrix:  row r = [ m_r0, m_r1, m_r2, t_r ]
  rotation 3×3 = floats {0,1,2 / 4,5,6 / 8,9,10}   (orthonormal, the anim output)
  translation  = floats {3, 7, 11}                 (LOCAL offset from parent ≈ bone length)
float[12]    = trailing pad/flag (0.0 at rest)
```
Verified: bone0 (root) = identity 3×4 at origin; bone2's local translation ≈ 0 matches its CMB bind
offset (so the matrices are PARENT-LOCAL, not world); leg-bone local rotations cycle 36–128° over a
run cycle. **This array updates every LOGIC frame regardless of rendering** — unlike the render-side
bone-world-matrix array (`actor+0x25c → +0x20 → +0xd4`, see `tools/link_skel_live.py`), which is a
GPU-skinning product that stays FROZEN under headless Azahar (no display present). So per-frame pose
read-back for the parity sweep MUST use this jointTable, NOT the render array.

- `+0x74` ("limb count" in the morph copy loop) reads 0x119/281 live — it is NOT the 25-bone count;
  treat the bone count as the model's CMB bone count (25 for child), not this field.
- Tool: soh3d `tools/oracle_link_pose.py` reads the local rotation 3×3 per bone per frame from here.

### AnimMode / update-state mapping
The `+0x70` mode byte drives which update-state `+0x71` gets set by `FUN_00360190`:
```
mode <  2 → state = 1  (ANIMMODE_LOOP / LOOP_INTERP → loop branch)
mode >= 2 → state = 2  (ANIMMODE_ONCE* → once branch)
morph (|morphFrames| > 0) → state = 3  (blend-out mode; transitions to 1 or 2 on completion)
```
3DS-only states 4–8 handle the stereo/blending paths in the CSAB GPU eval (`FUN_0030f6b0`/
`FUN_0030f900`) — these are N64-unmatched (bucket c / UNMATCHED in divergence_map.md) and are
only exercised in the full 3DS rendering path, not needed for the SoH3D morph fix.

---

## 2. The morph mechanism — `FUN_00360190` = `LinkAnimation_Change` (0x360190, 552B)

This is OoT3D's literal port of N64 `LinkAnimation_Change` (z_animation.c).
Signature (aligned to N64):
```c
// OoT3D FUN_00360190 ≈ N64 LinkAnimation_Change
// param_1 = startFrame (f32, in VFP s0 → Ghidra arg0)
// param_2 = playSpeed  (f32)
// param_3 = endFrame   (f32 as undefined4 — animation end frame or frameCount)
// param_4 = morphFrames (f32, negative = "morph this many frames")
// param_5 = skelAnime ptr (= player+0x254)
// param_6 = play ptr
// param_7 = anim id (u32)
// param_8 = animMode (u8)
```

### The morph path (what SoH3D 3d3 is missing)

When `param_4 != 0.0f` (i.e. morphFrames is non-zero):
1. **If the new anim+startFrame match the current (`+0x30==param_7 && +0x3c==param_2`)**: skip.
2. **If `|param_4| > 0.0`** (morph requested, `param_4 ≥ DAT_003603b8` where DAT_003603b8=0.0):
   - **Copy current jointTable → morphTable** (the frozen outgoing pose).  
     The copy loop in Ghidra (`puVar3/puVar9` loop, ~0x1a-stride per limb) copies the full
     per-bone rotation array into `+0x7c` (morphTable). Stride = 0x1a slots × 4B = OoT3D's
     4-short per-limb format; equivalent to N64 `SkelAnime.morphTable` pre-fill.
   - **Negate morphFrames** (`param_4 = -param_4`) so the stored rate is positive.
   - Set `+0x34 (morphWeight) = 1.0f` (DAT_003603bc = 1.0).
   - Set `+0x38 (morphRate) = 1.0 / |param_4|`.
   - Set update-state `+0x71 = (mode < 2 ? 1 : 2)` — the TARGET state after morph completes.
   - **Set `+0x30 = param_7`** (new anim id), `+0x3c = param_2` (reset curFrame to startFrame,
     usually 0.0), `+0x48 = param_3` (endFrame), `+0x40 = param_1` (playSpeed).
   - The **update-state is NOT yet set to 3** here — it's already been written to 1 or 2 above
     (the target state). State-3 "morph-blend" is how the caller later READS the ongoing morph:
     the update dispatcher (case 3 in `FUN_0036b4ec`) runs every frame while `+0x34 > 0` and
     calls `FUN_002c3814` (the per-bone lerp), decrementing morphWeight each tick.

When `param_4 == 0.0f` (hard cut / no morph):
- Skip the morphTable copy and rate setup.
- Set update-state directly to 1 or 2.
- **This is what the SoH3D 3d3 CSAB path currently does** — it always calls with morph=0,
  producing a hard-cut at every transition.

### The update tick (FUN_0036b4ec case 3 — the morph-blend loop)

```c
case 3: // morph-blend
    fVar7 = *(float*)(param_1 + 0x34);   // morphWeight
    fVar_dt = VectorSignedToFloat(*(s16*)(g + 0x110));  // dt_scale
    fVar7 -= *(float*)(param_1 + 0x38) * fVar_dt * DAT;  // morphWeight -= morphRate * dt
    *(float*)(param_1 + 0x34) = fVar7;
    if (fVar7 <= 0.0f) {
        // Morph done: transition to target state (1 or 2)
        *(u8*)(param_1 + 0x71) = (mode < 2 ? 1 : 2);
        *(float*)(param_1 + 0x34) = 0.0f;
    }
    // Emit the blended pose: lerp(new CSAB at curFrame, frozen morphTable, morphWeight)
    FUN_002c3814(ratio = 1.0 - morphWeight / morphWeight_at_start,
                 play+0x3410, limbCount, jointTable, morphTable);
    return 0;  // not done
```

**The lerp function `FUN_002c3814`** takes `ratio ∈ [0,1]` where 0=full-morphTable and
1=full-CSAB. As morphWeight decrements 1→0, `ratio` goes 0→1, i.e. the pose smoothly
transitions from the outgoing (frozen morphTable) to the incoming CSAB.

**Oracle-confirmed** (docs/anim_system.md, walk→stop):
morphWeight frames: `1.00, 0.83, 0.67, 0.50, 0.33, 0.17, 0.00` (6 frames, morphRate≈0.167).

---

## 3. Per-state CSAB selection (player+0x284 = the current anim id)

This maps each known Link action-state (by OoT3D actionFunc address) to the animation id(s)
it sets in `player+0x284` and the morph it uses. Sourced from the decompiled action funcs.

### Idle / fidget (#88) — `FUN_004ba538` (Player_Action_Idle)

Entry: `FUN_00360190` called with:
```
animId   = result of Player_ChooseNextIdleAnim (inline block in 0x4ba538)
morphFrames = -6.0f  (the picker calls FUN_00360190 via FUN_00360190 with fVar3=DAT_004ba94c;
               the fidget branch: `FUN_00360190(fVar18, fVar3, uVar10, uVar13, ...)` where
               uVar13 = DAT_004ba970 = 0.0f on alt-table anim, else DAT_004ba958)
```

**Idle anim table (default, `DAT_0034d680 = 0x53a5f8`):**
```
index 0 (modelAnimType == 1): 0x50 = yawn
index 1 (modelAnimType != 1): 0x58 = idle_2  (or 0x58 alt entries)
```
Confirmed live: anim 0x50 = yawn (CSAB `nml_wait_yawn`); selected by the 4/5 Rand_ZeroOne
fidget roll with `commonType == 3` (FIDGET_FEET path → indices → `sFidgetAnimations[fidgetType]`).

**Fidget table `DAT_004ba948`** (30 entries, 0x1e loop): the switch in 0x4ba538 checks
`player+0x284 == *piVar9` for each entry (the "am I already playing a fidget?" scan).
The 0x1e bound vs N64's 0x1c confirms OoT3D has **2 extra fidget entries** (index 14–15).

**Morph into fidget:** always `-6.0f` (6-frame blend). The default idle (non-fidget) re-entry
uses `FUN_0034d628(player)` = `Player_GetIdleAnim` → `DAT_0034d680` table, called with morph
from `FUN_0036055c` (Player_SetupAction) which calls `FUN_0036aef0` (idle-entry sequence).

### Run / free-move (#86) — `FUN_004ba378` (Player_Action_80842180)

No explicit `LinkAnimation_Change` call visible in 004ba378.c itself — the base run CSAB is
set by the CALLER `FUN_002bcbac` (= `func_8083C0B8` sibling / movement-start family). The
`run→idle` transition: `FUN_002c2658 + FUN_002be4c4` (the setup-idle pair, called when
`speed == 0.0 || (player+0x29b8 & 4)`). Setup-idle calls into `Player_SetupAction(0x4ba538)`
which sets the idle CSAB with morph.

**Morph on run→idle:** Player_SetupAction calls `FUN_0036aef0(play, player)` which chains to
`LinkAnimation_Change(..., -6.0f)` for the idle. Thus run→idle uses a **6-frame morph** —
exactly what the oracle confirms (morphWeight 1→0 over ~5–6 frames; docs/anim_system.md).

### Back-walk / Z-target (#) — `FUN_004b9920` (Player_Action_808414F8)

Uses `FUN_002bcbac` similarly. Direction choice: `side_walkR` or `side_walkL` start CSAB picked
by target-yaw sign (Grezzo divergence from N64's always-right).

### Side-walk / strafe (#) — `FUN_004bf3bc` (Player_Action_8084193C)

**Grezzo-reimplemented anim layer:** picks from 5 discrete anim ids via `LinkAnimation_Change`:
```
0x3b  side_walkR
0x3c  side_walkL
0x3d  side_stepR (short step?)
0x3f  unknown
0x34  turn-around
```
Each picked by control-stick direction; morph = -6.0f (typical Grezzo side-walk morph).
N64 used a continuous blend; OoT3D uses discrete CSAB selection. This is the only action-func
where OoT3D REIMPLEMENTS the anim layer vs N64 (not just tweak parameters).

### Standing-aim / Z-hold (#88-aim) — `FUN_00488b40` (Player_Action_80840450)

Grezzo added:
- A **90-frame look-around fidget** (`player+0x24ba` timer; Rand_ZeroOne coin-flip offset on
  player+0x24b9). Uses `LinkAnimation_Change(... anim_id ..., -6.0f)` for the gaze-shift.
- Region/environment anim variants (same `+0x174e`/`+0x29b8`/`DAT>'Q'` gate as #88).

### Knockback land (#) — `FUN_004bf18c` (Player_Action_8084377C)

Grezzo changed: landing/down-anim collapsed to single fixed anim `DAT_004bf3b4` (N64 picks
front/back by facing direction). Morph at land: standard recover sequence.

### Ledge step-up (#79) — `FUN_00183634` (Player_Action_80845668)

FAITHFUL to N64. Anim at +0x284 ∈ {0xe6=250jump_start, 0x3a=swim_15step_up, 0xe7/0xe8=step}.
Morph: not a morph — this is a one-shot velocity-launched anim, no blend requested (0.0f).

### Get-item (#) — `FUN_004bc22c` (Player_Action_8084E6D4)

ICE_TRAP arm removed. Dispatch via data tables. Morph: 0.0f (hard-cut per presentation pose).

---

## 4. The `LinkAnimation_Change` morph call sites in the player (canonical morph values)

Reconstructed from N64 twin `z_player.c` (confirmed OoT3D matches N64 for these helpers):

| N64 helper | OoT3D equivalent | morphFrames | when used |
|---|---|---|---|
| `Player_AnimChangeOnceMorph` | `FUN_003604f0` (0x3604f0, 100B) | `-6.0f` | once-play with 6-frame blend |
| `Player_AnimChangeLoopMorph` | called inline | `-6.0f` | loop with 6-frame blend |
| `Player_AnimChangeLoopSlowMorph` | called inline | `-16.0f` | slow blend (swim-wait) |
| `Player_AnimChangeFreeze` | `FUN_00360190` direct with `0.0f` | `0.0f` | hard cut (no blend) |
| fidget picker | `FUN_00360190` with `-6.0f` | `-6.0f` | all fidget transitions |

The **dominant morph duration across all player state transitions is 6 frames** (`-6.0f`).
Slow-morph (16-frame) is reserved for swim / underwater transitions.

---

## 5. What SoH3D needs for the morph fix (#70 / #83 / #86)

Root cause (docs/anim_system.md, confirmed oracle 2026-06-21):
The SoH3D 3d3 CSAB path (`SoH3D_DoRetarget` → `SoH3D_UpdateAnim`) picks a CSAB by
`(animName, frame)` and renders it at **full weight regardless of the engine's
`skelAnime.morphWeight`**. N64 uses `skelAnime.jointTable` which already has the morph
pre-mixed by `AnimationContext_SetInterp`; the CSAB path ignores that table entirely.

**Fix spec (no new OoT3D data needed — the oracle just confirms what we already deduced):**

In `SoH3D_UpdateAnim` (soh3d_model.cpp ~L2297, called from `SoH3D_UpdateAnimAuto` ~L2335):
```c
// EXISTING: sample CSAB at (animName, curFrame) → pose
SoH3D_SampleCsab(animName, curFrame, boneRots);

// ADD: when morphWeight > 0, lerp from frozen outgoing pose
float w = skelAnime->morphWeight;  // from player+0x288 (verified live)
if (w > 0.0f && outgoingPoseFrozen != NULL) {
    for (int b = 0; b < boneCount; b++) {
        // Linear interpolation of per-bone local rotation (quaternion or euler)
        boneRots[b] = lerpRot(boneRots[b], outgoingPoseFrozen[b], w);
        // w=1.0 = full outgoing, w=0.0 = full incoming CSAB
    }
}
```

**Where to freeze the outgoing pose:**  
N64 writes the outgoing pose into `skelAnime.morphTable` BEFORE changing the animation
(see `FUN_00360190` step 2 in §2 above). For the 3d3 path, the equivalent is to snapshot
the CSAB-sampled bone rotations at the moment `skelAnime.morphWeight` transitions from 0 to
a positive value (i.e., when a new anim starts). The keystone fix in
`docs/divergence_map.md § KEYSTONE FIX SPEC` proposes caching this as `sOutgoingCsabPose`
in `SoH3D_SkelAnimeDraw` (`soh3d.c:2253`) right when `morphWeight` jumps.

**Duration:** use the live `skelAnime.morphRate` (+0x28c) and `morphWeight` (+0x288) directly —
these are already set correctly by the N64 animation calls. No OoT3D data needed.

**Gating/QA:** run `tools/soh3d_anim_qa.py` before/after; idle→fidget/talk/roll transitions
should drop from ~110–136° peak to ≤10° (smooth as N64). Gate change on that metric.

---

## 6. animId → CSAB-name resolution (RE'd live 2026-06-25) — GROUND TRUTH for SELECTION parity

### How `curAnimId` (PLAYER+0x254+0x30) becomes a CSAB

The live `curAnimId` is an INDEX, resolved by **`FUN_0034807c(animSet, animId)`** (decomp
`build/decomp/0034807c.c`), called from the per-frame pose sampler `FUN_002bb34c`:

```c
animSet  = *(skelAnime + 0x04)            // PLAYER+0x258 — the loaded anim-set handle
count    = (*(animSet+0x20) == -1) ? 0    // bounds (582 for the player set)
           : *(*(animSet+0xc) + *(animSet+0x20)*0x10)
if (animId < count)
    csabDesc = *(*(animSet + 0x50) + animId*4)   // descriptor ptr, ZAR file order
    csabData = *(csabDesc + 0)                   // raw 'csab' resource (size at +4)
```

So **`animId` == the file-order index into `/actor/zelda_link_boy_new.zar`** (582 CSABs).

**Proven live (2026-06-25):** read each `csabArr[i]`'s live CSAB header `duration`/`boneCount`
and compared to `csab_catalog.json` `csabs[i]` IN ORDER — every parseable entry matched in
sequence (idle `nml_waitF_typeA_20f`, walk `nml_walk_free`=0x47, run `nml_run_free`=0x6c, …).
The array order is identical to the catalog's ZAR file order.

**Table:** `tools/gen_player_animid_table.py` → `tools/skeldata/player_animid_names.json`
(`names[animId]` = CSAB name). Live reader: soh3d `tools/oracle_link_animid.py`.

### CORRECTED known ids (the earlier "anim id = CSAB internal index" guesses below were WRONG)

| id (hex/dec) | CSAB name (live-verified) | state |
|---|---|---|
| 0x47 / 71  | **nml_walk_free** | walk (NOT run — earlier note said run) |
| 0x6c / 108 | **nml_run_free**  | run (the real run anim; live idle→walk→run = 0x56→0x47→0x6c) |
| 0x50 / 80  | **nml_wait_free** | base idle (NOT yawn) |
| 0x56 / 86  | **nml_waitF_typeA_20f** | standing idle variant (live default in Kokiri) |
| 0x58 / 88  | **nml_wait** | idle variant |
| 0x8f / 143 | nml_hang_wait_free | ledge-hang wait |

Resolve any id from the JSON; do NOT hand-guess. The old inferred table (run=0x47, yawn=0x50,
etc.) was derived from a wrong "id = internal index" assumption and is superseded by the live
ZAR-order proof above.

**Alt idle table** (`DAT_0034d680+0x4f8 = 0x53aaF0`): `{0x1f9, 0x1f8, 0x1f8, 0x1fa}` —
active when the version gate `(player+0x174e==1 && *0x54ac55 >= 'Q' && !(player+0x29b8 & 0x400))` opens.

---

## 6b. Ground locomotion (walk/run) leg-cycle — does NOT use curFrame/morph (RE'd 2026-06-25)

Critical for the SoH3D #117 slide fix. The walk/run leg cycle is **not** advanced by the standard
`skelAnime.curFrame` playhead. Instead (N64 twin `z_player.c`, confirmed in this build):

- **Run action** `Player_Action_8084193C` → calls `func_80841860` EVERY frame, which sets
  `skelAnime.animation` directly and calls **`LinkAnimation_BlendToJoint(walk_L, walk_R, phase, …)`**
  — blending two static stride poses by an internal accumulator **`unk_868`** (the leg-cycle phase,
  advanced by `func_8084029C` per frame from ground speed). The pose is written straight into the
  jointTable; `curFrame` is never advanced.
- **Walk action** `Player_Action_80842180` → `func_80841EE4` similarly uses `LinkAnimation_LoadToJoint`
  + `LinkAnimation_InterpJointMorph` each frame, again driven by `unk_868`, not `curFrame`.
- The run is ENTERED once by `func_8083C858` → `Player_AnimChangeLoopMorph` (= `LinkAnimation_Change`
  with morphFrames `-6`), which sets `morphWeight = 1.0` and `curFrame = 0` ONCE. Because the steady
  cycle bypasses the curFrame/morph machinery, **both `curFrame` (0) and `morphWeight` (1.0) stay
  pinned for the whole run** — they are stale artifacts, not live values.

**Consequence for any CSAB/retarget port (SoH3D):** you CANNOT phase-lock a locomotion CSAB to
`curFrame` (dead at 0) and you must NOT treat the pinned `morphWeight=1.0` as a live cross-fade weight
(doing so blends the run toward the frozen idle = a motionless slide). Drive the loco CSAB by ground
speed (free-run) and skip the morph blend for the loco path. (SoH3D fix: soh3d_link.cpp loco branch,
commit a91976b — verified posescan 0.6°→36.9° per-frame leg motion.)

## 6c. N64 `jump_climb` / `run_jump_water_fall` → OoT3D family reuse (RE'd 2026-06-25)

These two N64 player-anim families have **no own CSAB** in either link zar; OoT3D's ported
`z_player` reuses an existing family for each. Recovered statically (group table + call-site
immediates) for soh3d task #2 — the last 8 unmapped player anims. **No oracle/eyeball needed:
these are read straight out of the binary.** Names via `tools/skeldata/player_animid_names.json`
(ZAR file order). SoH3D side: `tools/gen_player_animmap.py` OVERRIDES + `soh3d_player_animmap.inc`.

### jump_climb → **hang** family (the wall-grab/hang/vault states)

The OoT3D **player anim-group table** (the `GET_PLAYER_ANIM(group, modelAnimType)` backing store,
N64 `sPlayerAnimGroups`) base = **`0x0053a5f8`** (loaded as a literal in `Player_Action_8084411C`
@ `0x4bba4c`, `ldr fp,[pc]` → word @ `0x4bbda8`). Each group = 6 × u32 animId (one per
modelAnimType), stride `0x18`. The three jump_climb groups:

| group | table off | animIds (type 0..5) | → CSAB |
|---|---|---|---|
| jump_climb_hold | `+0x468` (`0x53aa60`) | 147,148,148,147,147,147 | nml_hang_hold_free / nml_hang_hold |
| jump_climb_wait | `+0x480` (`0x53aa78`) | 143,144,144,143,143,143 | nml_hang_wait_free / nml_hang_wait |
| jump_climb_up   | `+0x498` (`0x53aa90`) | 145,146,146,145,145,145 | nml_hang_up_free / nml_hang_up |

The type 0/3/4/5 = `_free`, type 1/2 = non-free split matches N64 `sPlayerAnimGroups` exactly
(z_player.c:910-935). Cross-validated: the wall-vault branch in `func_8083AA10` (`0x4be634`, N64
z_player.c:13457) sets `jump_climb_up_free` with the **immediate** animId `0x91`=145=`nml_hang_up_free`
— same as the table. (Same branch clears CLIMBING_LADDER `bic ...,#0x200000` and does `yaw+=0x8000`.)

### run_jump_water_fall → **run_dive** family (run-jump into deep water)

Direct anim refs (not the group table). In `func_8083AA10` @ `0x1cf9ac` (N64 z_player.c:5809),
the water-dive branch: `WaterBox_GetSurface1` (`bl 0x33eeb8`) then surface-minus-floor `> 50.0f`
(`0x1cfd60`) → `func_808389E8(this, animId, 6.0f, play)` @ `0x1cfd74` with **immediate r1=`0x69`=105
=`nml_run_dive`** and morph `6.0f`, then `Player_SetupAction(Player_Action_80844A44, 0)`. The looper
**`Player_Action_80844A44` @ `0x21e4e8`** (N64 z_player.c:9971) sets stateFlags2|=0x20, and on
`LinkAnimation_Update` loops **immediate r2=`0x68`=104=`nml_run_dive_wait`** (`0x21e518`); then
`Math_StepToF(linearVelocity,0,0.05)` and bgCheckFlags&1 → damage `0x10` knockback — byte-for-byte
the N64 function.

| N64 anim | OoT3D CSAB (animId) |
|---|---|
| jump_climb_hold / _free | nml_hang_hold (148) / nml_hang_hold_free (147) |
| jump_climb_wait / _free | nml_hang_wait (144) / nml_hang_wait_free (143) |
| jump_climb_up / _free   | nml_hang_up (146) / nml_hang_up_free (145) |
| run_jump_water_fall      | nml_run_dive (105) |
| run_jump_water_fall_wait | nml_run_dive_wait (104) |

## 6d. Geometry-level POSE parity — locomotion VERIFIED MATCH (2026-06-25)

Sections 6/6b/6c verified **selection** (which CSAB) and **frame advancement** (free-run vs
curFrame). This section verifies the next level down: the actual **per-bone rendered pose**, i.e.
whether SoH3D's CSAB evaluator (`asset/csab.cpp skinMatrices`) reproduces the geometry OoT3D draws.

Method (geometry-level, no eyeball — see SoH3D `tools/parity_pose_diff.py`):
- ORACLE pose = live `jointTable` at PLAYER+0x254+0x78, per-bone LOCAL 3x3 (`tools/oracle_link_pose.py`).
- SoH3D pose = resolved skin matrices (REPL `skindump`), de-parented to LOCAL rotation per bone.
- Both rigs share the childlink_v2 bind frame, so LOCAL rotations compare directly. The two playheads
  are NOT frame-locked, so per oracle frame we take the best-phase SoH3D frame and report the median
  best-mean per-bone geodesic angle.

Result (Kokiri 0xEE open ground, matched speedXZ; reproducible via SoH3D `tools/parity_pose_sweep.py`):
- **run** (`nml_run_free`, speedXZ 5.5):  median best-mean-angle **1.5°  → MATCH**
- **walk** (`nml_walk_free`, speedXZ 3.2): median best-mean-angle **1.3°  → MATCH**

CAPTURE-DENSITY CAVEAT (learned the hard way): headless renders many DRAWS per logic tick, and skindump
dedups identical consecutive poses, so a short 40-draw burst keeps only ~19 distinct phase samples →
sparse coverage → the best-phase match is loose and the median inflates to 5–13° (a single bad-phase
shin frame dominates). Capturing 120 draws (~42 distinct samples) vs 90 oracle frames collapses both
walk and run to ~1–2° and the result is stable across repeated runs. The earlier transient FAIL was this
artifact, NOT an evaluator divergence. **Conclusion:** SoH3D's CSAB evaluator + speed-driven free-run
advancement render Link's
locomotion poses faithful to OoT3D. Gated states inherit this evaluator; their selection + frame
advancement are decomp-verified (§6/6b/6c), but a live oracle POSE compare for them is blocked by the
equipment-less oracle save (it cannot REACH attack/jump/climb/swim/carry/damage live — see SoH3D
`tools/parity_state_sweep.py` notes).

## 7. Cross-links

- Full action-func table with N64 twins: `docs/player_port.md § Player_UpdateCommon special-cased action funcs`
- Morph live-proof (oracle): `docs/anim_system.md § Link base-animation controller + MORPH`
- Bone map: `docs/link_bone_map.md`
- Divergence index: `docs/divergence_map.md`
- SkelAnime update switch decomp: `build/decomp/0036b4ec.c`
- LinkAnimation_Change decomp: `build/decomp/00360190.c`
- Player_SetupAction decomp: `build/decomp/0036055c.c`
- Player_GetIdleAnim decomp: `build/decomp/0034d628.c`
- Player_Action_Idle decomp: `build/decomp/004ba538.c`
