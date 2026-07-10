# OoT3D title-screen terrain/sky lighting — full derivation vs the SoH3D ~2x residual

Task: derive OoT3D's ground-truth terrain lighting math at the title screen and explain
soh3d's measured ~2.1–2.3x terrain darkness + sky R/G + star-brightness residuals
(soh3d `debug_journal/2026-07-10-title-arc-closing-measurement.md`,
`2026-07-08-title-divergence-remeasure.md`). Static RE only — decompiled
`Environment_Update` (`FUN_0045dd30` @ VA `0x0045dd30`) in full for the first time this
session (prior docs only excerpted ~40 of its 627 decompiled lines) and cross-checked
against direct ROM byte dumps. No running-game probing was used or needed for the
conclusions below.

**Bottom line up front:** the terrain shading MODEL, its SHADER implementation, and its
CPU-side ambient INPUT (including a byte-layout question that was previously ambiguous
between two soh3d-side docs) are now independently reconfirmed correct, via a NEW
ground-truth source (this session's full `Environment_Update` decompile) that neither of
the earlier soh3d investigations had available. **The ~2.1–2.3x residual is NOT in the
lighting math or its ported inputs — every leg of that pipeline checks out.** One dormant
(currently-inactive) real bug was found and is documented below for completeness, but it
cannot be the terrain culprit because its output is gated off by default. The sky R/G and
star-brightness items trace to separate, already-diagnosed mechanisms (skybox cross-fade
guard; L8 texture decode) — reconfirmed still valid / still fixed, not re-derived from
scratch.

## 1. Ground truth: the runtime EnvLightSettings-equivalent palette entry (28 bytes)

`Environment_Update` (`FUN_0045dd30`) has two palette-consumption paths gated on
`*(byte*)(param_2+0xa7) != 0xff` (`param_2` = envCtx, `play+0x3135`):

- **Cross-fade path** (`bVar5==0xff` branch, lines 150–363 of the decompile): interpolates
  between two time-of-day table ROWS (a 9-row schedule at pool `0x00531EFC`, see
  `title_gamestate_driver.md`-adjacent config-0 schedule) using a per-field LERP keyed by a
  fractional weight `fVar26`. This is the "smooth transition as the active row changes"
  case — used by regular (non-cs) scenes.
- **Direct-copy path** (`else` branch, lines 365–390, taken when `param_2+0x20==0` — no
  weather-cross-fade layer active, which is the title-cs's case since it never sets that
  byte) OR **incremental-blend path** (lines 391–524, taken once `param_2+0xa4` has
  latched) — both read the CURRENT + PREVIOUS slot pointers `pfVar14`/`pfVar15`:
  ```c
  pfVar14 = (float *)(iVar18 + (uint)*(byte *)(param_2 + 0xa5) * 0x1c);   // iVar18 = play+0x3230
  ```
  `iVar18` is the palette LIST BASE (`play+0x3230`, `ram_map.md`'s "active EnvLightSettings
  list"), `param_2+0xa5` is the current slot index (`env_context_layout.md`'s `unk_BF`),
  stride `0x1c` = 28 bytes/entry — all already-pinned facts, reused here.

**NEW this session — the exact per-entry byte layout, read off the direct-copy path**
(lines 368–389; `(int)pfVar14+K` is a byte offset K, `pfVar14+N` un-cast is
POINTER-SCALED — `+N*4` bytes, since `pfVar14` is `float*`):

```c
// dest fields (param_2 = envCtx, offsets relative to envCtx base) written from
// src = pfVar14 (one 28-byte runtime palette entry):
param_2+0xa8 (f32)      = *pfVar14            // src +0x00
param_2+0xac (f32)      = pfVar14[1]          // src +0x04
param_2+0xb0 (u16,&0x3ff)= *(u16*)(pfVar14+2) // src +0x08
param_2+0xb2..0xb4 (u8x3)= src +0x0A,+0x0B,+0x0C   // group 1
param_2+0xb5..0xb7 (u8x3)= src +0x0D,+0x0E,+0x0F   // group 2
param_2+0xb8..0xba (u8x3)= src +0x10,+0x11,+0x12   // group 3
param_2+0xbb..0xbd (u8x3)= src +0x13,+0x14,+0x15   // group 4
param_2+0xbe..0xc0 (u8x3)= src +0x16,+0x17,+0x18   // group 5
param_2+0xc1..0xc3 (u8x3)= src +0x19,+0x1A,+0x1B   // group 6
```

The SIX 3-byte groups (18 bytes, `+0x0A..+0x1B`) land at destination offsets
`0xb2..0xc3` — and **`param_2+0xa8..0xc3` is exactly the N64-shaped `EnvLightSettings`
struct** (`z64environment.h`'s canonical layout, size `0x16`, offset `-0x18` from N64's
`+0xC0` due to the differently-sized 3DS `EnvironmentContext` preceding it):

```c
typedef struct {                    // N64 EnvLightSettings (z64environment.h), for field-order reference
    /* 0x00 */ u8 ambientColor[3];
    /* 0x03 */ s8 light1Dir[3];
    /* 0x06 */ u8 light1Color[3];
    /* 0x09 */ s8 light2Dir[3];
    /* 0x0C */ u8 light2Color[3];
    /* 0x0F */ u8 fogColor[3];
    /* 0x12 */ s16 fogNear, fogFar;
} EnvLightSettings; // 0x16
```

Matching group-for-group (dest `0xb2..0xc3`, 6 groups, SAME order as N64's struct):
group1=ambientColor, group2=light1Dir, group3=light1Color, group4=light2Dir,
group5=light2Color, group6=fogColor. So **the runtime 28-byte palette entry is**:

```
+0x00 f32  fogEnd
+0x04 f32  drawDist
+0x08 u16  (masked 0x3ff at use — a packed fog/blend field)
+0x0A u8[3]  ambientColor
+0x0D s8[3]  light1Dir
+0x10 u8[3]  light1Color
+0x13 s8[3]  light2Dir
+0x16 u8[3]  light2Color
+0x19 u8[3]  fogColor
                                                            (= 0x1C = 28 bytes)
```

**This resolves a genuine ambiguity between two existing soh3d-side docs**:
`env_context_layout.md` had *guessed* "amb l0col l0dir l1col l1dir fogEnd drawDist"
(color-BEFORE-direction, floats-last, no fogColor) from indirect JIT-watchpoint evidence;
that guess is **wrong** — the decompiled consumer proves DIRECTION-before-COLOR (matching
N64 byte-for-byte) and floats-FIRST with a 6th (fogColor) group soh3d hadn't previously
accounted for in the runtime shape.

## 2. On-disk (ZSI cmd-0x0F) format is DIFFERENT from the runtime format — verified by raw bytes

The runtime array's floats-first layout is NOT what's stored on disk. Dumping spot99's
raw cmd-0x0F bytes directly from the ROM (`/scene/spot99_info.zsi`, 17 entries at file
offset 12884, 28 bytes each — reproduced this session with soh3d's own `tools/ctr_romfs.py`
+ `tools/zsi.py`, zero emulator involvement) and testing candidate float positions:

- Interpreting bytes **`+0x10..+0x13`** as `f32` LE for slot 1 → **32000.0** (exact).
- Interpreting bytes **`+0x14..+0x17`** as `f32` LE for slot 1 → **12000.0** (exact).

Both are clean, round, plausible fogEnd/drawDist values (matching the Kokiri Forest
fogEnd/drawDist magnitudes already established in `scene_lighting.md`/`ram_map.md`).
Testing the runtime-array float position (`+0x00`) on the same on-disk bytes produces
non-round garbage. **So on disk, the floats sit at the END (`+0x10`/`+0x14`), matching
`scene_lighting.md`'s ORIGINAL documented on-disk layout** (`ambient@0x00,
light0Dir@0x03, light0Color@0x06, light1Dir@0x09, light1Color@0x0c, pad@0x0f,
fogEnd@0x10, drawDist@0x14, blendFog@0x18`) — which has only 5 color/dir groups (15
bytes) + 1 pad byte before the floats, i.e. **no on-disk fogColor field** (consistent
with `scene_lighting.md`'s own N64-comparison note, "fogColor: missing/split"). A
scene-load-time converter (not traced this session — out of scope for the title-cs
question) must therefore repack on-disk entries into the runtime's floats-first,
6-group shape, sourcing `fogColor` from elsewhere. This on-disk/runtime split explains
why two different soh3d docs had drawn two different (both partially wrong) conclusions
from two different vantage points.

**Net for field order (the actually load-bearing fact for the darkness question):**
on-disk AND runtime both keep light-DIRECTION before light-COLOR within each light, in
the N64-identical group order `ambient, dir1, col1, dir2, col2[, fogColor runtime-only]`.
`env_context_layout.md`'s "color before direction" guess is retracted.

## 3. Terrain shading formula (reconfirmed, not re-derived — `spot00_field_lighting_ground_truth.md`)

Already established by a prior session via direct CMB material dump
(`spot00_field_lighting_ground_truth.md`): spot00's ground/hill/grass materials (34 of 38)
are `vertexLighting=1`, `matAmbient=WHITE(1,1,1)`, **`matDiffuse=BLACK(0,0,0)`**,
combiner stage-0 `MODULATE` scale `2.0`. Black matDiffuse makes any N·L directional term a
provable no-op (**light1Dir/light2Dir literally cannot matter for this material class**,
which also means the field-order bug hunted for in §1–2 was never going to be the terrain
culprit even before checking SoH's consumption of it — see §5). Ground truth formula:

```
color = saturate( 2.0 * texel * bakedVertexColor * (sceneAmbientColor/255 * matAmbient(1,1,1)) )
      = saturate( 2 * texel * vColor * ambient/255 )
```

Reconfirmed this session by re-running the material dump against the current ROM
(`scratch/spot00_mat_dump.cpp`, prebuilt binary, run offline against
`/scene/spot00_0_info.zsi` — no emulator): all 38 materials print `vLit=1`,
`matAmb=(1,1,1)`, `matDif=(0,0,0)`, `combScale=2.0`, identical to the prior finding.

## 4. Baked vertex color (vColor) sanity — NEW this session, static, rules out a decode bug

The prior session's open candidate #2 ("texel*vColor decoding measurably dark in
SoH3D's C++ CMB loader") is checkable OFFLINE, without running the game: SoH3D's own
CMB parser (`Shipwright/cmb3d/asset/cmb.cpp`) computes `vColor` at load time from the
file's own per-attribute `scale` field (`readAttr`: `dtRead(...) * attr.scale`,
data-driven, not a hardcoded normalization). Running the existing offline dump tool
(`scratch/bin/spot00_mat_dump`, same binary used above) against the live ROM prints the
DECODED per-group baked-vertex-color stats for every draw group in spot00 room 0:

```
grp[07] mat=35 (s00_yuka_01) verts=4584  avg=(0.45,0.46,0.44,1.00)
grp[23] mat=34 (s00_yama_01) verts=810   avg=(0.44,0.43,0.43,1.00)
grp[26] mat=18 (s00_road_01) verts=405   avg=(0.51,0.51,0.49,1.00)
... (38 groups total, every one in the 0.19–0.51 avg range)
```

Every group's decoded average sits in a plausible 0.19–0.51 baked-AO range (nothing near
0, nothing anomalously scaled by a stray extra `/255` or `/2` that would show up as
values an order of magnitude off from this band). **This rules out a vColor decode bug
specific to spot00** (candidate 2 from `spot00_field_lighting_ground_truth.md`/
`2026-07-08-title-terrain-lighting-rootcause.md`) by direct, static measurement — the
Kokiri asset was the only one previously spot-checked; spot00 is now spot-checked too and
shows no anomaly.

## 5. Cross-check against SoH3D's live code (read-only, static)

Three legs, all independently verified this session:

1. **Shader** (`Shipwright/libultraship/src/fast/zelda3d_sdl3gpu.cpp`, `kFrag`,
   `sceneLitPath` branch): `rgb = t.rgb*vColor.rgb; rgb *= uAmbient.xyz; rgb =
   clamp(rgb,0,1) * uExtra.w` — a byte-for-byte match to §3's formula. `uExtra.w =
   grp.vertexLighting ? grp.combScaleRGB : 1.0` (line 1659, feeds the material's `2.0`).
   `ambGroup = grp.vertexLighting && gZelda3dWorldLit && !forceUnlit` (line 1671) gates
   whether `uAmbient.w>0` (i.e. whether `sceneLitPath` fires at all); `gZelda3dWorldLit`
   defaults **on** (`zelda3d_gl.cpp:250`, REPL-only toggle) and `forceUnlit` is a
   title-LOGO-only flag (never set for room/terrain draws) — so `ambGroup` is true for
   spot00's terrain at title, `sceneLitPath` is live, and the formula above is what
   actually executes. No divert to the darker character/prop `shade` branch.

2. **Ambient CPU value, title-specific**: `TitlePresentation::applyLightOverride`
   (`behaviors/title/title_presentation.cpp:300–335`) writes `play->envCtx.lightSettings.
   ambientColor` from `Zelda3D_TitleCsBlendedLight`, which lerps between
   `sTitlePal[slotFrom]`/`sTitlePal[slotTo]` (`zelda3d_cutscene.cpp:566–591`) — a schedule
   the hard-context ruling already confirms correct
   (`2026-07-08-title-daytime-schedule-re.md`). **`sTitlePal`'s own byte offsets
   (`zelda3d_cutscene.cpp:301–308`) are**:
   ```c
   o->amb[j] = e[0x0A + j]; o->l1dir[j] = e[0x0D + j]; o->l1col[j] = e[0x10 + j];
   o->l2dir[j] = e[0x13 + j]; o->l2col[j] = e[0x16 + j]; o->fogCol[j] = e[0x19 + j];
   ```
   **This is EXACTLY the layout independently derived in §1 from the fresh
   `Environment_Update` decompile** — direction before color, ambient at `+0x0A`, same
   6-group order, same 28-byte stride. `sTitlePal` is loaded from a table located directly
   before the `" BDQ"` cutscene blob in the ZSI (a THIRD location, distinct from both the
   generic on-disk cmd-0x0F entries of §2 and the runtime array of §1 — but sharing their
   byte SHAPE), and was already regression-verified against 5 live Az dayTime samples per
   `debug_journal/2026-07-07-title-lighting-solved.md`. Two independent methods (this
   session's decomp; the prior session's live regression) now agree on the same layout —
   `sTitlePal`, and therefore `play->envCtx.lightSettings.ambientColor` feeding
   `gZelda3dAmbient`/`uAmbient.xyz`, is **correct**.

3. **`Zelda3D_UpdateLight`** (`zelda3d.c:3908+`): `ambient[i] =
   (float)(ls->ambientColor[i])/255.0f` → `Zelda3D_GL_SetLightParams` →
   `gZelda3dAmbient[3]` → `ubo.uAmbient[i] = gZelda3dAmbient[i]*grp.matAmbient[i]` — a
   straight, unmodified `/255` normalize with no extra scale/clamp anywhere in the chain.

**All three legs check out.** Combined with §3/§4 (formula + baked-color both ROM-correct)
this leaves **no static-analysis-visible defect anywhere in the terrain lighting pipeline**
from ROM bytes to shader output.

## 6. The one REAL bug found this session — confirmed DORMANT, not the terrain culprit

`Zelda3D_TitleLightSlotsConvert` (`zelda3d.c:210–230`, feeds `sZelda3dTitleLightSlots` /
`gZelda3dScenePalette` / `Zelda3D_WorldShadeBlend`) reads the ON-DISK cmd-0x0F entries
(`sLightSlotsRaw`, §2's format) with WRONG offsets:

```c
// current (wrong):
o->amb[j]   = e[0x00 + j];
o->l0col[j] = e[0x04 + j];   // should be l0dir at +0x03
o->l0dir[j] = e[0x07 + j];   // should be l0col at +0x06 — swapped AND off-by-one
o->l1col[j] = e[0x0a + j];   // should be l1dir at +0x09
o->l1dir[j] = e[0x0d + j];   // should be l1col at +0x0c — same swap
```

Verified as garbage by direct ROM measurement this session: decoding spot99's slots with
these offsets produces `l0dir=(0,0,0)` (an invalid, unnormalizable direction) for 7 of 17
slots and an IDENTICAL constant `(-72,-72,-72)` for another 8 — a degenerate, clearly-wrong
pattern that disappears when read with the §2-correct offsets (varying, non-degenerate
`s8[3]` triples with plausible magnitudes across all 17 slots).

**Why this is not the terrain culprit**: `gZelda3dScenePalette` is consumed by exactly one
function, `Zelda3D_WorldShadeBlend` → `gZelda3dWorldShadeAmb/L0Col/L1Col/...`, which is the
CPU flat-tint "`#111` worldshade" path. `gZelda3dWorldShade` (the enable flag)
**defaults to `0`** (`zelda3d.c:40`) and is only ever set via the `worldshade` REPL command
— already established as inactive for title terrain in
`spot00_field_lighting_ground_truth.md`/`2026-07-08-title-terrain-lighting-rootcause.md`.
So this bug produces zero visible effect today. **It should still be fixed** (correct
offsets: `l0dir@+0x03, l0col@+0x06, l1dir@+0x09, l1col@+0x0c`, matching §2) before anyone
enables `gZelda3dWorldShade` or otherwise wires `Zelda3D_TitleLightSlots()` into a live
path — leaving it as-is is a live landmine for the next session that touches worldshade.

## 7. Verdict on the ~2.1–2.3x terrain residual

**Not in the lighting math.** Every derivable-by-static-analysis link in the chain — ROM
material bytes, ROM vertex-color bytes, the shader's arithmetic, the ambient CPU value's
byte layout AND schedule blend, and the plumbing that carries it into the UBO fill call —
independently checks out against ROM ground truth this session, on top of the prior
session's already-exhausted checks (which had access to fewer of these legs). The
`spot00_field_lighting_ground_truth.md` doc's open candidate list narrows to a single
unfalsified item:

- **Candidate 1 (still open): a live UBO-fill/upload defect specific to this draw** —
  `uAmbient.xyz` not actually landing as `sceneAmbient/255*matAmbient` in the GPU-visible
  buffer for this particular group, despite the CPU-side values being provably correct.
  This is **runtime state**, not ROM/source-static — it requires the `sgdump <modelId>`
  REPL call `spot00_field_lighting_ground_truth.md` already specified, which is out of
  scope for a static-RE session (no running-game probing per this task's brief). This
  remains the single most likely locus; nothing in this session's static work rules it in
  or out further, but nothing rules it out as everything upstream and downstream of it now
  checks out.
- **Secondary confound worth ruling out first**: soh3d's own 2026-07-10 closing sweep
  documents (residual #5) that at least one "cs-frame-EXACT" matched pair (az=700/cs 438)
  shows the two engines framing genuinely different terrain (wide hillside+road on Az vs
  closer grass on SoH) despite the cursors provably agreeing to the frame — a camera
  segment-boundary issue, not a lighting issue. Where this occurs, a per-pixel darkness
  ratio partly measures "different patch of ground, different local AO/material" rather
  than "same patch, wrong brightness." The az=500/550 pairs (this doc's §3/§4 evidence
  base) do NOT show this framing divergence and still show the same ~1.9–2.6x gap, so this
  confound does not evaporate the residual — but it means the residual's magnitude should
  be re-measured only at pairs independently confirmed to be pixel-aligned, not just
  cs-frame-aligned, before spending further effort chasing an exact multiplier.

## 7.1 UPDATE 2026-07-10 (soh3d runtime session) — decomposition lands: the missing term is on THIS side

The soh3d side closed both open items in §7 (see soh3d `debug_journal/
2026-07-10-fireglow-combiner-and-terrain-decomposition.md` §2 and its
`tools/terrain_pixel_decompose.py`):

- **Candidate 1 (UBO-fill defect) — RULED OUT for good, and then some.** Analytic
  single-pixel decomposition at the pixel-aligned az=500/soh=908 pair: raycast the real
  spot99 room-0 ROM triangles from the live camera pose (harness `compare camera`:
  eye/at/up byte-matched between the two engines), recover the exact bilinear ROM texel,
  the exact barycentric baked vertex color, and the live ambient (43,63,116)/255 (harness
  `compare lighting`: identical on both engines), and evaluate this doc's formula
  `saturate(2·t·v·a)`. **SoH's rendered pixels equal the formula to sub-LSB precision**
  (mean |err| = 0.32/0.40/0.56 per RGB channel out of 255, over 400 random near-ground
  pixels inside fogNear). The entire SoH chain — decode, vertex colors, ambient, shader,
  UBO, output — is formula-exact.
- **The oracle's pixels are ~1.9x ABOVE the formula**, channel-uniform on region means
  (Az/formula = 1.89 R / 1.93 G / 1.85 B; slight sub-2 depression consistent with a ~5%
  fog mix toward fog=(8,6,32)). Per-pixel the ratio cloud is flat/noisy (log-log slope
  0.1–0.26 — 3DS-native filtering + upscale smoothing), so region means are the meaningful
  statistic. Texture-pack contamination was separately ruled out (pack disabled: ≤5% shift).

**Conclusion for the decomp stream: the formula in §3 is missing close to one x2 for these
vertex-lit scene materials.** Candidates to chase HERE (static/RE): a second x2 combiner
stage scale in the real material chain (effective `sat(4·t·v·a)`), a doubled vertex-color
or light-sum term in the PICA vertex-lit fixed function (GL-style two-sided/doubling
semantics), or Azahar's own output-stage transfer curve (the per-pixel flattening hints a
nonlinearity also exists in its present path — if so, it belongs to the ORACLE's capture,
not the game). Until the term is named here, soh3d intentionally ships the formula as-is —
no fitted constants (stop-micro-tuning directive).

## 8. Sky R/G and star brightness — reconfirmed, not re-derived

Out of respect for the hard-context ruling and this session's static-only scope, these are
NOT re-derived from scratch; existing soh3d-side root causes are reconfirmed still valid by
reading current source (no game run):

- **Sky R/G "frozen"**: soh3d's own `2026-07-08-title-divergence-remeasure.md` (Verdict 3)
  already root-caused this to `play->envCtx.skybox1Index == skybox2Index` collapsing the
  cross-fade guard in `zelda3d.c`'s sky-draw path (`Zelda3D_SkyModelId`,
  `zelda3d.c:3507+`) — a **skybox slot-selection** issue, not a color-math or byte-layout
  bug, and therefore orthogonal to everything derived above (`skybox1Index`/`skybox2Index`/
  `skyboxBlend` are N64-side `envCtx` fields driven by the N64 sky-schedule code from
  `gSaveContext.dayTime`, not by `EnvLightSettings`/the palette entries this doc covers).
  Pinning WHY `skybox1Index` and `skybox2Index` land equal across the tested dayTime range
  needs decompiling the N64-equivalent `Skybox_UpdateActor`/schedule-selector — noted as a
  concrete follow-up, out of scope for this session's terrain-lighting brief.
- **Star brightness**: soh3d's `2026-07-08-title-star-brightness-L8-decode.md` root-caused
  a PICA200 L8/L4 texture decode bug (luminance aliased into alpha, causing an `L²`
  self-attenuation on additive blending instead of linear `L`). Reading current source
  (`Shipwright/cmb3d/asset/pica_texture.cpp:145–162`) confirms **the fix is present**:
  `GF_L8`/`GF_L4` decode as `{L,L,L,0xFF}` (opaque alpha), matching Citra/Azahar's own
  `Common::Color` convention. The 2026-07-10 closing sweep's "star brightness unchanged"
  note is most likely a stale-build measurement artifact (that same sweep documents having
  to rebuild its harness once already because a prebuilt binary predated other title
  commits) rather than a live regression — flag for a fresh measurement against a
  freshly-built binary, not a re-investigation of the decode itself.

## Artifacts / repro (static, offline, no emulator)

- ROM byte dump + float-plausibility check (spot99 cmd-0x0F, §2):
  `tools/ctr_romfs.py` + `tools/zsi.py` against `/scene/spot99_info.zsi`, ad hoc — every
  number in §2 is reproducible with a ~15-line python snippet using those two modules.
- Material + vertex-color dump (§3/§4): `scratch/bin/spot00_mat_dump` (prebuilt, source at
  `scratch/spot00_mat_dump.cpp`) against `ZELDA3D_OOT3D_ROM`.
- `build/decomp/0045dd30.c` (this oot3d-decomp repo) — full 627-line `Environment_Update`
  decompile, the source of §1.

## Cross-references

- `oot3d-decomp/docs/env_context_layout.md` — superseded on field order (§1); slot-index
  fields (`unk_BF`/`unk_BD` at envCtx `+0xA5`/`+0xA6`) remain correct and are reused here.
- `oot3d-decomp/docs/scene_lighting.md` — on-disk layout for non-fogColor fields confirmed
  correct (§2); the "+0x0f pad" byte's exact purpose (vs. runtime's fogColor) is still open.
- `oot3d-decomp/docs/ram_map.md` — Kokiri runtime-list discovery consistent with, and now
  fully explained by, §1's decompiled layout.
- soh3d `debug_journal/spot00_field_lighting_ground_truth.md` (in the SoH3D repo's
  `oot3d-decomp` doc of the same name is this repo's own
  `docs/spot00_field_lighting_ground_truth.md`) — §3/§4 reconfirm it without contradiction.
- soh3d `debug_journal/2026-07-08-title-terrain-lighting-rootcause.md`,
  `2026-07-04-title-parity-pinned650.md` — SoH-side history this doc's §5 cross-checks.

## 9. Session 2026-07-10 (decomp stream): candidates (a)/(b)/(d) definitively RULED OUT by corrected-offset combiner dump; residual narrowed to the vertex-shader program

Follow-up to §7's open candidate list, triggered by soh3d's `2026-07-10-fireglow-combiner-and-
terrain-decomposition.md` (formula-exact SoH vs oracle ~1.89–1.93x, channel-uniform, non-linear
per-pixel). This session re-checked the terrain TEV combiner with the **corrected** constant-color
palette offset (`+0xB4`, not the old buggy `+0xB8` — see `title_logo_fireglow_cmab.md`'s
`comb_const_scale_rgb` bugfix note) to see whether the fire-glow session's same one-slot-late bug
also corrupted the terrain material's own combiner-scale read.

**Method**: extracted `spot00_0_info.zsi`'s embedded room CMB directly from the ROM
(`tools/ctr_romfs.py` + `tools/zsi.py`, offline, no emulator) and ran a corrected combiner dumper
(`soh3d:scratch/decomp_agent/dump_combiner.py`, itself already using `+0xB4`+manual TEV-stage-table
parsing, independent of `cmb.cpp`'s in-tree fix) against 6 of spot00 room 0's ground materials
(`35=s00_yuka_01, 34=s00_yama_01, 18=s00_road_01, 7, 23, 26` — the same set `spot00_mat_dump`
sampled previously).

### 9.1 (a) Combiner-scale misread — RULED OUT, byte-identical across all 6 materials

```
textureCombinerTableCount = 1   (all 6 materials)
-- TEV stage 0 --
  combineRGB=MODULATE  scaleRGB=x2
  RGB: src0=PRIMARY_COLOR src1=TEXTURE0 src2=CONSTANT   op=SRC_COLOR (MODULATE only consumes src0/src1)
  combineAlpha=MODULATE scaleAlpha=x1
  constantIndex=0 -> constColor[0]=(0,0,0,255)   (unused by MODULATE's 2-source form)
```

`scaleRGB` reads `x2` at the corrected offset, identical to the prior (uncorrected-era) reading —
**this material's combiner scale was never affected by the +0xB4/+0xB8 bug** (the bug only shifted
the *constant-color palette* read, and this stage doesn't consume a constant slot: MODULATE only
uses its first two sources, `PRIMARY_COLOR` and `TEXTURE0`; `CONSTANT` sits in the unused third
slot, a common "leftover default" the `cmb.cpp` parser already special-cases per its own comment on
`slotsUsed`). **Ruled out**: no hidden x4, the hardware genuinely runs at x2 for this material
class, matching what SoH already implements and what §3's formula already assumes.

### 9.2 (b) A second/skipped combiner stage — RULED OUT, all 6 materials have exactly 1 stage

`textureCombinerTableCount=1` for every sampled material — there is no second stage to have
skipped. The single stage is exactly `2.0 * (PRIMARY_COLOR * TEXTURE0)`, matching §3's formula
term-for-term (`PRIMARY_COLOR` = the vertex-lit interpolated color = `bakedVertexColor` scaled by
whatever the vertex-processing stage computed for `ambient`, `TEXTURE0` = the texel). **Ruled out.**

### 9.3 (d) Missing fragment-lighting diffuse term — RULED OUT more precisely than before

`isFragmentLighting=0` (CMB material byte) was already known from the prior session. This session
adds a **structural** ruling-out, independent of that flag being read correctly: read Azahar's own
software rasterizer (`Azahar/src/video_core/renderer_software/sw_rasterizer.cpp:530-554`) —
`ComputeFragmentsColors` (the PICA fixed-function fragment Lighting Unit, `sw_lighting.cpp`) is
gated only by the GPU register `regs.lighting.disable`, and its two outputs
(`primary_fragment_color`/`secondary_fragment_color`) are fed into the TEV **only as combiner
sources `FRAG_PRIMARY_COLOR`(0x6210)/`FRAG_SECONDARY_COLOR`(0x6211)** (`WriteTevConfig`'s source
enum, cross-checked against `dump_combiner.py`'s own `SOURCE` table). The terrain material's single
stage sources are `PRIMARY_COLOR`(0x8577, the plain interpolated vertex-color attribute, a
*different* GPU register from `FRAG_PRIMARY_COLOR`)/`TEXTURE0`/`CONSTANT` — **never**
`FRAG_PRIMARY_COLOR`/`FRAG_SECONDARY_COLOR`. So even if the fixed-function fragment Lighting Unit
were computing something nonzero for this draw (regardless of the `isFragmentLighting` byte), the
combiner never reads its output — it is **structurally unreachable** for this material, not just
"disabled by a flag that might be misread." This fully closes candidate (d): there is no fragment-
stage directional-light term anywhere in this material's pipeline to have missed, corrupted-read or
otherwise.

### 9.4 Residual redirected: the `PRIMARY_COLOR` input itself is vertex-shader output, not a CMB byte field

With (a)/(b)/(d) closed, the only remaining unaccounted term is what value `PRIMARY_COLOR` (the
combiner's first source) actually holds per pixel. Per the same `sw_rasterizer.cpp` read
(lines ~500-516), `primary_color` is built by **barycentric-interpolating the mesh's own vertex
output-register `color` attribute** (`v0.color`/`v1.color`/`v2.color`) — i.e. it is whatever the
**real PICA200 vertex shader program** for this material computed and wrote to its color output,
executed faithfully by Azahar's vertex-shader interpreter. This is a genuinely different code path
from anything a CMB *material* byte dump (TEV stages, blend state, lighting-config scalar) can see:
CMB materials on this SDK version select one of a small set of **shared, precompiled vertex-shader
programs** by index (not an embedded shbin — confirmed no `shbin`/shader magic anywhere in the
948KB `spot00_0_room.cmb`), so whatever arithmetic actually produces
`PRIMARY_COLOR = ambient * matAmbient * bakedVertexColor` (§3's assumed shape) — or, if the ~1.9x
residual is real 3DS ground truth, some doubled variant of it — lives in that **shared vertex
program's bytecode**, not in any CMB material field sampled so far (this session's or any prior
one).

**This reframes the residual, does not resolve it.** Concrete next static step: find the
material-chunk field that selects the vertex-shader program ID for scene/terrain materials
(distinct from the already-parsed TEV/blend/lighting-config fields — not yet located), identify
where the SDK's small fixed set of shared vertex programs is stored (candidate: a shared "gsh"-style
binary loaded once at boot, or a fixed table inside `code.bin`), and disassemble the specific
program these materials select. The per-pixel *non-linearity* soh3d's session measured (log-log
slope 0.1–0.26, "flat noisy cloud" rather than a clean multiplicative cloud) is circumstantial
support for this direction: a genuine per-vertex directional (N·L-shaped) term interpolated across
large, gently-curved terrain triangles would produce exactly this kind of smooth-but-not-flat
per-pixel variation, which a pure "ambient x2" constant could not — but this is offered as a
plausibility signal, not proof; it was not re-derived from the vertex program itself this session.

**Do not read this as "the terrain math is unexplained end-to-end"** — §3-§8's formula, the CMB
byte-level material state (now checked at both the old and corrected constant-color-palette
offsets), and the shader/UBO plumbing on the SoH3D side are all independently confirmed correct.
The single remaining unknown is narrowly scoped to "what does the shared PICA vertex-shader program
selected by these materials actually compute for its color output register" — a shader-bytecode
question, not a CMB-material-byte or SoH3D-port question.

### Anchors (this session)

- `soh3d:scratch/spot00_0_room.cmb` extracted this session (948096 B, from
  `/scene/spot00_0_info.zsi` cmb-chunk offset 996, size 948096) via `tools/ctr_romfs.py`+
  `tools/zsi.py` — reproducible, offline.
- `soh3d:scratch/decomp_agent/dump_combiner.py` run against materials 7/18/23/26/34/35 of that
  CMB: all 6 identical — `textureCombinerTableCount=1`, stage0
  `MODULATE(PRIMARY_COLOR,TEXTURE0) scaleRGB=x2`, `isFragmentLighting=0`,
  `diffuse=(0,0,0,255)` (offset `+0xA8`, unaffected by the palette-offset bug).
- `Azahar/src/video_core/renderer_software/sw_rasterizer.cpp:490-554` — `primary_color` built from
  interpolated vertex `.color` attribute (vertex-shader output); `ComputeFragmentsColors`
  (fragment Lighting Unit) gated by `regs.lighting.disable`, output routed only through
  `FRAG_PRIMARY_COLOR`/`FRAG_SECONDARY_COLOR` combiner sources — confirmed absent from this
  material's stage.
- `Azahar/src/video_core/renderer_software/sw_lighting.cpp` (`ComputeFragmentsColors`) read in
  full — real per-light `ambient` + summed `global_ambient` accumulation exists in this unit, but
  is confirmed (§9.3) unreachable for this material; flagged only as a reference for what a
  PICA-faithful "why would ambient double" mechanism looks like, in case the vertex-shader program
  (once found) turns out to reuse similar per-light-ambient-summing logic.
