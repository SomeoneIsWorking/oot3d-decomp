# OoT3D sun/moon draw — RE session (2026-07-08), PARTIAL

Goal: locate the 3DS equivalent of N64's `Environment_DrawSunAndMoon` (see
`Shipwright/soh/src/code/z_kankyo.c:1313`) and extract its real moon disc/halo
scale, color/alpha, and world-placement constants to replace soh3d's
hand-tuned `kMoonDiscScale=0.505` / `kMoonDrawAlpha=205` / halo 1.65×/1.85×
(`Shipwright/soh/src/zelda3d/zelda3d.c:3901` `Zelda3D_TryDrawSunMoon`).

**Result: one solid piece of ground truth confirmed (the sun/moon direction
constants), the moon BILLBOARD DRAW function itself NOT located.** Extensive
call-graph tracing from `Environment_Update` turned up a data-driven
"environment object kind" asset-loading subsystem instead of an inline-coded
sprite draw. Documenting both the confirmed finding and the search trail so
the next session doesn't re-walk it.

## CONFIRMED: Environment_Update (0x0045dd30) computes sun/moon direction with N64-IDENTICAL constants

`build/decomp/0045dd30.c` lines 238-243 (already known-anchored as
`Environment_Update`, see `docs/env_context_layout.md`):

```c
fVar24 = (float)FUN_002cfca0((int)(short)(*(short *)(iVar17 + 0xc) + -0x8000));   // Sin(dayTime-0x8000)
*(char *)(param_2 + 0xb5) = (char)(int)(fVar24 * fRam0045e804);                  // * -120.0
fVar24 = (float)FUN_00338f60((int)(short)(*(short *)(iVar17 + 0xc) + -0x8000));   // Cos(dayTime-0x8000)
*(char *)(param_2 + 0xb6) = (char)(int)(fVar24 * fRam0045e808);                  // * 120.0
fVar24 = (float)FUN_00338f60((int)(short)(*(short *)(iVar17 + 0xc) + -0x8000));   // Cos(dayTime-0x8000)
cVar6 = (char)(int)(fVar24 * fRam0045e80c);                                       // * 20.0
*(char *)(param_2 + 0xb7) = cVar6;
*(char *)(param_2 + 0xbb) = -*(char *)(param_2 + 0xb5);   // negated -> "moon" direction
*(char *)(param_2 + 0xbc) = -*(char *)(param_2 + 0xb6);
*(char *)(param_2 + 0xbd) = -cVar6;
```

The three float constants at fixed data addresses, read directly from
`build/code.bin`:

| VA | value |
|---|---|
| 0x0045e804 | **-120.0** |
| 0x0045e808 | **120.0** |
| 0x0045e80c | **20.0** |

