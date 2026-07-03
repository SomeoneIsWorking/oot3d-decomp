# Gameplay-scene firstdiv — in-progress notes

**Status:** blocked. Getting both engines into the SAME gameplay scene
deterministically is unsolved. Partial infrastructure landed this
session; the durable fix (SoH savestate or scripted title-exit) is the
next work item.

## Motivation

At title, `compare firstdiv`'s d4 (per-limb rot delta) and d5 (camera
basis) hit anim-data/spline-reauthoring floors — SoH plays N64-authored
title-demo data, Azahar plays 3DS-reauthored data for the same visual
scene, and no sync collapses the floor. To surface REAL port gaps we
need both engines in a static gameplay entry (Link's House first frame
post-load recommended) where they run the same semantic behavior on
comparable data.

## What works

- **Azahar → Link's House via savestate.** File exists at
  `scratch/harness/oot3d_linkshouse.state` (~19 MB). Loaded via
  `loadstate <absolute-path>` (relative paths resolve against the
  harness cwd, so absolute is safest). After load + `run 60`,
  `gPlayState @ 0x0050AF34 = 0x0871e840` and sceneNum = 0x0034.
- **SoH-only warp REPL.** New `soh_warp <entrance>` command was added
  (`main.cpp:HandleSohWarp`, wired in the command switch). Calls
  `SohState_Warp` without touching Azahar. Needed because the previous
  `force warp` writes NEXT_ENTRANCE + TRANSITION_TRIGGER on Azahar,
  and empirically that re-triggers Azahar's already-loaded Play and
  sends it BACK TO TITLE (sceneNum 0x51). Isolating the two sides
  keeps the Azahar savestate stable.
- **Robust SoH warp fields.** `SohState_Warp` now mirrors SoH's own
  debug console `entrance` handler: sets nextEntranceIndex,
  transitionTrigger, transitionType = TRANS_TYPE_INSTANT,
  gSaveContext.nextTransitionType = TRANS_TYPE_INSTANT, and
  gSaveContext.entranceIndex. Also clears `csCtx.state = CS_STATE_IDLE`
  before writing, to kill any running title-demo cutscene that would
  otherwise overwrite our nextEntranceIndex at cutscene end.
- **d2 sceneNum reporting.** `CompareFirstDivImpl` now reports SoH's
  actual sceneNum whenever SoH has a PlayState, not only at title. So
  d2 correctly surfaces "az=0x0034 soh=0x002d" instead of silently
  reporting soh=0xffff.

## What's blocked

**`soh_warp <ent>` from title-demo lands at the wrong scene.** With Az
loaded at Link's House and SoH stepped to Play (title cutscene at
sceneNum=0x51):

| Entrance | Expected           | SoH lands at        |
|---------:|:-------------------|:--------------------|
| 0x0BB    | LINKS_HOUSE_CHILD  | 0x002D (Kokiri Shop)|
| 0x0BC    | LINKS_HOUSE_0_1    | 0x002D (Kokiri Shop)|
| 0x0BD    | LINKS_HOUSE_0_2    | 0x002D (Kokiri Shop)|
| 0x0C0    | LINKS_HOUSE_0_5    | 0x0001 (Deku Tree)  |

Setting all four warp fields + zeroing csCtx.state did NOT fix it.
Something else in the intro/opening flow is scheduling a different
entrance. Best guess: gSaveContext at title has an invalid save-slot
state, so the entrance-index handler kicks the game into the intro
flow (Kokiri opening scene → Kokiri Shop) instead of resolving 0x0BB
directly. A real save context is needed on the SoH side.

## Next work

Pick one of:

1. **SoH savestate/loadstate in the harness** (recommended durable
   fix). SoH already has `SaveStateMgr` (see
   `Shipwright/soh/soh/OTRGlobals.cpp:1041`) — implement two new REPL
   commands `soh_savestate <slot>` and `soh_loadstate <slot>` that
   trigger `AddRequest({slot, SAVE})` / `AddRequest({slot, LOAD})` on
   `gSaveStateMgr`. Then: user-visible one-time setup step (headed run
   or a scripted intro-completion path) saves slot 0 at Link's House;
   from then on, `soh_loadstate 0` puts SoH into a matching Play scene
   with Az's `loadstate`.
2. **Scripted title-exit for SoH.** Let SoH's title-demo cycle
   naturally (~5000+ frames) into the file-select state; from
   file-select, poke gSaveContext directly (bypass slot-select UI) to
   simulate "new save at Link's House", then let the game load. Riskier
   than (1); has same "no save context yet" symptom potentially.
3. **RE the OoT3D title→file-select transition writer chain.** The
   memory-poke escape hatch (option (c) in the earlier handoff). This
   is durable and aligns with the `soh3d-harness-input-vs-re` user
   directive but is a heavy RE session. Reverse `FUN_0046ac98`'s
   inverse (the writer that clears TITLE_CTX_VA + TITLE_ACTIVE_OFF)
   and expose a new `force titleexit` REPL sub. Then both engines can
   be brought out of title deterministically without input driving.

## Deferred: play-mode camera basis for d5

Once both engines land in the same play scene, `CompareFirstDivImpl`'s
d5 needs the play-mode camera basis on BOTH sides. Azahar side reads
from a play-mode camera struct via `gPlayState + cameraPtrs offset +
activeCamId` — offsets not yet RE'd; add to `soh3d_harness/main.cpp`.
SoH side reads through the C struct in `soh_state.cpp` (add
`SohState_ActiveCamera` returning eye/dir/up).

## Verification we DID reach

- `compare firstdiv` runs to completion in mixed states without crash.
- Az savestate stays stable through 240+ frames of both-engine run.
- SoH warp fields land the game in a Play scene (just not the right
  one).

## Session artifacts (scratch/, not committed)

- `scratch/gameplay_firstdiv.py` — REPL script driving both engines
  to Link's House. Currently ends with mismatched scenes (Az=0x34,
  SoH=0x2D); use as the reproducer for the SoH-side blocker.
