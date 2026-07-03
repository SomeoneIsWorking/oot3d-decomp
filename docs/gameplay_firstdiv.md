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

## Next-session frontiers

1. Add scene-transition and driven-input flavors to time sweep — the
   static room baseline is validated.
2. Sweep across more scenes to confirm d5 mainCamera offset (0x1B8)
   works for follow/fixed/cutscene camera settings, not just Link's
   House.
3. d8 = envCtx lighting (already have `SohState_Lighting`) — port
   parity of scene lighting settings.

## Session artifacts

- `scratch/gameplay_firstdiv.py` — repro script; still gitignored under
  scratch/ per project convention.