These are **byte-for-byte the N64 sunPos scale factors** (`z_kankyo.c:1324-1333`:
`sin(dayTime-0x8000)*120.0`, `cos(dayTime-0x8000)*120.0`, `cos(dayTime-0x8000)*20.0`
— the `*25.0` world-distance multiplier is absent here because the 3DS result is
truncated to a **signed byte** (`(char)(int)(...)`) and stored at envCtx `+0xb5..0xb7`
/ `+0xbb..0xbd` — i.e. this is `light1Dir`/`light2Dir` (a per-vertex directional
**lighting** vector, N64 struct shape: three s8 components + a negated pair), NOT a
`Vec3f sunPos` world-space sprite offset. **This confirms 3DS kept N64's exact
sun-angle math but repurposes it as the vertex-lighting direction — the same
angle drives both systems, but the 3DS moon sprite (if it uses `eye ± sunPos`
at all) is NOT computed inline in this function.**

This is a real, previously-undocumented confirmation and is safe to cite: the
day/night light-direction port is faithful. It does **not** by itself tell us
the moon's screen-space scale.

## NOT FOUND: a standalone Environment_DrawSunAndMoon-equivalent

Search trail (all addresses decompiled to `build/decomp/<vaddr>.c` this session):

1. **Caller of Environment_Update** — `0x002e2e60` (3952B, the enclosing
   per-frame play-update function, calls `FUN_0045dd30` at line 798 near the
   very end). No sibling call to a billboard/matrix/texture-bind function
   near it — this function is Update-only, not Draw.
2. **Callers of `0x002e2e60`** — two call sites, enclosing functions
   `0x00449420` and `0x0045238c`. Neither contains billboard/Matrix_Scale
   code; `0x0045238c` is a small per-frame actor-list dispatcher.
3. **String xref on `"rom:/kankyo/BlueSky.zar"`** (VA 0x0054984c, only 1 of 4
   occurrences is a live code xref) → enclosing function `0x002e47c8`
   (1536B). This turned out to be a **generic environment-object loader**,
   dispatching on a `param_3` "kind" byte (values seen: 0, 1, 3, 4, 5, 6, 8,
   0x1d) into different texture/blend setup call sequences
   (`FUN_002d5124`/`FUN_002d4f10`/`FUN_002d50e8` etc. — TexEnv/blend config,
   not a sprite draw).
4. **The "kind" is an index into a real data table**, confirmed by resolving
   the PC-relative literal at `0x002e4840` (`ldr r1,[pc,#0x580]` → literal at
   `0x002e4dc8` → value `0x0054984c`) and the addressing
   `r6 = r1 + kind*0x50` (`add r0,r7,r7,lsl#2; add r6,r1,r0,lsl#4` = `r7*5*16`
   = `kind*0x50`). Dumped the table directly from `build/code.bin`:

   | kind | filename | +0x44 | +0x48 | +0x4c |
   |---|---|---|---|---|
   | 0 | `rom:/kankyo/BlueSky.zar` | 0x0 | 0x0 | 0x0 |
   | 1 | `rom:/kankyo/BlueSky.zar` | 0x0 | 0x10 | 0x2 |
   | 2 | *(empty)* | 0x0 | 0x0 | 0x0 |
   | 3 | `rom:/kankyo/BlueSky.zar` | 0x0 | 0x10 | 0x2 |
   | 4 | `rom:/kankyo/Dark.zar` | 0x0 | 0x4 | 0x2 |
   | 5 | `rom:/kankyo/BlueSky.zar` | 0x0 | 0x10 | 0x2 |

   Each entry is `char name[0x40]` + 3×u32. These trailing u32s are small
   integers (object/UV indices into the zar), **not floats** — so this table
   is NOT where a moon disc/halo world-scale constant would live. It looks
   like an environment-**asset** table (which zar + which sub-object), one
   layer up from the actual per-frame billboard draw.
5. **Scene-init caller** `0x004490d8` calls `FUN_002e47c8` once at scene
   init (line 42, `param_3` = a config byte from the scene's save data, not a
   loop over kinds) — confirms this is an **init-time asset-binding** step,
   not a per-frame draw call. The actual per-frame moon quad emission (the 3
   quads captured by the Azahar draw-log in `title_moon_composition.md`:
   `fine_moon0/1/2.ctxb`, blend ADD/ALPHA/ADD) must be a **different**
   function this session did not reach.
6. `0x0044ff18` (17KB, called right after `FUN_002e47c8` at scene init) was
   also decompiled and skimmed for the `-120/120/20`-style inline constants
   or `Matrix_Scale`/billboard patterns — none found; it reads as further
   config/init plumbing, not the draw.

## Why the search stalled

The 3DS engine appears to have **factored the N64 sun/moon system into (a) a
per-frame light-direction update (found, confirmed above) and (b) a
data-driven env-object asset table (found, but it's an asset/UV table, not a
scale table)**, with the actual billboard emission (Matrix_Scale, disc+halo
draw calls) living in a third function not yet located. It's also plausible
per the existing `docs/title_render_pipeline_scope.md` (2026-07-03,
**superseded** by the later draw-log finding of 2 real halo quads, not
hardware bloom) and `MEMORY.md`'s "OoT3D title NOT Play" note that the
**title-screen moon specifically is cutscene-scripted playback**, not the
general in-game `Environment_DrawSunAndMoon` path at all — which would mean
the function search needs to start from the **title cutscene command
stream**, not from `Environment_Update`, to find the real per-shot moon
scale/alpha the draw-log observed.

## Recommendation for continuation

1. Use the harness's **JIT watchpoint** capability (soh3d
   `soh3d-harness` skill) on the runtime FCRAM addresses of the moon
   textures (`~0x2090ec80/0x20906a80/0x20910e80` per
   `title_moon_composition.md`) or on the vertex buffer feeding those draws,
   to catch the PC that issues `gxCmdList` writes for those triangles — this
   is the fast, reliable way to get the real draw-function address (static
   xref search from `Environment_Update` did not reach it in this session's
   budget).
