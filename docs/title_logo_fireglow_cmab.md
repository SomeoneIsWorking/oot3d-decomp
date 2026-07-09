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
- **2 embedded textures**: `g_title_efc` (128×128 — almost certainly the flame/glow gradient
  sprite; "efc" = effect) at `tex0_idx=0` (the one actually bound to the material), and
  `g_title_mable_t` (64×64, unused by material 0 — possibly a leftover/alternate, or bound by a
  2nd texture-coordinate unit not modeled by `cmb.py`'s single-texture material dump; not
  resolved this session).
- **Material blend state — additive glow, confirmed**: `blend_enable=True`,
  `blend_src_rgb=770` (`GL_SRC_ALPHA`), `blend_dst_rgb=1` (`GL_ONE`), `blend_eq_rgb=32774`
  (`GL_FUNC_ADD`) → **`srcAlpha·src + 1·dst`**, the standard "additive glow" blend (each texel
  brightens/tints the already-drawn logo/bg-card underneath rather than occluding it).
  `depth_write=False` (never occludes anything after it — consistent with a screen-space overlay
  layer, not a depth-tested 3D prop). `cull=1`.
- This confirms the mechanism directly: **`g_title.cmb` is drawn AFTER the wordmark/bg-card, with
  additive blending and no depth write, so its `g_title_efc` texture — tinted by the ConstColor
  gold-flicker curve above — composites as a warm glow wash over the already-rendered logo.** The
  `ura.ctxb` vertical strip (separate external texture, per §1/§2 and the existing draw-log finding
  in `title_2d_overlay_logo.md` §2) is a second, independent additive overlay quad, most likely
  driven by the *second* `(Translation, ConstColor)` pair in each cmab.

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
- **`g_title_mable_t` (64×64, second embedded texture) role unresolved** — not referenced by
  material 0's single `tex0_idx`; may be a second TEV stage / unused leftover / accessed via a
  material field `cmb.py` doesn't currently expose (its dataclass only models `tex0_idx`, not a
  full multi-stage TEV combiner). Low priority for the port (the additive glow already accounts for
  the main visual), but worth a quick `cmb.py` field audit if the ported fire-glow looks wrong on
  one texture unit.
- Whether the flicker literally halts after frame 300 (holds a frozen value) for the rest of the
  ~32-second demo loop, vs. some other continuation mechanism restarting/reversing it, is inferred
  from `loopMode=Once` but not live-observed — verify with the harness before treating "one-shot,
  freeze at frame 300" as final.
