# Title-camera + rider WORLD-POS writer chains — IDENTIFIED via JIT watchpoint

Static RE with `FindMovwMovtWriters.py` + Ghidra decomp of every scanner-
surfaced candidate ruled all of them out as red herrings (see
`docs/title_camera_containing_struct.md`). Definitive attack: memory-
write watchpoint via Azahar's `MemorySystem::RegisterWatchpoint` +
soh3d_harness's `Soh3d_OnMemoryWrite` hook (both already in-tree).

Driver: `soh3d/scratch/title_writer_watch.py`. Registers 12-byte
watches on `0x005BE6D4` (cam basis eye) and `0x005AFFB0` (rider
world.pos), advances 10 frames at settled title, dumps writer PC + LR.

## Live result

```
=== cam-basis-eye @ 0x005be6d4: 32 write hits, 1 unique PC ===
  pc=0x004235d4  count=32
  #0: vaddr=0x005be6d4 size=4 data=0xc57e77ea pc=0x004235d4 lr=0x004235d4
  #1: vaddr=0x005be6d8 size=4 data=0x42674240 pc=0x004235d4 lr=0x004235d4
  #2: vaddr=0x005be6dc size=4 data=0x45a30a6e pc=0x004235d4 lr=0x004235d4
  ...

=== actor-world-pos @ 0x005affb0: 6 write hits, 1 unique PC ===
  pc=0x00453614  count=6
  #0: vaddr=0x005affb0 size=4 data=0xc5bbfd7d pc=0x00453614 lr=0x00464814
  #1: vaddr=0x005affb4 size=4 data=0x4236f225 pc=0x00453614 lr=0x00464814
  #2: vaddr=0x005affb8 size=4 data=0x459cfb8e pc=0x00453614 lr=0x00464814
```

**Note on the reported PC/LR fields.** dynarmic's `GetPC()` at a
watchpoint fire reports the last-committed block PC — usually the
instruction AFTER the store, or the return address of a nested call.
Interpretation: LR is the more reliable "who wrote this" identifier
when it's distinct from PC. For the cam-basis-eye, PC == LR because
the writer function `FUN_004235B8` calls its own helper `FUN_0034A80C`
just before the store block (LR is set by that `bl`). For the actor
world-pos, LR=0x00464814 is the return address inside `FUN_004647F0`
after `bl 0x0047E314` — the actual store lives in `FUN_0047E314`.

## Writer chains

### Camera basis eye (0x005BE6D4) — `FUN_004235B8`

Disasm at `0x004235B8`:
```
004235b8  push {r4, r5, lr}
004235bc  mov  r5, r1                 ; r5 = param_2 = &out_pos (Vec3f*)
004235c8  mov  r4, r2                 ; r4 = param_3 = &out_basis (Vec3f[3]*)
004235cc  add  r0, sp, #4             ; r0 = &local[16]  (inverse-mat scratch)
004235d0  bl   0x0034a80c             ; FUN_0034A80C: 4x3 matrix INVERSE
004235d4  vldr s0, [sp, #0x10]
004235d8  vldr s7, [pc, #0xfc]        ; s7 = 1.0f (normalization scale)
004235dc  vstr s0, [r5]               ; out_pos.x
004235e0  vldr s0, [sp, #0x20]
004235e4  vstr s0, [r5, #4]           ; out_pos.y
004235e8  vldr s0, [sp, #0x30]
004235ec  vstr s0, [r5, #8]           ; out_pos.z
                                       ; [then 9 vldr/vstr pairs for the basis]
                                       ; [then normalize each of the 3 basis Vec3fs]
```

Ghidra decomp (`build/decomp/004235b8.c`):
```c
void FUN_004235B8(int param_1, float* param_2, float* param_3) {
    float local_block[16];              // 4x3 (col-major) view matrix inverse
    FUN_0034A80C(local_block, param_1); // param_1 = source view matrix

    *param_2       = local_block[12];   // eye.x   (translation col)
    param_2[1]     = local_block[13];   // eye.y
    param_2[2]     = local_block[14];   // eye.z

    param_3[0..2]  =  local_block[0..2];    // right vector
    param_3[3..5]  =  local_block[4..6];    // up vector
    param_3[6..8]  = -local_block[8..10];   // -forward (dir)

    /* normalize each of the 3 Vec3fs to unit length */
}
```

Written for our case with `param_3 = 0x005BE6D4` — this is the camera
basis eye/dir/up writer.

