# OoT3D title logo fire-glow — CMAB format + draw/timing spec

> **CORRECTION 2026-07-10 — see `title_ura_ctxb_identified.md` §3.** This doc's "two draw
> targets" hypothesis (§2, §3, §5) — that `g_title_fire_ura.cmab`'s duplicated entries drive a
> *second* target, guessed to be the `ura.ctxb` billboard quad, purely from the filename pairing —
> is now contradicted by a direct pixel decode of `ura.ctxb`: it contains no fire/glow imagery at
> all (it's a file-select/press-start UI atlas). A CMAB drives a CMB's *material* list, and a CTXB
> has no material list, so it could never be a legal CMAB target in the first place. Both fire
> cmabs almost certainly target `g_title.cmb`'s own material only (e.g. two aspects of the same
> mesh's shading, not two draw calls) — treat that as the new working hypothesis. The "two draw
> targets = `g_title.cmb` + `ura.ctxb`" reading throughout this doc should be read as superseded.

Scope: the animated gold flame-glow around the title logo (`g_title.cmb` + its two `.cmab`
material animations). Extends `title_2d_overlay_logo.md` (asset inventory, §5 item 2.c: "needs a
CMAB player") and `title_gamestate_driver.md` (logo fade-in/fade-out frame windows). Feeds the
SoH3D title-module Phase-3 fire-glow port (`Shipwright/soh/src/zelda3d/behaviors/title/title_logo.cpp`,
currently a stub: "fire-glow material anim (deferred, phase 3)").

Method: byte-level decode of the real ROM assets (`/actor/zelda_mag.zar`, `zelda_mag.zar` USA
ROM) via `soh3d:tools/cmab.py` (already existed, ported from noclip.website's `cmab.ts` — that
TypeScript is itself a decompilation of this exact OoT3D binary's CMAB reader, cached locally at
`soh3d:scratch/cmab_ref.ts`), plus `soh3d:tools/cmb.py` for the paired `g_title.cmb`'s material/
texture table. A static-RE search for the runtime CMAB-consumer function (Ghidra `xref.py` on the
one `"cmab"` string literal found in `build/code.bin` @ VA `0x004ed6ea`) found it sitting in an
inert data table with no live literal-pool reference in the surrounding code — **the runtime
binder function was NOT located this session** (noted as an open item, not fabricated). Everything
below the format spec is asset-level ground truth (bytes read directly off the ROM), not emulator
observation.

## 1. CMAB container format (verified against real bytes)

Header (`Version.Ocarina` variant — 32-bit track headers, confirmed: both title fire cmabs match
byte-for-byte against the parser's asserts):

| offset | field | value (both title cmabs) |
|---|---|---|
| `0x00` | magic `"cmab"` | — |
| `0x04` | subversion (u32) | `1` |
| `0x08` | file size (u32) | — |
| `0x10` | chunk count? (u32, asserted `1`) | `1` |
| `0x14` | chunk-location? (u32, asserted `0x20`) | `0x20` |
| `0x18` | string-table chunk offset (u32) | `0x504` |
| `0x1C` | tex-data chunk offset (u32, `0` = no embedded texture data) | `0` |
| `0x20` | chunk-type? (u32, asserted `0xFFFFFFFF`) | `0xFFFFFFFF` |
| `0x24` | **duration** (u32, frames) | `300` |
| `0x28` | **loop mode** (u32: `0`=Once, `1`=Repeat) | `0` (**Once**) |
| `0x2C` | chunk-location? (asserted `0x14`) | `0x14` |
| `0x30` | txpt (embedded-texture-table) chunk offset (u32, `0`=none) | `0` |
| `0x34` | `mads` chunk (magic `"mads"`) | — |
| `0x34+0x04` | animation-entry count (u32) | `4` |
| `0x34+0x08..` | table of u32 offsets (relative to `mads` chunk start) to each `mmad` entry | — |

Each `mmad` entry (material-animation descriptor):

| offset | field |
|---|---|
| `0x00` | magic `"mmad"` |
| `0x04` | `AnimationType` (u32): `1`=Translation, `2`=TexturePalette, `3`=DiffuseColor, `4`=ConstColor, `5`=Rotation, `6`=Scale, `7`=AmbientColor, `8`=Spec0, `9`=Spec1, `10`=Emission |
| `0x08` | `materialIndex` (u32) — index into the target CMB's material list |
| `0x0C` | `channelIndex` (u32) — **only present** for Translation/Rotation/Scale/TexturePalette/ConstColor; for the other color types it's a fixed enum (Diffuse/Ambient/Spec0/Spec1/Emission) not read from the file. For `ConstColor` this selects which of the PICA200's 6 constant-color registers (`Const0..Const5`) is being driven — **not** a texcoord channel despite the shared field name. |
| next | u16 table of per-track byte offsets (relative to the `mmad` entry start): 2 entries for Translation/Scale, 1 for Rotation/TexturePalette, **4 for the color types (R,G,B,A)** |

Track header (at `mmad_start + track_offset`):

| offset | field |
|---|---|
| `0x00` | track type (u32): `1`=Linear, `2`=Hermite, `3`=Integer |
| `0x04` | keyframe count (u32) |
| `0x08` | `timeStart` (u32) |
| `0x0C` | `timeEnd` (u32) |
| `0x10..` | keyframes: Linear/Integer = `{time:u32, value:f32}` (8B each); Hermite = `{time:u32, value:f32, tangentIn:f32, tangentOut:f32}` (16B each) |

Sampling (all three track types confirmed to match `noclip`'s sampler, reimplemented in
`tools/cmab.py:Track.sample`): find the bracketing keyframe pair for the current anim-frame;
Linear = lerp; Integer = step (holds `k0.value`, no interpolation); Hermite = cubic Hermite using
`tangentOut(k0)*Δt` / `tangentIn(k1)*Δt` as the scaled tangents, with the "reset tangent" special
case (`Δt==1` → hold `k0.value` exactly, since some encoded Hermite keys are authoring artifacts
not meant to interpolate over a 1-frame span).

`AnimationType.Translation`/`Scale` bind tracks `[U, V]`; `ConstColor` (and the other 5 color
types) bind tracks `[R, G, B, A]` — **note**: `tools/cmab.py`'s dump labels these axes generically
as `"UVZW"`; that's a cosmetic mislabel for color entries (should read R,G,B,A), the underlying
values/offsets are correct. Absent tracks (offset `0`) fall back to the material's authored
static value (Translation→0, Scale→1, Color→the CMB's baked constant), never to zero-fill.

## 2. The two title fire cmabs — full decode

Both `Misc/g_title_fire.cmab` and `Misc/g_title_fire_ura.cmab` (1296 B each, `/actor/zelda_mag.zar`)
have **identical structure**: `duration=300, loopMode=Once(0)`, empty string table (0 entries — no
per-entry names to disambiguate binding targets), no embedded texture data (`texDataChunkOffs=0`,
`txptChunkOffs=0` — confirms `ura.ctxb` is loaded as a separate external asset, not through this
cmab), and exactly 4 `mmad` entries in this fixed order:

| entry | file offset | type | mat | chan | tracks |
|---|---|---|---|---|---|
| 0 | `0x4c` | Translation | 0 | 1 | V: Linear `(0:0)→(300:1)`, rate `+1/300` per frame; U track absent |
| 1 | `0x80` | ConstColor | 0 | 0 | R (Hermite, 14 keys): `0.8→1→0.7→0.8→0.6→0.9→0.8→0.9→0.8→1→0.8→1→0.7→0.8` at times `0,40,59,85,108,137,151,166,191,198,211,235,270,300`; G (Hermite, 14 keys): `0.43→0.53→0.33→0.43→0.33→0.53→0.43→0.53→0.43→0.53→0.43→0.53→0.33→0.43` (same time stamps); B: `(0:0)→(300:0)` constant 0; A absent |
| 2 | `0x2a8` | ConstColor | 0 | 0 | **`g_title_fire.cmab`**: byte-identical R/G/B curves to entry 1 (a literal duplicate). **`g_title_fire_ura.cmab`**: a *different* dimmer curve — R: `0.5→0.7→0.4→0.5→0.3→0.6→0.5→0.6→0.5→0.7→0.5→0.7→0.4→0.5` (same 14 timestamps); G: `0.9→1→0.8→0.9→0.8→1→0.9→1→0.9→1→0.9→1→0.8→0.9`; B: 0 constant |
| 3 | `0x4d0` | Translation | 0 | 1 | identical to entry 0 (byte-for-byte duplicate) |

Rendered as an RGB curve, entries 1/2 are a **warm gold flicker**: R stays high (0.6–1.0), G
oscillates lower (0.33–0.53), B pinned to 0 — i.e. an orange/gold hue whose *saturation/brightness*
wobbles on an irregular ~15–30-frame beat (14 keyframes over 300 frames, non-uniform spacing:
40,19,26,23,29,14,15,25,7,13,24,35,30 — hand-authored flicker, not a clean sine/sawtooth). The
`_ura` file's 2nd entry is the same shape scaled dimmer (~0.55–0.7×) — consistent with driving a
*second*, subdued flame layer/pass.

Two duplicate `(Translation, ConstColor)` pairs per file, and duplicate curves in the non-ura file,
are consistent with the format being authored to drive **two separate material bindings from one
file** (the engine applies entries 0–1 to one draw target, entries 2–3 to another — `g_title.cmb`'s
single material has only ONE constant-color register in play, so two entries both reading
`mat=0,chan=0` cannot both legally apply to the *same* material simultaneously without one
clobbering the other). This is the RE gap noted above (binder function not located) — **treat the
"two independent targets" reading as the working hypothesis, not confirmed**, but it is the only
reading consistent with the byte content (see also `title_2d_overlay_logo.md`'s live draw-log
finding of the `ura.ctxb` strip as a *separate* quad from the g_title mesh, which independently
supports "two draw targets").

**Loop mode = Once, duration = 300 (5.0 s @ 60 fps) is the standout finding**: the fire-glow
animation is **not a continuous ambient loop** — it plays exactly once, holds its final keyframe
value forever after, and (per `title_gamestate_driver.md`'s env-flag-3/4 gating, frames 345→1930)
is almost certainly **triggered at logo fade-in (frame 345)** and runs its 300-frame flicker during
the fade-in/settle, then sits static at the frame-300 value (R≈0.8, G≈0.43, B=0 / U-translate
pinned at V=1) for the remainder of the hold — i.e. the "flame flicker" is a scripted intro
flourish, not a perpetual loop. (Not directly observed live this session — inferred from
`loopMode=Once` + the existing env-flag decomp; a live harness read of the g_title material's
actual constant-color register across the full 345–1930 window would confirm/refute continuing
past frame 300, and should be done before hard-committing SoH3D's player to "one-shot only".)

## 3. `g_title.cmb` — the fire-glow mesh (ground truth via `tools/cmb.py`)

- **1 material, 1 mesh** (`Mesh(sepd_index=0, material_index=0)`), 21760 B.
- **2 embedded textures, BOTH bound** (falsifies the earlier "`g_title_mable_t` unused" guess —
  see §3.1): `g_title_efc` (128×128, `tex0_idx=0`, the flame/glow gradient sprite) at texture
  **binding 0**, and `g_title_mable_t` (64×64) at texture **binding 1** — both slots are live
  (`textureBindingTableCount=2` at material offs+0xC; binding1's `textureIdx=1`, same
  min/mag/wrap as binding0). `cmb.py`'s `Material` dataclass just never modeled binding
  1/2 or the combiner table, which is why this looked unused.
- **Material blend state — additive glow, confirmed**: `blend_enable=True`,
  `blend_src_rgb=770` (`GL_SRC_ALPHA`), `blend_dst_rgb=1` (`GL_ONE`), `blend_eq_rgb=32774`
  (`GL_FUNC_ADD`) → **`srcAlpha·src + 1·dst`**, the standard "additive glow" blend (each texel
  brightens/tints the already-drawn logo/bg-card underneath rather than occluding it).
  `depth_write=False` (never occludes anything after it — consistent with a screen-space overlay
  layer, not a depth-tested 3D prop). `cull=1`.
- This confirms the mechanism directly: **`g_title.cmb` is drawn AFTER the wordmark/bg-card, with
  additive blending and no depth write, so its texture output — tinted by the ConstColor
  gold-flicker curve above — composites as a warm glow wash over the already-rendered logo.** The
  `ura.ctxb` vertical strip (separate external texture, per §1/§2 and the existing draw-log finding
  in `title_2d_overlay_logo.md` §2) is a second, independent additive overlay quad, most likely
  driven by the *second* `(Translation, ConstColor)` pair in each cmab.

## 3.1 Full TEV combiner chain for material 0 (byte-level, `dump_combiner.py`)

**Method**: `cmb.py`'s `Material` dataclass only modeled `tex0_idx`/blend/alpha-test — it never
parsed the PICA200 texture-combiner (TEV) stage table. Extended it (standalone script, not yet
folded into `cmb.py` itself — see "Tooling" below) per noclip's `readMatsChunk` byte layout
(`soh3d:scratch/noclip_cmb.ts` lines 399–620, the same cached decompiled TypeScript reference
already used for the CMAB format): `textureCombinerTableCount` @ material-offset `+0x120`, a
table of u16 combiner indices @ `+0x124`, indexing into a **shared combiner-settings table**
located immediately after the last material record (`matTableOff + materialCount*stride`), each
entry 0x28 bytes (`combineRGB/Alpha` u16 @ +0x00/+0x02, `scaleRGB/Alpha` u16 @ +0x04/+0x06,
sources/ops @ +0x0C.., `constantIndex` u32 @ +0x24). Six baked `constColor[0..5]` RGBA8 registers
live at material-offset `+0xB4..+0xC8` (big-endian RGBA8, i.e. `struct.unpack_from(">I", ...)`).

**Dump** (`g_title.cmb`, `Model/g_title.cmb` in `/actor/zelda_mag.zar`, material 0 — the only
material in the file):

```
constColor[0] = (255,255,255,255)   # material's OWN baked default — the CMAB's ConstColor
                                     # (materialIndex=0, channelIndex=0) animates THIS register
constColor[5] = (255,255,255,255)   # static, never CMAB-driven

textureBindings: 0 -> g_title_efc (128x128, "flame gradient")   1 -> g_title_mable_t (64x64, mask)
textureCoordinators: coord0 scale(1,1) trans(0,0)   coord1 scale(3,2) trans(0, 0.9433)  # BAKED,
                                                     # pre-scroll static UV transform on TEXTURE1

-- TEV stage 0 --
  combineRGB=ADD_MULT scaleRGB=x1
  RGB: src0=TEXTURE0 src1=TEXTURE1 src2=TEXTURE0   op=SRC_COLOR (all 3)
  combineAlpha=MODULATE scaleAlpha=x1
  A:   src0=PRIMARY_COLOR src1=TEXTURE0             op=SRC_ALPHA

-- TEV stage 1 --
  combineRGB=MODULATE  scaleRGB=x2                 <-- THE MISSING FACTOR (see below)
  RGB: src0=PREVIOUS src1=CONSTANT(idx0)            op=SRC_COLOR
  combineAlpha=REPLACE scaleAlpha=x1
  A:   src0=PREVIOUS                                op=SRC_ALPHA

-- TEV stage 2 --
  combineRGB=REPLACE  scaleRGB=x1
  RGB: src0=PREVIOUS                                op=SRC_COLOR
  combineAlpha=MODULATE scaleAlpha=x1
  A:   src0=PREVIOUS src1=CONSTANT(idx5=1,1,1,1)    op=SRC_ALPHA   (a no-op multiply by 1)
```

**Per-stage equation** (PICA200 `MULT_ADD` = `src0*src1 + src2`; `ADD_MULT` = `(src0+src1)*src2`;
`MODULATE` = `src0*src1`; `REPLACE` = `src0`; all confirmed against noclip's `CombineResultOpDMP`
enum and cross-checked against every other combiner consumer already ported in SoH3D):

```
stage0.rgb = (efc.rgb + mableT.rgb) * efc.rgb              // dual-texture combine, scale x1
stage0.a   = primaryColor.a * efc.a
stage1.rgb = 2.0 * (stage0.rgb * constColor0.rgb)           // <-- hardware scaleRGB=x2
stage1.a   = stage0.a                                        // passthrough
stage2.rgb = stage1.rgb                                      // passthrough
stage2.a   = stage1.a * constColor5.a  (= stage1.a * 1.0)     // no-op
finalColor = (stage2.rgb, stage2.a)   // then additive-blended: srcAlpha*final + 1*dst
```

`constColor0` is exactly the register the CMAB's entry-1 ConstColor (R/G/B Hermite gold-flicker
curve, §2) drives every frame — so **stage 1's hardware combiner doubles the CMAB's animated tint
before it composites**, on top of the material's own static `mableT` detail-mask blend in stage 0.

## 3.2 Named diff against SoH3D's port (`title_fireglow.cpp`, read-only)

`Shipwright/soh/src/zelda3d/behaviors/title/title_fireglow.cpp`'s `Zelda3D_TryDrawTitleFireGlow`
draws via `gSPZelda3DDrawUV(modelId | FORCE_UNLIT, a8, 0, vFx, r8,g8,b8)`, which samples **one**
texture (the model's bound `tex0`, `g_title_efc`) and tints it through the shared fragment shader
`rgb = t.rgb * vColor.rgb * shade` — i.e. it implements **stage 1's `MODULATE` at `scaleRGB=x1`**
(`texel * constColor`) and nothing else in the chain:

1. **Missing `scaleRGB=x2` on the ConstColor-modulate stage — the direct, quantifiable cause of
   "half brightness."** SoH's tint seam has no scale factor at all (a flat multiply); the
   hardware doubles the modulated result before continuing. This alone is an exact **2×** gain
   gap on the fire-glow's RGB, independent of any texture-content difference — closing it is a
   single multiply (`rgb[i] *= 2.0f` before packing to `r8/g8/b8`, or fold into the shader's
   tint path with a per-draw scale uniform if `r8/g8/b8*2` risks 8-bit clipping on saturated
   curve peaks — the R channel peaks at 1.0 in the CMAB curve, §2, so `1.0*1.0*2=2.0` DOES clip
   at 255 without headroom; clamp is correct, but the *unclipped* mid-range frames (R≈0.6–0.9)
   are exactly where the "faint" complaint applies and where doubling matters most).
2. **Missing stage 0's dual-texture `ADD_MULT`** — SoH never samples `g_title_mable_t`
   (binding 1) at all; the port treats `g_title.cmb` as a single-texture draw. Stage 0's
   `(efc + mableT) * efc` means the mask texture ADDS into the glow's own texture before the
   self-multiply — for any pixel where `mableT > 0`, the true stage-0 output is brighter than
   `efc` alone (bounded above by `2*efc` where `mableT` saturates at 1.0, so stage0 can itself
   contribute up to another 2× on top of the confirmed stage-1 2×). This is the second,
   currently-unquantified contributor to "faint tinge vs prominent wash" — needs `mableT`'s
   actual pixel data (not decoded this session) to size precisely, but is structurally a
   brightening term SoH is dropping entirely, not just under-scaling.
3. **UV-scroll target mismatch (secondary, cosmetic not a gain bug)**: the CMAB's Translation
   track (materialIndex=0, **channelIndex=1**) matches texture **coordinator 1** — the baked
   `scale(3,2) trans(0,0.9433)` UV transform on **`g_title_mable_t`** (binding 1), not on
   `g_title_efc`/coordinator 0. SoH's port applies the sampled `uvV` scroll to its only sampled
   texture (`efc`, coordinator 0) via `gSPZelda3DDrawUV`'s `uvV` argument — scrolling the wrong
   texture's UV (moot today since `mableT` isn't drawn at all, but will need re-targeting
   alongside fix 2, not fix 1 alone).

**Priority for the port agent**: fix 1 (the ×2 scale) is a one-line, fully-specified, purely
multiplicative correction — do it first, it is the "weak gain" root cause named in the residual.
Fix 2 (drawing `mableT` through a real 2-texture ADD_MULT combine stage) is the larger, correct
long-term fix (needs either a second texture-sample slot in the shared Zelda3D shader/draw op, or
a bespoke 2-tex draw path for this one mesh) and should close whatever gap remains after fix 1 —
don't skip it as "good enough" once fix 1 alone narrows the score gap, since it is a real,
non-approximated part of the material's combiner chain, not a tuning knob.

## Tooling

`dump_combiner.py` (this session, `soh3d:scratch/decomp_agent/dump_combiner.py` — machine-local
scratch, not committed) is a standalone extension of `tools/cmb.py`'s `Cmb` class that parses the
full TEV chain per §3.1's layout; folding it into `cmb.py`'s `Material` dataclass proper (so
`cmb.py <file> --dump` prints combiners for every future material-shading investigation, not just
this one) is a natural follow-up but wasn't done in-place this session to avoid touching the
already-relied-upon `Material`/`_parse_mats` shape without a broader regression pass.

## 4. What a SoH3D CMAB material-anim player needs

SoH3D currently has **two special-cased CMAB consumers**, neither of which is a general player:
- `Shipwright/soh/src/zelda3d/zelda3d.c` (~line 3693): sky cloud-band scroll — reads a single
  linear `Translation` rate *once* at startup (hardcoded from a `tools/cmab.py` dump comment) and
  applies it as a constant per-frame UV increment. Cannot represent Hermite/Integer tracks, cannot
  represent multi-keyframe curves, cannot represent `ConstColor`.
- `Shipwright/soh/src/zelda3d/zelda3d_model.cpp` (`appendFacialFrames`, ~line 259+): eye/mouth
  blink — decodes a cmab's **embedded texture-data block** (a keystone-#3-specific feature: these
  facial cmabs, unlike the title ones, DO carry `texDataChunkOffs`/`txptChunkOffs`) as a static
  list of alternate-frame textures selected by an externally-driven index. Doesn't touch the
  `mads`/`mmad`/track machinery at all.

The title fire-glow needs the piece neither of those covers: a **generic multi-keyframe track
sampler** — Linear/Hermite/Integer, arbitrary keyframe counts/spacing, `Translation` (U/V) AND
`ConstColor` (R/G/B/A) entry types, driven by a **per-instance anim-frame cursor** (not a
free-running constant rate) so `loopMode=Once` can be honored and the cursor can be started at the
logo's own fade-in trigger (frame 345, per `title_gamestate_driver.md`). `tools/cmab.py`'s
`Track.sample()` (already reimplements the noclip/OoT3D sampler exactly, all 3 track types,
Hermite reset-tangent special case included) is the reference to port to C++ — it's a small,
self-contained function; a native `CmabTrack`/`CmabEntry`/`Cmab` struct set mirroring
`tools/cmab.py`'s dataclasses (parse once at load, `sample(frame)` per-frame) is the natural port
shape, callable from a small `CmabPlayer` that owns the anim-frame cursor and, each frame, writes
the sampled `ConstColor` into the material's constant-color uniform and the sampled `Translation`
into the texcoord-transform the shader already applies (SoH3D's Fast3D GL path already supports a
per-draw texcoord offset for the sky-cloud case — reuse that seam rather than adding a second one).

Concretely, for the title logo the player needs to:
1. Parse `g_title_fire.cmab` and `g_title_fire_ura.cmab` once (reuse the ROM-asset load path
   already used for `g_title.cmb`/`title_logo_us.cmb`).
2. Start both cmabs' frame cursor at 0 when the logo fade-in triggers (mirror the N64
   `Flags_GetEnv(3)` analogy from `title_gamestate_driver.md`); advance 1 frame/tick; clamp at
   `duration` (Once) rather than wrapping.
3. Each frame, sample entries 0–1 (Translation ch1 + ConstColor) and apply to `g_title.cmb`'s
   material (texcoord-V translate on whichever UV set the shader treats as "channel 1"; constant
   color → the additive tint); sample entries 2–3 for the second draw target (the `ura.ctxb`
   billboard quad) — **pending confirmation of the two-targets hypothesis** (§2).
4. Draw `g_title.cmb` with the confirmed additive blend / no-depth-write state (§3) AFTER the
   wordmark and bg-card, and the `ura.ctxb` quad in the screen-space strip already measured in
   `title_2d_overlay_logo.md` §2 (`x=[104..136] y=[56..264]` at the log's 240×320 reference).

## 5. Open items (for a future session)

- **Runtime CMAB-consumer/binder function not located.** The one `"cmab"` ASCII string in
  `build/code.bin` (file offset `4118250` → VA `0x004ed6ea`) sits in an inert literal-pool/data
  table with no code-side xref found via `tools/xref.py`; the function that walks `mads`/`mmad`
  and binds entries 0–1 vs 2–3 to their actual draw targets was not found this session. Confirming
  the "two draw targets" hypothesis (§2) needs either (a) finding that function via a different
  anchor (e.g. live-harness watch on `g_title.cmb`'s material constant-color register across a
  full logo fade-in, correlated against which cmab entry's curve it tracks), or (b) a broader
  Ghidra sweep for the generic H3D material-animation apply loop (likely shared by ALL cmab
  consumers in the game, not title-specific — the facial eye/mouth cmabs use the SAME `mads`/`mmad`
  format per `zelda3d_model.cpp`'s existing decode, so this function is high-value beyond the
  title screen too).
- **RESOLVED 2026-07-10 (§3.1/§3.2): `g_title_mable_t` role.** Not unused — it's texture
  **binding 1**, consumed by TEV stage 0's `ADD_MULT` (`(efc+mableT)*efc`) as a detail/mask
  layer, and it's the target of the CMAB's own UV-scroll track (coordinator 1's baked
  scale(3,2)/trans(0,0.9433) transform, animated further by the Translation V-track). The
  "not referenced by `tex0_idx`" read was correct as far as it went — `cmb.py`'s dataclass
  never parsed binding 1 or the combiner table, which is exactly what made it look unused.
  Was NOT a low-priority leftover: it's a real, currently-unported contributor to the
  fire-glow's brightness (see §3.2 fix 2) — the SAME session's "faint tinge" residual is
  partly explained by SoH never sampling this texture at all.
- Whether the flicker literally halts after frame 300 (holds a frozen value) for the rest of the
  ~32-second demo loop, vs. some other continuation mechanism restarting/reversing it, is inferred
  from `loopMode=Once` but not live-observed — verify with the harness before treating "one-shot,
  freeze at frame 300" as final.

## 6. Session 2026-07-10 (decomp stream #4): blend equation + draw count + full alpha-source spec — CLOSED

Task: nail down (a) `g_title.cmb` material 0's exact GPU BLEND equation (function/src/dst
factors — additive `ADD(srcAlpha,ONE)` vs alpha `(srcAlpha,1-srcAlpha)`), (b) whether the
glow mesh is drawn once or multiple times per frame, (c) what alpha value feeds the draw at
steady state. All three are now answered from already-decompiled ground truth — §3 above
(this doc) plus `title_logo_actor.md` §5–§6 (a separate, later decomp session that fully
traced the mesh's OWN draw-call actor, `FUN_001da4f4`) — cross-referenced together for the
first time here, plus one real correction to §3.1's own const5 characterization.

### 6.1 Blend equation — CONFIRMED, standard additive glow, no ambiguity

Already dumped in §3 above from `g_title.cmb`'s material-0 GPU blend-state bytes (not a
combiner/TEV question — this is the separate fixed-function blend-unit config):
`blend_enable=True`, `blend_src_rgb=770` (`GL_SRC_ALPHA`), `blend_dst_rgb=1` (`GL_ONE`),
`blend_eq_rgb=32774` (`GL_FUNC_ADD`), `depth_write=False`. That is
**`ADD(srcAlpha·src, 1·dst)`** — genuinely additive (not the `(srcAlpha, 1-srcAlpha)` alpha
"soft" blend some sky/UI materials use, e.g. the wordmark/copyright materials in
`title_logo_actor.md` §4.1 which ARE `src=0x302/dst=0x303` = `GL_SRC_ALPHA`/
`GL_ONE_MINUS_SRC_ALPHA` — a different, non-additive material, useful contrast: the engine
deliberately uses two different blend modes side by side on the same overlay).

### 6.2 Draw count — CONFIRMED ONCE per frame, no layering/second pass

`title_logo_actor.md` §5.1/§6.1 fully decompiled the mesh's draw-call site,
`FUN_001da4f4` (231 lines, `build/decomp/001da4f4.c`) — the function that actually issues
`g_title.cmb`'s draw for the title-logo actor (id `0x171`). It has **exactly three
conditional draw blocks** (backdrop = `g_title`/idx0, wordmark, copyright), each of which
"enqueue[s] it into the scene draw-list **exactly once** (`FUN_003679b4` 'already queued'
latch + `FUN_0033d220` submit)" (§6.1 of that doc, quoted verbatim). There is no second draw
block, no layered/duplicate submission, and no reference anywhere in this function or its
traced callees to a second draw target for `g_title` — **rules out "drawn twice doubles the
additive contribution" as an explanation for the glow residual.** (The `g_title_fire_ura.cmab`
"second target" hypothesis from §2/§5 above is about a *different* handle/asset — `ura.ctxb`
— not a second draw of `g_title.cmb` itself; `title_logo_actor.md` §6.4 separately confirms
`FUN_001da4f4` has no `ura.ctxb` draw block at all, so that hypothesized second target isn't
reachable from this function either way.)

### 6.3 What alpha feeds the draw at steady state — BOTH `+0x1D0` and the CMAB curve, on two DIFFERENT constant-color registers, and §3.1's "const5 is static" claim is WRONG

This is the one genuine correction this session makes to this doc. §3.1 above reads
`g_title.cmb`'s material dump as: `constColor[0] = (255,255,255,255)` "the material's OWN
baked default — the CMAB's ConstColor animates THIS register" and `constColor[5] =
(255,255,255,255)` "**static, never CMAB-driven**". The first half is still correct. The
second half is falsified by `title_logo_actor.md` §6.2's independent decompile of the
ACTOR's draw function: `FUN_001da4f4` writes the actor's own alpha-ramp field
(`+0x1D0`, the backdrop/`g_title` fade-in alpha, ramped `0→255` over cs-frames 466-525 per
that doc's §5.3, and held at 255 for the DISPLAY hold) into **exactly constant-color
register index 5** every frame, via `FUN_003589cc`/`FUN_00358964` (`ch=5` at every call
site). So `constColor[5]` is **not** a compile-time-static CMB default at runtime — the
`255,255,255,255` `cmb.py` reads is only the material's *authored fallback/initial* value;
the live actor overwrites its alpha channel every frame the backdrop block draws. §3.1's own
stage-2 alpha equation (`stage2.a = stage1.a * constColor5.a`) is unaffected by this
correction — it was already using the right register, just describing its *source*
incorrectly (asset-static vs actor-driven). Corrected per-register table:

| register | driven by | value at steady state (post fade-in, DISPLAY hold) |
|---|---|---|
| `constColor[0]` (`.rgb`) | `g_title_fire.cmab` entry-1 `ConstColor` Hermite curve (§2) | **loopMode=Once**: frozen at the frame-300 keyframe value (R≈0.8, G≈0.43, B=0 — see §2's table) for the rest of the ~32s demo, since the curve never loops and the actor's own fade timeline (fade-in completes at cf569, §5.3 of `title_logo_actor.md`) runs well past cf300 of the *cmab's own* 0-300 frame cursor by the time DISPLAY is reached |
| `constColor[5]` (`.a`) | title-logo actor `FUN_001da4f4`, field `+0x1D0` (`title_logo_actor.md` §5.2/§6.2), NOT the CMAB | ramped 0→255 over cf466-525, **held at 255 (1.0) for the entire DISPLAY hold** — i.e. at steady state this term is a no-op multiplier (1.0), only visible during the ~1-second fade-in window |

**Full steady-state pixel formula** (combining §3.1's stage equations with the corrected
register sourcing): `finalColor.rgb = 2.0 * ((efc.rgb + mableT.rgb) * efc.rgb) *
constColor0.rgb` (constColor0 = frozen CMAB curve value, ≈(0.8,0.43,0)), `finalColor.a =
primaryColor.a * efc.a * constColor5.a` (constColor5.a = 1.0 at steady state, i.e. no
attenuation), composited via `ADD(srcAlpha·final, 1·dst)`. **Priority for the port agent
unchanged from §3.2**: the ×2 hardware scale (fix 1) and the missing `mableT` dual-texture
term (fix 2) are still the two live, unaddressed gain gaps; this session found no third
gain-reducing mechanism (no double-draw, no extra alpha attenuation) — the "0.31-0.54× of
oracle" residual's remaining magnitude, once fix 1+2 are applied, should be re-measured
before assuming a fourth cause exists.

### Anchors (this session)

- `title_logo_actor.md` §5.1 (actor `0x171`, draw fn `FUN_001da4f4`), §6.1-6.2 (three draw
  blocks, `constColor[5]` write via `FUN_003589cc`/`FUN_00358964`, `ch=5` literal) — a
  separate decomp session's work, cross-referenced here for the first time against this
  doc's §3.1 combiner dump to resolve the const5-source question.
- This doc's own §3 (blend-state bytes) and §3.1 (combiner/stage dump) — re-confirmed
  unchanged, only the const5 *source* narrative corrected (§6.3).

## 4. Cross-ref 2026-07-10: staging-timing discrepancy reconciled in `title_logo_actor.md` §8, not here

soh3d's `2026-07-10-fireglow-combiner-and-terrain-decomposition.md` also reported an apparent
timing gap (oracle showing glow "started" before SoH at az=730/cs≈453). That is a **staging/gating**
question (which actor field, and when, makes `g_title.cmb` visible at all), owned by the actor's
alpha state machine documented in `title_logo_actor.md` §5-§7 — not by this doc's combiner-format
or CMAB-curve content, which govern the glow's *tint/brightness* once it's already visible. See
`title_logo_actor.md` §8 for the reconciliation: the cs=453 data point falls before the glow mesh's
alpha ramp even starts (cf466-525) under the live-verified §5.3 timing, and is most likely
explained by the port's gold-hue pixel classifier picking up the WORDMARK's own (correctly-timed)
alpha ramp (cf385-465, active at cs=453) rather than a premature glow. The combiner math in this
doc's §3.1/§3.2 (the x2 scale, the dual-texture `mableT` term) is unaffected by that finding either
way — this doc's own residual (the "faint tinge vs prominent wash" brightness gap once the glow
mesh IS visible, e.g. at cs=556/638) remains open and is tracked in `title_logo_actor.md` §8.4's
closing note, not here.
