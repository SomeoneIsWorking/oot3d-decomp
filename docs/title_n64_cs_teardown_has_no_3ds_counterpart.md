# Legacy N64 CutsceneContext teardown (func_80068DC0 et al.) has NO 3DS counterpart during title

Quality-bar backfill for SoH3D commit `37c3475a` ("title: stop N64 cs-teardown from clobbering
gameMode during ported title"). That commit landed a one-line gate in
`Shipwright/soh/src/code/z_demo.c`'s `func_80068DC0` (the N64 `CutsceneContext` unskippable-teardown
handler) suppressing its `gSaveContext.gameMode = GAMEMODE_NORMAL` write while
`Zelda3D_Title_IsActive()`. This doc records the decomp ground truth for *why* that suppression is
correct, per the project rule that behavioral divergences get RE'd before/alongside the port fix.

## Ground truth: the 3DS title tick has no equivalent state machine at all

`title_gamestate_driver.md` §2 pins the **entire** per-frame orchestration of the OoT3D title demo
to one call chain, confirmed live via `Graph_ThreadEntry`/`GameState_Update` tracing:

```
Graph_ThreadEntry (FUN_00416208)
  -> GameState_Update (FUN_00417014): (*gs->main)(gs)   // == Play_Main once Play_Init has run
       -> Play_Main (FUN_0045238c)
            -> Actor_UpdateAll (FUN_002e2e60)
            -> cutscene interpreter FUN_002c5ba0(play, csCtx, script)  // advances play+0x2298 csCtx
```

There is **no second, independent "legacy cutscene teardown" state machine** anywhere in this
chain. `FUN_002c5ba0` is the *entire* cutscene subsystem on 3DS: it walks the `" BDQ"`-format script
(`cutscene_format.md`) opcode-by-opcode every tick, including the opcode `0x3E8` "destination"
command that on 3DS is the **loop-restart marker** (title cs frame 2400 wraps back to frame 0 —
`title_gamestate_driver.md` §2 "Title cs instance" + the 2026-07-09 cs-frame-rate correction). It
does not hand off to any separate "cutscene has ended, restore camera/gameMode/etc." handler, because
the title cs is authored to loop forever until a confirm press — there is no "end" state to tear down
into on real hardware.

**SoH's `CutsceneContext` + `sCsStateHandlers2` dispatch (`z_demo.c`, `func_80068C3C` ->
`func_80068DC0` for the `CS_STATE_UNSKIPPABLE_INIT` -> `CS_STATE_IDLE` transition) is N64-engine
machinery with no OoT3D/3DS equivalent in this call chain at all.** It exists in SoH purely to run
N64 Ocarina of Time's *own* authored cutscenes (escape sequences, cutscene-triggered scene
transitions elsewhere in the game) — a completely different, unrelated subsystem from the ported
OoT3D title cs interpreter (`Zelda3D_TitleCsAdvance` / `TitlePresentation`, which is SoH3D's own
from-scratch port of `FUN_002c5ba0`'s opcode stream, not a reuse of `CutsceneContext`).

## Why SoH3D's title still touches func_80068DC0 at all

SoH3D's title runs on an **aliased N64 script** (the N64 `spot00`/attract-demo cs, loaded because
`Play_Init`'s N64-shaped scene-command table still processes the vanilla scene's own authored
cutscene commands even though the *visuals* are driven by the ported OoT3D cs cursor — see the
in-code comment at `z_demo.c`'s `func_80068C3C`, lines ~2133-2148, for the terminator-less-script
skip case this interacts with). That aliased N64 script's own `cutsceneEndFrame` is far shorter than
the OoT3D title's 2400-frame loop, so `csCtx->frames` outruns it and `csCtx->state` permanently parks
at `CS_STATE_UNSKIPPABLE_INIT`, which re-dispatches `func_80068DC0` **every subsequent frame** for
the rest of the (much longer) ported title run. Each of those frames unconditionally wrote
`gSaveContext.gameMode = GAMEMODE_NORMAL` — clobbering whatever the ported title's own skip logic
(`title_logo.cpp`'s `fireSkipTransition`, which sets `GAMEMODE_FILE_SELECT` on a post-mount confirm
press) had set one frame earlier. Symptom: START did nothing at the title after the rider mounts,
because by the time the SoH transition-fade instance finished, `z_play.c`'s
`gameMode != GAMEMODE_FILE_SELECT` check saw `NORMAL` and reloaded the same scene instead of handing
off to `FileChoose`.

Since (per the ground truth above) this free-running teardown has **no 3DS-side counterpart driving
anything real during the title** — the 3DS binary's actual per-frame state is entirely owned by
`Play_Main`'s `Actor_UpdateAll` + the OoT3D cs interpreter, which SoH3D's `TitlePresentation` module
already independently ports — the correct fix is for this legacy-N64-only machinery to simply not
touch `gameMode` while the ported title owns the `PlayState`. This is the exact same seam already
used, for the identical reason, at two other call sites in the same file:

- `Cutscene_Command_Terminator` (`z_demo.c` ~line 531) — suppresses the aliased N64 script's own
  scene-exit switch so `play->sceneNum` never leaves the title scene while the ported cs is active.
- `EnMag_Update` (`z_en_mag.c`, referenced at the same z_demo.c comment) — suppresses the N64
  attract-demo's own press-START handler so it doesn't race the ported title's own skip.

`func_80068DC0`'s `!Zelda3D_Title_IsActive()` gate (commit `37c3475a`) is the third, consistent
instance of the same suppression, not a novel one-off. No further code-structure refactor is
warranted: `Zelda3D_Title_IsActive()` is already the title module's own exposed decision surface
(`title_presentation.h`/`.cpp`, `TitlePresentation::isActive()`), and z_demo.c's three call sites
each just ask it a single boolean question — the actual "is the ported title running" logic lives
in exactly one place (`TitlePresentation`), not duplicated or reimplemented in z_demo.c.

## Anchors

- `Play_Main` = `FUN_0045238c`, `GameState_Update` = `FUN_00417014`, `Graph_ThreadEntry` =
  `FUN_00416208`, cutscene interpreter = `FUN_002c5ba0` — all per `title_gamestate_driver.md` §1-2
  (prior RE, re-cited here).
- SoH3D side: `Shipwright/soh/src/code/z_demo.c` `func_80068C3C`/`func_80068DC0`
  (`sCsStateHandlers2[CS_STATE_UNSKIPPABLE_INIT]`), `Cutscene_Command_Terminator` (~line 502).
- SoH3D title module: `Shipwright/soh/src/zelda3d/behaviors/title/title_presentation.{h,cpp}`
  (`Zelda3D_Title_IsActive`), `title_logo.cpp` (`fireSkipTransition`).
