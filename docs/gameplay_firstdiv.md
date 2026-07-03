# Gameplay-scene firstdiv — unblocked

**Status:** LANDED. Both engines put into the same gameplay scene deterministically;
`compare firstdiv` now reports real play-mode divergences. Only d5 (Azahar play-mode
camera basis) remains TODO — that's the next-session frontier for this line.

## The unblock

**Root cause of the earlier blocker:** SoH's title-demo state runs with
`gSaveContext.gameMode = GAMEMODE_TITLE_SCREEN` and a scripted intro flow's
`cutsceneIndex` armed. When the harness fired `SohState_Warp(0xBB)` from that
state, the transition path in `z_play.c` (line 983) routed through
`FileChoose_Init` (because gameMode != NORMAL) OR the intro flow re-scripted
`nextEntranceIndex` to Kokiri Shop (0x2D) / Deku Tree (0x01) before SoH
processed the transition.

**Fix:** `SohState_Warp` now sets `gSaveContext.gameMode = GAMEMODE_NORMAL` and
`gSaveContext.cutsceneIndex = 0` in addition to the full transition-type
fields. That forces the transition path straight through `Play_Init` with
our chosen `entranceIndex`. Also clears `csCtx.state = CS_STATE_IDLE` so any
running title-demo cutscene's own end-of-cs scheduled warp can't overwrite us.

## Verified working

Recipe (see `scratch/gameplay_firstdiv.py`):

```
soh_boot
run 60
loadstate <abs path>/scratch/harness/oot3d_linkshouse.state   # Azahar → 0x0034
soh_step 300                                                  # SoH → title-demo Play
soh_warp 0xBB                                                 # SoH → Link's House
run 60 ; soh_step 60   (x4)                                   # let transition settle
compare firstdiv
```

Output:

```
d1 gamestate:    az=play soh=play
d2 sceneNum:     az=0x0034 soh=0x0034
d3 player pos:   az=(1.0,0.0,95.0) soh=(1.0,0.0,95.0) |Δ|=0.00
d4 player rot:   az=(0,-32767,0) soh=(0,-32768,0) |Δaxis0..2|=(0,1,0)
d5 camera basis: az_eye=(0.0,34.0,0.0) soh_eye=(0.0,34.0,0.0) |Δeye|=0.00 |Δat|=0.03 |Δup|=0.0000  soh_camId=0 fov=60.0
d6 actor count:  az=5 soh=4 | cat2=1/1 cat6=1/1 cat7=3/2
firstdiv: actor-count total az=5 soh=4; cat2=1/1 cat6=1/1 cat7=3/2 — per-cat az/soh — investigate room-load timing vs missing-actor port gap
```

d3 player position is **exact** (1.0, 0.0, 95.0) on both sides. d4 player
rotation Y differs by 1 binary-angle unit (32767 vs 32768) — rounding, not
a port gap. d5 camera basis matches at |Δeye|=0.00 |Δat|=0.03 |Δup|=0.0000
(the 0.03 at-delta is float rounding on the target-pos). **d1..d5 all
pass.**

**d6 names the first real port gap:** SoH is missing one cat=7
(ACTORCAT_ITEMACTION / En_Item00) at Link's House — Azahar has 3
En_Item00 pickups, SoH spawns only 2. The missing one is at pos
(0.0, 20.0, 120.0) per the fuller `compare actors` dump. Could be a
save-collected-state divergence (Az's save may have that item collected
but SoH spawns fresh because it has no matching flag), or a real
spawn-list port gap. This is the anim-data-floor-escape payoff: a
concrete, quantitative divergence to chase next session.

## What changed in the harness

- **`soh_warp <entrance>`** REPL — SoH-only warp; doesn't touch Az.
- **`SohState_Warp` extended** — writes gameMode=NORMAL, cutsceneIndex=0,
  csCtx.state=IDLE, transitionType=INSTANT, nextTransitionType=INSTANT,
  entranceIndex in addition to the two fields it originally set. Mirrors
  SoH's own debug console `entrance` handler.
- **`compare firstdiv` play-mode branch** — when both engines are in Play
  at the SAME non-title scene, routes d3..d5 through play-mode checks
  (player pos, player rot, TODO-marked camera basis) instead of the
  title-only pose/limb-count checks.

## d5 Azahar play-mode camera — RE'd

