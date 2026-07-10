# OoT3D title — the three dawn layers SoH does not draw (RE'd + asset-attributed)

Session 2026-07-11. Scope: the three oracle-only dawn layers recorded at the end of
`title_env_lighting.md` §12 (soh3d `debug_journal/2026-07-10-dawn-hue-fog-rootcause.md`):

1. an untextured ADDITIVE horizon glow (vertex color ≈(182,34,0), α≈0.31–0.37, blend srcAlpha/ONE)
2. a white-texture mauve haze band (`tex0=0x1834c100` VRAM, α≈0.08–0.17)
3. a warm alpha layer (`tex0=0x20ace580` FCRAM, α≤0.38)

**All three are now attributed** — (1) the SUN GLOW DOME (`model/fine_sun.cmb`, handler
`FUN_0045d018`), (2) the KUMO CLOUD BAND itself (`fine_kumo_a*`, texture `fine_a01`,
byte-exact), (3) a ground-mist/smoke billboard pair using `soft/tex/soft_smoke.ctxb`
from `zelda_keep_opening.zar` (byte-exact). Method: static Ghidra (pool-constant
resolution on the already-decompiled `FUN_0045d018`), ROM asset dumps, and live
oracle observation (draw_log TEV/blend signatures, `dumpphys` texture/vertex-buffer
dumps, a 49-point full-title-loop presence sweep). Evidence scripts:
soh3d `scratch/dawn_layers/{sweep_layers,dump_warm_verts2,compare_dumps}.py` (gitignored,
reproducible; results quoted below).

Canonical measurement frame: the §12 dawn frame (dayTime ≈0x3197–0x319d, the
"az=1000" frame of the fog sessions). Frame-pairing note: the title cs restarts once
~az 405–450 after `title_settled.state`; dayTime then runs continuously 0x2b2b→0x42xx
over the full loop (sweep table, soh3d `scratch/dawn_layers/layer_windows.csv`).

---

## Layer 1 — additive horizon glow = the SUN GLOW DOME (`model/fine_sun.cmb`)

**Asset** (`/kankyo/BlueSky.zar`): `model/fine_sun.cmb` (1536 B; weather variant
`model/cloud_sun.cmb`). One material, one mesh, 17 vertices / 24 triangles — a
radial glow cap:

| ring | y | r_xz | baked RGBA |
|---|---|---|---|
| apex (1 vtx) | +2.44 | 0 | (153,127,0,255) |
| mid ring (8) | −6.3 | 54.7 | (178,74,0,128) |
| outer ring (6+2) | −82.3 | 148.3 | (195,49,0,0) / (128,32,0,0) |

**Material** (dump_combiner on `fine_sun.cmb`): untextured (`tex0_idx=-1`),
`isVertexLighting=0 isFragmentLighting=0 isFog=0`, TEV0 = `REPLACE(PRIMARY_COLOR)`
(alpha likewise), **blend = srcRGB GL_SRC_ALPHA (0x302), dstRGB GL_ONE — ADDITIVE**,
srcA GL_ONE / dstA GL_ZERO, depth write OFF, **material diffuse = (255,127,127,255)**.

**Effective per-pixel color** (the (182,34,0) §12 measured): the runtime primary color
is `bakedVertexColor ⊙ matDiffuse` — i.e. R×1.0, G×0.498, B×0.498. Verified per-pixel:
probe (170,20) measured (182,34,0,94); baked interpolation at α=94 predicts
(182,67,0) and 67×0.498 = 33.4 ≈ 34 ✓; probe (140,65) (179,32,0,80): predicted
G 64.6×0.498 = 32.2 ✓. The live GPU uniform dump confirms the CMB diffuse reaches the
shader unmodified: the glow draw is the unique `matDif=(1,0.49804,0.49804,1)` line in
the per-draw uniform log (soh3d `scratch/dawn_hue/az1000_soh1408.vsuni.txt` draw 7).
So the color is fully asset-authored (no schedule term); the dawn-only VISIBILITY is
compositional (additive warm-on-dark, mostly occluded by terrain; depth ≈0.997, in
front of the horizon fill, behind mountains).

**Handler** = `FUN_0045d018` (`build/decomp/0045d018.c`, re-read; pool constants
resolved this session via `ReadWord`):

- object handle at `ctx[0x21d]`; drawn every frame the handle exists (submit via
  `FUN_00330b98(0x5be738, ctx[0x21d], 0)` after committing the transform with
  `FUN_003721e0`).
- **Grow-in state machine** (`ctx[0x223]`): state 0 counts `ctx[0x226]` 1..0x3d (61
  frames): frames 31..60 accumulate a descent velocity (−1.0/frame, pool `0x45d4a4`)
  and spin-rate decrement −0.05 (pool `0x45d868`); at frame 61 → state 2 (steady),
  spin rate pinned 0.7°/frame (pool `0x45d86c`), y-offset accumulator reset.
