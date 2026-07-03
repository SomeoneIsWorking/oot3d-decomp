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
d5 camera basis: az=TODO(play-cam not RE'd) soh_eye=(0.0,34.0,0.0) soh_at=(1.0,34.0,100.9) camId=0 fov=60.0
firstdiv: none — play-mode d1..d4 matched (d5 az-side pending RE)
```

d3 player position is **exact** (1.0, 0.0, 95.0) on both sides. d4 player
rotation Y differs by 1 binary-angle unit (32767 vs 32768) — rounding, not
a port gap. d1/d2/d3/d4 all pass; the anim-data floor is escaped.

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

## Next work — d5 Azahar play-mode camera

The remaining TODO is the Azahar-side play-mode active camera. SoH exposes it
via `SohState_Camera` (`gPlayState->cameraPtrs[gPlayState->activeCamId]`).
Azahar needs the equivalent RE:

1. Find OoT3D's `PlayState::cameraPtrs` offset. On N64/SoH it's inside the
   PlayState struct; on 3DS it may be at a different offset due to the 64-bit
   pointer size shift.
2. Find OoT3D's `PlayState::activeCamId` (or equivalent — could be an index or
   a direct pointer to the active Camera).
3. In the Azahar Camera struct (once located), read `eye`, `at`, `up`, `fov`.
   Same shape as SoH's (Vec3f × 3 + fov).
4. Add both offsets to the constants block in `main.cpp` and extend the d5
   play-mode branch of `CompareFirstDivImpl` to read+compare Az camera basis
   against SoH's.

Anchor: at Link's House Az frame 60 post-load, the SoH camera reads
`eye=(0.0, 34.0, 0.0) at=(1.04, 34.03, 100.90)`. Azahar's play camera should
land at the same values — matching values in `.data` or on the heap will be
diagnostic for locating the cameraPtrs field.

Alternative: decompile OoT3D's `Play_Init` (already anchored per this doc's
"Play_Main @ 0x0045238c" line) and read the camera-init calls; they'll
reference the cameraPtrs slot directly.

## Actor count mismatch — small remaining divergence

`compare actors` at Link's House frame 60 post-load shows:

```
3ds: 5 actors  (Player + En_Kusa + En_Item00 x2 + En_Item00)
soh: 4 actors  (Player + En_Kusa + En_Item00 + En_Item00)
```

SoH is missing one En_Item00 (id 0x0185) at pos (0.0, 20.0, 120.0). Could be
a room-load timing difference (SoH hasn't finished spawning yet) or a legit
port gap. Not surfaced by firstdiv yet — d6 actor-count would be a natural
next-dimension check. Deferred.

## Session artifacts

- `scratch/gameplay_firstdiv.py` — repro script; still gitignored under
  scratch/ per project convention.