**Not a spline evaluator itself.** FUN_004235B8 is
`Camera_ViewMatrixToBasis` — it takes an already-produced view matrix
in `param_1` and extracts the eye position + basis vectors from it.
The **spline / animation upstream** is whoever produces the view
matrix passed as `param_1`.

`FUN_0034A80C` (`build/decomp/0034a80c.c`) is the **4x3 matrix
INVERSE** — classic 3x3 cofactor determinant + adjugate, extended with
a translation column negation for the affine part. Not the spline.

### Actor world position (0x005AFFB0) — `FUN_0047E314`

Ghidra decomp:
```c
void FUN_0047E314(SndActor* source, Vec3f* new_pos) {
    if (source->velocity_valid == 0) {              // +0x80
        source->velocity.x = new_pos->x - source->world.pos.x;  // +0x74
        source->velocity.y = new_pos->y - source->world.pos.y;  // +0x78
        source->velocity.z = new_pos->z - source->world.pos.z;  // +0x7C
    }
    source->world.pos.x = new_pos->x;   // +0x68
    source->world.pos.y = new_pos->y;   // +0x6C
    source->world.pos.z = new_pos->z;   // +0x70
    source->velocity_valid = 0;         // +0x80
}
```

**Struct layout revealed** for the containing block at
`0x005AFFB0 - 0x68 = 0x005AFF48`:
- `+0x68 .. +0x74` = world.pos (Vec3f)  ← our watched slot
- `+0x74 .. +0x80` = velocity (Vec3f)   ← integrated from new_pos - old_pos
- `+0x80`         = velocity_valid flag (1 byte)

The prior struct-shape dump in `docs/title_actor_world_pos.md` showed
list-node self-referential pointers at `0x005AFF84 .. 0x005AFF88` —
but I anchored the struct base at 0x005AFF80 there. The real anchor
is 0x005AFF48; the list-node prefix at +0x3C/+0x40 within the actual
struct is one of the mid-struct fields, NOT the head. Prior
interpretation was wrong on where the struct started.

### Caller chain — audio subsystem, not game logic

The write to +0x68 is called from `FUN_004647F0` at 0x00464810:
```
0046480c  mov r0, r4                  ; r0 = param_1 (SndActor*)
00464810  bl  0x47e314                ; FUN_0047E314 (write world.pos)
00464814  ...                         ; return address (matches watchpoint LR)
```

`FUN_004647F0` (`build/decomp/004647f0.c`) is an audio sound-source
per-frame update: reads pitch/reverb/volume state, panning params. It
gets the new position from `*(param_1 + 0x88)` (a `Vec3f*` field of
the sound source that points at the "attached actor's world.pos").

Called from `FUN_004535B8` at 0x00453610 in a loop that dispatches
one call per bit set in a 32-entry active-source bitmask.

**Structural interpretation.** `0x005AFFB0` isn't a game-actor world
position slot. It's the AUDIO subsystem's copy of an attached actor's
world position, used for 3D audio panning / doppler. The game-actor
world pos is stored somewhere in the actor system (currently
inaccessible at title since gPlayState=0), and each frame the audio
source's `+0x88` pointer chases it into the sound source's `+0x68`
slot via FUN_0047E314.

For parity metric purposes: the read at 0x005AFFB0 IS the demo actor's
tracked world position each frame, so the `|Δpos|` metric shipped
in soh3d d7888d5d is meaningful. But porting the trajectory needs the
game-actor's own storage, not this audio copy — whoever writes
`*(source + 0x88)` at bind time is where to look for the game actor.

## Tools committed

- `soh3d/scratch/title_writer_watch.py` — driver.
- `soh3d/tools/soh3d_harness/watchhook.cpp` — already in-tree
  (dynarmic write hook + `Soh3d_OnMemoryWrite` receiver).
- soh3d harness REPL cmds: `watch <addr> [size]`, `unwatch`, `watches`,
  `hits <base>`, `hitclear`.

## What this unblocks

- Arc (B) full spline-evaluator port: find the caller of `FUN_004235B8`
  that passes `param_3 = 0x005BE6D4` each frame; that caller produces
  the view matrix (`param_1`) from a spline. Port that spline into
  `soh3d/Shipwright/soh/src/zelda3d/zelda3d.c` — replace the current
  static shot-1 basis with the ported per-frame evaluator.
- Actor-world-pos parity: find whoever writes `*(source + 0x88)` at
  bind time — that's the pointer to the game-actor's world.pos slot.
  Which is the SPLINE the demo-actor rides.

