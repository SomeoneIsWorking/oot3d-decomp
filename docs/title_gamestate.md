# OoT3D title-screen gamestate — key finding + open questions

**Status:** partial — the key structural fact is verified; the exact
title-demo context struct + its accessors are OPEN.

## Verified fact

**OoT3D's title screen — both the initial logo phase AND the Hyrule-field
flyover demo — is NOT a Play gamestate on 3DS.** `gPlayState @ 0x0050AF34`
stays `0` throughout title. It only becomes a valid PlayState pointer
(e.g. `0x0871e840`) after the game enters an actual gameplay scene via
file-select.

Verified 2026-07-03 via `soh3d_harness`:
1. Cold-boot Azahar's OoT3D libretro core. Run 800 frames — visible
   window shows Hyrule-field title demo (Link on Epona under the moon).
2. `r32 0x0050AF34` reads `0x00000000`.
3. Also holds at 1000, 1400, 2400 frames (multiple demo loops).
4. Contrast: after `loadstate` into Link's House, same VA reads
   `0x0871e840` → sceneNum 0x0034.
5. Mirror at `0x0050AF44` behaves the same (0 at title, 0x0871e840 at
   Link's House).

**This diverges from N64 OoT** (see zeldaret/oot, `z_title.c` /
`z_opening.c` where the title/demo IS a Play state with a scripted
demo scene, sceneNum=0x51). GREZZO refactored the title path on 3DS.

Consequence for the SoH3D two-engine parity harness
(`<engine>/tools/soh3d_harness/`): structural `compare`
(scene/player/actors/camera/lighting) at title is meaningless on the
OoT3D side — every field reads `n/a (no playstate)` because there
literally is none. SoH3D at title IS Play, so the mismatch isn't a
divergence to chase, it's a fundamental gamestate-machinery difference.

## What "title" IS on OoT3D — open

The 3DS demo has to be SOMETHING at runtime — a rendering pipeline is
active, actors are drawing (Link + Epona), camera is animating on a
spline. So there's a gamestate context struct somewhere. Not found yet.

Ruled OUT by dumping/comparing `.data` (RW-Private, VA 0x004F9000 ..
0x005C8000, 0xCF000 bytes) between title-demo and Link's-House states:

- **No `.data` slot holds a "current gamestate" pointer.** Diffed all
  4-byte-aligned words; found zero VAs where title held a HEAP pointer
  AND Link's-House held `0x0871e840`. So OoT3D — like N64 — keeps the
  current-gamestate pointer stack-scoped inside its `Graph_ThreadEntry`
  equivalent, not in a fixed `.data` global.
- **No gGameStateOverlayTable-shaped array found.** Scanned for 4–8
  consecutive 0x30-stride entries with `{code-ptr@+0x18, code-ptr@+0x1C,
  size@+0x2C}` layout (SoH N64 shape). Filtering to entries with
  DISTINCT init pointers per slot found only false positives falling in
  asset data. The 3DS binary is monolithic (no overlays to load), so
  the compact overlay table may not exist at all — dispatch may be
  hardcoded via IF/switch, or use a different struct.
- **HEAP scan for GameState-header signature** (`+0x04` = code fn ptr,
  `+0x08` = code fn ptr) hit `0x0871e840` (the reserved PlayState slot
  with Play_Main preserved from boot) as the ONLY plausible match. No
  second heap struct with the same signature that could be the
  title-demo's own live gamestate. Either the signature is different
  on 3DS (maybe fn ptrs at different offsets), or the demo is driven
  by a controller that doesn't share this shape.

## What worked partially

Dynamic-value scan across title-demo snapshots at 600 vs 900 frames
found frame counters embedded in `.data` at (among others):

- `0x54ad04`, `0x54ad20` — both +300 delta over the 300-frame gap
- `0x54cc3c` — +300 delta
- `0x5a7084`, `0x5a7088` — +300 delta
- `0x5b9518`, `0x5b951c` — +300 delta
- `0x5be644` — +300 delta

The one at `0x54cc3c` sits inside a struct that ALSO changes across
gamestate (title vs Link's-House) at nearby fields:
`0x54cc40`, `0x54cc44` (another counter, DECREASING — could be a
countdown), `0x54cc4c` (FCRAM ptr, changes), `0x54cc50` (FCRAM ptr,
changes). But the low fields (`0x54cc00 .. 0x54cc27`) are constant
pointers to `.rodata` strings across both states — looks like a
per-subsystem structure (probably a rendering/GX dispatch context,
not the gamestate root).

**Warning:** the memory-scan approach has yielded facts (VAs, counters,
struct boundaries) but not the answer. What's needed is the code
side: decompile `Graph_ThreadEntry`-equivalent and read the dispatch.
Everything below is what should happen next.

## Next-session plan — Graph_ThreadEntry decomp

Setup ready at `<repo>/`:
- `build/decomp/functions.csv` — 8266 functions.
- Ghidra 12 project at `build/ghidra/oot3d.gpr` — analyzed.
- `tools/ghidra_scripts/DecompDump.py` — headless decomp; run via
  `OOT3D_REPO=$PWD DECOMP_TARGETS=<targets.txt> <ghidra>/support/analyzeHeadless build/ghidra oot3d -process code.bin -noanalysis -scriptPath tools/ghidra_scripts -postScript DecompDump.py`

Confirmed Play anchor from earlier RE:
`Play_Main @ 0x0045238c` (matches header `[0x0871e840 + 4]`).

Find `Graph_ThreadEntry` — the only function that:
- Contains an inner loop
- Does an indirect call `blx Rx` where `Rx = [state+0x04]` or `[state+0x0C]`
- Writes a heap pointer into gPlayState at some point in its body

Not directly xrefable (uses fn ptr), so approach via:
1. `tools/callers.py 0x0045238c` — currently returns 0 (called via fn
   ptr, not BL). Extend it to also find code that reads `[Rx + 0x04]`
   and then blx's Rx.
2. Alternative: decompile several LARGE functions that reference
   gPlayState (`FUN_0042df18` = 21 KB, `FUN_004439a4` = 8 KB — from
   the 19-function xref list) — one of them is Graph_ThreadEntry or
   its main loop.
3. Rosetta stone: SoH's N64 `Shipwright/soh/src/code/graph.c`,
   specifically `Graph_ThreadEntry` and `Graph_GetNextGameState`.
   Match branch shape, malloc/free pattern, indirect calls.

Once found:
- Read the `gGameStateOverlayTable` or equivalent dispatch (may be a
  large switch instead of a table on 3DS).
- Find the title/opening init functions and their context struct
  sizes.
- Read struct fields (frame counter, camera keyframe pointer, actor
  draw list if any) and map to symbols.

Then land the accessors in
`<engine>/tools/soh3d_harness/soh_state.cpp`: add
`SohState_TitleCamera` / `SohState_TitleActors` / etc. that read the
OoT3D title-demo state through the RE'd offsets, alongside the existing
SoH3D-side accessors. The `Compare*Impl` functions in `main.cpp`
already have the SoH branch and print `n/a (offset not RE'd yet)` on
the 3ds side — just add the 3ds branch there.

## Rejected as ways to answer this

- Memory-scan for a fixed `.data` slot ("gCurrentGameState") — no
  matching VA exists; the pointer is stack-scoped inside the loop.
- Pattern-hunt for a compact gGameStateOverlayTable — 3DS binary is
  monolithic (no overlay loading), so a compact table may not exist.
- HEAP-scan for GameState-header signature — false positives dominate
  once you go beyond the single reserved 0x0871e840 slot.
- Input-driving Azahar past title into an actual Play scene as a
  workaround — that's a different goal (arbitrary-scene parity), not
  title parity. Loadstate is the RE-driven way; already have
  `linkhouse.state`.

## UPDATE 2026-07-03 — the title context IS in .data. Prior conclusion falsified.

Live harness read at title (`r32 0x0050afa0 → 0x00000051`) proves the earlier
"no `.data` slot holds the title state" was wrong. The title context struct
sits INLINE in `.data` starting at VA `0x0050AF34` — the SAME slot that
holds `gPlayState` during real Play. The single slot is OVERLOADED:
- **Play mode:** `*0x0050AF34` = heap pointer (e.g. `0x0871e840`).
- **Title mode:** the value at `*0x0050AF34` is field `+0x00` of the inline
  struct (read as 0 during title-demo, since it's not written by init).

The init function is **`FUN_0046ac98`** (RE'd from `build/decomp/0046ac98.c`):
its pool `DAT_0046b064 = 0x0050AF34` is used as an int base, not a pointer,
and it writes `sceneNum = 0x51` at `+0x6c`, `activeFlag = 1` at `+0x78`,
plus a sequence of sub-object pointers at `+0x14..+0x30`.

Live memory dump at title (harness `mem 0x0050af34 0x180`) matches the
init exactly:

```
+000:  00000000 08001754 080ebf5c 080ec490   ← +0x04..+0x0C: heap ptrs
+010:  00000000 08001784 08002030 08001e58   ← +0x14..+0x1C: sub-objs
+020:  08001eac 08001f00 08001f50 08001fe0   ← +0x20..+0x2C
+030:  08001c38 00000000 …                    ← +0x30
+050:  00000000 ffffffff 00000000 00000000   ← +0x54 = -1 sentinel
+060:  00000000 00000000 00000000 00000051   ← +0x6c = sceneNum 0x51
+070:  00000000 00000000 00000001 00000000   ← +0x78 = active flag
+080..+17f: floats (UI element rectangles, not camera coords)
```

Confirmed via `soh3d_harness` at 400 emu frames post-boot with
`SOH3D_HARNESS_HEADLESS=1`.

### Field map so far
| Off  | Value in title  | Meaning                                     |
|------|-----------------|---------------------------------------------|
| +00  | 0               | overloaded (heap ptr in Play, 0 in title)   |
| +04  | 0x08001754      | ptr to graphics-submission handle (alloc 0x20 by FUN_0046ac98) |
| +08  | 0x080ebf5c      | derived buffer ptr                          |
| +0C  | 0x080ec490      | derived buffer ptr                          |
| +14  | 0x08001784      | sub-object: sprite factory (FUN_002f8ee4 alloc 0x474) |
| +18  | 0x08002030      | sub-object: sprite factory (FUN_002f8ee4 alloc 0x474) |
| +1C  | 0x08001e58      | sub-object: sprite factory (FUN_002db6a0 alloc 0x14, mode=4) |
| +20  | 0x08001eac      | sub-object: sprite factory (FUN_002db6a0 alloc 0x14, mode=4) |
| +24  | 0x08001f00      | sub-object: 16-quad sprite batch (FUN_002d2190 alloc 0x10) |
| +28  | 0x08001f50      | sub-object: 25-quad sprite batch (FUN_002d1e30 alloc 0x50) |
| +2C  | 0x08001fe0      | sub-object: sprite batch (FUN_002d1af8 alloc 0x10) |
| +30  | 0x08001c38      | sub-object: sprite batch (FUN_002f2448 alloc 0x38, 7 var, 4 y) |
| +54  | 0xFFFFFFFF      | init sentinel (init'd as -1)                |
| +6c  | 0x00000051      | sceneNum (N64 SCENE_TESTROOM = title/demo)  |
| +78  | 0x00000001      | active flag                                 |
| +80+ | floats          | UI rects (positions/scales), NOT camera     |

### Ruled OUT
- Sub-objects at +0x14..+0x30 are UI sprite factories (quad-index
  generation, texture batch setup), not camera/actor state. Decompiled
  their constructors (FUN_002f8ee4, FUN_002db6a0, FUN_002d2190,
  FUN_002d1e30, FUN_002d1af8, FUN_002f2448) — all follow the same
  sprite-batch shape.
- Immediate siblings that `FUN_0045596c` calls after `FUN_0046ac98`
  (FUN_0046b534, FUN_004670e4, FUN_004673c0, FUN_0046ac10,
  FUN_00467ce0, FUN_00467684, FUN_0046837c, FUN_00467fa8) all init
  SEPARATE `.data` subsystems (each has its own DAT_XX base pointer;
  e.g. FUN_0046ac10 → 0x00506cb0). None extend the title struct.

### Where the camera + actor state IS
Still open. Candidates:
1. A cutscene-playback subsystem keyframe blob in `.rodata`, driven by
   a subsystem context we haven't RE'd yet. The Hyrule-field flyover
   pattern (Link + Epona on a spline) matches this.
2. A heap-allocated GameState-adjacent struct pointed to by ONE of the
   `+0x14..+0x30` sub-objects (which we've only characterized at their
   allocated size, not walked their fields).
3. A cutscene "actor list" analogous to the N64 `CutsceneContext`
   linked from a different `.data` base.

Next probe: run the harness for N vs N+300 frames and identify which
`.data` fields tick monotonically at 1/frame — one of them will point
into the demo cursor, and its code writer is Graph_ThreadEntry's
title dispatch.

## Harness integration
`tools/soh3d_harness/main.cpp` now exposes:
- `TITLE_CTX_VA`, `TITLE_SCENE_OFF` (0x6c), `TITLE_ACTIVE_OFF` (0x78)
- `TitleActive()` — true when scene==0x51 AND active flag set
- `CompareSceneImpl` branches: prints `3ds: sceneNum=0x0051 (title,
  inline ctx @ 0x0050af34)` when title is active instead of `n/a`.

Once the camera keyframe path is RE'd, `CompareCameraImpl` and
`CompareActorsImpl` gain equivalent title branches.

## Demo-cursor counter scan (runtime)

`tools/title_demo_counter_scan.py` dumps `.data` at two title-frame
snapshots via the harness and diffs to find monotonic 1/frame counters.
Runs on the live emulator; captures reproducible dumps to
`soh3d/scratch/gamestate_re/data_title_{A,B}.bin`.

Six clean +300/frame counters at title (verified 2026-07-03):

| VA          | value @400f | value @700f | Δ   | notes                          |
|-------------|-------------|-------------|-----|--------------------------------|
| 0x0054AD04  | 0x0000013a  | 0x00000266  | 300 | in-image; no static pool ref   |
| 0x0054AD20  | 0x00000138  | 0x00000264  | 300 | in-image; no static pool ref   |
| 0x0054CC3C  | 0x0000018b  | 0x000002b7  | 300 | in-image; no static pool ref   |
| 0x005A7084  | 0x0000018c  | 0x000002b8  | 300 | heap-side (out of code.bin)    |
| 0x005A7088  | 0x0000018b  | 0x000002b7  | 300 | heap-side (out of code.bin)    |
| 0x005B9518  | 0x000000f3  | 0x0000021f  | 300 | heap-side                      |
| 0x005B951C  | 0x000000f0  | 0x0000021c  | 300 | heap-side                      |
| 0x005BE644  | 0x0000018c  | 0x000002b8  | 300 | heap-side                      |

Plus +150/frame at 0x0051B310 & 0x0054ACC0 (30 Hz counters).

**None** have direct 4-byte pool refs in the code image — the in-image
addresses are accessed via `movw/movt` immediates (ARM's 16+16-bit
constant loads that hide from a naïve u32 pool scan), and the heap
addresses aren't pool constants at all. So the naive "find writers by
pool scan" attack won't work.

### Next actionable RE step

Instead of pool scan, disassemble a window around each candidate VA's
struct base and look for `movw + movt` pairs materializing the base.
Or add a Ghidra script that finds all instructions that materialize a
constant in `[0x0054AC00, 0x0054AE00]` via any means (pool, movw/movt,
adr) and reports their enclosing functions. Those become the RE targets.

Alternatively use Azahar's JIT hook to log the writers directly (fast
path: attach a memory watchpoint on 0x0054AD04 in the JIT, dump the
ARM PC at each write, translate PC → static VA → Ghidra fn). That's
guaranteed to reach the demo-tick fn on the first frame.

## MAJOR — the title-demo pose table lives at 0x005642F4

Runtime `.data` diff (frames N vs N+300) surfaces a table of **24
contiguous 36-byte pose entries** starting at VA `0x005642F4`. Each
entry:

```c
struct TitlePose {   // 36 bytes / 9 floats
    Vec3f pos;    // world position
    Vec3f rot;    // rotation (radians)
    Vec3f scale;  // always (1.0, 1.0, 1.0) at title
};
```

Detection method (see soh3d/tools/soh3d_harness dumprange +
scratch/gamestate_re/data_dt_*.bin): scan all 4-byte-aligned VAs
whose word at `+0x18..+0x20` reads `1.0, 1.0, 1.0` in BOTH the frame-A
and frame-B snapshots — the scale-vec3 marker. Contiguous 36-byte
strides identify the table.

### Recorded live poses (frame 400 vs 700, |v|=units per frame)

```
idx      VA                pos.A               pos.B300           |v|
  0 005642f4 (  -51.2, 344.7, 974.4) (  28.6,-489.6,979.7) 2.79
  1 00564318 ( 1707.1, 146.1,   0.0) (1743.1, 146.1,  0.0) 0.12
  2 0056433c ( 2309.0,1058.5, 833.5) (2435.6, 899.5,838.9) 0.68
  3 00564360 ( 1188.1,-138.7,   5.2) (1154.3,-330.0, -2.7) 0.65
  4 00564384 ( 1417.9,   0.0,   0.0) (1417.9,   0.0,  0.0) 0.00  (limb-like)
  5 005643a8 ( 1726.9,   0.0,   0.0) (1726.9,   0.0,  0.0) 0.00  (limb-like)
  6 005643cc ( 2179.0,-230.1,   0.0) (2221.9,-230.1,  0.0) 0.14
  7..8  static limb-like (Y=Z=0, X!=0)
  9 00564438 ( 2409.6,1065.1,-841.2) (2650.7, 995.4,-829.8) 0.84
 10 0056445c ( 1028.3,-619.6,   6.2) (1184.3,-196.6, -1.7) 1.50
 11..12 static limb-like
 13 005644c8 ( 1128.5,-2335.2,-43.6) (1139.8,-2447.9,-32.4) 0.38
 14 005644ec (  633.2,-274.3,-465.3) ( 720.8,-983.9,-486.3) 2.38  ← fast
 15..17 static limb-like
 18 0056457c ( -748.4,-260.4,-465.3) ( -660.9,-987.5,-486.3) 2.44  ← fast, mirror of 14
 19..21 static limb-like
 22 0056460c (  -50.3, 482.9,-1382.4)(   27.8,-186.9,-1357.8) 2.25  ← fast
 23 static limb-like
```

Rows 0 / 14 / 18 / 22 have the largest per-frame motion (~2+ units/frame)
and world-scale coordinates — those are the top candidates for the
CAMERA eye/target/up triplet + the Link/Epona actor for the demo.
Rows with pos=(X, 0, 0) look like skeleton-limb children — the pos
becomes a scalar bone length, siblings are 0. That fits SkelAnime.

### Writers — open (deferred)

Ghidra reference database returns 0 direct u32 refs to any offset in
the table. Writers must use register-indexed stores (a struct base
loaded once in a header, then per-entry stores via `str rX, [rBase, #imm]`).
Attacks that would find them:

1. **movw/movt scan** — a Ghidra script that finds all instructions
   materializing a constant in `[0x00564000, 0x00565000]` via movw+movt
   pairs (not pool literals), then reports their enclosing fns.
2. **JIT memory-write watchpoint** — hook Azahar's dynarmic to trap
   writes to `0x005642F4..0x00564654`, dump the ARM PC of the writer,
   translate PC→static VA→Ghidra fn. Guaranteed to reach the demo tick
   on the first frame.

### Read-side integration (LANDED)

`tools/soh3d_harness/main.cpp` exposes:
- `TITLE_POSE_TABLE_VA=0x005642F4`, `TITLE_POSE_COUNT=24`, `TITLE_POSE_STRIDE=36`
- `titleactors` REPL cmd: streams `ok titleactors 24\n<24 lines>\nok end`,
  each line = idx / VA / pos / rot / scale.

Enough to build a `compare titleactors` sub that A/B's SoH3D's title
actor set against these live values — waiting on identifying WHICH
SoH3D actor corresponds to each 3DS pose index (Link, Epona, then the
scenery quads / camera anchors).

## Writer chain — IDENTIFIED (2026-07-03)

Executed the static movw/movt scan (`tools/find_indexed_writers.py`) —
it landed 0 direct hits in the exact pose-table range, but a wider
wraparound scan surfaced a pool literal at `0x003208DC = 0x005642D0`,
which is ONE STRIDE (0x24=36) BEFORE the table VA I first recorded.
So the actual table starts at **0x005642D0** — my earlier "entry 0"
was really entry 1.

### The writer chain, top-down

**`FUN_003204a4`** (`build/decomp/003204a4.c`) — animation dispatcher:
```c
iVar5 = DAT_003208dc;   // = 0x005642D0 (pose table base)
...
pfVar7 = (float *)(DAT_003208dc + uVar10 * 0x24);   // entry uVar10
FUN_00347550(param_1 /*time*/, animData, uVar10, pfVar7, /*mask=*/3);
```
Loops `uVar10 = 0..numEntries-1`, calls the keyframe evaluator per
entry with mask=3 (pos+rot, scale left alone — explains the observed
`scale=(1,1,1)` across all entries).

**`FUN_00347550`** (`build/decomp/00347550.c`) — per-entry keyframe evaluator:
```c
if (mask & 1) for (i=0; i<3; i++)  pose[i]        = eval_kf(...);  // pos
if (mask & 2) for (i=0; i<3; i++)  pose[3+i]      = eval_kf(...);  // rot
if (mask & 4) for (i=0; i<3; i++)  pose[6+i]      = eval_kf(...);  // scale
```
Writes to `param_4 + i*4`, `param_4 + 0xc + i*4`, `param_4 + 0x18 + i*4`
respectively — exactly the pos/rot/scale layout we RE'd empirically.

**`FUN_002bb1cc`** — SkelAnime-instance update: reads animation
parameters from an "anim instance" struct (`param_1+0x30..+0x78`),
calls the dispatcher with per-instance time.

**`FUN_0036b4ec`** — invoked 130 times across the code, always as
`add r0, r4, #0x254; bl FUN_0036b4ec`. This is the generic
**`SkelAnime_Update`-equivalent** taking `actor + 0x254` (the
SkelAnime substructure inside an Actor struct — matches N64 OoT's
Actor layout).

### What the pose table actually is

The 24 entries are **one specific actor's live limb-transform array**,
not a generic scene pose set. The actor is statically pre-allocated
(hence the fixed `.data` VA) rather than heap-spawned — consistent
with the title-demo Link or Epona being reserved at boot to avoid
heap fragmentation.

Observed patterns now interpretable:
- Rows with `pos=(X, 0, 0)` = child limbs offset only along the parent
  bone axis (the canonical SkelAnime child-limb layout).
- Rows 0/14/18/22 with fast per-frame motion = root or root-adjacent
  limbs pulling the whole rig through the world.

### What this means for parity

The 24-entry table gives us **live per-limb pose of the title-demo Link
(or Epona)** — a first-class SoH3D-side comparison target. The
correspondence between 3DS limb indices and N64/OoT limb indices needs
one more lookup (probably in the actor's SkeletonHeader in `.rodata`),
but for shape parity ("are the joints animating identically?") the raw
pose stream is already useful.

### Tooling added

- `tools/find_indexed_writers.py` — capstone-based ARM/Thumb scanner
  that tracks reg→const through movw/movt/pool-loads and reports every
  `str/vstr/stm` insn whose base register + explicit offset lands in a
  target VA range. Complements Ghidra's static Reference DB (which
  misses movw/movt-materialized bases).
- `tools/ghidra_scripts/FindDataWriters.py` — Jython dump of Ghidra's
  Reference DB for specific .data VAs.
- `tools/ghidra_scripts/FindRangeRefs.py` — same, but for a whole VA
  range at once (faster than N calls to the single-VA form).

## Actor identity CONFIRMED — the pose table is EPONA's

Landed the compare loop in the soh3d harness (see soh3d commit
`2c34c07`). SoH3D's own asset-loader emits during title-demo:

```
[Zelda3D] auto-loaded model 2006 (/actor/zelda_horse.zar):
  cmb 'Model/epona.cmb' of 1, height=9239.5, bones=25 (skinned->skip)
```

**25 bones = the 25 entries at 0x005642D0.** The mystery pose table is
Epona's SkelAnime joint transforms, statically pre-allocated as an
optimization because Epona is present for the entire title-demo loop.
No SkeletonHeader hunt was needed in the OoT3D executable's `.rodata`
because the skeleton definition lives inside the ZAR archive
(`zelda_horse.zar → Model/epona.cmb`), not in code.

On the SoH3D side at title, `compare titleactors` reports the Player
(Link) skelAnime instead of Epona — because SoH3D flags Epona's model
as `skinned->skip` and doesn't run its N64 SkelAnime pipeline for her.
Direct pose-level A/B between the two engines therefore needs one of:

1. Wire SoH3D to expose a live Epona SkelAnime at title (drop the
   `skinned->skip` short-circuit for the horse — maybe just for the
   duration of the compare pass).
2. Continue the same alignment for Link's own SkelAnime pose stream:
   locate Link's dedicated pose table (a *second* hardcoded base
   somewhere in `.data`) with the same static movw/movt+pool scan we
   used here, then compare Link↔Link.

Path 2 is the same technique reused, so the writer-hunt primitive from
this session composes for every pre-allocated title actor.

### Session outcome — SkelAnime-parity primitives now in place
- Writer chain fully RE'd: FUN_003204a4 → FUN_00347550 → FUN_002bb1cc →
  FUN_0036b4ec (the SkelAnime_Update-equivalent at 130 call sites).
- Pose format known: 36-byte {Vec3 pos, Vec3 rot(rad), Vec3 scale} —
  floats, not the N64's Vec3s.
- Read-side accessor in the harness (`titleactors`) + compare sub
  (`compare titleactors`) both work.
- Scanner (`tools/find_indexed_writers.py`) is the reusable primitive
  for finding writers of any VA range where Ghidra's static Reference
  DB misses (movw/movt-materialized bases + register-indexed stores).

## Manager-task follow-through: 2nd pose table + log-tag correction

Applied the same primitive to find the sibling actor's SkelAnime table:

**Table B: `0x005A54D8`, 25 entries, stride 0x24.** Writer chain:
FUN_002bd9ec → FUN_00347550. Structurally identical to Epona's chain.
`DAT_002bdd38 = 0x005A54D8` is the base; the loop alternates keyframe-
mask (2 vs 3) by whether the current entry index matches
`*(actor+0x4)+0x75`. So one designated limb gets full pos+rot updates
per frame; the rest are rot-only.

Same limb count (25) as Epona; entry 1 also has a very high Y
(pos.y=7875, cf. Epona entry 0 at 5789) — the rider-on-steed pattern
where a mount-attachment root sits above ground. This is likely
Link's title-demo pose skeleton — the OoT3D Link model has extra
mount-attachment joints beyond the base ~21-limb skeleton.

Harness exposes both via `titleactors [a|b]`; the primitive
(`tools/find_indexed_writers.py`) generalizes to any future
statically-pre-allocated pose table.

## Correction — the SoH "skinned->skip" log tag was misleading

While closing this task the SoH-side log line
`bones=25 (skinned->skip)` turned out to be a stale label. The tag
was appended whenever a model had >1 bone; the ACTUAL skip decision
is made later, in `Zelda3D_AutoModelSkinned`'s callers in
`zelda3d.c`, where skip fires only when `!Zelda3D_N64AnimEnabled()`
or `!gZelda3dAnimLive`. With the default `ZELDA3D_N64ANIM=1`, skinned
characters run through the SkelAnime-retarget path, not the skip
path. The log now reads
`bones=25 (skinned=SkelAnime retarget)`, matching reality (see
soh3d commit `1e4cf1e`).

## Falsification — title-context sub-objects don't lead to Link's anim instance

Walked the title context (0x0050AF34) sub-object chain at +0x14..+0x30
live at title via the harness. Every sub-object turns out to be a UI
sprite factory or index-buffer builder — pointers into .rodata/.text
(`0x080Exxxx`, `0x080Fxxxx`) for texture data, small floats like 256.0
/ 128.0 for sprite dimensions, `0x00005544` subsystem magic, and index-
buffer scratch. No pointer to any anim-instance-shaped struct. No `+0x3c`
float that could be the pose-evaluator's time.

Falsifies manager's direction (2) as posed: "walking the title-context
heap sub-object chain at +0x14..+0x30 unlocks Link's anim instance."
The chain unlocks UI sprite state, not gameplay actor state — the two
subsystems don't intersect at title.

### Structural implication

At title, `gPlayState = 0` (title state is inline in .data, per this
doc's earlier finding). So there's no PlayState-rooted way to reach
the actor context. Yet the pose evaluator IS writing 25 float triples
to 0x005A54D8 per frame — someone owns Link's actor+SkelAnime and
calls FUN_002bb1cc → FUN_003204a4 on it every tick.

That "someone" must be a distinct opening-mode dispatch we haven't
RE'd yet. In N64 OoT it's `Opening_Main`/`TitleSetup_Main`; on 3DS
GREZZO refactored the title path (the finding at the top of this
doc) and the equivalent lives... unknown. Candidate attack vectors:

1. **Heap-pointer inventory diff.** Scan .data at title vs Link's-
   House for u32 words that ARE heap pointers (0x08xxxxxx range) and
   change between the two states. The opening-mode context pointer
   would appear here.
2. **Reverse from the pose table.** FUN_003204a4 has 5 callers; find
   which one runs during title (breakpoint / watchpoint on the pool
   literal load), trace back one frame to the actor whose SkelAnime
   drove that call, then trace THAT actor's storage.
3. **Cutscene-manager global.** N64 OoT has a `gCutsceneContext`
   analogue for scripted demos. 3DS likely has one too, holding the
   current-cutscene-frame time. Its .data slot would be visible in
   the same heap-pointer inventory as #1.

### Deterministic result via the compare tool (from 105727c)

`compare firstdiv` after `force titletime 100`:
```
force titletime 100 → az=101 soh=101 (both writes committed)
d4 rot delta:    worst=32723 (soh limb 14 axis 2) az_bin=-12303 soh_bin=20420
d4 mean |Δ|:     axis0=10977 axis1=9235 axis2=17577  half-turn hits=1/63
```

Compared to baseline (0x0054CC3C tick, no sync):
```
d4 mean |Δ|:     axis0=11047 axis1=9125 axis2=17478  half-turn hits=2/63
```

Statistically indistinguishable — cursor write has no effect on the
pose stream. 0x0054CC3C is a bystander counter (probably a UI/HUD
telemetry tick), not the anim-eval master time. The next RE round
should hunt via the heap-pointer inventory attack above.
