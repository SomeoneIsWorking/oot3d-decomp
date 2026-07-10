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

## 10. Session 2026-07-10 (decomp stream): the shared vertex-shader program FOUND and disassembled — missing term named: ambient is SUMMED per enabled light, not applied once

Follow-up to §9.4's concrete next step ("find the material field that selects the vertex-shader
program, locate the shared program storage, disassemble it"). **Found on the first static search,
no CMB material field needed**: the game's RomFS root contains two `.shbin` files as ordinary
top-level assets — `/CmbVShader.shbin` (the CMB/scene/actor vertex shader, 3144 bytes) and
`/profile.shbin` (664 bytes, a second small program pair, not investigated further — not what
scene-mesh materials use per §9.4's `sw_rasterizer.cpp` read of vertex-color provenance and per
`Model_Draw`-family code always binding the one shared model-vertex shader). All scene/actor CMB
models are drawn through this ONE program (there's no per-material index into a shader table
because there's only one shader for this draw class — the material-field search of §9.4 was
looking for something that doesn't need to exist).

**Method (fully static/offline, no emulator)**: `tools/ctr_romfs.py` (RomFS walker, already in
this repo) resolved `/CmbVShader.shbin`'s absolute ROM byte range
(NCSD→NCCH partition 0→RomFS level-3 file table, no crypto needed since the dump is already
decrypted) and extracted it. A new tool, **`tools/shbin_disasm.py`** (committed this session,
dependency-free, no Azahar/nihstro build required — reimplements the container/bytecode format
directly from Azahar's bundled `externals/nihstro/include/nihstro/{shader_binary.h,
shader_bytecode.h}`, which are themselves the documented-and-shipped PICA200 shader ISA used by
Azahar's own interpreter/JIT/software rasterizer, i.e. ground truth for how the console executes
these bytes) parses the `DVLB→DVLP→DVLE` container, the uniform/output/constant tables, and
disassembles all 310 code words. Sanity check: the DVLP's 3 embedded float constants
(`c93=(0,1,2,3)`, `c94=(0.125,0.003906,0.5,0.01)`, `c95=(3,4,5,32)`) decode to clean, plausible
round numbers via the float24 unpacker — confirms the parser's bit-offsets are correct end-to-end
before trusting the disassembly.

### 10.1 The uniform table names the light-setup shape directly

```
LightDir0            c80        LightDiffuseColor0   c81   LightAmbientColor0.xyz c82
LightDir1            c83        LightDiffuseColor1   c84   LightAmbientColor1.xyz c85
LightDir2            c86        LightDiffuseColor2   c87   LightAmbientColor2.xyz c88
MatDiffuseColor      c8         MatAmbientColor       c9
IsVertexLighting     b9         IsFragmentLighting    b10
```

This is a **3-light array with an independent ambient color PER light slot** — structurally
different from the N64 `EnvLightSettings` shape (`ambientColor` once, shared by both directional
lights) that §1's decompile pinned for the CPU-side data. The CPU-side light-setup code (not
traced this session — it lives in engine glue outside `Environment_Update`, a genuinely separate
function from the one this doc's §1 already covers) must convert the single N64-style `ambientColor`
into this per-light-slot uniform layout somehow. That conversion is the first place a "per-light
ambient duplication" could originate, and §10.2 shows the vertex shader's OWN arithmetic makes any
such duplication additive (not a no-op), i.e. the shader is structurally primed to reproduce exactly
this kind of bug/design if the CPU writes the same ambient value into more than one light slot.

### 10.2 Disassembly of the color block (words 76–120) — ambient is `Σ` over enabled lights, diffuse is `Σ NdotL_i · diffuseColor_i`

Reached from `main` (word 0) via the call chain `main→[14]→[44]→[63]→[76]`, gated at word 76 by
`ifu bool=9` (**`IsVertexLighting`**, matching this material class's already-known
`vertexLighting=1` CMB byte):

```
 76  ifu    bool=9 (IsVertexLighting) num=4 dest_off=112     ; if (!IsVertexLighting) goto 112 (unlit fallback)
 77  mov    r0, c8                     ; r0 = MatDiffuseColor
 78  mov    r1, c9                     ; r1 = MatAmbientColor
 79  dp3    r3.x, -c80, r14            ; r3.x = dot(-LightDir0, worldNormal)   =  N·L0
 80  dp3    r3.y, -c83, r14            ; r3.y = dot(-LightDir1, worldNormal)   =  N·L1
 81  dp3    r3.z, -c86, r14            ; r3.z = dot(-LightDir2, worldNormal)   =  N·L2
 82  mov    r9,  0                     ; r9  = ambient accumulator := 0
 83  mov    r10, 0                     ; r10 = diffuse  accumulator := 0
 84  mov    r2.x, c80.w                ; r2.x = LightDir0.w  (per-light "enabled" scalar)
 85  mov    r2.y, c83.w                ; r2.y = LightDir1.w
 86  mov    r2.z, c86.w                ; r2.z = LightDir2.w
 87  cmp    o0.w, 1.0, r2.x            ; CC := compare(1.0, LightDir0.w)   -- CPU flags a light "on"
 88  ifc    (cc.x) ...                 ;   by writing 1.0 into the unused LightDir_i.w component
 89    mul  r4, c81, r0                ;   r4 = LightDiffuseColor0 * MatDiffuseColor
 90    max  r3.x, 0, r3.x              ;   r3.x = max(0, N·L0)
 91    mad  r9.xyz,  r1.xyz, c82.xyz, r9.xyz   ; r9  += MatAmbientColor * LightAmbientColor0   <-- (A)
 92    mad  r10.xyz, r3.x,   r4.xyz,  r10.xyz  ; r10 += (N·L0) * (MatDiffuseColor*LightDiffuseColor0)
 93    add  r10.w, r10.w, r4.w
 94  ifc    (cc.y, from a cmp on r2.y, same pattern) ...      ; light 1 block, mirrors 89-93 with c84/c85
 95..99   (identical structure: r9 += MatAmbientColor*LightAmbientColor1, r10 += N·L1 * diffuse1)
100  cmp    ... r2.z
101  ifc    (cc, light 2 enabled) ...
102..106  (identical structure again: r9 += MatAmbientColor*LightAmbientColor2, r10 += N·L2*diffuse2)
107  add    r10.xyz, r10.xyz, r9.xyz   ; totalColor = diffuseAccum + ambientAccum
108  ifu    bool=5 (HasColor) ...
109    mul  r9,  c90.zzzz, v2          ; r9  = VertexAttributeScale2 * bakedVertexColor (v2 = aColor)
110    mul  r10, r10, r9               ; FINAL: o1 (COLOR) source = (diffuse+ambient) * bakedVertexColor
...
120  mov    o1.xyzw, r10.xyzw          ; write to output register o1 = COLOR (the PRIMARY_COLOR the TEV reads)
```

(Full 310-word disassembly + uniform/output/constant tables reproducible with
`python3 tools/shbin_disasm.py scratch/CmbVShader.shbin --range 0 310`, byte-cited above by word
index and `0x`-prefixed code offset.)

**This is the missing term, named precisely**: the shader does **NOT** apply `matAmbient * sceneAmbient`
once — it accumulates `matAmbient * LightAmbientColor_i` **once per enabled light** (instruction
91/97/104, `mad r9.xyz, MatAmbientColor.xyz, LightAmbientColor_i.xyz, r9.xyz`, three structurally
identical blocks gated independently by each light's own `LightDir_i.w` enable flag). The diffuse
half of the same sum (`N·L_i * LightDiffuseColor_i`, instr 92/98/105) is provably a no-op for these
terrain materials because `MatDiffuseColor = c8 = BLACK(0,0,0)` (§3, reconfirmed) zeroes `r4` at
instruction 89/95/102 regardless of `N·L_i` — so **only the ambient sum survives**, and it survives
exactly as many times as there are enabled lights.

**Why this produces ~1.9x and not exactly 2x/3x**: N64 `EnvLightSettings` (§1) has ONE ambient
color shared across its 2 directional "lights" (`light1Dir/light1Color`, `light2Dir/light2Color` —
note those are DIFFUSE colors on the N64 side, not per-light ambients; N64 has no per-light ambient
concept at all). The engine's CPU-side N64→3DS light-setup glue (not yet traced — a genuinely
separate function from `Environment_Update`, flagged as the next concrete decomp target) must
therefore be writing the SAME scene `ambientColor` into more than one of `LightAmbientColor0/1/2`
to reproduce "one shared ambient, two lights" in this 3-independent-ambient-slots shader — and every
light slot that gets it and is flagged enabled (`LightDir_i.w`) adds another full copy into `r9`.
Two enabled lights carrying the identical ambient value gives `r9 = 2 * matAmbient * ambientColor`
— combined with the already-confirmed (§9.1) combiner `MODULATE(...)  * 2` on top, the full chain is:

```
o1 (PRIMARY_COLOR) = (Σ_{enabled i} matAmbient · LightAmbientColor_i) · vColorScale · vColor
TEV stage0          = 2 · PRIMARY_COLOR · texel
                    = 2 · (Σ_i matAmbient·LightAmbientColor_i) · vColorScale · vColor · texel
```

vs. this doc's §3 formula (and SoH's exact port of it) which applies the ambient term **once**:
`saturate(2 · texel · vColor · ambient/255)`. If exactly 2 of the 3 light slots are enabled and
both carry the scene's single ambient color (the natural N64→3DS mapping given N64 only has 2
directional lights), ground truth is **2×** the ported formula — matching the measured 1.89–1.93x
region-mean ratio almost exactly (the sub-2 residual is consistent with §7.1's already-noted ~5%
fog-mix depression, or with the 2 enabled lights' ambient values not being bit-identical). This is
now a **named, instruction-cited mechanism**, not a guessed constant.

**What is still open (flagged, not fabricated)**: which 2 (or how many) of the 3 `LightDir_i.w`
enable flags are actually set for terrain draws, and the exact CPU values written into
`LightAmbientColor0/1/2`, are **runtime uniform-buffer state** set by CPU glue code per draw call —
not visible in the CMB material bytes or the shader bytecode itself (the shader is generic and
light-count-agnostic; the light data arrives via the uniform buffer, filled by a different function
this session did not decompile). Confirming "exactly 2 lights enabled, ambient value duplicated
into both slots" needs either (a) decompiling the CPU light-setup call that fills `c80..c88` per
draw (a genuinely new decomp target, distinct from `Environment_Update`), or (b) one runtime
uniform-buffer dump (`sgdump`-style, out of this session's static-only scope). Until then, the
**mechanism** (ambient summed per enabled light, not applied once) is proven at the bytecode level;
the **multiplicity** (why ~2x specifically) is the well-evidenced, not yet dynamically-confirmed,
remaining piece.

### Port guidance for the soh3d agent

SoH3D's `sceneLitPath` shader (`Shipwright/libultraship/src/fast/zelda3d_sdl3gpu.cpp`, `kFrag`)
currently computes `rgb = texel*vColor*ambient` (ambient applied once) `* combScaleRGB`. To match
ground truth, the correct port is: apply `matAmbient * ambientColor` **once per enabled light**
(most likely 2 for standard terrain/room lighting — `light1`/`light2` in N64 terms, both currently
carrying the same scene `ambientColor` since that's the only ambient value SoH's `envCtx` tracks),
i.e. multiply the existing ambient term by the enabled-light count (2, if confirmed) rather than
inventing a new "2x ambient" magic constant — the multiplier IS a real per-light sum, not a fudge
factor, so it should be implemented as `ambient * numEnabledLights` (or, more faithfully, as a real
per-light loop if/when SoH's `envCtx` grows distinct per-light ambient values). Do not hardcode
"×1.9" — that was only ever the measured ratio, not the mechanism; the mechanism proven here is an
integer-multiple sum (2x for 2 lights), and the ~0.1x shortfall from clean 2x is a separate, already
partially-explained fog effect (§7.1), not part of this term.

### Anchors (this session)

- `soh3d:tools/ctr_romfs.py` located `/CmbVShader.shbin` at ROM absolute offset `0x320cf0`
  (RomFS file, 3144 bytes) and `/profile.shbin` at `0x321940` (664 bytes, unrelated 2-DVLE pair,
  not investigated) — both reproducible offline via `ZELDA3D_OOT3D_ROM=<rom> python3 -c` +
  `CtrRom(...).get("/CmbVShader.shbin")`.
- `oot3d-decomp/tools/shbin_disasm.py` (new, committed) — DVLB/DVLP/DVLE container parser +
  PICA200 vertex-shader disassembler, format derived from
  `Azahar/externals/nihstro/include/nihstro/{shader_binary.h,shader_bytecode.h}` (bundled with
  Azahar, i.e. the same ISA definition Azahar's own interpreter/JIT executes — ground truth
  reused, not reinvented).
- Full disassembly + tables: `python3 tools/shbin_disasm.py <extracted CmbVShader.shbin> --range 0 310`
  (extraction not committed — ROM-derived binary, regenerate via `tools/ctr_romfs.py` per above,
  same convention as `scratch/spot00_0_room.cmb` in §9's anchors).

## 11. Session 2026-07-10 (decomp stream #2): the CPU-side per-material light-setup function FOUND — `FUN_003fa5d0`, confirms the ≤3-light loop with a runtime per-slot enable flag, narrows the "duplication" question to one field upstream

Follow-up to §10's open item ("which 2 (or how many) of the 3 `LightDir_i.w` enable flags are set… is runtime uniform-buffer state set by CPU glue code per draw call — not decompiled this session"). Found this session, static-only, via a new reusable Ghidra script.

**Method**: Ghidra's Reference DB / `ListCallers`-style BL scanning was already known to miss
vtable-dispatched functions (§4 of the ghidra-re skill). Rather than chase call sites, searched
the opposite direction — for **readers** of the byte offsets §1 pinned for `envCtx`'s
ambient-color-shaped fields, directly over Ghidra's already-analyzed `Listing` (proper ARM/Thumb
instruction boundaries, immune to the literal-pool/branch-table desync that broke an earlier
capstone-linear-sweep attempt this session — that attempt is recorded as a dead end below).
New script `tools/ghidra_scripts/FindByteOffsetReaders.py` (committed) lists every `ldrb`/`strb`
in the whole image whose displayed operand contains a given `#0x..` immediate, tagged with its
enclosing function — validated first against the **already-known** `envCtx.unk_BF` writer
(`env_context_layout.md`'s CS-handler write near PC `0x0045e470`; the scan correctly located a
`strb r0,[r4,#0xa5]` inside `FUN_0045dd30`/`Environment_Update` itself, confirming methodology)
before trusting a novel hit.

Scanning for `ldrb ?,[reg,#0xb2]` (the byte offset §1 assigns to `envCtx.lightSettings.ambientColor[0]`)
returned exactly 2 hits: one inside `Environment_Update` itself (expected — it re-reads what it
just wrote), and **one new site: `0x003fa710`, inside `FUN_003fa5d0`** (VA `0x003fa5d0`, size
1608 bytes). Decompiled in full (`build/decomp/003fa5d0.c`).

### 11.1 What `FUN_003fa5d0` does — signature and shape

```c
void FUN_003fa5d0(int param_1, int *param_2, int param_3)
```

Gated by `*(char*)*param_2 != 0` (a "lighting enabled for this material" flag). Reads THREE
RGB byte-triples from `*param_2` **once, before any per-light loop**:

```c
fVar11,12,13 = VectorUnsignedToFloat(*param_2 + 0xa4/0xa5/0xa6)   // triple A
fVar14,15,16 = VectorUnsignedToFloat(*param_2 + 0xac/0xad/0xae)   // triple B
fVar17,18,19 = VectorUnsignedToFloat(*param_2 + 0xb0/0xb1/0xb2)   // triple C  <- the ldrb #0xb2 hit
```

(a 4th, `local_38/34/30/2c`, is a per-material tint read earlier from `+0xa8..0xab`, either taken
directly or computed dynamically via `FUN_00333abc` when a "computed ambient" flag at
`+0x1a1`-relative-to-param_2 is set — i.e. this is the material's own baked-vs-animated ambient
tint, a SEPARATE axis from the 3 scene-light triples above.)

Then loops over **exactly 3 light-record slots** (`iVar10 = 0..2`), each a 0x60-byte struct at
`*(int*)(param_1+0x10) + iVar10*0x60`:

```c
for (i = 0; i < 3; i++) {
    lightRec = lightArray + i*0x60;
    if (*(float*)(lightRec + 0xe4) != 1.0f)   // per-slot ENABLE flag (float 1.0, not bool)
        continue;                              // slot disabled -> entirely skipped
    out[i].enabledA = 1; out[i].enabledB = 1;  // two output enable bytes set
    out[i].dir = f16_pack(-lightRec.dir[0..2]);           // negated dir, packed to float16 pairs
    out[i].diffuse[0..2]  = clamp(lightRec[0x88/0x8c/0x90] * matTint[0..2]);
    out[i].ambient[0..2]  = clamp(lightRec[0x98/0x9c/0xa0] * tripleA[0..2] * globalScale);
    // (a second/third color group at lightRec+0xa8.. / +0xb8.. multiplies tripleB / tripleC
    //  the same way, feeding the diffuse/specular-adjacent output bytes at +0xe..+0x13)
}
FUN_004093f8(param_1 + 0x24, out);   // appends `out` (3 * 0x2c = 132 bytes) to a GX command list
```

`FUN_004093f8` is a 12-line wrapper: `writePtr = FUN_0040d15c(out, *(writePtr_field))` — the
classic "append prebuilt payload, advance the display-list cursor" shape, i.e. `out` becomes a
GPU-command payload, not a further-processed CPU struct. `FUN_0040d15c` itself (the raw
command-list appender) was not decompiled this session — out of scope once the payload shape was
established.

### 11.2 What this confirms vs. what remains open

**Confirmed, matching §10's shader-side hypothesis exactly**:
- The engine has a **≤3-light loop**, not a fixed 2 or 3 — each slot is independently
  enabled/disabled at RUNTIME (`lightRec+0xe4 == 1.0f`), matching the shader's own
  `LightDir_i.w` per-slot enable-flag design (§10.1/10.2) register-for-register: this is very
  plausibly the exact CPU write site that PRODUCES that `.w` flag (the `1.0f` compare constant,
  the per-slot independence, and the "3 slots total" count all match the shader's `c80/83/86`
  structure one-for-one).
- Each enabled slot's ambient output is computed from a **material-side per-slot coefficient**
  (`lightRec+0x98/0x9c/0xa0` etc, one triple per slot) multiplied against a **scene-side
  color triple that is fetched ONCE before the loop, then reused for every enabled slot** —
  this is architecturally exactly the "broadcast one scene ambient value into every enabled
  light slot" mechanism §10 predicted, at the CPU level: the loop body has no way to give
  slot 0 and slot 1 different scene-ambient inputs unless the corresponding `lightRec` structs
  were built with different per-slot coefficients — the SOURCE color (tripleA/B/C) is
  structurally shared.

**Narrowed, not yet closed** — the doc's earlier framing ("the CPU writes the same
`ambientColor` into `LightAmbientColor0` AND `LightAmbientColor1`") is now revealed to be
one level removed from what `FUN_003fa5d0` itself does: this function does NOT read a single
`ambientColor` field and copy it 2-3 times — it reads **three independently-addressable
byte-triples** (`+0xa4-a6`, `+0xac-ae`, `+0xb0-b2` relative to `*param_2`) that get assigned to
the diffuse/ambient-adjacent output channels of whichever slots are enabled. **Whether those
three source triples actually hold the SAME numeric value (the duplication §10 needs) is a
property of whatever populates `*param_2`'s underlying struct — not of this function**, which
only forwards data. That populator (plausibly a scene-light-list "bind" step downstream of
`Environment_Update`, analogous to N64's `Lights_BindAll`) is the next concrete decomp target if
the exact duplication needs pinning byte-for-byte. Likewise, `*param_2` here was reached via a
byte-offset coincidence (`+0xb2` matched the numeric value from §1's `envCtx` layout) rather than
a proven identity between `*param_2` and `play->envCtx` — plausible (`param_2`/`param_3` read
per-material state and the byte-triples sit in the same neighborhood as §1's pinned
`EnvLightSettings`-equivalent fields) but not confirmed by a direct data-flow trace from
`Environment_Update`'s output to this call. **Do not treat `*param_2`'s exact identity as
settled** — it is a strong, evidence-matching candidate, not a proven pointer chain.

**Genuinely new, unflagged before**: the light-record's direction is written **float16-packed**
(explicit float32→float16 bit manipulation, `((uint)f << 1) >> 0x18) - 0x70` exponent rebias
pattern) via a GX-command-append call — this is the PICA200 hardware register payload SHAPE for
the **fixed-function lighting unit** (`GPUREG_LIGHTi_*`), which is architecturally DISTINCT from
`CmbVShader.shbin`'s `c80-c88` SOFTWARE vertex-uniform registers that §10 disassembled (those are
plain float24 uniform slots written via `GPUREG_VSH_FLOATUNIFORM_*`, no float16 packing, no
per-component exponent rebias — pure `mad`/`dp3` shader math). **This function may be feeding a
sibling/actor lighting path (PICA hardware Gouraud lighting), not necessarily the exact `c80-c88`
path §10 disassembled for vertex-lit CMB terrain materials.** This is the concrete answer to the
task's "how do ACTOR draws differ" question: OoT3D likely has (at least) two lighting deliveries —
software vertex-shader lighting (§10, `IsVertexLighting` gated, used by `vertexLighting=1` scene
materials per `spot00_field_lighting_ground_truth.md`) and PICA hardware fixed-function lighting
(`FUN_003fa5d0`, feeding `GPUREG_LIGHTi_*`-shaped payloads) — and `FUN_003fa5d0`'s target is not
yet proven to be the same draw class as §10's terrain materials. This is flagged, not resolved:
confirming which material class calls `FUN_003fa5d0` (vs which reaches `IsVertexLighting=1` CMB
draws) needs tracing the vtable dispatch at its one caller site (`0x004ebdac`, itself a data slot
with **zero code xrefs** — the exact "vtable in .rodata, table pointer loaded from a heap struct"
blind spot the ghidra-re skill's §4 already documents as needing dynamic (JIT-watchpoint)
confirmation, not further static scanning).

### 11.3 A dead end this session, recorded so it isn't re-tried

A first attempt used a hand-rolled linear capstone sweep over `.text` (ARM pass, then a
byte-stepping Thumb pass) to find `ldrb [reg,#0xb2]`/`[reg,#0x0a]` directly over `code.bin`
bytes. It returned **zero hits even for a byte offset (`#0xa5`) with an ALREADY-KNOWN real
writer PC** (`env_context_layout.md`'s `0x0045e470`) — a methodology failure, not a real
negative: literal pools and branch-table data interleaved in `.text` desync a naive linear
Thumb walk (confirmed by manually disassembling near the known-good PC and finding garbage
`lsls`/`b`-to-nonsense instructions at the "expected" alignment). **Fix**: scan Ghidra's
already-analyzed `Listing` (`FindByteOffsetReaders.py`, §11 method above) instead of
re-disassembling raw bytes — Ghidra's own auto-analysis already resolved the correct ARM/Thumb
instruction boundaries and skips embedded data. Re-validated against the same known writer PC
(found `strb r0,[r4,#0xa5]` inside `Environment_Update` — a different but adjacent instruction
to the documented `0x0045e470`, close enough to confirm the field/function match) before trusting
the novel `0xb2` hit. **Lesson for future sessions**: prefer `FindByteOffsetReaders.py` (or any
Listing-driven Jython scan) over ad hoc capstone linear sweeps for ANY register+immediate-offset
search — the existing `find_consumer.py`/`find_indexed_writers.py` capstone tools are safe
specifically because they anchor on POOL LITERALS (self-describing 4-byte-aligned data) or
MOVW/MOVT pairs, not on maintaining correct instruction alignment across an unbounded linear
sweep; a bare "walk every 2 bytes and disassemble" does NOT have that safety property.

### Port guidance update

No change to the §10 port-guidance verdict (apply `matAmbient * ambientColor` once per enabled
light, most likely 2 for standard terrain). This session adds mechanism-level CPU-side
confirmation that the engine's light pipeline is genuinely a **runtime-gated ≤3-slot loop with a
shared per-call scene-color source**, not a hardcoded shader assumption — reinforcing that SoH's
port should implement `ambient * numEnabledLights` as a REAL small loop over live light state
(mirroring `FUN_003fa5d0`'s shape: iterate light slots, skip disabled ones, accumulate), not a
hardcoded ×2, if/when SoH's `envCtx` grows real per-light enable state. Until then the existing
"×2 for the common 2-light case" guidance stands unchanged.

### Anchors (this session)

- `oot3d-decomp/tools/ghidra_scripts/FindByteOffsetReaders.py` (new, committed) — Listing-driven
  byte-offset immediate scanner; validated against the known `envCtx.unk_BF` writer before use.
- `FUN_003fa5d0` @ VA `0x003fa5d0` (1608 bytes) — per-material ≤3-light setup, decompiled in full
  at `build/decomp/003fa5d0.c` (not committed — regenerate via `DECOMP_TARGETS` + `DecompDump.py`
  per the ghidra-re skill, same convention as this doc's other `build/decomp/*.c` citations).
- `FUN_004093f8` @ VA `0x004093f8` (48 bytes) — thin GX-command-list-append wrapper around
  `FUN_0040d15c` (not decompiled this session).
- Single caller of `FUN_003fa5d0`: vtable-dispatched from data slot `0x004ebdac` (zero code
  xrefs — needs dynamic confirmation to identify which material class reaches it, flagged in
  §11.2, out of this session's static-only scope).

## 12. Session 2026-07-10 (soh3d runtime stream): the dawn HUE axis ROOT-CAUSED — it is
PICA DISTANCE FOG toward the palette fogColor; every other candidate input measured EQUAL

Task: at content-matched dawn pairs az=1000/soh=1408 (dayTime `0x3197`) and az=1522/soh=1930
(`0x37b5`), the oracle's sky is warm purple-pink and its distant rock warm reddish while SoH's
are cold blue/green. Derivation was fully dynamic (live-oracle probes via soh3d_harness), no
value tweaking. Everything below is measured, not inferred.

### 12.1 Ruled OUT by direct A/B measurement (all byte-level, both target frames)

- **dayTime**: `az_daytime` == SoH cs-derived dayTime, exact 0-delta (post-`b4d55be2`).
- **Light palette blend**: oracle terrain draws' live VS uniforms (`vsuni_log`, c82/c85 =
  `LightAmbientColor0/1`) read `(60,74,100)/255` @0x3197 and `(79,87,83)/255` @0x37b5 —
  equal (±1 LSB rounding) to SoH's `Zelda3D_TitleCsBlendedLight` output `(61,75,100)` /
  `(79,87,84)`. Both slots carry the same value (the §10 ×2 mechanism), matDif black,
  matAmb white — identical on both engines. **The blended ambient is NOT the diverging input.**
- **Dome schedule**: both engines select idx (3,0) with blend 0.324 / 0.611 at the two
  dayTimes (SoH `soh_env skybox1=3 skybox2=0 blend=83/156`; oracle dome curTime global
  `0x00588f00` = the same dayTime; `play+0x3370` byte pair = (3,0)). Upper-sky region means
  match to ~3/255. **Dome variant selection/blend is NOT the diverging input.**
- **Terrain formula/texture**: per-pixel TEV dump (`SOH3D_PIXEL_TEX`) on the mountain-rock
  texture (`tex0=0x180bf800`) shows the oracle's combiner output = `2·texel·primary`
  exactly, same texels — no extra warm combiner term in the rock draw itself.

### 12.2 The diverging input: the PICA fog stage (per-draw), color = blended fogColor

- **28 of spot99 room 0's 29 CMB materials have `isFog=1`** (offline dump of
  `spot99_0_info.zsi`'s embedded CMB; the sole exceptions are the additive doughnut/effect
  materials). Per-draw GPU state (extended `vsuni_log`) confirms **`fog_mode=5` (Fog) for 51
  draws/frame** at title with **`fog_color=(56,42,40)`** at dayTime 0x3197 — exactly SoH's own
  blended `fogCol` (57,42,40) minus rounding. SoH's fogColor DATA is already correct; SoH just
  never applies fog.
- **The fog curve is a per-frame-uploaded 128-entry LUT indexed by framebuffer depth**
  (`fog_index = depth·128`, Azahar `sw_rasterizer.cpp:WriteFog`), and ALL of its action is
  concentrated in the last entries because the scene's depth range is compressed (measured
  per-pixel depths: near grass 0.969, far grass 0.994, mountain 0.9971-0.9983, horizon-fill
  0.99995-1.0). Live LUT dumps (new harness cmd `az_fog`, value+diff fields — dumping only
  the `value` field reads as "no fog" and was this session's own first false negative):

  | dayTime (blended fogNear) | lut[126] α | lut[127] α (start→end) | max fog at far plane |
  |---|---|---|---|
  | 0x2bbb (≈48)  | 0.010→0.020 | 0.020→0.793 | **79.3%** |
  | 0x3197 (≈92)  | 0.008→0.018 | 0.018→0.752 | **75.2%** |
  | 0x37b5 (≈138) | 0.006→0.016 | 0.016→0.713 | **71.3%** |

  (α = 1−factor; full 128-entry dumps with diffs: soh3d `scratch/dawn_hue/fog_luts.txt`.)
- **Closure check, exact**: rock pixels at measured depth 0.9971-0.9976 → LUT frac 0.63-0.69
  → fog mix 0.48-0.53 toward (56,42,40); horizon-fill at depth 0.99995 → mix 0.75. Applying
  those mixes to SoH's (unfogged) rendered values reproduces the oracle's measured region
  means: rock (57,68,34)→(52,55,29)+haze layers ≈ oracle (50,48,41); horizon sky fill
  (75,80,118)→(59,48,52) ≈ oracle (62,51,55). The dome itself is NOT fogged (BlueSky
  domes; upper sky matches SoH unfogged) — only `isFog=1` scene geometry + the untextured
  horizon fill take fog. **This one mechanism quantitatively accounts for both the warm rock
  and the warm-purple horizon sky.**
- The title palette's per-slot `u16@+0x08 & 0x3ff` (this doc §1's "packed fog field") is the
  fogNear input: night=40, sunrise=200, day=800, sunset=200 (top bits =1, N64-style
  blendRate). Blended: 92 @0x3197, 138 @0x37b5 — matching the LUT's fogNear-dependent max/onset.

### 12.3 What SoH is missing (the port surface) and what still needs RE

SoH's renderer has an F3DEX-shaped fog path (`zelda3d_sdl3gpu.cpp` `uFog/uFog2`,
`zelda3d.c Zelda3D_FogSetPosition`) but it is a triple no-op today: (a) `gZelda3dFogEnable`
defaults 0 (REPL-only); (b) the title never writes `lightSettings.fogNear/fogFar` (stale
996/12800 from the N64 path — `applyLightOverride` only writes colors); (c) even if enabled,
`Zelda3D_FogSetPosition(996,12800)` yields `f=clamp(z·10−10)/255` = **0 at the far plane** —
the current NDC-ramp parameterization produces literally zero fog.

**Open ground-truth item (needs a dedicated decomp session): the CPU function that fills the
PICA fog LUT** from (fogNear, fogEnd f32=32000, drawDist). Candidate-formula tests against the
live LUTs (N64 F3DEX macro on 2·depth−1; linear-in-world-distance with the palette windows;
fogEnd/drawDist-scaled N64 fogcoord) all fail by >LSB — and the depth→distance conversion is
itself per-draw state (end-of-frame regs read `wbuffer=1, depthScale=−1, depthOffset=0`, but
that is the LAST draw's state; the terrain draws' own depth mode was not isolated). Attack
next: find the GX writer of `GPUREG_FOG_LUT_DATA` (reg 0x0e8) / the float→1.1.11-fixed pack
loop in code.bin, decompile, and port THAT into SoH's LUT-equivalent shader ramp. Porting a
fitted curve was deliberately NOT done (no magic constants).

Secondary observed-but-unattributed dawn layers (recorded for completeness, all absent in
SoH): an untextured ADDITIVE horizon glow (vertex color (182,34,0), α≈0.31-0.37, blend
srcAlpha/ONE, mostly occluded by nearer terrain), a white-texture mauve haze band
(`tex0=0x1834c100`, α≈0.08-0.17), and a warm alpha layer (`tex0=0x20ace580` VRAM, α up to
0.38). These are smaller than the fog term at the measured pixels.

### Anchors (this session)

- soh3d `tools/soh3d_harness/main.cpp` `az_fog` (new) + AZAHAR_PATCH.md Patch 6
  (`soh3d_fog_dump` in `pica_core.cpp`; per-draw fog fields in `vsuni_log`;
  `SOH3D_PIXEL_UNTEX`, `SOH3D_PIXEL_XY` pixel probes in `sw_rasterizer.cpp`; uProjection
  rows in `vsuni_log`).
- soh3d `scratch/dawn_hue/` — probe scripts, PPM/PNG captures, full LUT dumps, draw logs.
- soh3d `debug_journal/2026-07-10-dawn-hue-fog-rootcause.md` — the SoH-side session journal
  with the region-mean tables.

## 13. Session 2026-07-10 (decomp stream #3): the fog LUT FILL FORMULA decompiled —
FogResUpdater.cpp, closed-form, predict-gate PASSED float-exact at three dayTimes

§12 left one open ground-truth item: the CPU function that fills the PICA fog LUT. Found,
decompiled, and verified this session. The whole chain:

### 13.1 The driver chain (all VAs code.bin)

- **`FUN_002cdbfc` (372 B) — THE LUT fill** (`build/decomp/002cdbfc.c`). For i = 0..128
  computes `local[i] = factor(eyeDist(i))`, then stores `value[i] = local[i]` (obj+0x68,
  128 f32) and `diff[i] = local[i+1] - local[i]` (obj+0x268, 128 f32).
  - `eyeDist(i) = -((A + B·i·k) / (C + D·i·k))` with `k = -1/128` (pool f32 @0x2cdd70) and
    `A/B/C/D = obj+0x54/+0x50/+0x64/+0x60` = elements `[2][3]/[2][2]/[3][3]/[3][2]` of the
    **INVERSE projection matrix** (`FUN_002d4554` @0x2d4554 = a full 4x4 inverse, writes
    obj+0x28..0x64). I.e. eyeDist(i) is the eye-space distance of NDC depth `-i/128`. With
    the CTR projection z-row `z_clip = a·z_eye + b·w, w_clip = -z_eye` this reduces to
    **`eyeDist(t) = b/(a - t)`, t = i/128**, where `a = zFar/(zFar - zNear)`, `b = zNear·a`.
  - `factor(d)`: mode byte at fogobj+0x42 selects **0 = LINEAR** (`(far - d)/(far - near)`,
    clamped to 1.0 below near / 0.0 above far — pool f32s @0x2cdd78/0x2cdd74), 1 = EXP
    (`expf(-density·t)`, density s32 at fogobj+0x3c, `FUN_002bb8dc` = libm expf),
    2 = EXP2 (`expf(-density·t²)`). **The title (and measured gameplay) uses mode 0.**
- **`FUN_0047fd24` — the per-frame bridge** (FogResUpdater.cpp — literal Grezzo source path
  `FogResUpdater.cpp` in the alloc call):
  copies color (+0x24 f32x3), `near = (float)(s32 fogobj+0x34)`, `far = (float)(s32
  fogobj+0x38)` from the **fog param global @0x004fa8b8** into the LUT object, calls the
  fill, then packs `(diff, value)` → u32 `diff13 | value11 << 13` (1.1.11 fixed via
  `FUN_002cdb60/FUN_002cdb0c`) at obj+0x468. `FUN_00464b0c` = the vtable-dispatched setter
  the game calls with (near, far, projMatrix, r,g,b,a); `FUN_004c062c` = refill wrapper.
- The GX flusher (`FUN_0046c1e4`, the giant per-frame GPU-state fn) re-packs the float
  arrays and bursts them to `GPUREG_FOG_LUT_DATA` (reg 0xe8, header pool 0x000F00E6 for the
  index reg @0x46f2d0, pack loop @0x46f350, `orr r2,r3,r2,lsl #13`). Per-material fog
  ENABLE: `FUN_0047d68c` reads a state byte (+0x0A) and emits fog_mode=5 + color via
  `FUN_0047fe24` (`mov r0,#5` @0x47fe38); the byte originates from the CMB material's
  **isFogEnabled u8 at material+0x02** (noclip readMatsChunk; spot99 room 0: 24/29 set —
  §12's "28/29" was a miscount — the additive/effect materials 0,5,11-13 are the
  exceptions).

### 13.2 Live-verified inputs at the title (soh3d scratch/dawn_hue/fog_formula_gate.py)

| dayTime | LUT-obj near (f32) | LUT-obj far (f32) | color | mode |
|---|---|---|---|---|
| 0x2bbb | **48.0** | **40414.0** | (9,6,31)/255 | 0 |
| 0x3197 | **92.0** | **42612.0** | (57,42,40)/255 | 0 |
| 0x37b5 | **138.0** | **44906.0** | (107,79,49)/255 | 0 |

- **near = the palette's blended fogNear (u16&0x3ff) USED DIRECTLY IN EYE UNITS** — no
  N64-fog-space conversion at all (blended 48/92/138 == the live values exactly).
- **far = the palette's blended drawDist f32** (night 40000 → sunrise 48000 window ✓).
- Inverse-projection coefficients constant across the cs: `inv[2][2]=0, inv[2][3]=-1,
  inv[3][2]=0.1428259, inv[3][3]=f32(1/7)` → **zNear = 7.0 exactly, zFar = fogEnd = 32000**
  (the palette fogEnd f32 is the camera far plane the fog depth mapping is built against).
- The fog param global @0x4fa8b8 also carries s32 near/far at +0x34/+0x38 (stale-ish cached
  ints; the LUT object's f32 fields at +0x14/+0x18 are what the fill consumes).

### 13.3 Predict gate — PASSED

Recomputing the full 129-node table from `(inv coefficients, near, far, mode 0)` and
comparing against the LIVE float arrays (obj+0x68 / obj+0x268) at all three dayTimes:
**max |err| ≤ 6.7e-8 on value[0..127] and ≤ 9.7e-8 on diff[0..127]** — float-exact.
Predicted max fog 79.2/75.1/71.2% vs §12's dumped 79.3/75.2/71.3% (same frames ±12 dayTime
ticks). Runner: soh3d `scratch/dawn_hue/fog_formula_gate.py` (resolves the LUT object by
memscan for its 0x4fa8b8 back-pointer in the 0x08xxxxxx heap).

### 13.4 The load-bearing subtlety: the ENTRY-127 LERP IS the look

Scene depths compress into LUT entries ~121-127; entry 127 spans eyeDist 873..32000. PICA
LERPs value→value+diff INSIDE the entry by depth fraction, so a rock at eye ~2100 gets
**~50% fog** even though the underlying linear curve at d=2100 is only ~5%. Any port that
evaluates the smooth closed-form factor(d) directly (no 128-node piecewise structure)
misses the entire visible haze. The SoH port therefore reproduces the node/lerp structure:
factor = lerp(node(i), node(i+1), frac) with node(t) = the closed-form above, i = 
floor(128·depth3ds), depth3ds = a - b/d. (The 11/13-bit LUT quantization is ≤1/2048 —
sub-LSB of the 8-bit output — and is omitted.)

### 13.5 Port anchors (soh3d repo)

- `Shipwright/cmb3d/asset/cmb.{h,cpp}` — CMB `is_fog` (material+0x02).
- `Shipwright/libultraship/src/fast/zelda3d_gl.cpp` `Zelda3D_Fog3dSet` — a/b from
  (camNear=7, fogEnd), window = (blended fogNear, blended drawDist), camera fwd/eye.
- `Shipwright/libultraship/src/fast/zelda3d_sdl3gpu.cpp` — `fog3dNode()` + the per-entry
  LERP in kFrag; vertex shader carries the 3DS depth `a - b/d` (affine in screen space, so
  varying interpolation is exact); per-draw gate = CMB isFog byte, uFog.w == 2.0.
- `Shipwright/soh/src/zelda3d/zelda3d_cutscene.cpp` `Zelda3D_TitleCsBlendedFog` +
  `behaviors/title/title_presentation.cpp` applyLightOverride — the per-frame feed.
