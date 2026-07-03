# OoT3D boot → title-demo dispatch — thread and event-loop shape

**Status:** partial — the thread body + event-loop are pinned; the specific
event handler that runs the title-demo tick is the next hop.

## Anchor: the frame-counter writer

The title-demo master cursor at `0x0054CC3C` (RE'd in
`docs/title_gamestate.md`) is incremented every title-demo frame. Live
watchpoint on that VA (2026-07-04, via `soh3d_harness watch`) pins the
writer instruction:

```
pc  = 0x003fd444        // Thumb/ARM insn — one specific "streq r2, [r1, #8]"
lr  = 0x00415b3c
sp  = 0x005b60c0        // stable across frames — same thread every tick
r0  = 0x00000400        // task id predicate (writer only fires when r0==0x400)
r1  = 0x0054cc34        // pool literal — base of the (fn_ptr, arg, counter, ...) triplet
```

Static ARM decode of the writer fn body confirms it:

```asm
0x003fd444  ldr   r1, [pc, #0x24]      ; r1 = 0x0054cc34
0x003fd448  cmp   r0, #0x400
0x003fd44c  ldreq r2, [r1, #0x8]        ; r2 = *(0x0054cc3c)
0x003fd450  addeq r2, r2, #0x1
0x003fd454  streq r2, [r1, #0x8]        ; *(0x0054cc3c) = r2 + 1     ← +1/frame
0x003fd458  ldr   r2, [r1]              ; r2 = *(0x0054cc34)          fn ptr
0x003fd45c  cmp   r2, #0
0x003fd460  beq   +8
0x003fd464  ldr   r1, [r1, #0x4]        ; r1 = *(0x0054cc38)          arg
0x003fd468  bx    r2                    ; tail-call *(0x0054cc34)(*(0x0054cc38))
0x003fd46c  bx    lr
0x003fd470  DCD   0x0054cc34
```

**The record at `0x0054cc34..0x0054cc3c` is a generic hook** — three words
`{fn_ptr, arg, counter}`. The writer fn fires for a specific task id (0x400)
and (a) bumps the counter, (b) tail-calls the registered fn pointer if
non-null. The +1/frame at title is the "task 0x400 has fired" bookkeeping.

## The immediate caller (LR)

`lr = 0x00415b3c` points at the instruction AFTER a `bxne r1` at
`0x00415b38`, inside a small dispatch stub `0x00415b24..0x00415b64`:

```asm
0x00415b24  push  {r4, lr}
0x00415b28  ldr   r4, [pc, #0x34]       ; r4 = 0x005a6f30 (dispatch state base)
0x00415b2c  ldr   r1, [r4, #0x15c]      ; r1 = *(0x005A708C)   fn ptr for task 0x400
0x00415b30  cmp   r1, #0
0x00415b34  movne r0, #0x400            ; task id
0x00415b38  bxne  r1                    ; tail-call fn
0x00415b3c  ldr   r0, [r4, #0x154]      ; (fallthrough: next task setup)
...
```

Two facts fall out:
1. **`0x005A6F30` is the dispatch-state struct**. Fields at `+0x154`,
   `+0x158`, `+0x15c`, `+0x160` are the per-task fn-pointer slots for task
   ids 0x400..0x403. This struct is the **task-table object** owned by the
   thread whose SP is around `0x005b60c0`.
2. The stub at `0x00415b24` handles one task; siblings at `0x00415b68`,
   `0x00415aa8`, etc. are the same shape for other task slots.

## The event-loop thread (stack walk)

Stack window at write-time (via `hits`, extended by
`watchhook.cpp:stack_words[16]`):

```
[sp+0x00] = 0x005b50b0                  saved r4
[sp+0x04] = 0x00401dbc                  ← saved LR   → inside FUN_00401c00 (0x00401c00..0x00401e40)
[sp+0x3c] = 0x00447f60                  ← further-up LR → inside FUN_00447f48
```

Both callers decompile cleanly.

### FUN_00447f48 (`build/decomp/00447f48.c`) — a generic thread body

```c
undefined4 FUN_00447f48(undefined4* param_1) {
    FUN_00435f68();                     // thread setup / sync
    (*(code*)param_1[1])(param_1[2], param_1[3]);   // run "thread main" fn
    (*(code*)*param_1)(param_1[3]);                 // run "thread cleanup" fn
    if (*(char*)(param_1 + 5) != '\0') {
        FUN_004350ac();
    }
    software_interrupt(9);              // svcExitThread
    return uVar1;
}
```

Signature: `svcExitThread` at the end → this fn is a **thread entry
point**. `param_1` is the thread arg struct: `{cleanup_fn, main_fn,
main_arg0, main_arg1, ?, cleanup_flag}`. The main-thread bringup calls
`svcCreateThread(..., FUN_00447f48, &thread_args, stack_top, ...)` at
boot; game logic runs inside the `param_1[1](...)` call.