- **Steady placement**: transform = `M(ctx+0x86)⁻¹ · T(0, yAcc−660, 1600) · rotX(5°) ·
  rotY(spin) · S(1,1,1)` — constants −660.0 (pool `0x45d884`), 1600.0 (`0x45d888`),
  5.0 (`0x45d880`); spin integrates 0.7°/frame and wraps ±180/±360 (pools
  `0x45d870..87c` = −180/360/180/−360). `M(ctx+0x86)` is an orientation matrix read
  via `FUN_00372224` + inverse `FUN_0034a80c`; its writer was NOT pinned this session
  (flagged; port should anchor camera-relative like the sky dome and verify by
  projecting the 17 verts against a captured frame).
- Per-frame material constant writes to slots 0/1 (`FUN_002d75b0/002d7568` with the
  16-float block at `0x4d9f9c`: (0.5,0.5,0.5,1),(1,0.95,0.9,1),(0,0,0,1),(0,0.2,0.3,1);
  cloud-weather alternate 0.2/0.9 when weather byte `envBase+0xe` ≠ 0) plus a
  view-space direction via `FUN_0033d14c` — these do NOT alter the observed
  REPLACE(PRIMARY) color output at title (measured formula above holds).
- The same handler also runs the sun LENS FLARE (two `FUN_002d7354` atlas-crop draws,
  4- and 3-element, fade step 1/30 (pool `0x45dbf4`), rect grow ±8.0/frame to 204.0
  (pools `0x45dbf8/bfc/c04/c08`), texture `tex/fine_lensflare.ctxb` = 128×128 **ETC1**)
  — noon-glare content, not one of the three dawn layers, documented for completeness.