## Actor-side spline — UPSTREAM chain located (2026-07-03 late session)

The `SndActor_SetWorldPos` receives its `new_pos` from a pointer stored
at `snd_actor + 0x84` (`FUN_004647F0` line 29:
`FUN_0047E314(param_1, *(u32*)(param_1 + 0x84))`). At settled title
that pointer resolves to `0x09906AA8` in FCRAM heap — a dynamically-
allocated struct.

Extended `scratch/title_writer_watch.py` → `scratch/title_spline_hunt.py`:
follow the pointer, watch the target Vec3f, dump writers.

**Live result (5-frame window):**

```
=== upstream Vec3f @ 0x09906aa8 ===
  vaddr=0x09906aa8..+8   pc=0x00376888  count=6  (all three xyz)
  vaddr=0x09906aac       pc=0x004617ac  count=2  (y only)
  vaddr=0x09906aac       pc=0x003764f8  count=2  (y only, lr=0x0032e1c8)

unique writers: FUN_00376864, FUN_004617XX, FUN_003764F8, ...
```

Primary writer PC=0x00376888 → enclosing fn **FUN_00376864** = the
per-frame **Actor_MoveXZByYawSpeed** integrator. Hand-authored in
`src/code/z_actor.c` this session. See `include/z_actor.h` for the
Grezzo Actor struct field map derived from its body.

**Struct layout — Grezzo Actor on 3DS:**
```
+0x28 .. +0x34   Vec3f  world.pos
+0x36            s16    world.rot.y   (binary angle)
+0x60            f32    velocity.x
+0x64            f32    fwdSpeed
+0x68            f32    velocity.z
+0x6C            f32    speed_xz
+0x70            f32    forceMagnitude
+0x74            f32    maxSpeed
+0xA4 .. +0xB0   Vec3f  scriptedDelta   ← the DEMO TRAJECTORY input
```

Derived from `snd_actor + 0x84 → actor + 0x28` (i.e. actor base at
`0x09906AA8 - 0x28 = 0x09906A80`). All 6 primary write hits attribute
to `FUN_00376864`, confirming it's the per-frame kernel — not
demo-specific, reused by every actor.

**Meaningful implication for the parity port**: the title-demo doesn't
drive a "spline of world.pos keyframes". It drives:
1. `actor->rot.y` (yaw)
2. `actor->speed_xz` (speed)
3. `actor->scriptedDelta` (per-frame bias vector)

whichever code sets those three at the top of the demo-actor's
update per frame is the actual "spline". That's a much smaller
port target — 3 scalars/frame vs a full view-matrix keyframe stream.

Next-arc attack: watch `actor + 0x36` (yaw), `+0x6C` (speed), and
`+0xA4` (scriptedDelta.x) via the same watchpoint driver. The writers
of those three are the demo-actor dispatch primitives — and those are
what should get ported into `zelda3d.c` to drive SoH's title-demo
Player state analogously.

### Demo-input writers IDENTIFIED (via `scratch/title_demo_dispatch_hunt.py`)

Ran the 3-scalar watchpoint on the game actor:

```
=== yaw @ actor+0x36 (5 hits) ===
  pc=0x00332718   →  FUN_003326F0  (Actor_TurnToPoint)
  data = 0x2A9D ↔ 0x2AA5   (oscillating ~135°)

=== speed_xz @ actor+0x6C (5 hits) ===
  pc=0x003CF450   →  FUN_003CF3C4  (PathFollow_Update)
  data = 0x41000000 = 8.0f  (CONSTANT)

=== scriptedDelta @ actor+0xA4..+0xB0 (15 hits) ===
  pc=0x004617A4   →  FUN_00461324  (large; deliberately zeroes delta)
  data = 0x00000000  (ALWAYS ZERO — no cutscene bias in this shot)
```

**The "title-demo spline" is a WAYPOINT PATH** — not a Bézier curve,
not a matrix keyframe stream. `PathFollow_Update` reads s16 x/y/z
waypoint coords from a path-node struct at +0x18/+0x1C/+0x20, turns
the actor toward it via `Actor_TurnToPoint`, sets constant speed 8.0f,
and integrates through `Actor_MoveXZByYawSpeed` each frame.

Both primitives are hand-authored in `src/code/z_actor.c` (this session).

### Port target — minimum viable

To reproduce Az's title-demo rider trajectory in SoH:
1. **Extract the waypoint table.** Dump the path node that Grezzo's
   demo dispatch passes as `path_node` to `PathFollow_Update` — probably
   a small array of s16 x/y/z triples in `.data` or `.rodata`.
