# OoT3D title-screen gamestate — FALSIFIED prior finding + full chain (v2)

**Status:** SOLVED (2026-07-04). This document supersedes the earlier
`title_gamestate.md`'s conclusion that "the title screen is not a Play
gamestate on 3DS." That was wrong — misled by a stale sentinel slot.

## The falsified fact

Prior doc: **`gPlayState @ 0x0050AF34` stays 0 throughout title. It only
becomes a valid PlayState pointer after entering a real gameplay scene**.
→ therefore title is NOT a Play state.

Live check today (`r32 0x0050AF34` at settled title): still reads 0.
That much is true. But the conclusion drawn from it — "no PlayState is
active" — is wrong.

## What's actually happening

OoT3D uses **two different globals** to track the current Play context:

| VA           | Meaning                                     | Value at title    |
|--------------|---------------------------------------------|-------------------|
| `0x0050AF34` | Legacy `gPlayState` slot — inline UI ctx    | `0` (always)      |
| `0x00539F98` | Play_Main's live `play + 0x14` pointer       | `0x0871E854` (=play+0x14) |

`0x00539F98` is installed by `Play_Main` every frame:

```c
// FUN_0045238c = Play_Main(PlayState* play)
void Play_Main(int play) {
    *(int*)(0x00539F98) = play + 0x14;   // "current-play-context" installer
    // ... scene delayed-effect list ...
    FUN_002e4514(play);                   // early tick
    FUN_002e2e60(play);                   // Actor_UpdateAll (5372 bytes)
    FUN_002e25f0(play);                   // post-actor tick
}
```

At title-demo, `Play_Main` runs on the PlayState struct at
`0x0871E840`:

```
play[0x00] = 0x0fffff94        stack_top / self-ref
play[0x04] = 0x0045238c        = Play_Main         ← GameState::main fn ptr
play[0x08] = 0x0044e290        = Play_Destroy / Play_Init
play[0x0c] = 0                 init flag
play[0x14] = 0                 gPlayState-like field @ (play+0x14) — read via 0x00539F98
```

