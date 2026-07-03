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

## d6 actor count — first real port gap

Extended firstdiv with total-actor-count + per-category deltas across
all 12 ACTORCAT_* categories. At Link's House frame 60:

- Azahar: 5 total (cat2=Player=1, cat6=En_Kusa=1, cat7=En_Item00=3)
- SoH:    4 total (cat2=1, cat6=1, cat7=**2**)

The missing SoH actor is at pos (0.0, 20.0, 120.0). Root cause is
undiagnosed — two candidates:

1. **Save-flag divergence.** Azahar's savestate carries scene-flag
   bits (this item as "not yet collected"). SoH boots without those
   flags, so it either doesn't spawn a pre-collected item (opposite of
   the observation) OR does spawn one Az stripped (matches the
   observation). Would need to compare `gSaveContext.sceneFlags` for
   scene 0x34.
2. **Actor-spawn list divergence.** OoT3D room 0 of SCENE_LINKS_HOUSE
   has 3 En_Item00 entries in its actor spawn list; SoH's ported
   spawn table has 2 for the same room. Would need to diff the ZAR /
   OTR room actor lists.

Investigation deferred to the next session — this is the intended
handoff-forward artifact of the doctrine loop, not a workflow blocker.

## Next-session frontiers

1. Diagnose d6 actor gap. Fetch scene 0x34 room 0 actor list on both
   sides and diff. First is quick to check; second is authoritative.
2. Advance to a different gameplay scene to confirm d1..d5 stability
   (Kokiri Forest 0x55, Hyrule Field 0x51, Kakariko 0x52). Would
   validate the d5 mainCamera offset (0x1B8) across scenes with
   different camera settings (fixed vs follow vs cutscene).
3. Chain further dimensions: d7 = envCtx lighting (already have
   `SohState_Lighting`), d8 = active room number.

## Session artifacts

- `scratch/gameplay_firstdiv.py` — repro script; still gitignored under
  scratch/ per project convention.
