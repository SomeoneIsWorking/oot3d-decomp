# Graph_ThreadEntry, Play_Init, and the state dispatch — RE'd

**Status:** solved (2026-07-04). This closes the "Graph_ThreadEntry
open" note in `title_gamestate.md`.

## The mainloop chain (top-down)

```
FUN_00447f48         thread body (svcExitThread at end)                     ← spawned at boot
  BL param_1[1]                     ↓
FUN_00415fe4?        thread main entry (partial; unnamed fn)
FUN_004590f8         (2175 bytes)
FUN_00416208         Graph_ThreadEntry                                       ← 644 bytes — main loop
FUN_00417014         GameState_Update: (*gs->main)(gs); gs->frames++         ← 32 bytes
FUN_0045238c         Play_Main(play)                                         ← 524 bytes
```

## FUN_00416208 = Graph_ThreadEntry

Direct N64-OoT structural match. Cleaned shape:

```c
// FUN_00416208 — Graph_ThreadEntry
void Graph_ThreadEntry(void) {
    GameState* gs;
    int next_state_desc = /* boot: first state */;
    do {
        gs = (GameState*)FUN_0035010c(next_state_desc);                 // heap-alloc GameState
        FUN_00343280(gs, next_state_desc);                              // GameState_SetFrameCount
        gs->initFlag = *(u8*)(next_state_desc + 0x30);                  // seed init flag
        FUN_00416f60(gs, next_state_desc[0x18], &frame_ctx);            // call state's init fn ptr
        while (gs->exit == 0) {                                          // per-frame loop
            ... input read, sync ...
            FUN_00417014(gs);                                            // GameState_Update
            FUN_00418b88(..., gs);                                       // render pass
            FUN_0031bebc(...); FUN_0031bd30(...); FUN_0031bb84(...);     // present / swap
        }
        // State transition — pick next descriptor from switch on gs->exitVal:
        next_state_desc = /* one of 8 base+i*0x34 slots */;
    } while (1);
}
```

## The gGameStateOverlayTable — solved