### FUN_00401c00 (`build/decomp/00401c00.c`) — the event-dispatch loop

The fn that owns SP=~0x005b6xxx and calls into the task-dispatch stubs
above. Shape (relevant hunk, cleaned):

```c
void FUN_00401c00(int* param_1) {
    // param_1 = thread-context struct (owns event queue, task table)
    while (1) {
        local_2c = param_1[0xb];
        FUN_0030dbd4(auStack_28, &local_2c, ...);    // svcWaitSync-style
        software_interrupt(0x19);                    // svcSendSyncRequest — IPC to service
        if (*(char*)((int)param_1 + 0x77)) return;   // exit flag

        while (1) {
            // Dequeue one event byte from ring buffer at param_1[0xd].
            byte* q = (byte*)param_1[0xd];
            u32 event_code = (u32)q[*q + 0xc];       // ← task id encoded
            // ... queue bookkeeping (index update, wraparound) ...
            param_1[2] += 1;                          // task-in-flight counter
            // Dispatch: fn-ptr table lives INSIDE the thread-context struct.
            if ((code*)param_1[event_code + 4] != 0) {
                (*(code*)param_1[event_code + 4])();  // <— per-frame task fn
            }
            param_1[0x76] = 2;                        // task-completed state
            if (--param_1[2] == 0) {                  // last task done
                param_1[1] = 0;
                software_interrupt(0x22);             // svcSignalEvent
            }
        }
    }
}
```

This is a **framework-driven event thread**: wait → drain event queue →
dispatch each event to `param_1[event_code + 4]()` → signal completion.
No direct main-loop. Each frame produces a set of events; the title-demo
tick is one of the fns installed in `param_1[event_code + 4]`.

## Structural picture

```
                  ┌──────────────────────────────────┐
                  │  boot: svcCreateThread(          │
                  │      entry = FUN_00447f48,       │
                  │      arg   = thread_args_ptr,    │
                  │      stack = ...0x005b6xxx )      │
                  └────────────┬─────────────────────┘
                               │
                    thread starts running
                               ▼
    FUN_00447f48 (thread body wrapper)
      ├─ FUN_00435f68()                     // sync setup
      ├─ (*param_1[1])(param_1[2], param_1[3])   // thread main → FUN_00401c00
      │      │
      │      ▼
      │  FUN_00401c00 (event-dispatch loop)
      │    ├─ wait on svcWaitSynchronization / svcSendSyncRequest
      │    └─ per event: (*ctx[event_code + 4])()   ← per-frame task fn
      │           │
      │           ▼
      │       …one of these tasks is the title-demo tick…
      │           │
      │           ▼
      │       eventually reaches:
      │       0x00415b24 stub → bxne 0x005A6F30[0x15c]
      │                          │
      │                          ▼
      │       0x003fd444 hook — cmp r0,#0x400; str +1 to 0x0054CC3C
      │                          │
      │                          ▼
      │       tail-calls *(0x0054cc34)(arg)   — the real title-tick fn
      │
      ├─ (**param_1)(param_1[3])            // cleanup
      └─ svcExitThread
```

## Where the title-demo tick actually lives — next hop

The +1/frame writer is just the *bookkeeping* leg. The **actual title-tick
fn pointer** is at `*(0x0054CC34)` — installed at boot into that slot and
tail-called after the bump. That installer is what wires the title-demo
into the event loop.

Attack:
1. Watch `0x0054CC34` (the fn-ptr slot). Its writer's PC + LR is the
   INSTALLER of the title-demo tick. This should catch it once at boot.
2. Or: read `*(0x0054CC34)` live from the harness (`r32 0x0054CC34`) — it
   is the actual title-tick fn VA. Decompile that fn directly.
3. Complementary: watch `0x005A6F30 + 0x15c` (the sibling task slot) and
   the installer of the whole task table.

Landing site once RE'd: the top-level "opening/title mode Main" that the
prior `docs/title_gamestate.md` marks as OPEN.

## The pose-writer path — different thread, different SP

Watchpoint on pose table B (Link SkelAnime, VA `0x005A54D8`) captures a
DIFFERENT thread from the framework event loop above:

```
pc  = 0x002bb388                        // vstr insn — the pose.x = 0.0f write
lr  = 0x0048bad0                        // return-into FUN_0048ba78
sp  = 0x0ffffc78                        // ← heap-region stack, NOT the 0x005b6xxx event-loop thread
r0  = 0x0ffffc78                        // (SP echoed)
r1  = 0x005a54d8                        // pose-table entry ptr
```

Deep stack window (64 words captured via extended `watchhook.cpp:stack_words[64]`):