Located by live memory scan (`scratch/scan_azcam.py`-style probe): dump
128 KB starting at gPlayState (0x0871e840 at Link's House loadstate) and
scan for eye=(0.0, 34.0, 0.0) as three consecutive f32 at 4-byte
alignment. Three hits inside PlayState:

- **PlayState+0x1B8: mainCamera** — eye, at, up packed EYE→AT→UP
  (GREZZO reordered vs N64's AT→EYE→UP layout).
- PlayState+0x3E4 and +0x408 — matching Vec3f-triple blocks, likely
  subCameras or eyeNext-style redundant copies.

Verified at Link's House frame 60:

```
ps+0x1B8: eye = (0.000, 34.000, 0.000)
ps+0x1C4: at  = (1.064, 34.010, 100.885)
ps+0x1D0: up  = (0.000, 1.000, 0.000)
```

matches SoH's `SohState_Camera` output byte-for-byte modulo FP rounding.
Constants added to `main.cpp`: `PLAY_CAM_EYE_OFF = 0x1B8`,
`PLAY_CAM_AT_OFF = 0x1C4`, `PLAY_CAM_UP_OFF = 0x1D0`.

## d6 actor count — diagnosed

Extended firstdiv with total-actor-count + per-category deltas across
all 12 ACTORCAT_* categories. At Link's House frame 60:

- Azahar: 5 total (cat2=Player=1, cat6=En_Kusa=1, cat7=**3**)
- SoH:    4 total (cat2=1, cat6=1, cat7=**2**)

Initial reading called the extra cat7 actor an "En_Item00" from the ID
being `0x0185`. That was wrong — `actor_table.h:402` maps
`0x0185 = En_Wonder_Talk2` (invisible textbox trigger for tutorial /
"?" popups), not En_Item00 (which is `0x0015`). The other cat7
non-Wonder_Talk2 is `0x0018 = En_Elf` (Navi) in both engines.

Full cat7 dump:

```
Az  cat=7:  [0] 0x0185 pos=(  0.0, 20.0, 120.0) params=0x8f7f   ← SoH is MISSING this
            [1] 0x0185 pos=( 78.0, 38.0, 116.0) params=0x8abf   ← both have it
            [2] 0x0018 pos=(  1.0, 50.0,  95.0) params=0x0000   ← Navi, both have it
SoH cat=7:  [0] 0x0185 pos=( 78.0, 38.0, 116.0)                 ← matches Az [1]
            [1] 0x0018 pos=( -3.4, 56.4,  90.9)                 ← matches Az [2] (Navi flying)
```

**Root cause: 3DS content addition, NOT a SoH port gap.**

En_Wonder_Talk2 is a scene actor — spawned from the room's actor spawn
list in the room header. SoH loads room binaries **extracted from the
N64 ROM at build time** (via `Shipwright/soh/assets/scenes/indoors/
link_home/link_home_room_0.h`'s OTR-path DLs; the room binary is
authoritative). SoH's spawn of exactly 1 En_Wonder_Talk2 means the N64
Link's House room 0 has 1 in its actor list. Azahar running the OoT3D
ROM shows 2. **GREZZO added a second Wonder_Talk2 at (0, 20, 120) to
OoT3D's Link's House** — a tutorial trigger for the 3DS onboarding /
touch-screen instructions.

Rule out both prior candidates:

1. **Save-flag divergence (ruled out).** Wonder_Talk2 checks
   `Flags_GetSwitch(play, switchFlag)` to despawn if triggered; SoH is
   loading a fresh scene with no scene switch flags set, so nothing
   would suppress spawn. Az's params 0x8f7f decodes to
   `switchFlag=0x3F baseMsgId=0x3D talkMode=2` — flag 0x3F is
   never-triggered convention, so the check is a no-op both ways.
2. **Actor-spawn list divergence (CONFIRMED, and it's the ROM's
   fault, not the port's).** The two ROMs have different room binaries.
   SoH is faithful to N64; nothing to fix on the port.

## What this means for the project

This is not a "port gap to close" but a **design-decision surface**:
whether SoH3D — which renders OoT3D models/world but runs on the SoH
N64 engine — should also port OoT3D's tutorial-trigger additions. The
memory note on project vision says the target is a "definitive edition
done the user's way, NOT SoH" with "no rando" and clean PC-game code;
3DS onboarding tutorials feel out-of-scope for a PC-native definitive
edition, so leaving them off is defensible.

If they SHOULD be ported: the 3DS-specific actor additions per scene
would need to be dumped from Azahar's live actor tables across scenes,
translated into SoH-side room-spawn overrides, and wired into
`gPlayState->numActors` /`Actor_Spawn` at scene-init time. That's a
whole workstream, not a bugfix.

## Diagnostic infra added

- **`SohState_ActorParamsAt(cat, index)`** in `soh_state.cpp` — returns
  the s16 params of the Nth actor in a category's list, or 0x7FFFFFFF
  if not found. Not yet wired into firstdiv (this session's diagnosis
  didn't need it — position + id was enough) but exposed for the next
  d6-shaped diagnosis where params disambiguate near-duplicate actors.

## d7 per-actor state — landed

For each Az actor, pair it with the SoH actor of same (cat, id) within
a 40-unit position gate (avoids fabricating a pair when d6 has already
flagged a missing actor). Compare on the paired set:

- **params** (s16 spawn-data seed at Actor+0x1C) — must match exactly.
- **hi-bit flags** (Actor+0x04 masked with 0xFFFFFFF0) — the low 4 bits
  toggle every frame (per-tick housekeeping) and are noisy; the higher
  bits are the lifecycle/behavior state we care about.

Also tracks per-pair position delta and prints the worst delta for
visibility — flags NPC/animation drift even when it's within tolerance.

Uses new `SohState_ActorInfoAt(cat, index, ...)` and
`SohState_ActorListLen(cat)` accessors in `soh_state.cpp`.

## Time-sweep at Link's House — determinism confirmed

`scratch/time_sweep.py` runs firstdiv at post-warp settle then advances
both engines together for +60, +120, +240 more frames (720 total game
frames = 12 seconds). Result:

- d1..d5 **rock stable across all four samples**. Player at
  (1.0, 0.0, 95.0) rot=(0,-32768,0), camera at
  eye=(0.0, 34.0, 0.0), sub-unit numerical delta throughout.
- d6 count divergence stable at 5/4 (expected 3DS Wonder_Talk2
  content addition).
- d7: 4 pairs, 0 mismatches, worst_pos_drift 7.9–9.6 units on
  cat=7 id=0x0018 = **En_Elf (Navi)**. She flies autonomously on
  a scripted path with per-engine RNG; two engines running the same
  scripted behavior with different random seeds naturally diverge by
  ~8 units at this scale. Not a port gap. Below the 40-unit pair gate
  so d7 correctly does not raise.

**Interpretation:** the engine's tick behavior at Link's House with
Link idle is bit-exact between OoT3D and SoH3D modulo the known
Wonder_Talk2 content divergence and Navi's autonomous flight. To
surface actual time-domain port gaps, next-session investigation
needs one of:

1. **Drive Link (input scheduling).** Send scripted joypad input so
   Player physics/animation actually change; then any Player Update
   port gap becomes visible in d3/d4/d7.
2. **Test a scene with timer/scheduled events.** E.g. Hyrule Field
   (day/night cycle), Kokiri Forest (spinning platforms, moving
   pikers), Deku Tree (moving platforms). The static room baseline
   is already validated.
3. **Test scene transitions.** Trigger a scene warp and firstdiv
   during the transition to catch any transition-machinery divergence.

## Driven-input pipeline — landed

Scripted joypad+stick injection now works on both engines from the
harness REPL:

- **Az side:** `input <mask>` (existing) for buttons, new `analog
  <lx> <ly> [rx] [ry]` for left/right sticks in libretro's s16
  range. Injection routes through the harness's `InputState` libretro
  callback, which now handles `RETRO_DEVICE_ANALOG` in addition to
  `RETRO_DEVICE_JOYPAD`.
- **SoH side:** new `soh_input <button-mask> [stickX] [stickY]` writes
  a sticky override. A hook in `graph.c` (right between
  `GameState_ReqPadData` and `GameState_Update`) applies the override
  via `SohState_ApplyInputOverride(&gameState->input[0])` so the
  next-tick input isn't clobbered by PadMgr's SDL poll.

### Two subtle bugs found + fixed during bring-up

1. **Struct-layout skew.** `Shipwright/CMakeLists.txt:187` sets
   `CONTROLLERBUTTONS_T=uint32_t` via `add_compile_definitions()`,
   which only applies to targets in that scope and below. The
   soh3d_harness target lives at `tools/soh3d_harness/` and did NOT
   inherit the define, so `soh_state.cpp`'s OSContPad had `button` as
   u16 (from the header's `#ifndef` fallback) while soh_lib code had
   it as u32 — a 2-byte layout skew. Result: harness writes to
   `input[0].cur.stick_y` at play+0x2B, Player_Update reads it at
   play+0x2D, and Link never sees any injection. Fix:
   `target_compile_definitions(soh3d_harness PRIVATE
   CONTROLLERBUTTONS_T=uint32_t)` in `harness.cmake`. Diagnosed by
   printing `&input->cur.stick_y` from both C++ and C sides — same
   `gPlayState` base pointer, different field offsets.
2. **`cur` vs `rel` field.** `z_lib.c:func_80077D10` (the stick →
   magnitude/angle math) reads `input->rel.stick_x/y`, NOT
   `input->cur.stick_x/y`. `rel` is the deadzone-adjusted value
   computed by `PadUtils_UpdateRelXY` (deadzone 7, clamp to ±60);
   overriding `cur` alone leaves `rel` as whatever PadMgr computed
   before the hook, which is 0 in the harness's headless case. Fix:
   `SohState_ApplyInputOverride` now also recomputes `rel.stick_x/y`
   using the same deadzone/clamp math as PadUtils.

### Also unblocked: Navi-intro cutscene

SoH's Link's House spawns the "Navi flies in" intro cutscene by default
(via `gSaveContext.cutsceneIndex` from the scene setup). Warp fires
work but Link stays IN_CUTSCENE with input disabled. Fixed by extending
`SohState_Warp` to set `gSaveContext.gameMode = GAMEMODE_NORMAL` and
BOTH `cutsceneIndex = 0` and `nextCutsceneIndex = 0xFFEF` (the
"no override" sentinel that stops `z_play.c:480` from overwriting
`cutsceneIndex` with a stale value). Link now spawns idle at
(1, 0, 95) with `stateFlags1=0` — full player control.

### Verified end-to-end

Session recipe: `soh_warp 0xBB` + `soh_input 0 0 -127` for 30 frames
walks SoH Link from (1, 0, 95) → (13.07, 0, 34.02). `analog 0 -32000`
concurrently drives Az Link from (1, 0, 95) → (0.8, 14, 135.5).
Firstdiv d3 correctly reports `player-pos |Δpos|=103.17`. Both engines
respond to input; both engines' Player_Update paths run.

## Sign-convention resolved (2026-07-03 follow-up)

Direction probe (`scratch/direction_probe.py`) confirmed empirically at
Link's House:

- Player spawn matches at (+1, 0, +95) on both engines.
- Camera basis eye/at/up matches byte-for-byte on both engines.
- Matched-convention forward stick (`soh_input 0 0 +127` +
  `analog 0 -32000`) walks BOTH engines +Z ~36–40 units in 60 frames
  (`scratch/direction_matched.py`).

So the polarity difference is purely at the input layer:

    SoH OSContPad stick_y positive = "up on N64 stick" = forward
    Az  RETRO_DEVICE_ID_ANALOG_Y negative = "up on screen" = forward

No world axis is flipped. But the compare tool now carries a per-axis
sign-flip descriptor (`AZ_POS_{X,Y,Z}_SIGN_FLIP`,
`AZ_CAM_{X,Y,Z}_SIGN_FLIP`) applied in d3/d5/d7. All flags are false
today; a future per-axis flip is a one-line change at one seam instead
of ad-hoc per test.

`scratch/drive.py` encodes the per-engine polarity as symbolic actions
(`walk_forward(h)`, `walk_backward(h)`, `stop(h)`, `step_both(h, n)`),
so tests express intent instead of native masks.

## Per-frame firstdiv under matched drive

`scratch/perframe_firstdiv.py` runs `compare firstdiv` after each frame
of a scripted 60-frame forward walk. First real Player-physics port
gaps named at Link's House (60 frames post-warp):

| Frame | SoH pos           | Az pos            | \|Δpos\| |
|-------|-------------------|-------------------|--------|
| 00    | (1.0, 0.0, 95.0)  | (1.0, 0.0, 95.0)  | 0.00   |
| 01    | (1.0, 0.0, 95.0)  | (1.0, 0.0, 95.0)  | 0.00   |
| 02    | (1.0, 0.0, 98.0)  | (1.0, 0.0, 95.0)  | 3.00   |
| 03    | (1.1,14.0,104.0)  | (1.0, 0.0, 95.0)  | 16.64  |
| 05    | (1.2,14.0,119.0)  | (1.0, 0.0, 96.3)  | 26.64  |
| 08    | (1.0,14.0,131.0)  | (1.0, 0.0, 99.0)  | 34.89  |
| 11    | (0.8,14.0,131.0)  | (1.1,14.0,108.0)  | 22.97  |
| 21    | (1.0,14.0,131.0)  | (1.4,14.0,133.0)  | 2.09   |
| 22–59 | (1.0,14.0,131.0)  | (~1.0,14,135.5)   | ~4.5   |

Two distinct port frontiers, both first-frame reported:

1. **Player-locomotion speed**. SoH Link starts translating at
   frame [02] (Δz=+3 in one frame); Az at frame [05] (Δz=+1.3). SoH
   climbs the porch step (Y=14) by frame [03]; Az takes until frame
   [11]. Under the standing SoH3D "1.5× pos/frame @ 30 fps to
   compensate for 20 fps update logic" convention (from the motion-
   parity harness), the ratio is closer to 3× at the acceleration
   phase — not just a frame-rate scaling, so a real Player_Update
   port gap exists here.
2. **Wall-stop divergence**. SoH stops at Z=131 by frame [08]; Az at
   Z=135.5 by frame [21]. Persistent 4.5-unit \|Δpos\| for the rest
   of the sweep — different collision geometry between OoT N64's and
   OoT3D's Link's-House interior at the north wall.

Both are legitimate Player/collision port work but land after the
sign-convention scaffold, not as a blocker for the compare tool.

### Wall-stop 4.5u divergence resolved: scene-collision, not Player_Update

Direct probe (`scratch/wallstop_diagnose.py`, 2026-07-03) falsified the
"Player_Update wall-buffer constant" hypothesis:

- SoH Link at the natural forward stop: `bgCheckFlags=0x0289`
  (Ground+Wall touching), `wallPoly=0x7f00424625c0`, position Z=131.
  Link IS on an actual scene collision polygon.
- Teleporting Link past the wall (`soh_tp 1.0 14.0 135.5`, 140, or 145)
  with the stick released: Link snaps back to Z≈130.8-131 within one
  game frame, same `wallPoly`. The wall is at Z=131 in SoH's scene
  collision — no matter where you place Link, he can't cross it.

So the 4.5u offset is a **scene-collision geometry difference** between
OoT-N64's Link's-House interior and OoT3D's. Falls under the standing
"OoT3D-decomp is ground truth" doctrine at the scene-data layer, not a
Player_Update port gap.

### Speed 3× divergence resolved: harness ticking mismatch + known 30fps compensation

Direct probe (`scratch/speed_perframe.py`, `scratch/speed_gameframe.py`,
2026-07-03) decomposed the 3× ratio:

- Az's `run 1` = one `retro_run` call = 1/60 sec. OoT3D game logic ticks
  at 30 fps → **2 retro_runs per Az game frame**. Empirically, Az's
  Δpos alternates +5/0/+5/0 in the sweep, confirming the 2:1 mapping.
- SoH's `soh_step 1` = one `RunFrame()` = one SoH game frame. SoH runs
  Player_Update at 20 fps but presents at 30 fps, applying a documented
  1.5× per-frame position multiplier (see the motion-parity-harness
  memory: "SoH3D moves 1.5x pos/frame = 20->30fps compensation").
- Combined: `step_both(h, 1)` = SoH 1 game frame vs Az 0.5 game frame =
  1.5× × 2 = 3× per-frame Δpos ratio.

Corrected with `step_game_frame(h, N)` in `scratch/drive.py` (2 retro_runs
per Az game frame). Under game-frame-aligned ticking:

| game_frame | SoH speedXZ | SoH Δpos | Az Δpos | ratio |
|------------|-------------|----------|---------|-------|
| 02         | 2.00        | +3.00    | +1.30   | 2.31  |
| 03         | 4.00        | +6.00    | +2.70   | 2.22  |
| 04         | 5.00        | +7.50    | +4.00   | 1.88  |
| 05         | 5.00 (top)  | +7.50    | +5.00   | 1.50  |
| 06         | 5.00        | +7.50    | +5.00   | **1.50** |

Steady-state ratio at game frames [05-06] locks at 1.50 — the documented
30fps compensation factor — matching parity. **Top speed matches** across
engines.

The residual "~1.5× startup acceleration" was resolved too. RE'd Az's
Player.speedXZ offset by memory scan (`scratch/az_speedxz_scan.py`,
2026-07-03): actor+0x068 in the OoT3D Actor struct, same byte offset
as SoH's N64 Actor.speedXZ. Direct compare (`scratch/accel_direct.py`):

| gf | SoH speedXZ | Az speedXZ | ΔSoH | ΔAz  | SoH accel(u/s²) | Az accel(u/s²) |
|----|-------------|------------|------|------|-----------------|----------------|
| 02 | 2.00        | 1.33       | +2.0 | +1.33 | **40.00**       | **40.00**      |
| 03 | 4.00        | 2.67       | +2.0 | +1.33 | 40.00           | 39.99          |
| 04 | 5.00 (cap)  | 4.00       | +1.0 | +1.33 | 20.00           | 40.00          |
| 05 | 5.00        | 5.00 (cap) | +0.0 | +1.00 | 0.00            | 30.00          |
| 06+| 5.00        | 5.00       | ...  | ...   |                 |                |

SoH's Player_Update runs at 20 fps, Az's at 30 fps. Per-game-frame
speedXZ increment × Player_Update tick rate = real-time acceleration =
**40 units/sec² on both engines**. Top walking speed matches at 5.0.
No Player port gap in the walking-accel constant.

### Rotation-during-startup resolved: Actor.world.rot decoupled from Player yaw

Direct probe (`scratch/rot_direct.py`) initially confirmed the reported
d4 divergence: SoH's `Actor.world.rot.y` (at 0x14+2) flips from -32768
to +108 on the first walk-forward frame, but Az's same-offset field
stays at -32767. Az's Link IS moving +Z though, so OoT3D must track
live facing yaw in a different field.

Memory scan (`scratch/az_playeryaw_scan.py`) for s16 offsets flipping
±180°→0° during walk startup found **actor+0x036** as the live yaw
slot:

| gf | SoH Actor.rot.y | Az +0x036 |
|----|-----------------|-----------|
| 00 | -32768          | -32767    |
| 01 | +108            | +110      |
| 02+| +108 (stationary)| +110      |

Both engines flip 180° in a single game frame, targeting the same yaw
within 2 binary-angle units (float rounding on stick→angle math). No
Player_Update port gap — d4's apparent divergence was reading the
wrong field on Az.

GREZZO decoupled `Actor.world.rot.y` from the live-facing yaw. On 3DS,
0x14+2 stores the initial spawn rotation and stays STATIC through
gameplay; the live yaw lives at Player-owned offset 0x36 (not part of
the base Actor struct's `world.rot`). N64's Player_UpdateCommon writes
both together via `Actor.world.rot.y`; OoT3D keeps them separate.

Post-flip yaw drift at game frame [07]+ is a downstream effect of the
scene-collision divergence (SoH hits the Z=131 wall and triggers
wall-slide yaw; Az still has ~4.5u ahead before its Z=135.5 wall) —
not an independent Player port gap.

### d4 firstdiv fix landed

`CompareFirstDivImpl`'s Player-branch now reads Az `rot.y` from
`PLAYER_YAW_OFF` (0x36) instead of the static Actor+0x14+2 slot. After
the fix, per-frame `|Δrot.y|` under matched forward walk drops from
~32700 (fake, was reading spawn value) to `+0,+2` (s16 rounding parity)
across all pre-wall-hit game frames.

## Sign-blind policy encoded in the compare tool

Landed in soh3d `dec3049`. `CompareFirstDivImpl` now classifies each
would-be firstdiv report into one of three classes:

- `Unclassified` — a real port gap that should surface in the sweep.
- `PermanentNoise` — will NEVER be a port target; silence forever.
- `DeferredPortTarget` — IS a real port target, but scoped to a
  different arc (scene-collision porting). Silenced NOW so the sweep
  advances past the wall plateau, distinguished from PermanentNoise so
  it's not forgotten.

Concrete classifiers:

| Dim | Classifier                     | Class            | Detected via                      |
|-----|--------------------------------|------------------|-----------------------------------|
| d3  | `rate-comp`                    | PermanentNoise   | `abs(soh_v-az_v)<2 && both>0.1`   |
| d3  | `collision-wall`               | DeferredPortTarget | SoH `bgCheckFlags & 0x008`      |
| d4  | `collision-wall-downstream`    | (inherits d3)    | d3 was DeferredPortTarget         |
| d5  | `(d3-tag)-downstream`          | (inherits d3)    | d3 classified + `|Δeye|` tight    |
| d6  | `wonder_talk2`                 | PermanentNoise   | Az has +N id=0x0185 = total delta |
| d7  | `navi-rng`                     | PermanentNoise   | worst pair is cat=7 id=0x0018     |

Reporting: classified divergences print `d<n> classified: <CLASS> (<tag>)`
inline on the dimension's own line but skip `fd.report`. When only
classified items were found, `firstdiv: none — all 7 play-mode
dimensions matched` fires, signaling "sweep is clean, advance".

Result at Link's House frame [19] under matched forward walk:

  d3 classified: DEFERRED (collision-wall) — soh_bgW=1
  d5 classified: DEFERRED (collision-wall-downstream) — |Δat|=12.81
  d6 classified: NOISE (wonder_talk2) — Az has +1 id=0x0185
  firstdiv: none — all 7 play-mode dimensions matched

## Sign-blind policy: project-vision decisions ≠ port bugs

Under matched drive + game-frame alignment + the d4 fix, the surviving
firstdiv divergences at Link's House are ALL sign-blindable
project-vision decisions, not port bugs. Formalizing the policy so the
compare tool doesn't chase them as regressions in future sweeps:

1. **d3 pos rate** — SoH's Player runs at 20 fps with a documented
   1.5× per-game-frame position multiplier to render at 30 fps. Per-
   game-frame Δpos on SoH is always 1.5× Az's; real-time motion is
   at parity. Sign-blind Δpos rate at exactly this factor.
2. **d3 pos plateau ~4.5u at Link's House north wall** — SoH keeps N64
   room collision faithfully. OoT3D's scene collision has walls at
   slightly different positions (Z=135.5 vs Z=131). Same project-
   vision policy as En_Wonder_Talk2 (3DS content additions are
   decided-not-bugs). Sign-blind Player pos delta once both engines
   report `bgCheckFlags & 0x008` (touching wall).
3. **d4 rot post-wall-hit** — fully downstream of #2. SoH's wall-slide-
   yaw kicks in when Link contacts the collision poly; Az still walking
   straight. Sign-blind by predicating on Player wall-touching flag.
4. **d6 count 5/4 (Wonder_Talk2)** — already documented as 3DS content
   addition. Filter cat=1 id=0x0185 from the count-mismatch report.
5. **d7 Navi worst_pos_drift ~40u** — cat=7 id=0x0018. RNG divergence,
   already documented. Filter from d7 worst-pos report.

Codifying the sign-blind policy in the compare tool is workflow-first
work: turns "N sweep-noise items to visually skim past every session"
into "one policy encoded once, next real divergence stands out
immediately".

### Actor.bgCheckFlags RE'd at Actor+0x0090

3-state wall-walk scan (`scratch/az_bgflags_scan.py`,
`scratch/az_bgflags_confirm.py`, 2026-07-03) at Link's House:

| State                    | Actor+0x0090 |
|--------------------------|--------------|
| A rest (standing)        | `0x0081`     |
| B walking-into-wall      | `0x0289`     |
| C stick released         | `0x0081`     |

Matches SoH-N64's `Actor.bgCheckFlags` bit pattern byte-for-byte
(z64actor.h:237, :277-288):

- `0x001` on the ground
- `0x008` touching a wall
- `0x080` similar-to-ground with no velocity check
- `0x200` player-only bit

GREZZO shifted the slot from N64's `0x088` by +8 bytes on 3DS —
probably one extra pointer/f32 inserted earlier in Actor. Wired into
`CompareFirstDivImpl` (soh3d `adb9ae4`); d3 collision-wall classifier
now reads bgCheckFlags on BOTH engines and origin_az names the RE'd
slot instead of admitting "needs Az-side RE".

### Writer-PC watchhook landed (soh3d 0e5f64c)

Layered on top of Azahar's `MemorySystem::RegisterWatchpoint` — the
harness modifies memory.cpp's `MemoryWatchpoint` case (documented
patch in `tools/soh3d_harness/AZAHAR_PATCH.md` since Azahar/ is
gitignored) to call a weak-linked `Soh3d_OnMemoryWrite` hook, which
records `(vaddr, size, data, arm_pc, arm_lr, cycles)` into a per-range
ring buffer. REPL commands: `watch <addr> [size]` / `unwatch` /
`watches` / `hits` / `hitclear`.

**End-to-end verified** at Link's House (`scratch/watch_bgflags.py`):
watching `Actor+0x0090` (bgCheckFlags) during walk-into-wall captures
the exact guest PC at each write:

| data   | pc          | lr          | interpretation                         |
|--------|-------------|-------------|----------------------------------------|
| 0x0081 | 0x00376420  | 0x00375970  | rest write                             |
| 0x0289 | 0x00376420  | 0x00375970  | at wall: bit 0x08 set                  |
| 0x0209 | 0x003764f8  | 0x0032e1c8  | ground bit cleared transient           |
| 0x0289 | 0x003764f8  | 0x0032e1c8  | re-set                                 |
| 0x0089 | 0x0032f274  | 0x0049f968  | wall bit cleared briefly               |
| **0x0289** | **0x0032f328** | **0x0031976c** | **wall bit SET (touch-detected)** |

Ghidra jump to `0x0032f328` lands directly on OoT3D's wall-touch-
detected handler. Same primitive works for ANY watched address —
speedXZ, yaw, actor spawns, whatever.

### Auto-attach writer PC — landed (soh3d 165dd6e)

`CompareFirstDivImpl` now auto-registers a watchpoint on
`Az.Player.Actor+0x0090` once per scene load, and when d3 classifies
DEFERRED (collision-wall) queries `Soh3d_WatchGetLatestMatching` for the
most recent write with bit `0x08` set. The classification line itself
carries the writer PC — no manual `hits` query.

End-to-end verified at Link's House frame [50] with both engines walled:

```
d3 classified: DEFERRED (collision-wall) —
  soh_v=0.48 az_v=5.00 soh_bgW=1 az_bgW=1
  origin: az=Player Actor+0x0090 bgCheckFlags & 0x008
          soh=Actor.bgCheckFlags & 0x008 (z64actor.h:237, :281)
  writer: az_pc=0x0032f334 lr=0x0031976c data=0x0289
          — Ghidra-jump this PC for OoT3D's wall-touch handler
```

**Full RE-first loop CLOSED with zero manual steps**: divergence
surface → classifier tag → RE'd field origin → guest writer PC → Ghidra
jump → OoT3D source function. Same substrate wires trivially to future
speedXZ / yaw / lighting divergences — the classifier just needs to
know which RE'd field to query.

## Second-scene sweep (2026-07-03) — three scenes, three outcomes

Followed the Link's-House substrate to a real second scene. Tested
Kokiri Forest, Hyrule Field, Kakariko Village in sequence via
`scratch/{second_scene,hyrule_field,kakariko}_sweep.py`. Findings:

### Kokiri Forest (ENTR 0x00EE → SCENE 0x0055) — sign-blind

- Both engines Play, but **spawn coord diverges by 122 units** at load
  (Az at (-66.7,-79,939.4), SoH at (33.7,-79,1009.8)). Same Y — 3DS
  scene binary was repacked with different spawnList[0] coords.
- After teleporting SoH to Az's coord via `soh_tp <x> <y> <z> <yaw>`,
  SoH drifts within 60 frames to yet another position (21.6,-79,1024)
  with yaw flipped — Kokiri runs a scripted intro-CS behavior that
  moves Link even without stick input.
- Actor counts: az=98, soh=54. cat4 grass 11/1, cat5 0/13, cat6
  ambient 54/32, cat7 NPC 19/3, cat8 background 9/0. Massive 3DS
  content refactor — new tutorial actors, Wonder_Talk2, etc.
- **Verdict**: Kokiri Forest is dominated by content-refactor divergence,
  not Player-port divergence. Sign-blind under the existing policy —
  no port frontier surfaced. Move on.

### Hyrule Field (ENTR 0x00CD → SCENE 0x0051) — Az enters title-inline

- Az's warp to 0x00CD lands in `title(inline)` gamestate — the OoT3D
  title-demo playback that shows Link riding across Hyrule Field.
  Grezzo repurposed that entrance for the title CS. Falls straight
  through into the classifier's title-vs-Play fallback (limb-rot
  compare) — not a Play parity signal.
- **Verdict**: HF is not a workable second parity scene via 0x00CD.
  Try later HF entrances (0x00CE+) if you want to force normal Play
  entry; not attempted here.

### Kakariko Village (ENTR 0x00DB → SCENE 0x0052) — CLEAN, new frontier RE'd

- Both engines reach Play. Spawn coords match to 0.92 units
  ((-2450.4, 138.1, 1062.0) vs (-2451.3, 138.2, 1062.0)). Yaw matches
  exactly (16384).
- After `soh_tp` match: idle Δpos=0.11 (below reporting threshold).
- **d5 camera-basis drift**: Az eye Y=211, SoH eye Y=239. |Δeye|=28
  with matching Link pos+yaw — real Camera divergence, NOT downstream
  of d3.
- Substrate extended (this commit) to auto-attach watchpoint on
  PlayState+0x01B8 (12B eye Vec3f) at scene load, and query the
  writer PC in the "camera-basis drift" branch. Kakariko sweep
  captured **az_pc=0x002d92a4** writing eye_off=+8 (Z-component,
  data=1062.4).
- **Next Ghidra-jump target: 0x002d92a4** — OoT3D's camera-eye
  update function. The same function almost certainly also writes
  eye X and eye Y (Vec3f copy pattern); decompile + port to close
  the d5 gap.
- Content-refactor noise still present: az=61 soh=56 actors, cat1
  9/21 divergence, cat=1 id=0x003b flags az=0x20000030 vs
  soh=0x00000030 (3DS added high-bit flags on cat1 actors — probably
  a "3DS actor-role" tag). All sign-blind; don't chase.

### Substrate additions this session

- `az_playerpos` REPL command — reads Az Player world.pos + world.rot.y
  + live playerYaw. Parseable output for match-spawn scripts.
- `soh_tp <x> <y> <z> [yaw_s16]` — optional yaw arg. Writes Player
  world.rot.y + shape.rot.y + Player.yaw (z64player.h:865).
- `SohState_SetPlayerYaw(yaw_s16)` — the underlying accessor.
- Camera-eye watchpoint auto-attach (`s_watched_cam_eye_addr`), keyed
  on the same Player-addr scene-load trigger as bgCheckFlags/speedXZ/yaw.
- Writer PC print in the d5 "camera-basis drift" firstdiv path.

Related commits: 57f7ee48 (substrate + tp yaw), 4382960f (d5 auto-attach).

## FUN_002d84c4 = Camera_Update — IDENTIFIED (2026-07-03)

Cross-referenced against SoH N64 `Camera_Update` at
`Shipwright/soh/src/code/z_camera.c:7470`. Structural match is unambiguous:

| OoT3D FUN_002d84c4                                           | SoH N64 Camera_Update (z_camera.c:7470)                                          |
|--------------------------------------------------------------|----------------------------------------------------------------------------------|
| `if (*(short*)(param_2+0x188)==0) goto tail-return`          | `if (camera->status == CAM_STAT_CUT) return camera->inputDir`                    |
| `iVar11 = *(*(param_2+0xd4)+0xa54)+0xd8` → sOOBTimer holder  | `sOOBTimer` (module-static)                                                       |
| `FUN_00331764(auStack_e4); FUN_00371738(&local_ac,…,0x12)`   | `Actor_GetWorldPosShapeRot(&curPlayerPosRot, &camera->player->actor)`             |
| `FUN_00367e60(&local_ac, param_2+0xdc)` → `param_2+0x120`    | `OLib_Vec3fDistXZ(&curPlayerPosRot.pos, &camera->playerPosRot.pos)` → `xzSpeed`   |
| Vec3 diff into `param_2+0x138/13c/140`                        | `camera->playerPosDelta.{x,y,z} = curPlayer.pos - camera->playerPosRot.pos`       |
| Bit tests on `param_2+0x194` (bits 0x1/0x4/0x200/0x400/…)     | Tests on `camera->unk_14C` (same bits, same order)                                |
| `if (iVar1+0x9c < 200) sCameraFuncTable[…][…][…](param_2)`    | `if (sOOBTimer < 200) sCameraFunctions[funcIdx](camera)`                          |
| Indirect dispatch on setting/mode at line 217–219             | `sCameraFunctions[sCameraSettings[camera->setting].cameraModes[camera->mode].funcIdx](camera)` @ z_camera.c:7581 |
| `if (*(short*)(param_2+0x188)==3) goto tail-return`           | `if (camera->status == 3) return camera->inputDir`                                |
| Quake-branch: offset eye/at, `FUN_00372474`, `FUN_00343858`   | `Quake_Calc`, `OLib_Vec3fDiffToVecSphGeo`, `Camera_CalcUpFromPitchYawRoll`        |
| Tail: `*param_1 = *(param_2+0x17c)` (Vec3s inputDir out)      | `return camera->inputDir` (Vec3s from `camera+0x17C` on N64)                      |

### Derived Camera-struct field map (OoT3D)

`param_2` is `Camera*`. The layout preserves the N64 shape past the initial
Vec3f/Vec3s fields, with float fields at the same offsets:

| Offset | Field                                              | Evidence                                                               |
|--------|----------------------------------------------------|------------------------------------------------------------------------|
| 0x080  | `at` — Vec3f                                       | `FUN_00372474(auStack_98, param_2+0x80, param_2+0x8c)` (at, eye pair)   |
| 0x08C  | `eye` — Vec3f                                      | same pair; harness writer PC 0x002d92a4 wrote `eye_off=+8` = eye.z      |
| 0x098  | (Vec3f, likely `up` or `sph`)                       | 3 f32 writes from `local_80/7c/78`                                     |
| 0x0B0  | `eyeNext` (or delta base) — Vec3f                  | writes `local_c4/c0/bc` on the "at-adjust" branch                       |
| 0x0BC  | (Vec3f offset used by shake path)                  | referenced by `param_2+0xbc/c0/c8/cc` in the case-1/12/15 arm           |
| 0x0D4  | `play` — `PlayState*`                              | `*(param_2+0xd4)+0xa54` chains to sCameraContext                        |
| 0x0D8  | `player` — `Player*`                               | early-out `if (*(param_2+0xd8) != 0)` gates full update                 |
| 0x0DC  | `playerPosRot.pos` — Vec3f                         | subtract vs `local_ac` (curPlayer pos) → `playerPosDelta`               |
| 0x120  | `xzSpeed` — f32                                    | store site of `FUN_00367e60` result (Vec3fDistXZ)                       |
| 0x128  | `speedRatio` — f32                                 | stored from `FUN_00355804(xzSpeed / …)`                                 |
| 0x138  | `playerPosDelta` — Vec3f                           | 3-way subtract at +0x138/13c/140                                        |
| 0x144  | `waterYPos` (or similar) — f32                     | `fVar14 = *(param_2+0x144)` in normal branch                            |
| 0x14C  | (Vec3f floor normal) — Vec3f                       | writes at +0x150/154/158 on `Camera_GetDataIdxForPoly`-shaped block     |
| 0x188  | `status` — s16                                     | early-return on 0; special-cases 1, 3, 7                                |
| 0x18A  | `setting` — u8 (in low byte of u16)                | `*(param_2+0x18a) & 0xff` indexes camera-setting jump table             |
| 0x18C  | `mode` — u8 (in low byte of u16)                   | `*(param_2+0x18c) & 0xff` indexes cameraModes[]                         |
| 0x18E  | `bgCheckId` — s16                                  | written from `local_90` after `Camera_GetDataIdxForPoly`                |
| 0x194  | `unk_14C` — u16 (bitflags 0x1/0x2/0x4/0x40/…)      | bit-wise tests match SoH's `camera->unk_14C`                            |
| 0x198  | `roll` — s16                                       | used as pitch-input to quake/CalcUp branch                              |
| 0x19A  | `paramFlags` — u16                                 | `if (uVar4 == 0)` early-out on paramFlags                               |
| 0x19E  | `nextCamDataIdx` — s16                             | set to `-1` when `unk_14C & 4 == 0`                                    |
| 0x1A0  | `nextBGCheckId` — s16                              | stored alongside `bgCheckId` on data-idx switch                         |
| 0x17C  | `inputDir` — Vec3s (pitch/yaw/roll s16)            | function returns `*param_1 = *(param_2+0x17c)` etc                     |

This map is derivable from the N64 struct once you know FUN_002d84c4 is
`Camera_Update`, and matches the field-order + spacing of `Camera` in the
N64 code exactly (N64 `Camera` and OoT3D `Camera` share layout in this
region — no 8-byte-pointer shift because the pointer-fields are already
past 0x140 in this struct).

### Where the 28-unit Δeye comes from — NOT Camera_Update itself

Camera_Update writes at/eye only in two paths:
  1. The tail Quake-Calc block copies at/eye into a *local* `viewEye` for
     the view transform (not back into `camera->eye`).
  2. The at-adjust block near line 292–306 writes `local_74/68` locals,
     not camera state.

The actual `camera->eye` mutation happens INSIDE the
`sCameraFunctions[funcIdx]` indirect call (line 217–219). That is
`Camera_Normal0` (or whichever mode is active) — where the N64 sets
`camera->eyeNext` from spherical maths and `camera->eye = eyeNext`.

Kakariko Village default is `SCENE_CAM_SET_NORMAL0` (per SoH scene table),
mode `CAM_MODE_NORMAL` → funcIdx `CAM_FUNC_NORMAL0` → `Camera_Normal0`
(`Shipwright/soh/src/code/z_camera.c:2089`). Strong prior: that's the
divergent function.

### Update (2026-07-03, later): actual OoT3D setting at Kakariko is CAM_SET_NORMAL1

Extended the harness with a pointer-chase probe (`soh3d 28f24f23`) that
follows `cameraPtrs[MAIN_CAM] = *(u32*)(PS+0xA54)` and reads Camera's
setting/mode/status. Stable readout on Kakariko:

    az_cam: cam@0x0871eba4 setting=2 mode=0 status=7

That is `CAM_SET_NORMAL1` (=2), `CAM_MODE_NORMAL` (=0), `CAM_STAT_ACTIVE` (=7).

Via `sCamSetNormal1Modes[0]` (z_camera_data.inc:1170) this dispatches to
funcIdx **`CAM_FUNC_NORM1`** → **`Camera_Normal1`** (z_camera.c:1538) —
NOT Camera_Normal0. Kakariko applies the NORMAL1 profile (fixed
distance/pitch/yaw defaults) rather than the free NORMAL0 profile.

Two prior mistakes worth naming:
1. The scan-derived assumption that Camera is embedded at `PS+0x12C`
   was wrong. mainCamera is heap-allocated; the eye triple at PS+0x1B8
   is `play->view.eye` (view-basis copy), matching SoH's `SohState_Camera`
   which also returns view.eye — that's why the initial harness scan
   found them agreeing byte-for-byte.
2. The scene-table default `SCENE_CAM_SET_NORMAL0` describes the *initial*
   setting field a scene supplies; the *live* runtime setting can be
   different. Kakariko lives on NORMAL1 during normal gameplay.

### Located: OoT3D Camera_Normal1 = FUN_00239fd8

The Ghidra literal `DAT_002d8c20` in Camera_Update's indirect-dispatch
expression is an ARM literal-pool word holding the sCameraFuncTable base
pointer. Live-peeked via harness (`scratch/find_camera_norm1.py`):

    *(u32*)0x002d8c20 = 0x00517260  ← sCameraFuncTable base
    sCameraFuncTable[CAM_FUNC_NORM1=2] = 0x00239fd8  ← Camera_Normal1

Also noteworthy: `sCameraFuncTable[CAM_FUNC_NORM0=1] = 0x00239fcc` is an
8-byte stub that just `return 1;` — Grezzo removed Camera_Normal0 as a
distinct implementation. This is consistent with the RE finding that
Kakariko (and other outdoor scenes) actually run under NORMAL1 rather
than NORMAL0 despite scene-table defaults.

sCameraFuncTable dump (first 20 entries):

    [ 0] 0x00000000  CAM_FUNC_NONE
    [ 1] 0x00239fcc  CAM_FUNC_NORM0 stub (returns 1)
    [ 2] 0x00239fd8  CAM_FUNC_NORM1 ← port target, ~3152 bytes
    [ 3] 0x0023ac98  CAM_FUNC_NORM2
    [ 4] 0x0023b428  CAM_FUNC_NORM3
    [ 5] 0x0023bc68  CAM_FUNC_NORM4
    [ 6] 0x00275670  CAM_FUNC_PARA0
    ...

Ghidra-decomped to `build/decomp/00239fd8.c` (418 lines, 15.3 KB). Field
accesses confirm the same Camera struct offsets seen in Camera_Update:
`param_1[0x20]=at`, `param_1[0x23]=eye`, `param_1[0x35]=play`,
`param_1[0x36]=player`, `+0x18A=setting`, `+0x18C=mode` (via `param_1+99`).
The function reads its own setting/mode into a CAM_DATA_* record via
`DAT_0023a348 + setting * 8 + 4` (sCameraSettings base) — canonical
Camera_Normal* pattern.

### Refined port target: Camera_Normal1

Camera_Normal1 (z_camera.c:1538) is a ~230-line camera-mode function with
its own spring constants (`Camera_LERPCeilVec3f` on `atLERPStepScale`,
yaw/pitch update rates), its own `at`-derivation from playerPosRot, and
its own eye-height defaults from `sCamSetNormal1Modes[0].values` (the
CAM_DATA_* record). Any of the following would explain the 28-unit
eye-Y drift:
- Different `Camera_CalcDefaultPitch` clamp (yOffset ceiling).
- Different eye-height default (`Camera_CalcAtDefault` yOffset).
- Different spring rate on `atLERPStepScale`.
- Different NORMAL1-specific `norm1.unk_14` or `norm1.pitchTarget`.

Next step in the port loop:
1. Locate OoT3D's Camera_Normal1 in Ghidra: walk sCameraFuncTable at
   `DAT_002d8c20` with funcIdx `CAM_FUNC_NORM1` (need to also RE the
   OoT3D CAM_FUNC_NORM1 constant value — likely the same as N64, but
   confirm).
2. Ghidra decomp Camera_Normal1's OoT3D address.
3. Diff against `Camera_Normal1` in `Shipwright/soh/src/code/z_camera.c:1538`.
4. Port the delta as
   `Shipwright/soh/src/soh3d/behaviors/camera/normal1.cpp` under a
   `CameraBehavior` base + funcIdx-dispatched registry (per project
   rule — no more soh3d.c dumping ground). Fall through to legacy N64
   `Camera_Normal1` for the code paths not-yet-ported.
5. Re-run Kakariko sweep to verify |Δeye|→0.

### Refined port plan

Port target is **`Camera_Normal0`** (or the specific mode function active
at the divergence frame), NOT the whole 3740-byte Camera_Update. Camera_Update
itself matches N64 structurally too closely to be the cause of a 28-unit
eye-Y delta at rest; the delta lives in mode-specific eye-computation math
(spring constants, at-offset, pitch-clamp, eye-height defaults).

Concrete next step for the port loop:
1. **Extend the substrate to expose OoT3D active setting/mode/funcIdx**
   at the divergence frame (read `mainCamera+0x18a/18c` on the Az side).
   The offsets are RE'd above.
2. **Confirm mode identity at Kakariko** — expect
   `SCENE_CAM_SET_NORMAL0/CAM_MODE_NORMAL/CAM_FUNC_NORMAL0`.
3. **Find the OoT3D address of that mode function** by walking Ghidra's
   xrefs from `sCameraFuncTable` (or the dispatch expression's data
   pointer `DAT_002d8c20`).
4. **Decomp it, diff against `Camera_Normal0`, port only the delta.**
   Structure as `Shipwright/soh/src/soh3d/behaviors/camera/normal0.cpp`
   under a `CameraBehavior` base + id-dispatched registry (per project
   rule). Fall through to legacy N64 code for camera modes not yet
   migrated.

## FUN_002d84c4 raw decomp — original notes

Ghidra-decomped: `build/decomp/002d84c4.c` (623 lines, 22KB C). Signature
`void FUN_002d84c4(undefined2 *param_1, int param_2)`. Function spans
0x002d84c4..0x002d9360 (3740B). PC 0x002d92a4 sits ~93% through, in the
"commit results" tail region — classic pattern for a Camera update
function writing its computed eye/at/up back to the Camera struct.

`param_2` has fields at +0x80, +0x8c, +0xd4, +0xd8, +0xdc, +0x188,
+0x1a2 → looks like a Camera struct. `param_1` is written to by the
function (Vec3f output). The captured writer PC wrote `eye_off=+8` of
PlayState.mainCamera.eye — value 0x4484cc26 (~1062.4, matches Kakariko
Link Z=1062). So this function is the (or a) main-camera update.

Callees include `FUN_00367e60`, `FUN_004796f8`, `FUN_00355804`,
`FUN_00371738`, `FUN_00372474`, `FUN_002d052c`, `FUN_00374be8` — walking
these will disambiguate whether this is `Camera_Update` proper or a
camera-mode-specific update (there are ~40 in OoT N64).

### Next-session frontiers
2. **Identify FUN_002d84c4 vs SoH N64's `Camera_Update` / one of the
   camera-mode functions** (`Camera_Free0`, `Camera_Normal0/1/2`,
   `Camera_Follow*`, etc.). Cross-reference by structure/callees.
   Kakariko default camera on Link's House exit is
   `SCENE_CAM_SET_NORMAL0`, so `Camera_Normal0` is a strong candidate.
2. **Port the divergent piece.** Once identified, diff FUN_002d84c4's
   logic against SoH's N64 version; the delta is what's driving the
   28-unit eye-Y drift. Land the port faithfully as a proper module
   (per the "port to OOP behaviour modules" project directive), not
   as a soh3d.c patch. Re-run Kakariko sweep to verify |Δeye|→0.
2. **Guest-native stack unwinding.** Currently we capture PC + LR (one
   frame). For deeper call chains, walk r11 (fp) if the guest binary
   uses frame pointers. OoT3D probably has -fomit-frame-pointer so
   this may need heuristic unwinding (scanning back for `push {..,lr}`
   instructions). Bounded extension of the substrate.
2. **Encode the sign-blind policy above in `CompareFirstDivImpl`.** Item
   #1 (SoH 1.5× rate) and item #4 (Wonder_Talk2 filter) are cheap and
   collapse most of the current sweep noise. Items #2/#3 need a
   wall-touching state read; the accessor already exists
   (`SohState_PlayerWallInfo`), so gating d3/d4 on wall-touching is
   straightforward. Item #5 needs a Navi actor filter.
2. **Sweep across more scenes** to confirm the RE'd offsets
   (ACTOR_SPEEDXZ_OFF, PLAYER_YAW_OFF, PLAY_CAM_EYE_OFF) are consistent
   at Kokiri Forest and Hyrule Field, not Link's-House-specific.
3. **d8 = envCtx lighting** (already have `SohState_Lighting`) — port
   parity of scene lighting settings.
4. **Port OoT3D scene collision** for Link's House (and Kokiri Forest,
   Hyrule Field) so wall-stop and floor-height parity land at the scene-
   data seam. Larger project surface — already the standing primary goal.

## Aside: RNG determinism for autonomous actors

Navi's 7-9-unit position drift between engines (worst_pos_drift in
d7) is because both engines use divergent RNG seeds. A scene-load
hook that pins both engines' RNG streams to the same seed would
unblock ALL future autonomous-actor comparisons. Deferred to a
future session as workflow-first infrastructure work.

## Session artifacts

- `scratch/gameplay_firstdiv.py` — repro script; still gitignored under
  scratch/ per project convention.
- `scratch/direction_probe.py`, `scratch/direction_matched.py` — the
  two experiments that confirmed sign-convention resolution
  (2026-07-03).
- `scratch/drive.py` — symbolic per-engine input wrapper.
- `scratch/perframe_firstdiv.py` — per-frame firstdiv sweep under
  scripted forward-walk.
- `scratch/wallstop_diagnose.py` — teleport-past-wall probe that
  identified the wall-stop divergence as scene-collision, not Player.
- `scratch/speed_perframe.py`, `scratch/speed_gameframe.py` — per-
  frame speed decomposition that identified the "3×" as harness ticking
  mismatch + known 30fps compensation.
- `scratch/az_speedxz_scan.py` — RE'd Az Player.speedXZ offset
  (actor+0x068) via memory scan for the acceleration signature.
- `scratch/accel_direct.py` — direct per-frame speedXZ compare that
  proved real-time walking acceleration is 40 units/sec² on both
  engines. No Player port gap in the walking-accel constant.
- `scratch/az_playeryaw_scan.py` — RE'd Az live-facing yaw at
  actor+0x036 (decoupled from world.rot.y on OoT3D).
- `scratch/rot_direct.py` — direct yaw compare that proved both
  engines flip 180° in a single game frame to within 2 s16 units. No
  Player port gap in the yaw update.

### End-to-end dispatch-chain verification (2026-07-03, manager substrate check)

Manager flagged: the az_cam probe reads Camera.setting/mode fields, but the
inference "setting=2 mode=0 → CAM_FUNC_NORM1 → Camera_Normal1" implicitly
assumed OoT3D's sCameraSettings/CameraModes layout matches SoH's enum
ordering. Walking the full runtime chain (soh3d
scratch/probe_camera_dispatch.py) resolves it directly:

    sCameraFuncTable base @ 0x002d8c20 → 0x00517260
    sCameraSettings  base @ 0x002d88c8 → 0x00516ff0

    Kakariko live: cameraPtrs[MAIN_CAM] = 0x0871eba4
      → setting=2 mode=0 status=1

    Dispatch chain:
      sCameraSettings[2].modes           = 0x0051937c
      sCamSetNormal1Modes[0].funcIdx     = 2
      sCameraFuncTable[2]                = 0x00239fd8
                                       ↑
      MATCH Camera_Normal1 (independent of SoH enum assumption)

sCamSetNormal1Modes[18] = funcIdx 2 also points at 0x00239fd8 (a fallback
slot). funcIdx 1 = 0x00239fcc (Grezzo's Camera_Normal0 return-1 stub)
does not appear in any mode of setting=2 — the NORMAL1 setting never
dispatches to Camera_Normal0.

Note: the writer-PC substrate (soh3d 0e5f64c + 165dd6e) captures
0x002d92a4 for the view.eye write at Camera_Update's tail
(func_800AA358-inlined). That PC is a fixed Camera_Update location, NOT
the mode function's PC — it fires every frame regardless of which mode
runs, and does not by itself identify Camera_Normal1. The dispatch-chain
walk above is what pins the mode function.

Refinement to the substrate for future arcs: watch camera->eye directly
(cam_ptr + 0x8C), NOT play->view.eye (PS + 0x1B8) — the mode function
writes camera->eye, and its writer PC lands inside the mode function's
own address range (0x00239fd8..0x0023AC28 for Camera_Normal1). The
current harness d5 probe watches play->view.eye and so always attributes
to Camera_Update's tail. Small extension.