2. Alternatively, decompile the title cutscene command interpreter's
   "draw effect" opcode handlers (see `docs/cutscene_format.md`,
   `docs/title_writer_chains.md`) — if the title moon is CS-scripted per the
   open question above, its scale/alpha constants live there, not in
   `Environment_Update`.
3. Do NOT assume the per-kind table's `+0x44/+0x48/+0x4c` u32 triplet holds
   scale data — verified above to be small object/UV indices.

## For soh3d: no faithful replacement constant found this session

soh3d's `kMoonDiscScale=0.505f` / `kMoonDrawAlpha=205` /
halo ×1.65/×1.85 (`Shipwright/soh/src/zelda3d/zelda3d.c:4011-4045`) remain
**measurement-fitted against Az screenshots**, not decomp-derived — this
session did not find the inline constants that would let them be replaced
with real ground truth. The one thing this session DOES license changing:
the light-direction port (`Environment_Update`'s -120/120/20 constants) is
now confirmed faithful, so if soh3d's world-lighting direction ever needs
re-deriving, this is the correct anchor. The moon sprite itself needs the
harness-watchpoint approach above before its constants can be ported
honestly.

## Files

- `build/decomp/0045dd30.c` — Environment_Update (already existed;
  light-direction constants at lines 238-247, confirmed against
  `build/code.bin` this session).
- `build/decomp/002e2e60.c`, `build/decomp/00449420.c`,
  `build/decomp/0045238c.c` — per-frame update call chain, ruled out as
  containing the moon draw.
- `build/decomp/002e47c8.c` — env-object-kind asset loader (init-time, not
  per-frame draw); table dump above.
- `build/decomp/004490d8.c` — scene-init caller of the above.
- `build/decomp/0044ff18.c` — further scene-init plumbing, no moon-scale
  constants found.

## Session 2 (2026-07-08, later) — still NOT found; new leads documented, budget exhausted

Context: a parallel session (issue #146) already shipped an **empirically-measured**
disc/alpha recalibration (`kMoonDiscScale=0.505`, `kMoonDrawAlpha=205`, see
`debug_journal/2026-07-08-title-moon-size.md` in soh3d) and explicitly flagged the
residual halo-spread and scale-drift-over-time as needing "the OoT3D moon-scale decomp,
not more tuning." This session picked the search back up from Recommendation #1 above
(follow the call graph further / look for the real per-frame draw), stayed static
(no harness edits — see constraint below), and got closer but still did not land the
3-layer moon-quad emission with its scale/alpha constants.

### New functions traced (all in `build/decomp/`)

1. **`0x002de22c`** (1096B) — turned out to be a **time-of-day PALETTE/OPACITY
   interpolator**: walks a table of `(startTime, endTime, colorIdxA, colorIdxB)`
   ranges (8-byte entries at `iVar5+0xd8+n*8` or `iVar13+n*8`), finds the active
   range for the current in-game time (`*(ushort*)(iVar13+0xa8)`), computes a lerp
   factor, and calls `FUN_002d5468`/`FUN_002d50e8` to push two TEV/material constant
   colors blended by that factor. This matches the "3DS time-based light schedule"
   work already landed in commit `5ba95e40` (config table @ 0x00531EFC) — **this
   function is that schedule's color-blend engine, not a moon draw.** Confirmed via
   its callers (below) that it's invoked with a `param_1` selector (values 1 and 5
   seen) that picks which per-kind schedule table to read, NOT a moon-specific code
   path.

2. **`0x0045d018`** (2876B per the stale functions.csv boundary — see caveat below)
   — the most promising lead this session found. Per-call it:
   - Recomputes a direction vector from **live current-frame dayTime** using the
     *exact same* `Sin/Cos(dayTime-0x8000)` idiom as `Environment_Update`
     (`FUN_002cfca0`/`FUN_00338f60`), i.e. this is NOT a baked/fixed-framing value —
     confirms the later (more careful) `title-moon-size.md` finding that the moon
     billboard direction is dynamically computed per frame, and retroactively
     supports discarding the "fixed-framing composite" language from the first
     `diag(#146)` commit.
   - Feeds that vector into `FUN_002d77dc(param_1+0x41, &x,&y,&z)` (builds
     something at a matrix/quat-sized slot) then `FUN_00471b84(param_1+0x41, 0x7f)`
     (sets an alpha/weight of 127 — plausible day/night blend weight, not obviously
     a moon draw alpha).
   - Calls `FUN_002de22c(1, param_1+0xb9, ..., param_1+0x41)` — same schedule
     engine as above, again with selector `1`.
   - Then drives a **frame-counter state machine** (constants literally read from
     `code.bin`: `300.0`, `30.0`, `60.0`, `1800`, `5400` frame/degree-ish figures,
     angle wraps at `±360`/`±180`) that composes a transform via a chain of
     `Matrix_*`-style helpers (`FUN_00372224`, `FUN_0034a80c`, `FUN_002d75dc`×2,
     `FUN_003283a0`, `FUN_0036c174`×2, `FUN_0032c78c`) and commits it plus a
     vertex-colour constant to **two** material slots (indices 0 and 1) of an
     object handle at `param_1[0x21d]`, via `FUN_003687a8` (material/submesh
     accessor) + `FUN_002d75b0`/`FUN_002d7568`/`FUN_0033d14c`/`FUN_0033d200`.
   - **Read of the numeric constants** (dumped directly from `code.bin`, not
     decompiled): `fVar15/16/17 = 300.0/30.0/60.0`, frame targets `1800`/`5400`,
     angle bounds `-180/360/180/-360/-660/1600`. These read as a **drift/scroll
     timer for a continuously-animated object** (most likely the kumo **cloud
     band**, which the existing render-pipeline doc says is drawn and *does*
     scroll) — not a static moon disc. **Only 2 material slots are touched here,
     but the moon needs 3 (disc + 2 halos)**, which argues against this being the
     moon's own handler.
   - **No static callers found** (`callers.py` returns 0 call sites) — this
     function is reached only through an indirect (function-pointer) dispatch,
     consistent with the "per-kind env object" system view: each kind (the
     previously-dumped table entries 1/3/4/5 → BlueSky.zar / Dark.zar) likely has
     its own instance of a template like this, reached via a vtable/kind-dispatch
     this session did not locate.
   - **Caveat on function boundary**: `functions.csv` lists this address with size
     2876B ending at `0x0045dad4`, close to (but not touching) `Environment_Update`
     at `0x0045dd30` — there's a ~0x25c-byte gap between them that is a *separate,
     currently unlabeled* function (see next item), meaning the `functions.csv`
     boundaries near this whole cluster are unreliable and re-running with
     `-noanalysis` inherited stale boundaries. Anything derived from this
     function's *exact* extent should be re-verified with fresh analysis before
     being cited as ground truth for a port.

3. **`0x00450b40`** (2536B, real boundary re-derived by Ghidra directly — the
   `functions.csv` entry for the nearby address `0x0044ff18` was wrong/stale) —
   this is an **Environment/Kankyo INIT** function: sets an initial sun-direction
   vector once (same sin/cos idiom), calls the env-object loader
   `FUN_002e47c8(param_1, param_1+0x564, 1)` (the `BlueSky.zar`-family loader from
   session 1) once with kind `1`, and calls the schedule engine
   `FUN_002de22c(1, param_1+0x2e4, param_1+0x564, param_1+0x104, 1)` once at init.
   Confirms kind `1`'s loader+schedule triple runs at scene init, but this is
   init-only — not the per-frame draw.

4. **`FUN_002d9664`** (called from `0x0045d018` with 6 args at the call site:
   `FUN_002d9664(fVar19, fVar21-piVar5[2], fVar19, puStack_48, *param_1, 1, ...)`)
   — decompiled independently, Ghidra inferred only **4** parameters
   (`undefined4,undefined4,undefined4,int`), a call-site/definition arg-count
   mismatch. Its body gates on `*(int*)(param_4+0x27c) == 0 → return` and reads a
   6-word constant block (`DAT_0047d1c8[0..5]`) plus two scalars
   (`DAT_0047d1b0`/`DAT_0047d1cc`) — reads as a generic "effect scheduler /
   enable-gate" helper, not confirmably moon-specific. Left unresolved; the
   arg-count mismatch is itself a sign the true call-site ABI wasn't captured
   (stack-passed args beyond r0-r3 that Ghidra's signature recovery under
   `-noanalysis` didn't pick up).

### Ruled out this session

- The `002de22c` schedule/palette engine and its two known call sites (init
  `00450b40`, per-frame `0045d018`) are **not** the moon-quad emission — they're
  the shared time-of-day colour-blend engine already covered by the existing
  light-schedule port (commit `5ba95e40`).
- `0045d018`'s matrix+2-material block reads more like the **cloud band**
  (frame-counted angle-wrap drift, only 2 materials) than the 3-layer moon.

### Why static stalled again

The env-object system is **data-driven per "kind"** (table @ `~0x0054984c`,
entries for kind 0/1/3/4/5, stride 0x50), and the actual draw dispatch for each
kind goes through **indirect calls** this session's tooling doesn't resolve
(`callers.py` found zero call sites for the most promising function). Chasing
the moon specifically means either (a) finding the kind-dispatch table itself
(a table of function pointers, not yet located — the previously-dumped table is
data/asset indices, and a *separate* table of code pointers likely exists
alongside it), or (b) going dynamic.

### Constraint hit this session: dynamic path needs a C edit, which was out of scope

Per this task's brief ("RE + documentation only — do NOT edit soh3d C or
commit"), the JIT-watchpoint fallback from session 1's recommendation could not
be completed: the watch target address (the moon quads' CPU-written vertex
buffer) isn't known yet, and getting it requires extending
`Azahar/src/video_core/renderer_software/sw_rasterizer.cpp`'s existing
`soh3d_draw_log_path` hook to also log
`regs.pipeline.vertex_attributes.GetPhysicalBaseAddress()` per triangle (a ~2 line
addition, `Pica::RegsInternal::pipeline.vertex_attributes` is already reachable
from `RasterizerSoftware::ProcessTriangle` where the existing hook lives) — this
is a C edit and a rebuild, which this session was told not to do. **This is the
single highest-leverage next step**: capture that FCRAM address for the three
moon triangles at a settled title frame, then `watch` writes to it and read
`hits`' PC/r0-r3 to get the actual CPU-side moon-vertex writer function, which
should decompile straight to the scale/alpha constants. This does not conflict
with "no bandaids" — it is exactly the ground-truth-extraction step the rules
ask for; it just needs a session authorized to touch the harness C++.

### Recommendation for continuation (supersedes session 1's list)

1. **Do the harness extension above first** (2-line `sw_rasterizer.cpp` change,
   rebuild `soh3d_harness`) — this is very likely a single-session win given the
   existing `draw_log` infra already isolates the 3 moon triangles by texture
   phys-addr.
2. Once the vertex-buffer VA is known, `watch` it across the settled-title moon
   frame, `hits`, and decompile the writer PC. Expect it to reveal a **template
   function parameterized by kind** (given the shared-helper pattern found this
   session: `FUN_002de22c`/`FUN_003687a8`/`FUN_002d75b0` family), so the moon's
   instance may look structurally identical to `0x0045d018` but keyed to kind 3
   or 5 instead of 1 — if so, diff the two to find the scale-constant fields that
   differ, rather than re-deriving from scratch.
3. Independently of the above, it's worth **re-dumping the per-kind asset table**
   from session 1 (`~0x0054984c`, stride 0x50) with one more field checked: the
   table was read as `name[0x40] + 3×u32` = 0x4c bytes into a 0x50 stride, leaving
   4 unaccounted bytes per entry — confirm what's there (could be a 4th
   index/flag, or padding) before assuming the table is fully characterized.
4. Do not re-decompile `002de22c`, `0045d018`, `00450b40`, or `002d9664` cold —
   this session's notes above are the current state of each.

### For soh3d: still no decomp-derived replacement constant

soh3d's `kMoonDiscScale=0.505f` / `kMoonDrawAlpha=205` (already recalibrated
empirically against Az on 2026-07-08, see soh3d `debug_journal/2026-07-08-title-moon-size.md`)
remain measurement-fitted, not decomp-derived. This session neither confirmed
nor contradicted those specific numbers — it narrowed the search space (ruled
out two more candidate functions, found the likely next static/dynamic move) but
did not reach the actual moon-quad emission code. No soh3d C was touched.

