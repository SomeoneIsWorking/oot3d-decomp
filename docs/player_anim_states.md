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
bone-world-matrix array (`actor+0x25c → +0x20 → +0xd4`), which is a
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

**SoH3D cross-check (2026-07-15, soh3d task "backwalk/sidestep_l/sidestep_r/turn_in_place
parity"):** confirmed the SAME gate exists in the N64-twin `z_player.c` these two Grezzo funcs
port: `func_8083FC68`/`func_8083FD78` (~z_player.c:8073/8092) compute a yaw-vs-facing delta and
only take the backward/side branches when `this->focusActor != NULL` — i.e. these action funcs
(backwalk `func_8083CBF0`→`Player_Action_808423EC`→`gPlayerAnim_link_normal_back_walk`; side-walk
`func_8083CC9C`→`Player_Action_8084193C`; turn-in-place `Player_SetupTurnInPlace`→
`Player_Action_TurnInPlace`→`PLAYER_ANIMGROUP_45_turn`) are unreachable without an active
Z-target lock-on, on BOTH the OoT3D and N64 sides. SoH3D added a headless REPL primitive for
this, `ztarget <0|1>` (`Shipwright/soh/src/zelda3d/zelda3d.c`), driving the real native
`Player_SetAutoLockOnActor` entry point every frame (that function is a one-frame latch by
design — see the REPL handler comment) rather than hand-poking `focusActor`.
sidestep_l/sidestep_r/turn_in_place were reliably driven+verified this session (see
`docs/link_parity_checklist.md` in soh3d). `backwalk` itself (the `func_8083FC68` return-value
`-1` branch specifically, as opposed to the `0`/side-walk branch) was NOT reliably triggered by
any camera-relative backward stick magnitude swept under the `ztarget` primitive — it
consistently resolved to side-walk instead despite a measured ~179.8° yawTarget-vs-facing delta
(a live input-decoder precision issue, not a missing code path).

**backwalk CLOSED — MATCH via the REAL decode (soh3d, 2026-07-15, hack removal pass):**
`Zelda3D_PlayerForceBackwalk` (`Shipwright/soh/src/overlays/actors/ovl_player_actor/z_player.c`) no
longer bypasses `func_8083FC68` — it now DRIVES it. `func_8083FC68` (fully RE'd, z_player.c:8236-8253)
is a dual-threshold curve selector:
```
temp = |(s16)(yawTarget - shape.rot.y)| / 32768.0f
return  1 if speedTarget > temp*temp*50 + 6      // forward-walk branch
return -1 if speedTarget > (1-temp)*10 + 6.8      // backward-walk branch
return  0 otherwise                               // side-walk band
```
A dead-behind stick push (`yawTarget = shape.rot.y + 0x8000`) makes the `s16` subtraction wrap to
exactly `-32768`, so `temp == 1.0` exactly — the forward threshold becomes `speedTarget > 56.0f` and
the backward threshold collapses to `speedTarget > 6.8f`. Any `speedTarget` in `(6.8, 56]` is
unambiguously the backward branch; the port passes `8.0f` (matching the `linearVelocity`
`func_8083CBF0` itself installs) and calls `func_8083FC68(this, 8.0f, yawTarget)` for real, honoring
its actual return value, only calling `func_8083CBF0` if it returns `< 0` — the exact same
`if (func_8083FC68(...) < 0) func_8083CBF0(...)` shape as the live site (z_player.c ~8460-8469).
This closes the last tracked hack in `docs/re-frontier.md` (`player.backwalk-decode`): earlier
live-stick sweeps under Z-target lock got within ~179.8° of dead-behind but never closed the last
bit of round-trip precision to land inside the real decode's threshold band; feeding the exact
wrap-to-32768 `yawTarget` sidesteps that precision problem while still running the genuine decode
function. Reproduces the branch's exact result state: `Player_Action_808423EC` +
`gPlayerAnim_link_anchor_back_walk`. Resolved CSAB **`ac_back_walk`** (`zelda3d_player_animmap.inc`;
a direct anim ref, NOT a `PLAYER_ANIMGROUP` table entry, so there's no anim-group table address — the
anim is selected by `LinkAnimation_Change` inside `func_8083CBF0` at z_player.c ~6694). REPL
`linkstate backwalk`. Re-verified MATCH via `tools/link_sweep.py sweep --only backwalk` (sidestep_l/
sidestep_r/turn_in_place, which share `func_8083FC68`'s sibling `func_8083FD78`, unaffected — also
re-verified MATCH in the same pass).

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

### landing_roll → **nml_landing_roll** family (the forward dodge-roll)

Ground truth for soh3d `link_sweep.py` state `roll` (2026-07-15). The forward dodge-roll
(`Player_SetupRoll` → `Player_Action_Roll`, N64 z_player.c:6292) plays
`GET_PLAYER_ANIM(PLAYER_ANIMGROUP_landing_roll, modelAnimType)` — and the whole player-logic
layer is **byte-faithful to N64 on 3DS** (`divergence_map.md`: player rings 2-4 = 0 divergent,
"the decompile-and-diff the player phase is essentially complete"), so OoT3D runs the same
action and the same anim group. Derived straight from the **anim-group table @ `0x53a5f8`**
(base + stride `0x18`; same table the jump_climb/dive entries below use). The `landing_roll`
group sits at **`0x53a7c0`** (base + `0x1c8`), six u32 animIds for modelAnimType 0..5, read
out of the binary via `tools/ghidra_scripts/ReadWord.py`:

| table VA | animIds (type 0..5) | → CSAB |
|---|---|---|
| `0x53a7c0` | 138,139,139,138,138,138 | nml_landing_roll_free (138) / nml_landing_roll (139) |

Same `_free`/non-free split as jump_climb: type 0/3/4/5 = `nml_landing_roll_free` (138), type
1/2 = `nml_landing_roll` (139). soh3d's on-foot Link (ZELDA3D_LINK, `linkstate roll` →
`Zelda3D_PlayerForceRoll` → the real N64 `Player_SetupRoll`) independently resolves
**`nml_landing_roll_free`** for the free-hands adult type → MATCH against this binary-derived
group (verified `tools/link_sweep.py sweep`, 2026-07-15). Note `ft_landing_roll_long` (360) is a
SEPARATE CSAB (the long fighter-stance landing roll), not this dodge-roll group.

### pickup_carry → **nml_carryB** family (two-handed carry-hold)

Ground truth for soh3d `link_sweep.py` state `pickup_carry` (2026-07-16). The generic-liftable
carry-hold (z_player.c ~5573, the `else` branch of the pickup-completion dispatch that installs
`Player_Action_80846050` for any liftable actor id that isn't `BG_HEAVY_BLOCK`/silver `EN_ISHI`/
strength-gated `EN_BOMBF`|`EN_KUSA`) plays `GET_PLAYER_ANIM(PLAYER_ANIMGROUP_carryB,
modelAnimType)`. Same anim-group table as `landing_roll` (base `0x53a5f8`, stride `0x18`), located
this session by ANIMID (not comment-order counting — the source's `/* PLAYER_ANIMGROUP_x */`
comment position does NOT linearly match the compiled table index; confirmed by first locating
`nml_carryB`(215)/`nml_carryB_free`(214) via `player_animid_names.json`, then finding that exact
value pair in a `ReadWord.py` dump of the table range):

| table VA | animIds (type 0..5) | → CSAB |
|---|---|---|
| `0x53a778` | 214,215,215,214,214,214 | nml_carryB_free (214) / nml_carryB (215) |

Same `_free`/non-free split pattern as jump_climb/landing_roll: type 0/3/4/5 = `nml_carryB_free`,
type 1/2 = `nml_carryB`. soh3d ported `Zelda3D_PlayerForceCarry` (z_player.c, installs
`Player_Action_80846050` + `GET_PLAYER_ANIM(PLAYER_ANIMGROUP_carryB, modelAnimType)` directly,
bypassing only the requirement for a live `interactRangeActor` — no liftable actor reliably spawns
in the headless save) → resolves **`nml_carryB_free`** for the free-hands adult type → MATCH
against this binary-derived group (verified `tools/link_sweep.py sweep`, 2026-07-16).

### throw → **nml_throw** family (throw-release of a carried actor)

Ground truth for soh3d `link_sweep.py` state `throw` (2026-07-16). The real throw-release path
(`Player_ActionHandler_9`, z_player.c ~7472-7490: once `func_8083EAF0` selects THROW over PUT_DOWN
— moving fast enough, or the held actor is `EN_BOM_CHU` — it calls `func_8083EA94`, z_player.c
~7458) installs `Player_Action_80846578` + `GET_PLAYER_ANIM(PLAYER_ANIMGROUP_throw,
modelAnimType)`. Located the same way as carryB: `nml_throw_free`(93)/`nml_throw`(94) from
`player_animid_names.json`, then matched against the `ReadWord.py` table dump:

| table VA | animIds (type 0..5) | → CSAB |
|---|---|---|
| `0x53a970` | 93,94,94,93,93,93 | nml_throw_free (93) / nml_throw (94) |

soh3d ported `Zelda3D_PlayerForceThrow` (z_player.c) as a THIN wrapper that calls the existing
`func_8083EA94(this, play)` directly — no new action-func/anim derivation needed, since that
internal helper already IS the real throw-release install path — and resolves
**`nml_throw_free`** for the free-hands adult type → MATCH against this binary-derived group
(verified `tools/link_sweep.py sweep`, 2026-07-16).

### item_bottle_use → **bt_bug_miss** family (bottle raise/swing, C-button item use)

Ground truth for soh3d `link_sweep.py` state `item_bottle_use` (2026-07-16). Unlike the three
groups above, this is a **direct anim ref, not the `PLAYER_ANIMGROUP` table** — the held-bottle
C-button dispatch (`func_8083C6B8`, z_player.c ~6564-6577) installs `Player_Action_SwingBottle`
+ `sBottleSwingInfo[this->av2.inWater].missAnimation`, where `sBottleSwingInfo` is a small static
table of `{missAnimation, catchAnimation, firstActiveFrame, numActiveFrames}` pairs keyed by
whether Link is over water:

| `av2.inWater` | missAnimation | catchAnimation |
|---|---|---|
| 0 (dry land) | gPlayerAnim_link_bottle_bug_miss → `bt_bug_miss` (444) | gPlayerAnim_link_bottle_bug_in → `bt_bug_in` (445) |
| 1 (over water) | gPlayerAnim_link_bottle_fish_miss → `bt_fish_miss` (437) | gPlayerAnim_link_bottle_fish_in → `bt_fish_in` (438) |

Ground truth is the byte-faithful player-logic layer itself (`divergence_map.md`: player rings
2-4 = 0 divergent), not a group-table lookup — there's no table row to derive since the anim is a
direct `LinkAnimationHeader*` reference in `sBottleSwingInfo`, same class of direct-ref ground
truth as the `run_jump_water_fall`/`run_dive` entry below. soh3d ported
`Zelda3D_PlayerForceItemUse` (z_player.c: forces `av2.inWater=false` for a deterministic dry-land
pick, then installs `Player_Action_SwingBottle` + `sBottleSwingInfo[0].missAnimation` directly,
bypassing only the requirement for a bottle actually equipped in the headless save) → resolves
**`bt_bug_miss`** → MATCH against this direct-ref ground truth (verified `tools/link_sweep.py
sweep`, 2026-07-16). Chose the dry-land (bug) variant over fish because it needs no water-depth
state; both are equally valid "item_bottle_use" representatives per the checklist row's intent
(raising/swinging the bottle on a C-button press), and the checklist doc records which was picked.

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

## 6e. walk-STOP pop — phase-discontinuity at the loco free-run exit (RE'd 2026-06-25, OPEN)

Follow-on from §6b/§6d. The walk/run cycles MATCH at steady state (§6d), but the **walk→stop transition
POPS** in SoH3D while the oracle is smooth. Measured (SoH3D `posescan`, true 1-logic-frame `freeze`+`step`):
- SoH3D walk-stop: max per-frame shoulder/shin jump **~55°** (bone 18 shldr-X / bone 7 shin-X).
- Oracle walk-stop (`oracle_link_pose.py --release-after`): max per-frame any-bone jump **~18°** (smooth).

Frame-by-frame N64-side trace (`linkanimstate` under freeze+step) of the SoH3D stop:
```
step2  nml_walk_endR_free f=0.0/11.0  morphW=1.00   <- transition begins
step3  nml_walk_endR_free f=0.0/11.0  morphW=0.41
step4  nml_walk_endR_free f=0.0/11.0  morphW=0.00   <- morph already done (~3 frames)
step5  nml_walk_endR_free f=1.5/11.0  morphW=0.00   <- only NOW does the end anim advance
```

ROOT CAUSE: the §6b slide fix free-runs the walk cycle by ground speed, **decoupled from the N64 walk
phase**. So at stop time the free-run playhead is at an arbitrary phase (e.g. walk_free@11.7/20), but the
morph cross-fades it to `nml_walk_endR_free` **@ frame 0.0** — and the end anim's frame 0 is authored to
continue a SPECIFIC walk phase (the foot-forward pose OoT3D's phase-driven cycle is at when it selects
endR). In OoT3D walk is phase-driven so end@0 ≈ walk@(stop phase) → continuous. In SoH3D the free-run
phase ≠ the phase end@0 expects, leaving a ~90° gap, and the N64 morph here is only ~3 frames (morphW
1.0→0.41→0.0) — too short to hide it → the 55° pop.

### GROUND TRUTH — `FUN_002be4c4` = the walk-STOP → walk_end transition (DECOMPILED 2026-06-25)

The walk/run action `FUN_004ba378` (§3) calls the setup-idle pair `FUN_002c2658` + **`FUN_002be4c4`**
when `velocity==0 || (player+0x29b8 & 4)`. `FUN_002be4c4` is the one that selects the walk_end anim
and issues its `LinkAnimation_Change` (`FUN_00360190`). Decompiled from `build/decomp/002be4c4.c` +
the literal pool at `0x2be620` (disasm). **The morph length is PHASE-DEPENDENT, not a fixed -6.**

```c
// FUN_002be4c4(player, play) — port of N64 the walk→walk_end setup
//   player+0x2254 = the leg-cycle PHASE accumulator (the "unk_868" analogue), range [0, 29).
//     Advanced each frame by speed*dt_scale*0.5 (clamped ±7.25) and wrapped in [0,29) by FUN_002dd8b0.
phase = player[0x2254] - 3.0f;            // DAT_002be620 = 3.0
if (phase < 0.0f) phase += 29.0f;         // DAT_002be628 = 29.0 (wrap span)
group = 0x53a5f8 + player[0x1b3]*4;       // the §6c anim-group table, indexed by modelAnimType
if ((int)phase < 14) {                    // DAT_002be62c = 14.0  -> endR half-cycle
    animId = <gate> ? group[0x228] : group[0x1f8];   // nml_walk_endR (alt) / nml_walk_endR_free
    rem = 11.0f - phase;                  // DAT_002be63c = 11.0
    if (rem < 0.0f) rem *= -1.375f;       // DAT_002be640
    fv8 = 1.0f/11.0f;                     // DAT_002be644 = 0.0909091
} else {                                  // endL half-cycle
    animId = <gate> ? group[0x240] : group[0x210];   // nml_walk_endL (alt) / nml_walk_endL_free
    rem = 26.0f - phase;                  // DAT_002be648 = 26.0
    if (rem < 0.0f) rem *= -2.0f;         // DAT_002be64c
    fv8 = 1.0f/12.0f;                     // DAT_002be650 = 0.0833333
}
endFrame    = GetAnimFrameCount(skelAnime, animId);   // FUN_003603c0 -> 11 (walk_end len)
morphFrames = rem * fv8 * 4.0f;           // DAT_002be658 = 4.0   ==> range 0..4 frames
LinkAnimation_Change(playSpeed=1.0f /*DAT_002be654*/, startFrame=0.0f /*DAT_002be624*/,
                     endFrame, morphFrames, skelAnime, play, animId, animMode=2 /*ONCE*/);
```

**ARG-ORDER CORRECTION (§2 above was WRONG):** reading FUN_00360190's body, `+0x40`(playSpeed) ← param_1
(line "param_5+0x40 = param_1"), `+0x44`/`+0x3c`(startFrame/curFrame) ← param_2, `+0x48`(endFrame) ←
param_3, morphFrames = param_4. So the real order is **`(playSpeed, startFrame, endFrame, morphFrames,
skelAnime, play, animId, mode)`** — param_1 is playSpeed, NOT startFrame. The FUN_002be4c4 call passes
`(1.0, 0.0, endFrame, morphFrames, …)`, i.e. **playSpeed=1.0, startFrame=0.0**.

**The two non-obvious facts this nails down (confirmed by the literal pool + FUN_00360190 body):**
1. **walk_end plays from frame 0 and ADVANCES** (`startFrame=0.0`, `playSpeed=1.0`). It is NOT static.
   Per the N64-side trace + OoT3D update case-3, curFrame is pinned during the morph and then plays
   forward once the morph completes (the §6e trace's 0,0,0,1.5). The morph blends the frozen leg pose →
   walk_end@0 (whose frame 0 is authored to continue a specific walk phase), then walk_end plays out.
2. **morphFrames is PHASE-PROPORTIONAL** (`rem*fv8*4`, 0..4 frames), NOT a fixed -6. It is 0 (instant)
   at the "sweet-spot" phase where walk@(phase) already equals walk_end@0 (endR: phase 11; endL:
   phase 26) and grows toward 4 as the stop phase moves away from it. The cross-fade length scales with
   the size of the walk→walk_end pose gap, keeping per-frame angular velocity bounded. SoH3D's constant
   ~3-frame N64 morph did not scale → 55° pop when the (decoupled) free-run phase landed far from the
   sweet spot.

**Confirmed CSAB durations** (`docs/csab_catalog.md`): `nml_walk_free` = **29** (== the phase range, so
SoH3D's free-run playhead is OoT3D's `player+0x2254` 1:1), `nml_walk_endR/L_free` = **11**.

### SoH3D FIX (IMPLEMENTED 2026-06-25) — port `FUN_002be4c4` into the walk-stop path

In `soh3d_anim.cpp SoH3D_UpdateAnimAuto`: detect the `nml_walk_free → nml_walk_end{R,L}` transition,
take the frozen free-run walk phase φ (= the outgoing walk_free playhead, `fmod(φ,29)`), and:
- pick endR/endL by `phase' < 14` (overriding the N64 R/L pick, since SoH3D's free-run phase is
  decoupled from N64's leg cycle — this guarantees the *near* end pose is chosen for our actual pose);
- compute `morphFrames = rem*fv8*4` from φ exactly as above;
- play walk_end from frame 0 (startFrame=0, playSpeed=1.0): pinned at 0 during the morph, advancing
  after — and run a SYNTHETIC morph (weight 1→0 at `1/morphFrames` per **logic** frame via
  `play->gameplayFrames`, not per draw) cross-fading the frozen walk pose → walk_end — replacing the
  N64 morphWeight (its constant ~3-frame collapse) with the phase-proportional length.
VERIFY: `posescan` over natural walk-stops; sample per-LOGIC-frame by `step 1; sleep ~0.12` (freeze
alone advances logic but draws are async — without a brief sleep only ~4 draws land per 24 steps, so
the deltas span multiple logic frames and the metric lies). Compare against SoH3D's own steady-walk
per-logic-frame baseline (~18°), which equals the oracle's steady-walk max.

#### STATUS (2026-06-25): ported + measurable improvement, NOT yet at parity — residual phase-offset
- Oracle ground truth (`tools/oracle_link_pose.py --hold-circle 0,55 --release-after 2.0`, jointTable,
  per-distinct-frame): walk-stop is SMOOTH, **max per-frame bone jump ≤18.3°** (all on leg bones =
  the steady walk cycle; the stop adds NO spike; median 4.7°).
- SoH3D after this port: the walk_end pop dropped from the documented ~55° to **~43°** (one logic frame,
  thigh bone3) and the walk_end→idle tail is now smooth (≤6°). So the port helps but is NOT at parity.
- ROOT CAUSE of the residual: SoH3D renders the walk cycle from the **`nml_walk_free` CSAB sampled by a
  free-run frame φ**, but OoT3D's leg cycle is `LinkAnimation_BlendToJoint(walk_L,walk_R,phase)` driven
  by `player+0x2254`. `walk_end@0` is authored to continue the **leg-phase**, and the sweet spots in
  FUN_002be4c4 (endR→leg-phase 14, endL→leg-phase 0/29) are in leg-phase units. §6d only matched
  `nml_walk_free@frame` to the oracle pose via a BEST-PHASE search — i.e. there is a constant offset
  **K** between the CSAB frame φ and the leg-phase. The morph length + endR/endL sweet-spot are computed
  from φ as if K=0, so near a sweet spot (short morph) the gap does NOT vanish → the residual pop.
#### RESOLVED (2026-06-25 session 10): at oracle parity — measured-gap morph, NOT the leg-phase formula
The "derive K" plan was abandoned once the offline pose-match (`tools/walk_stop_sweet.py`, child rig)
showed the real divergence is deeper than a phase offset:
- **The single-CSAB walk is NOT the oracle's blend, so there is NO sweet spot.** `nml_walk_free@φ` never
  matches `walk_end@0` closely — the max per-bone gap stays **36–82°** at EVERY φ (it would be ~0 at the
  oracle's blend sweet spot). So the decomp's `morphFrames = rem·fv8·4 → 0` is wrong for SoH3D: a 0-frame
  morph snaps the whole 36–82° gap in one frame. The phase-swept pop was actually up to **119°** (not the
  43° first measured — it is φ-DEPENDENT; `tools/walk_stop_phase_sweep.py` finds the worst φ), on the
  SHOULDER (bone 18), not the legs.
- **The endR/endL choice is decided by the SPINE-TWIST bone (bone 9), and SoH3D can only ever pick endL.**
  `endR@0` and `endL@0` differ **90°** on bone 9 (the torso counter-twist between right- vs left-foot
  strides). The oracle's walk_L/walk_R blend twists the spine to match whichever it selects; SoH3D's
  single `nml_walk_free` barely twists bone 9, so its spine matches `endL@0` at every φ and is ~90° off
  `endR@0`. Choosing endR (as the old leg-phase pick did at some φ) swings the spine 90°, and that
  propagates down to every arm bone → the 119° shoulder snap.
- **FIX (ported, at parity):** drive the cross-fade off the MEASURED gap, not the leg-phase formula. Bake,
  per integer φ, the max per-bone gap `walk_free@φ → end{R,L}@0` (`tools/gen_walk_stop_sweet.py` →
  `soh3d_walk_stop_sweet.inc`, all 21 body bones incl. the decisive bone 9). At stop: interpolate the gap
  for both ends, pick the smaller (= the spine-matched end — always endL for single-CSAB walk), set
  `morphFrames = gap / 14` (14 = oracle ceiling 18.3° ÷ the measured ~1.3× local-gap→world-rotation
  parent-chain amplification), and synthetic-morph weight 1→0 at `1/morphFrames` per logic frame from the
  frozen walk pose into end@0 (end pinned at 0 during the morph, then plays out — unchanged from §6e).
- **VERIFIED** (`tools/walk_stop_phase_sweep.py`, 15 stop phases, per-logic-frame posescan): worst
  per-frame bone jump **119° → 18.5°** (end-region 17.0°), i.e. **at the oracle's measured 18.3° ceiling
  at every stop phase.** Live natural-walk-stop in Kokiri renders a correctly-posed standing Link (no
  regression). soh3d commit follows.
- Leftover divergence (acceptable, documented): SoH3D always plays the LEFT-foot end (endL) because its
  single-CSAB walk cannot reproduce endR's spine; a stop on a right-foot stride plants the "other" foot
  vs the oracle. Closing this would require porting the walk_L/walk_R BLEND (or a spine-twist on the walk
  cycle) so endR's spine is reachable — out of scope for the pop fix; file separately if visible in play.

## 6f. CARRY-WALK — single unified clip, NOT an upper/lower blend (RE'd live 2026-06-25, session 11)

Empirically determined by capturing OoT3D Link lifting a rock (En_Ishi) and carry-walking in the oracle
(soh3d `tools/oracle_carry_drive.py` drives the lift via heldActor @PLAYER+0x12b0 + A-tap, then holds
forward) and matching each captured frame's bone-LOCAL rotations against the child carry CSABs
(`tools/oracle_carry_id.py`, lower=legs 3-8, upper=arms 9-21 matched separately):

```
cap | LOWER best (legs 3-8)      | UPPER best (arms 9-21)
  5 | carryB_free@12.0 (0.8°)    | carryB_free@12.0 (1.1°)   <- BOTH halves, SAME clip, SAME frame
 ...| carryB_free@<f>  (~0.9°)   | carryB_free@<f>  (~1.1°)
```

**GROUND TRUTH:** OoT3D carry-WALK plays a SINGLE whole-body clip `nml_carryB_free` (17f loop) — legs
AND arms both track it at the same phase. It does **NOT** layer a carry upper-body anim onto a walk
lower-body via the N64 `sUpperBodyLimbCopyMap` (that copy-map is for cases where the upper plays a
*separate* action over locomotion; carrying simply has its own authored clip). carry-IDLE (standing)
plays `nml_carryB_wait` whole-rig (SetCopyAll). The N64 `PLAYER_ANIMGROUP_carryB[0] = carryB_free`
(z_player.c:678) confirms carryB_free is THE carry-locomotion clip.

SoH3D FIX (soh3d_link.cpp): carry-WALK now overrides the resolved CSAB to `nml_carryB_free` and free-runs
it whole-rig by ground speed (same speed-driven loco free-run as walk/run) — replacing the former
TWO-SOURCE blend (lower nml_walk_free + upper carryB_wait masked b9..21). Geometry re-verified vs the
oracle: SoH3D's frozen carry-walk pose matches nml_carryB_free at frame 12.25 with mean **0.13°** (legs)
/ **0.14°** (arms), both halves locked to the same frame == the oracle.

While porting this, fixed a separate **CSAB loop-seam bug** (asset/csab.cpp `sampleTrack`): the HERMITE
wrap segment (query frame past the last keyframe → interpolate last_kf→first_kf across the loop) computed
`length = fmodf(k1->time - k0->time, timeEnd)` which is NEGATIVE there (fmodf(0-16,17) = -16), making the
cubic EXTRAPOLATE garbage at the seam. carryB_free's short 17f loop exposed it (bone 20 / R_HAND read
~160° off-pose at the seam, though the clip's own bone-20 range is only 56°). Fixed to interpolate the
forward wrap distance `(k1->time - k0->time) + timeEnd`. Walk-STOP pop re-measured 18.5°→**17.0°** after
(the walk_end seam also benefits), confirming no regression and a small improvement.

Remaining (minor, separate): the carry-IDLE→carry-WALK clip change (carryB_wait→carryB_free) hard-cuts
with no morph (~1-frame arm twitch at walk start), the same class as other loco-entry transitions; would
need the synthetic-morph infra (§6e) generalized to loco-entry. Not visible as a steady-state pop.

## 6g. PICKUP / lift (rock) — the lift clip IS played by the engine; SoH3D was clobbering it (FIXED 2026-06-25, session 12)

GROUND TRUTH (live trace of the SoH-embedded N64 player logic + the OoT3D rig). Picking up a normal
rock (En_Ishi, `params & 0xF != 1`) runs `Player_SetupAction(Player_Action_80846050)` and
`LinkAnimation_PlayOnce(&this->skelAnime, GET_PLAYER_ANIM(PLAYER_ANIMGROUP_carryB, modelAnimType))`
(z_player.c:5573-5578). For normal child Link `modelAnimType` selects `PLAYER_ANIMGROUP_carryB[0]` =
**`carryB_free`** (NOT `carryB` — the earlier docs said `carryB`; the live engine resolves the `_free`
variant for the no-item form). So the WHOLE-BODY `skelAnime` plays the lift clip `nml_carryB_free`
once (frames 0→16, ~0.5s), then `Player_Action_80846050` settles into the carry-hold: `skelAnime` →
`wait_free` and `upperSkelAnime` → `carryB_wait` (with a morph), copied whole-rig (SetCopyAll).

THE #117 PICKUP BUG: SoH3D's `soh3d_link.cpp` carry-IDLE override unconditionally replaced the resolved
lower CSAB with `ResolvePlayerCsab(upperSkelAnime.animation)` whenever `heldActor != NULL`. `heldActor`
is set EARLY (mid-lift), while `upperSkelAnime` is still `wait_free` (the upper-copy is not engaged until
the hold). So the instant the rock was grabbed, the good lower lift clip (`nml_carryB_free`) was clobbered
to `nml_wait_free` → Link snapped straight to the standing pose instead of raising. (Live trace
`linktrace`: at lift frame cf=4.5 `held` flips 1 and `csab` jumps `nml_carryB_free`→`nml_wait_free`.)

FIX (faithful, no synthetic morph, no magic constant): gate the upper-copy override on the upper body
GENUINELY being a carry anim — `strstr(upperSkelAnime.animation, "carry")`. This is exactly N64's SetCopy
condition (it copies the upper *carry* pose, meaningful only when the upper IS carry). During the lift the
upper is `wait_free` → override skipped → the lower `nml_carryB_free` lift plays through; in the hold the
upper is `carryB_wait` → override fires → whole-rig hold. The lift clip is already played by the engine;
the bug was purely SELECTION, so the brief's planned "port nml_carryB as a synthetic one-shot with -6f
morph" was unnecessary.

GEOMETRIC VALIDATION (no screenshots — `tools/pickup_pose_validate.py`, diffs each live `skindump` pose
vs the offline csab.py sampler at the same tagged frame, per-bone geodesic angle, bones 1-21):
- lift `nml_carryB_free` @0→16 (12 frames): **mean 0.003°, max 0.004°** — rendered lift == clip
- hold `nml_carryB_wait`: **0.00°** after a clean 4-frame entry morph (b21/R_HAND cross-fades 98°→0)
- carry-walk regression check: steady `nml_carryB_free` **0.00°**, only the carry-idle→walk seam frame
  elevated (the known §6f hard-cut) — no regression.

## 6b. 6-state Link parity expansion (2026-07-15, soh3d `docs/link_parity_checklist.md`)

Each of these ports the SAME contract as `landing_roll` above: install the real N64-twin action
func + canonical anim, bypass only the entry gate headless SoH3D control can't hit, and compare
the SELECTED CSAB family against the ground truth below. All were driven+verified live in SoH3D
(`Shipwright/soh/src/overlays/actors/ovl_player_actor/z_player.c`, `Zelda3D_PlayerForce*` /
`Zelda3D_PlayerIsZTargetIdleStance`) — see soh3d's `tools/link_sweep.py` STATE_MATRIX for the
exact drive recipe each one used.

### attack_combo → combo-swing 2 — `D_80854190[PLAYER_MWA_FORWARD_COMBO_1H]` (Player_Action_808502D0)

Live combo-chain advancement (`Player_ActionHandler_7` → `func_80837818` → `func_80837948`,
entered from `Player_Action_808502D0`'s animation-finished branch on a well-timed repeat A press)
picks `this->meleeWeaponAnimation` from `D_80854190`; row 2 (`PLAYER_MWA_FORWARD_COMBO_1H`) is the
literal combo-swing-2 CSAB, `gPlayerAnim_link_fighter_normal_kiru_finsh` → CSAB `ft_nml_kiru_fin`
(soh3d `zelda3d_player_animmap.inc`), distinct from swing-1's `ft_nml_kiru`. SoH3D installs this
row directly (skipping the two-tap input timing, which is a driving concern, not a selection one)
via `Zelda3D_PlayerForceAttackCombo2`. **Verified MATCH** (soh3d sweep 2026-07-15).

### swim_dive → underwater dive-swim — `Player_Action_8084DC48` settled loop (`func_8083D330`)

`func_8083D12C`'s A-press branch from swim-wait (z_player.c ~6797) installs
`Player_Action_8084DC48` + the one-shot `gPlayerAnim_link_swimer_swim_deep_start` entry anim; once
`av1.actionVar1` reaches its settled value the function calls `func_8083D330` (~6861), which loops
`gPlayerAnim_link_swimer_swim` → CSAB `sw_swim` — the representative "swimming underwater" pose,
distinct from the SURFACE tread `gPlayerAnim_link_swimer_swim_wait` → CSAB `sw_swim_wait` that the
existing `swim_surface`/`Zelda3D_PlayerForceSwim` state already covers. SoH3D's
`Zelda3D_PlayerForceSwimDive` installs the settled state directly (the deep_start entry anim is a
one-shot flourish, not a selectable steady-state CSAB). **Verified MATCH** (soh3d sweep 2026-07-15).

### getitem_pose → raised-arm get-item — `func_8083A434` (`Player_SetupWaitForPutAway`) + `gPlayerAnim_link_demo_get_itemB`

The non-cutscene item-pickup path (z_player.c ~7354/7391, the caller of `func_8083E4C4`) does
`Player_SetupWaitForPutAway(play, this, func_8083A434)` +
`Player_AnimPlayOnceAdjusted(play, this, &gPlayerAnim_link_demo_get_itemB)` under
`GETTING_ITEM|CARRYING_ACTOR|IN_CUTSCENE` — CSAB `dm_get_itemB`. This is a SEPARATE entry from the
Get-item / `FUN_004bc22c` (`Player_Action_8084E6D4`) action func documented in §"Get-item (#)"
above (that's the settled hold action; this is the raised-arm reveal pose it holds after playing
`dm_get_itemB`/`dm_get_itemA`). SoH3D's `Zelda3D_PlayerForceGetItem` installs the reveal pose
directly (no live chest/EnItem00 interaction actor needed). **Verified MATCH** (soh3d sweep
2026-07-15).

### death → `func_80836448` (grounded branch) — `gPlayerAnim_link_derth_rebirth`

`func_8083D53C`'s existing PER-FRAME check (z_player.c ~12248, runs every `Player_Update` via the
normal update path — no new dispatch needed) triggers `func_80836448` as soon as
`gSaveContext.health == 0` while grounded/in-water and not mid-ledge-climb; the grounded/
non-shocked branch plays `gPlayerAnim_link_derth_rebirth` → CSAB `derth_rebirth` (already mapped in
`zelda3d_player_animmap.inc`, §"General CSAB name table"). SoH3D's `Zelda3D_PlayerForceDeath`
supplies ONLY the precondition (`gSaveContext.health = 0`) and lets the real per-frame code drive
the transition over the following few frames — deliberately NOT a duplicate hook, since the engine
already runs this check unconditionally (writing a second dispatch would have been the exact
"bandaid duplicates the shared path" anti-pattern). `Zelda3D_PlayerForceIdle` (the existing safe
reset out of any forced state) was extended to restore `gSaveContext.health` and clear
`PLAYER_STATE1_DEAD`/`gameOverCtx.state`, since HP=0 is global save data that otherwise persists
across warps/states. **Verified MATCH** (soh3d sweep 2026-07-15).

### ztarget (as its OWN state, not the locomotion-gate) → `Player_Action_80840450` = OoT3D `FUN_00488b40`

Ground truth is the ALREADY-documented §"Standing-aim / Z-hold (#88-aim)" entry above:
`Player_Action_80840450` is entered automatically (`func_80839E88`/`func_80839F90`) once a
HOSTILE-category `focusActor` is locked (`Player_CheckHostileLockOn`) and the stick returns to
neutral — no forcing needed, just a live query. SoH3D added a read-only query hook
`Zelda3D_PlayerIsZTargetIdleStance` (compares the live `actionFunc` pointer, which is file-local to
`z_player.c` and not otherwise visible from `zelda3d.c`) + REPL `ztargetstate`. Kokiri Forest's own
spawn has NO `ACTORCAT_ENEMY` actors loaded within 3000u (confirmed live via `actorsnear 3000`,
2026-07-15 — matches vanilla OoT, no monsters at that spawn); the Deku Tree entrance
(`ENTR_DEKU_TREE_ENTRANCE`, warp id `0x0`) has live `En_Dekubaba` (id `0x55`) within a few hundred
units and was used instead. This is a decomp-ground-truth check (no live-oracle A/B — the
embedded harness's `az_linkanim` only reads the SoH-side animId convention; adding an OoT3D-side
Z-lock camera-mode readback command was judged out of this session's time budget vs. the
already-solid decomp citation above, which the task brief explicitly allows as a fallback).
**Verified MATCH** (soh3d sweep 2026-07-15): `idleStance=1 focusActor=0x55` after
`asel 0x55 0; ztarget 1; walkhold 60 0 0`.

### climb_updown → traversal — CLOSED (MATCH) via `Zelda3D_PlayerForceClimbMove` (2026-07-15)

RE finding (real progress, not a re-statement of "no recipe"): `func_8083EC18` — the function
soh3d's existing `forceclimb` REPL primitive (added in a PRIOR session for the #79/#74 climb
repro) already drives — unconditionally installs `Player_SetupWaitForPutAway(func_8083A3B0)` and
sets `PLAYER_STATE1_CLIMBING_LADDER` regardless of which internal branch (real ladder-flagged poly
vs. the forced-wall bit `forceclimb` ORs in) it took. `func_8083A3B0` (z_player.c ~5605) installs
`Player_Action_8084BF1C` — the REAL ladder-TRAVERSAL action func (as opposed to the static
wall-HANG `Player_Action_8084BF1C`'s sibling reached via `jump_climb`) — once the grab-start anim
finishes. So **no new C++ hook is needed at all**: `forceclimb` (on any sufficiently tall wall,
`yDistToLedge >= 79`) + holding the stick up/down already reaches the traversal action func, which
would read `nml_climb_up`/`nml_Fclimb_up` (or the `Fclimb` age-variant) from
`zelda3d_player_animmap.inc` — distinct from the static `nml_climb_startA/B` grab pose and from
`Zelda3D_PlayerForceHang`'s `nml_hang_*` wall-HANG family (a different action func entirely, the
`jump_climb` short-climb, not the ladder-traversal one). The only remaining *live* route
(`forceclimb` on a genuine `yDistToLedge >= 79` wall) was geometrically blocked: an 8-heading ×
graduated-distance walk sweep from the Deku Tree and Kokiri Forest spawns (`0x0`, `0xee`) found no
wall tall enough near open-ground spawn (one wall found, `yDistToLedge<79` — a fence/step).

**climb_updown CLOSED — MATCH (soh3d sweep 2026-07-15):** closed via a direct Force* hook instead
of continuing the wall-geometry hunt, exactly parallel to how the other 10 previously-unreachable
states were closed (forced-CSAB-vs-decomp verdict, not necessarily live-input-driven). Added
`Zelda3D_PlayerForceClimbMove(this, play, dir)`
(`Shipwright/soh/src/overlays/actors/ovl_player_actor/z_player.c`) which calls `func_8083A3B0`
DIRECTLY — the identical install `func_8083EC18` makes — after setting `av1.actionVar1 = 2` (the
forced-wall branch `forceclimb` itself ORs in) and `av2.actionVar2 = 0`, then plays
`this->ageProperties->unk_AC[actionVar1 + actionVar2]` = `unk_AC[2]` =
`gPlayerAnim_link_normal_Fclimb_upL` — the SAME traversal anim family a real tall wall resolves to
(the moving-family selection `Player_Action_8084BF1C` performs at z_player.c ~13641/13657). Key RE:
`sAgeProperties[].unk_AC` (the anim-group array read live by the traversal action func; init table
at z_player.c ~469/521) is **NOT age-split for indices 2/3** — both the adult and child rows point
at `gPlayerAnim_link_normal_Fclimb_upL/upR`, so no age branch is needed. `dir < 0` (down) only
flips `skelAnime.playSpeed` negative — the same clip played in reverse, which is the live
function's own down-encoding (z_player.c ~13591-13597; both the `sp84>0` and `sp84<0` branches
terminate at `unk_AC[sp68]`, no separate down-only CSAB exists). Resolved CSAB **`nml_Fclimb_upL`**
(contains `climb_up`). REPL `linkstate climbup` / `linkstate climbdown`.

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