Base VA: **`0x00531af4`** (in .bss — zeroed at boot, populated by
FUN_00416208's setup).

Layout: 9 slots × **0x34 stride = 52 bytes each**. Field offsets
(inferred from Graph_ThreadEntry accesses):

| Offset | Field name    | Meaning                     |
|--------|---------------|-----------------------------|
| +0x00  | `main`        | GameState per-frame fn ptr  |
| +0x04  | `destroy`     | GameState teardown fn ptr   |
| +0x08  | `nextStateId` | selector for next transition |
| +0x0c  | `initFn`      | state init fn ptr           |
| +0x10  | `size`        | GameState heap size         |
| +0x14  | ...           | (state-specific fields)     |
| +0x2c  | `overlay ptr` | (as used at param_1[0xb] in dispatch) |
| +0x30  | `initFlag`    | u8 flag seeded into gs      |

Prior doc's "compact gGameStateOverlayTable-shaped array not found" is
falsified — table has 9 entries at fixed VA. Prior scan filtered wrong
shape (looked for `code-ptr@+0x18, code-ptr@+0x1C, size@+0x2C` = SoH
N64 shape; 3DS shape is `main@+0x00, destroy@+0x04, ..., init@+0x0c`).

## State init fn pointer table

At **`.rodata` VA `0x00435600`**, a table of 11 state-init fn ptrs:

```
0x00435600: 0x00449048   state 0 init
0x00435604: 0x004490d8   state 1 init
0x00435608: 0x004487f0   state 2 init
0x0043560c: 0x004489f8   state 3 init
0x00435610: 0x00448bb4   state 4 init
0x00435614: 0x00448c68   state 5 init
0x00435618: 0x00448c88   state 6 init
0x0043561c: 0x00448e38   state 7 init
0x00435620: 0x00448ec8   state 8 init
0x00435624: 0x00449420   Play_Init         ← ← ← the one that installs Play_Main
0x00435628: 0x00449238   state 10 init
0x0043562c: 0x0044e290   Play_Destroy      ← ← ← play[0x08] = this
```

## FUN_00449420 = Play_Init

Confirmed via:
- Only pool ref to `0x0045238c` (Play_Main) is at `0x00449918`, inside
  this fn.
- Installs `gs->main = 0x0045238c` at line 199 of the decomp.
- Installs the same `*(0x00539F98) = play + 0x14` per-frame global that
  `Play_Main` maintains.
- Contains **explicit `sceneNum == 0x51` (title/demo) branches** at
  three sites (lines 75, 132, 153 of `build/decomp/00449420.c`) — this
  is where the title-demo-specific setup runs.

The 3DS-specific PlayState field offsets uncovered here:

| Offset  | Field        | Meaning                                    |
|---------|--------------|--------------------------------------------|
| +0x000  | header       | stack_top / self-ref                       |
| +0x004  | `main`       | GameState per-frame fn ptr (= Play_Main)   |
| +0x008  | `destroy`    | GameState teardown fn ptr (= Play_Destroy) |
| +0x014  | ???          | live-play-ctx global stores play+0x14      |
| +0x0f8  | `frames`     | frame counter — incremented by GameState_Update |
| +0x101  | `initFlag`   | =2 after Play_Init                          |
| +0x104  | `sceneNum`   | 0x51 = title/demo                           |
| +0x208c | ...          | actorCtx-adjacent (per prior RE)            |
| +0x2400 | ...          | Player-substruct base (via Player_Update local_60 = play+0x2400) |
| +0x43dc | `postFxCount`| delayed-effect list count (Play_Main iterates while nonzero) |

(N64 OoT has sceneNum at `play+0xA4`; 3DS uses `play+0x104`. Confirmed
via Play_Init's `*(short*)(param_1 + 0x104) == 0x51` compares.)

## Scene 0x51 vs the actual live scene id

Play_Init's three `sceneNum == 0x51` branches special-case the title/demo
setup path, but at SETTLED title (harness `r16 play+0x104`) the live
sceneNum reads **`0x6b`**, not 0x51. Interpretation: 0x51 is the "boot
into title-demo" trigger id (matches the inline title UI context's
`+0x6c = 0x51`); after Play_Init dispatches, the scene switches to
0x6b — the actual Hyrule Field flyover scene loaded from the ROM.

Confirmed live:
```
r32 play+0x00c = 0        (initFn slot cleared after init runs)
r16 play+0x104 = 0x006b   (live scene id — NOT 0x51)
r8  play+0x101 = 0x02     (initFlag = 2 — Play_Init did run)
```

So the sequence at boot is:
1. Graph_ThreadEntry picks state with initFn = Play_Init (with a
   sceneNum=0x51 hint plumbed through the state descriptor).
2. Play_Init sees sceneNum=0x51 → takes title-demo branch, sets up
   scene loader for the actual Hyrule Field demo scene (0x6b).
3. From then on Play_Main runs on scene 0x6b.

## What SoH3D needs to know to port the title-demo

The port arc is now straightforward:
1. **Enter scene 0x6b** (the actual Hyrule Field demo) via the same
   mechanism SoH uses for any scene warp (transitionTrigger +
   nextEntranceIndex).
2. **Populate title-Link + Epona** as pre-allocated actors in the scene.
   Prior sessions found their SkelAnime tables at `0x005A54D8` (Link)
   and `0x005642D0` (Epona) — these are ALLOCATED WITHIN the PlayState
   at fixed offsets (not truly static `.data`; they're inside the play
   struct at 0x0871E840 + delta).
3. **Play_Main takes it from there** — Actor_UpdateAll dispatches to
   Player_Update, pose eval fires, scene renders.

No bespoke "opening_main" is needed. The title-demo IS just Play_Main
running scene 0x51 with the specific title-demo scripts (camera
spline, actor cutscenes) baked into the scene data.

## Which entry into title-demo happens at boot?

Prior doc marks this OPEN. Now known: boot init runs FUN_00415fe4 →
FUN_004590f8 → Graph_ThreadEntry (FUN_00416208), which picks the
initial state descriptor. That descriptor's `initFn` is one of the 11
in the fn-ptr table at 0x00435600.

Fastest path to finding which: watch `0x00531af4 + 0x0c` (the current
state's initFn slot) at boot; first write pins the boot-entry state.
Or dump `gs[0x0c]` live at title (should equal Play_Init's addr =
`0x00449420`) — if it does, boot goes DIRECTLY into Play_Init with
scene 0x51.