## Session 3 (2026-07-08) — harness extended, watchpoint fired, but landed on generic heap code, not the moon writer

Per session 2's recommendation, this session was authorized to edit Azahar core +
`tools/soh3d_harness` (still NOT soh3d game C, no commits). Did the harness extension,
found + resolved the moon quads' real vertex-buffer addresses, watched them, and
decompiled every writer PC the watchpoint reported. Result: **the watchpoint mechanism
works, but every PC it caught is generic memory-allocator/free-list bookkeeping — not a
moon-specific scale/alpha writer.** This is a genuine (if negative) result, documented
in full below so a future session doesn't repeat the same watch.

### Harness extension (see soh3d `tools/soh3d_harness/AZAHAR_PATCH.md` for the full patch note)

Added to the existing TASK16 draw-log hook in `sw_rasterizer.cpp`:
- `vbuf=%08x` = `regs.pipeline.vertex_attributes.GetPhysicalBaseAddress()` — turned out to
  be the SHARED base register (`0x18000000` for every triangle in the frame), not a
  per-draw address. A dead end by itself.
- A second `ldr_off=` log line dumping all 12 `attribute_loaders[i].data_offset` values.
  The real per-draw vertex-source **physical** address is
  `base_address*16 + attribute_loaders[0].data_offset` (loader 0 = position in every
  case observed).