2. **Extract kPathSpeed and kMaxYawStep** — DAT_003CF4F8 / DAT_003CF4F4.
3. Port `Actor_TurnToPoint` + `PathFollow_Update` + `Actor_MoveXZByYawSpeed`
   into `soh3d/Shipwright/soh/src/zelda3d/zelda3d.c` (bodies are already
   authored in oot3d-decomp `src/code/z_actor.c`).
4. Drive SoH's title-demo Player state through the same integrator.

Total port surface: ~3 functions (already RE'd + hand-authored),
~O(10-100) waypoint triples in a static table, 3 f32 constants.
Small enough for a single session. Collapses `|Δpos|=6529u`.

For `|Δeye|=0.22u` (cam-basis residual): the cam basis eye tracks the
demo rider through the camera dispatcher chain. Once the rider path
is at parity, the cam basis should follow to <5u without further work.

## Full cam-basis call chain

Walked upward from `FUN_004235B8` via Ghidra's Reference DB call xrefs
(`tools/ghidra_scripts/ListCallers.py`, new this session):

```
FUN_00416208   (no static callers — invoked via function pointer,
                   registered in some state/update table)
    ↓ bl 0x00418B88
FUN_00418B88   (dispatcher — 1564-line decomp, big camera controller)
    ↓ 5x bl 0x0030120C, each preceded by a distinct matrix producer
FUN_0030120C   (wrapper — writes 9 basis words at param_1 + 0x24..+0x44,
                after invoking the extractor)
    ↓ bl 0x004235B8
FUN_004235B8   Camera_ViewMatrixToBasis
    ↓ bl 0x0034A80C
FUN_0034A80C   4x3 matrix inverse
```

`FUN_0030120C` is called at 5 distinct sites in `FUN_00418B88`, each
using a different local view-matrix buffer. The matrix producers
called immediately before each `FUN_0030120C` are:

- `FUN_003009D4` — line 653 → `&local_458`
- `FUN_0041BD10` — line 684 → `auStack_8b8`
- `FUN_00300C58` — line 688 → `auStack_8e8` (and again line 695 → `auStack_8b8`)
- `FUN_00300AA8` — line 638 (setup), and line 698

These are the FIVE matrix-producing kernels. Whichever ones drive the
title-demo shot 1 (versus other camera modes) is where the SPLINE
lives — porting arc for closing the |Δeye|=0.22u residual.

`FUN_00418B88`'s first arg (`param_1`) is the camera struct; all 5
`FUN_0030120C` calls pass `param_1 + 0x41` (= `param_1_bytes + 0x104`)
as the dest. That means `camStruct + 0x104 + 0x24 = camStruct + 0x128`
holds the basis start (= our `0x005BE6D4`). Therefore
`camStruct = 0x005BE6D4 - 0x128 = 0x005BE5AC` — a slightly different
anchor than the `0x005BE5B8` global that surfaced with 398 pool refs
(12 bytes offset). The camera struct is a member of the bigger state
block that starts at `0x005BE5B8 - 0xC = 0x005BE5AC`, or the two
structs are neighbours in .data with distinct roles.

## Next attack (deferred — next session)

1. **Ghidra-decomp the 5 matrix producers**
   (`FUN_003009D4`, `FUN_0041BD10`, `FUN_00300C58`, `FUN_00300AA8`)
   and characterize each — LERP, spline eval, lookAt, projection, etc.
2. **Identify which one runs during title shot 1** — inspect
   `FUN_00418B88`'s dispatch conditions (the switches/branches around
   each call site) and correlate with the camera-mode byte at some
   `camStruct + K` offset.
3. Port that specific producer + its keyframe data (probably a small
   `.rodata` array) into `soh3d/Shipwright/soh/src/zelda3d/zelda3d.c`,
   feeding a per-frame view matrix into a ported `Camera_ViewMatrixToBasis`.
4. Re-run `title_parity_check.py`. Expect |Δeye| → ~0.

## Tools added this session

- `tools/ghidra_scripts/ListCallers.py` — list all bl/blx xrefs to a
  target VA. Composes with `DecompDump.py` to walk call graphs upward.
  Env: `OOT3D_CALL_TARGET` (hex).
- `tools/ghidra_scripts/FindMovwMovtWriters.py` — earlier this session;
  Ghidra-side per-function reg→const scanner (shift-vs-imm bug fixed).

