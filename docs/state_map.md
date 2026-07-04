# OoT3D 3DS state-init map — RE'd 2026-07-04

The 3DS engine uses a state-init table at `.rodata 0x00435600` (11
fn ptrs, 4 bytes each). Each fn takes a single `PlayState* param_1`
and returns a `undefined4` state id for the next state to dispatch.

Return values (deduced from decomps):
  1  — retry current state
  2  — re-dispatch (usually meaning "re-run state 2 which is the
        scene-transition dispatcher")
  3  — advance to next scene-load step

The states form a scene-load pipeline. Each does one setup step then
hands off to the next. There isn't a separate "title-demo playback"
state — Az's title runs through STATE 3 (FUN_004489f8) tick-by-tick,
which chains into unrecognized-Thumb helpers for actual demo advance.

## The full map

| State | VA          | Role                                             | Ports? |
|-------|-------------|--------------------------------------------------|--------|
| 0     | 0x00449048  | First-boot asset loader (140B)                    |        |
| 1     | 0x004490d8  | Scene init (calls Scene_ExecuteCommands + Env_Init) | ported (z_scene.c) |
| 2     | 0x004487f0  | Scene-transition dispatcher for special entrance codes; explicitly handles scene 0x51 (title) and 0x6B (title live). Returns state 3 when entering title. | not yet |
| 3     | 0x004489f8  | **Title playback tick** — input-skip check (BTN 0x21/0x22 or 0x2D/0x2E combo), transitions to file-select on skip, otherwise continues playback via chained Thumb helpers at func_0x00452348 / func_0x0045719c / func_0x00451a4c. Zeroes `param_1 + 0x7f12` (the CS runner state u8) each frame — so the CS runner NEVER ADVANCES during title. | not yet |
| 4     | 0x00448bb4  | Actor spawn state — calls Actor_SpawnList via `FUN_0044e7a0(play, play+0x208c actorCtx, spawnList)` | not yet |
| 5     | 0x00448c68  | Small (18-line) init                              |        |
| 6     | 0x00448c88  | Actor/collision setup (67 lines)                  |        |
| 7     | 0x00448e38  | Actor init (18 lines)                             |        |
| 8     | 0x00448ec8  | Actor context init (16 lines)                     |        |
| 9     | 0x00449420  | Play_Init (installs Play_Main handler)             | previously RE'd, not ported |
| 10    | 0x00449238  | Title-logo fade-in (writes UI color, sets fade)   | not yet |

## Key finding: title playback isn't CS-driven

State 3 (FUN_004489f8) line 36 does:

    *(u8 *)(param_1 + 0x7f12) = 0;

which zeroes the CS runner state u8 EVERY frame. So no matter how
many frames title runs, the CS runner (state machine at
`param_1 + 0x7f12` inside Actor_UpdateAll) never advances past
state 0. That means **no CS_CMD_SET_LIGHTING for title fires** —
falsifies the CS-driven title lighting hypothesis at the source.

The Hyrule flyover camera moves + actor animations must be driven
by the chained Thumb helpers (`func_0x00452348`, `func_0x0045719c`,
`func_0x00454914`) which Ghidra hasn't recognized as functions —
they need force-disasm via DisasmThumb.py before they can be
decompiled + traced.

## What this means for the port

- SoH3D's title-parity target is NOT "port CS_CMD_SET_LIGHTING for
  title" — there's nothing to port. Az runs a completely different
  playback engine at title.
- The palette lookup mechanism we DID port (Scene_CmdLightSettingsList
  attaches the palette; Env_Update reads env->currentLightSetting
  and indexes) is real and works — but at Az's title, the slot idx
  value in env+0xA5 is set by whatever the state-3 helpers write,
  NOT by a CS.
- The state-3 helpers (0x00452348, 0x0045719c, 0x00451a4c) are the
  next RE targets. If any of them writes to env+0xA5, that's the
  title-lighting source.

## Pool constant — the GameStateGlobal at 0x00588e58

Multiple state-init fns reference this global via LDR pool loads:

- Env_Update reassigns R7 from prologue value to `*(0x00450390)` =
  0x00588e58 at PC 0x0045ddac — then uses `[R7, #0xa4]` and
  `[R7, #0xa8]` as u16 fields. So env-parent u16s are at global +
  0xA4 and +0xA8.
- FUN_004489f8 (state 3) reads `*(0x00588e58 + 0xA4)` (s16) and
  branches on -1 / -0x7FFF (magic values).
- FUN_0033b880 (the actor state gate we RE'd earlier) reads other
  fields from this global too.
- FUN_004487f0 (state 2) uses `*(0x00588e58 + 0x5B8)` (u32) as an
  RGBA color source.

So 0x00588e58 is a MAJOR game-manager struct — probably the
equivalent of N64 OoT's `gGlobalCtx` or `GameState` common-header.
Its fields overlap with what the play struct also holds; the
relationship is unclear without deeper RE.

## Files

- build/decomp/00448*.c 00449*.c — all 9 non-Play state init decomps
- build/decomp/003480a8.c — the giant "UI screen builder" fn (1660B)
- build/decomp/targets/state_inits.txt, state_installer.txt