### Resolved moon quad addresses (physical, then guest virtual for `watch`)

Converted physical → virtual via `vaddr = paddr - 0x20000000 (FCRAM_PADDR) + 0x14000000
(LINEAR_HEAP_VADDR)` (`RegisterWatchpoint` takes a VAddr; passing the raw physical
address silently watches the wrong page and yields 0 hits with no error — cost real
time this session before being caught).

| layer | tex phys (known since session 1) | vbuf phys (loader0 data_offset resolved) | vbuf vaddr (watch target) |
|---|---|---|---|
| disc (128x128, fmt4, blend 6,7,0 ADD-ish) | 0x20906a80 | 0x209068f0 | **0x149068f0** |
| halo A (64x64, fmt3, blend 6,1,0) | 0x2090ec80 | 0x2090eb00 | **0x1490eb00** |
| halo B (64x64, fmt3, blend 6,1,0) | 0x20910e80 | 0x20910d00 | **0x14910d00** |

Each layer's vertex/material descriptor sits in a small (~0x180-0x190-byte) block
immediately BEFORE its texture data in the same asset blob — consistent with a bundled
"billboard descriptor + texture pixels" asset format.

### What the watchpoint actually caught

1. **Watching the settled title (post-load steady state), stepping 3 more frames: ZERO
   hits on all three ranges**, in two independent boot+watch runs. The quad's resident
   bytes are never rewritten by a scalar CPU store once the title has settled — this
   directly answers session 2's open question: it is NOT a per-frame vertex rewrite.