```
[sp+0x00] = 087ed3a4                    heap ptr (anim instance?)
[sp+0x14] = 002bda68                    return from BL @ 002bda64 → FUN_0048ba78   (inside FUN_002bd9ec)
[sp+0x64] = 002bb3b4                    return-inside FUN_002bb34c  (writer fn)
[sp+0xa8] = 001b41c4                    return-inside FUN_001b3db4  (candidate title-Link actor update, 2220 bytes)
[sp+0xd0] = 00336638                    return-inside FUN_003365b0  (Player-shaped update fn, 1460 bytes;
                                                                    param_1 references play+0x5c2d = transitionTrigger
                                                                    → this is called with PlayState arg)
```

## Chain identified — bottom to top

```
0x002bb388  vstr s0, [r1]              ; write pose.x = 0.0f  ← writer instruction
     ↑
FUN_002bb34c (per-limb writer, 228 bytes) — writes {pos.x, pos.y, pos.z} to a limb
     ↑ BL from
FUN_00347550 (per-entry keyframe evaluator, prior-RE'd)
     ↑ BL from
FUN_002bd9ec (pose eval driver, 832 bytes, prior-RE'd)
     BL @ 002bda64 → FUN_0048ba78 (inside the pose driver's inner loop)
     ↑
FUN_0048ba78 (SkelAnime per-limb loop, 116 bytes — walks limbs, calls per-entry evaluator)
     ↑ (13 static callers, incl. FUN_002bd9ec's BL @ 002bda64)
FUN_001b3db4 (candidate title-Link actor update, 2220 bytes)
     Accesses actor fields at +0x36, +0x82, +0x90, +0xe54, +0xe70 → Player-shaped
     ↑
FUN_003365b0 (Player-update sub-fn, 1460 bytes)
     Accesses param_1+0x5c2d (transitionTrigger) → PlayState arg
     Accesses param_2+0x1710/+0x12bc/+0x248a/+0x249c → Player arg
     ↑
     ??? — needs another watchpoint or stack extension to walk
```

## Key facts established

1. **Update thread ≠ framework thread.** The pose writer runs on a
   different thread (SP ~`0x0fff*`) than the 0x0054CC3C frame-counter
   dispatcher (SP `0x005b60c0`). The two-thread model matches N64 OoT's
   `Graph_ThreadEntry` / audio / etc.
2. **The Player-update code IS running at title-demo**, called with a
   PlayState-shaped `param_1` — so a stack-scoped or inline
   PlayState-shaped context DOES exist for the title-Link, even though
   `gPlayState = 0`. Prior doc `title_gamestate.md`'s "inline title
   context at 0x0050AF34" holds that context.
3. **The title-Link IS the ACTOR being pose-evaluated** — FUN_001b3db4 /
   FUN_003365b0 are Player-shaped, so their arg is the title-Link
   pre-allocated at a fixed VA (per prior finding, likely near
   `0x005AFFB0` where the rider world-pos lives).

## Next hop — the actual "title mode Main"

The chain above ends at FUN_003365b0 which is CALLED BY... something we
haven't captured. Two attacks:

1. **Deeper stack window.** Increase `stack_words[]` further, or watch a
   different actor field that triggers earlier in the update path so the
   captured chain reaches higher.
2. **Static caller-search on FUN_003365b0.** Same technique as for
   FUN_002bd9ec above — find every BL to `0x003365b0` and check which
   candidate runs at title (via a second watchpoint on their entry).

Static-caller search results (via `bl_scan` — same primitive used for
FUN_0048ba78): FUN_003365b0 has THREE static callers:

| BL PC       | containing fn (start, size)        |
|-------------|------------------------------------|
| 0x00208bbc  | FUN_002085a8 (1868 bytes)          |
| 0x00251f8c  | FUN_00250ad0 (**10020 bytes**)     |
| 0x0032f270  | FUN_0032eeb4 (2800 bytes)          |

FUN_00250ad0 at 10 KB is the strongest candidate for `Player_Update` /
`Player_Main` — matches N64 OoT's monolithic Player state machine
(z_player.c's `Player_Update` is ~1000+ lines). The other two callers are
plausible sub-mode variants (mount/dismount, cutscene-triggered player
tick, etc).

Next hop: decomp all three, then watch each fn's entry with a `hitclear`
between them to determine which of the three runs at title. That
identifies the specific Player-tick path used by the title-demo.

Even further up (the "opening/title mode Main" itself) requires walking
the chain one more level — that fn calls one of these Player fns AFTER
setting up the PlayState-shaped context at `0x0050AF34`. Doable with the
same stack-window + watchpoint technique.

The top of that chain, when found, IS the "Opening_Main-equivalent" the
prior sessions marked as OPEN.


## Not the "opening main" — but the framework layer BELOW it

The `docs/title_gamestate.md` "Opening_Main-equivalent (open question)"
finding is unchanged: this thread and event loop are FRAMEWORK code — a
generic 3DS applet event-dispatch pattern. The title-demo runs on TOP of
this framework as one of many registered task fns. The next-hop above
identifies WHICH task fn is the title-demo tick; from there we can locate
the N64 `Opening_Main`-equivalent that drives the scene evaluator, camera
spline, and actor pose evaluators observed in the prior sessions'
findings.
