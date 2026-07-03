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

## Next-session frontiers

1. **Player rotation-during-startup.** d4 during the walk-forward sweep
   showed Az's Player.rot.y jumping to ~+32700 during the first game
   frames while SoH's stayed at rest. Link at Link's House spawns
   facing -Z (toward the door). Stick_y=+127 = forward = +Z, needs a
   180° yaw flip. Az's Player flips over the first ~2 game frames;
   SoH's flip cadence differs. Read via `az_playerinfo`-style probe
   after RE'ing Actor.world.rot on Az (should be at fixed offset from
   Player base — same 0x24 offset used by ACTOR_ROT_OFF).
2. **Sweep across more scenes** to confirm d5 mainCamera offset works
   for follow/fixed/cutscene camera settings.
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