2. **Watching from early boot (frame ~1) through the same ~400-frame load-and-settle
   window: many hits (128, the ring-buffer cap, on every range).** Raised the harness's
   `hits` query cap from a hardcoded 32 → 128 to see them all (`tools/soh3d_harness/main.cpp`).
   Decompiled every distinct PC that appeared (12 total across all three ranges):
   `0x00322318` (dominant, 165 hits), `0x00303990`/`0x003039a4`, `0x002de9c8`/`0x002debc0`,
   `0x002c15b8`, `0x0045717c`, `0x0044d8f0`, `0x002fb2cc`, `0x002bad54`/`0x002ba530`,
   `0x00348e7c`.

   - **`0x00322318`** → containing function `FUN_003222dc` (`build/decomp/003222dc.c`):
     a **generic 6-arg container-insert helper** — calls three field setters then
     `FUN_004360c4` and bumps a count field. Not moon-specific.
   - Its caller (`LR=0x00436214`) → `FUN_004360c4` (`build/decomp/004360c4.c`): a
     **textbook best-fit free-list heap allocator** (aligns the requested size, walks a
     free-list picking the tightest fit, splits/patches links). This confirms the
     watched address is inside a **general-purpose heap arena**, not a fixed moon object.
   - **`0x00303960`** (containing `0x00303990`, `build/decomp/00303960.c`): a **generic
     object constructor** — calls a function-pointer allocator `(*puRam003039f4)(0x10000,
     0x100,0,0x78)`, stamps a magic `0x2600` into two fields, copies two globals into six
     fields, stores `param_1` at element `0x1d`. Structurally generic (magic-tagged
     "material/mesh-handle" allocation), no float scale constants.
   - **`0x002de990`** (containing `0x002de9c8`, `build/decomp/002de990.c`): branches on
     16-bit codes `0xde1`, `0x8515`, `0x8516` against a table indexed by `iVar7 + 0x58` —
     reads as an **audio/SFX-ID dispatch**, unrelated to rendering.
   - The **highest-`ticks` (chronologically last) write to each range** is, in all three
     cases, `FUN_003222dc` again — writing a **free-list "next block" pointer** into the
     just-freed/reused block (e.g. disc's last write stores `0x1490ea80`, i.e. roughly
     halo A's block address, into `disc_vaddr+0x18c`). This is the allocator chaining
     blocks, not a moon-specific commit.

   **Conclusion: this address range is a transient/reused heap arena during the ~400-frame
   load sequence — the moon's asset ends up resident there by ordinary allocator behavior,
   but nothing this session captured writes actual float vertex/scale/alpha data through
   the scalar `Write<T>` path our hook is wired to.**

### Why: the real payload write is invisible to a scalar memory-write hook

Given (1) zero hits at steady state (data present but never scalar-rewritten) and (2) every
load-time hit decompiling to generic allocator/unrelated-subsystem code, the actual
vertex-position/scale/color floats for these quads most likely arrive via a **bulk
copy (memcpy-style, e.g. asset decompression writing straight into the FCRAM host
pointer, or a GX/DMA-style transfer)** that bypasses Azahar's templated
`MemorySystem::Write<T>()` — the only place this hook fires. This is a genuine
instrumentation blind spot, not evidence the constants don't exist in memory.

### Recommendation for continuation (supersedes session 2's list)

1. **Do not re-run this same scalar watch** on these three addresses — the result is
   now known (generic allocator noise) and reproducible; re-watching burns budget for
   no new information.
2. **Next primitive to build**: hook Azahar's raw FCRAM-pointer bulk-copy paths instead
   of (or in addition to) `Write<T>` — grep `Azahar/src/core/memory.cpp` for
   `GetFCRAMPointer` call sites used by block read/write helpers, and any asset
   decompression path (LZ11/whatever OoT3D's ROM asset format uses) that writes
   decompressed bytes via `std::memcpy` directly to a host pointer. A hook there,
   filtered to the three vbuf physical ranges above, would catch the actual asset
   materialization instead of allocator bookkeeping.
3. **Alternative that avoids the whole memory-write question**: an instruction-level
   trace (not a memory watch) bounded to the known call window from session 1/2's
   static leads — `FUN_002e47c8` (per-kind env-object loader) and `FUN_00450b40`
   (env init caller of kind 1) — logging every `vstr`/`str` of an immediate float
   constant executed between entry and return. This sidesteps the bulk-copy blind spot
   entirely since it's PC-driven, not address-driven.
4. **Do not re-decompile** `003222dc`, `004360c4`, `00303960`, `002de990`, `002deb7c`,
   `002c150c`, `0045700c`, `0044d778`, `002fb074`, `002ba45c` cold — all ruled out this
   session as generic (allocator/audio/unrelated), not moon-specific. Full list is in
   `build/decomp/` (uncommitted, this session's dump).

### For soh3d: still no decomp-derived replacement constant

Three sessions in, `kMoonDiscScale=0.505f` / `kMoonDrawAlpha=205` / halo ×1.65/×1.85
(soh3d `Shipwright/soh/src/zelda3d/zelda3d.c`) remain measurement-fitted, not
decomp-derived. This session's real contribution is negative-but-precise: the moon
quads' exact FCRAM addresses are now known (table above), the watchpoint tooling
works end-to-end (fires, resolves PC/LR/regs/stack), and the failure mode is now a
specific, actionable one (scalar-write hook blind to bulk-copy asset materialization)
rather than "couldn't find the function." No soh3d C was touched; no commits made.