**Presence** (sweep, full loop): drawn from cs start (dayTime 0x2b2b) continuously
through 0x3d55, off-screen only during the away-facing shots (0x364d–0x393b window and
post-0x3deb in the sampled loop). NOTE: in the partial pre-restart segment of
`title_settled.state` the glow object does not exist (savestate artifact — the state
predates the object's per-loop spawn); on any natural loop it is present from frame 0.

**Port spec (complete)**: draw `fine_sun.cmb` (decode as any CMB; vertex colors ×
material diffuse (1.0,0.498,0.498)), additive srcAlpha/ONE, depth-test on/write off,
anchored 1600 units forward / 660 down of the orientation anchor with 5° X-tilt and
0.7°/frame Y-spin, sky-layer depth (drawn after horizon fill, before terrain—same
world pass, far depth). Verify per-pixel against the §12 probes: sky pixel at dawn
gains `(182,34,0)·(94/255)` additively (probe (170,20), fb coords, dayTime 0x3197).

---

## Layer 2 — "mauve haze band" = the kumo cloud band itself, vertex-color-lerped

**Texture attribution: byte-exact.** `dumpphys 0x1834c100` (32768 B) == `fine_a01`
texel data (128×128 LA8/IA8, embedded in every `fine_kumo_a*.cmb`) — 32768/32768
bytes equal. (fine_b01/soft_smoke controls ≈50% = the all-0xFF luminance plane.)

**Geometry: the kumo_a band mesh.** The draw's vertex loaders sit in the static VRAM
VBO (`ldr_off` deltas 828/208/276 = 69 verts × {pos f32x3, normal, color u8x4} — the
kumo_a mesh is exactly 69 vertices / 112 tris; 35 survive clipping on the dawn frame).
Band mesh: y 0..21, r_xz ≤163 (a thin horizon ring, camera-anchored by the sky system;
projected it covers the sky from the horizon well upward).

**The dawn "mauve" is the variant cross-fade, done CPU-side into the vertex colors —
ONE draw, not two passes.** Live VBO color dump at dayTime 0x319d: per-vertex colors =
`lerp(kumo_a[idx1=3], kumo_a[idx2=0], w)` with implied w = 0.297 ± 0.05 across all
vertices — the dome schedule (`title_sky_dome.md` §9.2, table @0x0053200a) gives
w = (0x319d−0x2aac)/(0x4000−0x2aac) = 0.298 at that dayTime. **Match.** Baked variant
colors: night a3 (48,41,135), sunrise a0 (185..224, 170..221, 65..90) — the 0.30 mix
is the measured mauve (104,96,124). Live alpha = 250 where authored 255 (a ≈0.98
global factor, matches the frame's `lutS` w=0.982 in the uniform log — flagged, not
yet explained; port may ignore at <2% or pin down later).

**Runtime combiner/blend** (draw_log): TEV0 `MODULATE(TEXTURE0, PRIMARY_COLOR)` for
RGB and A (matches the CMB-authored combiner), **blendRGB = srcAlpha/1−srcAlpha,
blendA = ONE/ZERO**, no fog, lighting disabled.

**Presence**: every sampled frame of the whole loop (night included) — it is the
ordinary cloud band; only its lerped COLOR makes it read as a "dawn haze."

**Port spec (complete)**: SoH already draws the kumo band, but as two passes
(`zelda3d.c` cloudId + cloud2). The oracle mechanism is a single draw whose vertex
colors are `lerp(variant idx1, variant idx2, domeScheduleW)` recomputed per frame
(69 verts — trivial CPU cost), alpha = texα × vcolα(≈250/255), blend as above. Port
that mechanism (or prove the two-pass compositing pixel-equal — it is not, at pixels
where §12 found the SoH stack missing this layer's (104,96,124,38) contribution, e.g.
fb (280,335) at dayTime 0x3197). Acceptance: SoH per-pixel stack at fb (280,335)
gains a kumo fragment `combined=(104,96,124,38)` blend (6,7) at depth ≈0.9999.

---

## Layer 3 — "warm alpha layer" = ground-mist billboards, texture `soft_smoke`

**Texture attribution: byte-exact.** `dumpphys 0x20ace580` (32768 B) ==
`zelda_keep_opening.zar` member `soft/tex/soft_smoke.ctxb` texel data (128×128
LA8/IA8, dataLen 32768) — 32768/32768 bytes equal. This is the OPENING (title)
gameplay-keep effect-soft smoke sprite; FCRAM residency matches the ctxb-asset
pattern (like the moon sprites).

**Runtime combiner/blend** (draw_log, all 35 tris):
`TEV0: RGB = MULTIPLY_THEN_ADD(src0=PRIMARY_COLOR, src1=TEXTURE0·alpha-modifier,
src2=CONSTANT)` i.e. **rgb = vcol.rgb·texA + const.rgb**, `A = MODULATE(PRIMARY_A,
TEXTURE0_A)`; **blend RGB and A both srcAlpha/1−srcAlpha**. Verified per-pixel at
probe (170,20): texA=3/255, primary (26,31,38) → combined (35,24,10) = const ✓.

**The TEV constant is schedule-driven** (sweep, one value per 50 frames):
(31,22,10) @0x2e19 → (35,24,10) @0x319d → (38,25,9) @0x348b → (45,28,8) @0x39d1 →
(49,30,7) @0x3d55. Linear in the dome-schedule w within measurement noise; implied
endpoints ≈ night (27,20,11) → sunrise (50,30,7). **Endpoints are fitted, not
decompiled — flagged**; the owner decomp (below) is the honest source before baking
constants into a port.

**Geometry** (live vertex dump at dayTime 0x319d, `dumpphys` at the draw's loader
region 0x20ac9940): TWO stacked world-space quads centered ≈(3952, −3, 6734), extents
≈167–171 units, camera-facing (camera eye (3010, 318, 5794), dir (0.90, 0, 0.44) —
the puff sits ≈1300 units ahead near the ground). Screen footprint drifts shot-to-shot
(world-anchored mist, camera pans past it). Buffer is a dynamically rebuilt effect
pool (512-vertex region, mostly zero; only the live puff's 8 verts populated).

**Presence** (sweep): appears from dayTime ≈0x2e19–0x3071 (dawn onset), visible
through the day-side samples (to 0x42xx, end of sweep), gone in the away-facing shot
window 0x364d–0x393b. Presence differed pre/post cs-restart at equal dayTime —
the puff state persists/depends on effect spawning, not a pure dayTime gate.

**Owner function: NOT located** (this session stayed static + existing harness
commands). The draw is an effect-soft billboard (not the env-kind system, not
`FUN_0045d018`). Next step for a full decomp: JIT watchpoint on the vertex-pool
writes (FCRAM phys 0x20ac9940±, virtual 0x14ac9940) during a dawn frame — the
bulk-copy blind spot documented in `env_sun_moon_draw.md` session 3 does not apply
here because this buffer is CPU-rebuilt per frame (values change frame-to-frame).

**Port spec (partial — implementable with flags)**: draw 2 camera-facing quads,
~170 world units, at the measured field anchor, texture `soft_smoke.ctxb` (decode
LA8), shader `rgb = vcol·texA + warmConst(dayTime)`, `a = vcolA·texA`, blend
srcAlpha/1−srcAlpha, warmConst from the measured curve above (STOPGAP until the
owner decomp names its table). Acceptance: SoH stack at fb (170,20) gains a fragment
`combined=(35,24,10,3)` blend (6,7) at depth ≈0.98, dayTime 0x3197.

---

## Anchors

- `build/decomp/0045d018.c` (+ this session: `002d75b0.c`, `002d7568.c`,
  `0033d14c.c`, `0033d200.c`) and `ReadWord` on `0x45d450..0x45dc10`
  (all 48 pool constants of `FUN_0045d018` resolved; values in Layer 1 above).
- soh3d `scratch/dawn_layers/`: `sweep_layers.py` (49-point loop sweep + dumps),
  `layer_windows.csv` (az frame → dayTime → layers present + camera),
  `compare_dumps.py` (byte-attribution), `dump_warm_verts2.py` (smoke quad verts),
  `sweep_*.log` (per-frame draw logs incl. per-frame TEV constants).
- ROM scan: all 128×128 LA8 textures in the romfs = kumo `*_a01/b01` families +
  `soft_smoke` + 5 unnamed in `zelda_keep.zar` + `acto_thunder`/`vb_smoke`/`frezad_00`
  — the two dumped textures matched uniquely.
- `tex/fine_sun.ctxb` / `tex/fine_lensflare.ctxb` are 128×128 **ETC1** (0x675A), ruled
  out for layer 3 by format (draw log fmt=5 = IA8).