The inline title context at `0x0050AF34` (RE'd in prior doc) still
exists — but it's a **UI SUBSYSTEM state**, not the PlayState. It holds
title-screen UI sprite factories (see prior doc's field map for
`+0x14..+0x30`), a `sceneNum = 0x51` at `+0x6c`, and an `active` flag at
`+0x78`. It runs ALONGSIDE the real Play state.

## Full boot → title-demo call chain

Traced via a 256-word stack window on a live watchpoint on the Link
SkelAnime pose table B (`0x005A54D8`). Return addresses read off the
stack, resolved via Ghidra containment.

```
BOOT (svcCreateThread @ FUN_00447f48, arg = thread_args)
  │
FUN_00447f48         (thread body: setup → main → cleanup → svcExitThread)
  │  BL param_1[1] with param_1[2..3]
  ▼
… framework mainloop chain (FUN_00415fe4 / FUN_004590f8 /
  FUN_00416208 / FUN_00417014 — top of the update pump) …
  │
  ▼
FUN_0045238c         Play_Main(play)                    ← 524 bytes
  │  BL FUN_002e2e60(play)
  ▼
FUN_002e2e60         Actor_UpdateAll(play)              ← 5372 bytes
  │  BL FUN_00461324(actor_list, ...)
  ▼
FUN_00461324         per-actor update dispatch          ← 1508 bytes
  │  BL actor->update(actor, play)  — fn-ptr call
  │  For Player: actor->update = FUN_001e1b54
  ▼
FUN_001e1b54         Player_Update(player, play)        ← 628 bytes, ZERO static callers (fn-ptr only)
  │  BL FUN_00250ad0(player, play, ???)
  ▼
FUN_00250ad0         Player_UpdateCommon(...)           ← 10020 bytes — the giant Player state machine
  │  BL FUN_003365b0(play, player, arg3, arg4)
  ▼
FUN_003365b0         Player sub-fn (input? action?)     ← 1460 bytes
  │  BL FUN_001b3db4(player, play)
  ▼
FUN_001b3db4         actor-side sub-fn                  ← 2220 bytes
  │  BL FUN_002b7fd0 → chained
  ▼
FUN_002b7fd0         SkelAnime tick wrapper             ← 4288 bytes
  │  BL FUN_002bb34c
  ▼
FUN_002bb34c         per-limb pose writer               ← 228 bytes
  │  vstr s0, [r1]  ← writes pose.x = 0.0f into 0x005A54D8 (pose table B, entry 0)
  ▼
POSE TABLE B populated per frame
```

(The BL between FUN_002bb34c and FUN_00250ad0 has an intermediate through
`FUN_002bd9ec / FUN_0048ba78 / FUN_00347550` — those are the pose-eval
sub-chain from prior RE, elided here for clarity but still on the stack.)

## What this means for the SoH3D port

The title-demo is a **normal Play state** with:
1. Scene = **0x51** (title/demo — matches N64 `SCENE_TESTROOM`)
2. PlayState instance = `0x0871E840` (statically-reserved slot with
   Play_Main preserved from boot)
3. Player actor at a pre-allocated slot (its update fn = FUN_001e1b54)
4. Epona actor at a pre-allocated slot (per prior RE, pose table A at
   `0x005642D0`)
5. A UI-subsystem context at `0x0050AF34` running the title-screen
   sprites (Zelda logo, "Press Start", etc.)

**SoH3D can port the title-demo without emulating a bespoke
opening-mode dispatcher**. Its own `Play_Main` (already in
`Shipwright/soh/src/code/z_play.c`) is the right vessel. What's needed:
- Load scene 0x51 (title/demo scene) — needs the OoT3D scene file
- Spawn title Link + Epona at the correct entrance
- Drive the scene's cutscene/demo playback

The prior sessions' work on pose tables A / B, camera basis at
`0x005BE6D4`, rider world-pos at `0x005AFFB0`, and the master cursor at
`0x0054CC3C` all fit into this picture — they're fields OF a
scene-0x51 Play state, populated by Play_Main → Actor_UpdateAll →
Player_Update per frame, exactly like a real gameplay tick.

## Verification queries (harness)

```
r32 0x0050AF34         → 0          (legacy sentinel, stays 0)
r32 0x00539F98         → 0x0871E854 (LIVE play+0x14, non-zero at title)
r32 0x0871E840         → 0x0fffff94 (stack_top)
r32 0x0871E844         → 0x0045238c = Play_Main
r32 0x0871E848         → 0x0044e290 = Play_Destroy/Play_Init
r32 0x0050afa0         → 0x00000051 (title-scene id in inline UI ctx)
```

## Follow-ons that fall out

1. **Read `play->sceneCtx` / `play->actorCtx`** — offsets from the N64
   PlayState struct should apply directly once we know `play = 0x0871E840`.
   Prior RE: `actorCtx @ play + 0x208C` — so `0x08720Bcc` should hold the
   actor list heads. Live-read to confirm.
2. **The framework mainloop chain** (FUN_00417014 → FUN_00416208 →
   FUN_004590f8 → FUN_00415fe4) is what actually calls `Play_Main` each
   frame — this is N64 `Graph_ThreadEntry`-equivalent. Prior doc marked
   `Graph_ThreadEntry` as OPEN; it's now on the immediate landing path.
3. **The "opening/title mode Main"** the prior doc marked OPEN — no
   separate fn exists. Play_Main IS it.

## Prior falsifications, corrected

- **"gGameStateOverlayTable-shaped array not found."** Correct — the
  3DS binary is monolithic and there's likely a smaller switch/dispatch
  in the framework mainloop chain instead. But the *conclusion* that
  "no per-state Main dispatch exists" was wrong: `Play_Main` fn ptr is
  installed in `play[0x04]`, and the framework calls it via that ptr.
- **"The demo is driven by a controller that doesn't share the
  GameState-header shape."** Wrong — it shares the exact same shape.
  0x0871e840 IS the header (self-ptr, main fn ptr, destroy fn ptr).
- **"Loadstate is the RE-driven way for gameplay parity; title is
  structurally unreachable."** Partially wrong — title IS a Play state,
  so structural parity IS achievable, not just visual-only.
