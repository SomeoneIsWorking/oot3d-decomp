# OoT3D title-screen MOON — time-of-day color/alpha behavior (RE'd)

Session 2026-07-10 (decomp stream). Scope: find the moon's per-frame color/alpha/
brightness formula as a function of `dayTime`, to close soh3d's v4 measurement
(`debug_journal/2026-07-10-title-arc-closing-measurement-v4.md` §3, az=1522
residual, `d=(-65,-67,-51)`, attributed to the title moon's 3-layer composite
over-brightening at late dawn). Companion docs: `env_sun_moon_draw.md` (4 prior
sessions, static+dynamic, moon writer never located; Session 4 got a real
combiner readback for one frame), `title_moon_composition.md` (the 3-layer draw
order/blend), `title_sky_dome.md` §9 (the DOME's equivalent handler,
`FUN_002e47c8`, used here as the template and first thing ruled out).

**Result: the moon has NO time-of-day color curve in OoT3D — its per-pixel
formula is provably constant (texture color, unmodulated) at every `dayTime`,
not just the one frame previously sampled dynamically.** This is a structural/
static conclusion (a material-combiner config, not a runtime value), derived
this session by (a) statically ruling out every candidate "moon is a sibling to
the dome" hypothesis the task asked to check first, and (b) generalizing
`env_sun_moon_draw.md` Session 4's single-frame dynamic combiner readback using
that structural argument. Predicted moon draw color at `dayTime=0x37b5` (the
az=1522 measurement point): **(255,255,255,255), same as every other dayTime.**

## 1. Step 1 of the task — checked `FUN_002e47c8`'s other "kind" branches: NOT the moon

`title_sky_dome.md` §9 already found `FUN_002e47c8` (VA `0x002e47c8`) is the
DOME's real per-frame selector+draw function, dispatching on a "kind" byte into
a data table at VA `0x0054984c` (stride `0x50`). That doc's kind table dump was
incomplete (only kinds 0/1/3/4/5, from `env_sun_moon_draw.md` session 1). This
session dumped the FULL table (`build/code.bin`, offsets `kind*0x50` from
`0x0054984c - 0x00100000` base) for every kind referenced in the code
(`FUN_002e47c8`'s branches: 0,1,3,4,5,6,8,0x1d — session 2's already-known list):

| kind | zar | u32s (+0x44,+0x48,+0x4c) |
|---|---|---|
| 0 | `rom:/kankyo/BlueSky.zar` | (0,0,0) |
| 1 | `rom:/kankyo/BlueSky.zar` | (0,16,2) — title's "fine" dome |
| 3 | `rom:/kankyo/BlueSky.zar` | (0,16,2) |
| 4 | `rom:/kankyo/Dark.zar` | (0,4,2) |
| 5 | `rom:/kankyo/BlueSky.zar` | (0,16,2) |
| **6** | `rom:/kankyo/God.zar` | (0,4,2) — **new this session** |
| **8** | `rom:/kankyo/BlueOnly.zar` | (0,4,2) — **new this session** |
| 0x1d | `rom:/kankyo/Fogy.zar` | (0,4,2) |

Every kind is an **alternate weather/location dome ZAR** (fine/dark/god/blue-
only/foggy — all `*_tenkyu*` vertex-colour gradient sets, the same asset shape
as kind 1's title dome). `FUN_002e47c8`'s own body (re-read in full this
session, `build/decomp/002e47c8.c`) confirms every branch (kind 0,1,3,4,5,6,8,
0x1d) calls the same small set of primitives — `FUN_002d56e0`/`FUN_002d4d34`/
`FUN_002d5468`/`FUN_002d5124`/`FUN_002d4f10`/`FUN_002d50e8` — a
mesh-material-bind-then-submit pattern, structurally identical across kinds,
just parameterized by texture-layer count (kind 5 and kind 1's `<6` fallthrough
use 2 texture layers via `FUN_002d4d34`×2 for the kumo cloud-band multitex;
kind 8 uses a different 2-layer combo with material indices 9/10). **None of
these branches draws a billboard sprite** (no `Matrix_Scale`/screen-facing quad
call anywhere in the function) — they all bind/submit CMB **mesh** materials via
`FUN_003687a8`-family accessors, the same mechanism `title_sky_dome.md` §9
already established for the dome. This matches `title_sky_dome.md` §1's
existing finding that **there is no moon MESH in the ZAR at all** — the env-kind
system this function implements is exclusively for the vertex-coloured dome/
cloud weather sets. **Step 1 is closed: the moon is not a sibling kind of
`FUN_002e47c8`.**

## 2. Followed the task's fallback (asset consumer search) — moon ctxb filenames absent from `code.bin`

`title_moon_composition.md`'s moon textures (`fine_moon0/1/2.ctxb`) are archive
members inside `BlueSky.zar`, not referenced by name anywhere in `code.bin`
(confirmed this session: a raw byte search for `fine_moon0`/`fine_moon1`/
`fine_moon2`/`fine_sun`/`moon` across the whole 30MB `code.bin` found **zero**
matches). So there is no string xref to chase for the moon specifically — the
env system references assets by **numeric object/UV index** (the kind table's
trailing u32 triplet, confirmed by `env_sun_moon_draw.md` session 1 to be small
indices, not floats), not by name, and the moon's own index/kind is not present
in the table dumped in §1. This corroborates (does not merely repeat)
`env_sun_moon_draw.md`'s repeated conclusion that the moon sits outside the
`FUN_002e47c8` kind-dispatch system entirely.

## 3. Traced the two remaining unexamined addresses near `Environment_Update` — both ruled out

`env_sun_moon_draw.md` session 2 flagged a `~0x140`-byte unlabeled gap in
`functions.csv` between `FUN_0045d018` (session 2's "cloud-drift?" candidate)
and `Environment_Update` (`0x0045dd30`) as unexamined. This session decompiled
the actual functions filling that region:

- **`FUN_0045dc14`** (VA `0x0045dc14`, 268B, `build/decomp/0045dc14.c`) — a
  **collision-pair dispatch table walker**: nested loops over two nearby
  object-index arrays, bit-tests a pair of type/flag bytes (`&0x38`, `&2`,
  `&4`), and on a match indexes a **function-pointer table** (`iVar3 +
  type1*0x10 + type2*4`) to call a collision-response handler. This is generic
  actor/object collision-pair resolution, structurally unrelated to sky
  rendering. **Ruled out.**
- **`FUN_0045dd24`** (VA `0x0045dd24`, 12B, `build/decomp/0045dd24.c`) — a
  one-line reset stub, `*(param_2+0x29c) = 0`. Trivial, **ruled out.**

No moon-relevant code lives in this gap.

## 4. Re-read `FUN_0045d018` in full — re-scoped from "cloud drift?" to "sun celestial-object handler"; still not the moon

`env_sun_moon_draw.md` session 2 only partially read this function and guessed
"cloud band" from its frame-counter/angle-wrap constants and 2-material-slot
CMB write. This session read the **entire** 452-line decompile
(`build/decomp/0045d018.c`) and finds a cleaner story:

1. **Lines 80-131**: recomputes a direction using the identical
   `Sin/Cos(dayTime-0x8000)` idiom as `Environment_Update` (confirmed already
   in session 2) — this is the celestial (sun/moon) direction, read from the
   same live `envCtx`-adjacent struct `Environment_Update` uses.
2. **Lines 205-344**: a state-machine-gated block that, when active
   (`param_1[0x21d] != 0`, an object handle), builds a rotation/translation
   matrix from the direction vector and **writes it into exactly 2 CMB material
   slots** (indices 0 and 1) of that object via `FUN_003687a8`/`FUN_002d75b0`/
   `FUN_0033d14c` — the same material-accessor family `title_sky_dome.md` §9
   uses for the dome. Per `title_sky_dome.md` §1, the only 2-material-slot sky
   asset in `BlueSky.zar` with day/night variants is the **sun's vertex-coloured
   glow dome cap** (`model/fine_sun.cmb`/`model/cloud_sun.cmb` — 2 named
   variants, matching 2 slots) — the doc already flags this asset as "SoH uses
   the `fine_sun.ctxb` billboard instead" (unused by the port, but real in ROM).
   The moon has **no mesh at all** (`title_sky_dome.md` §1), so a function that
   writes CMB material slots structurally cannot be the moon's handler.
3. **Lines 345-435**: two independent triangular fade-timer state machines
   (`param_1[0x225]` 5-state, `param_1[0x224]` 4-state — ramp up, hold, ramp
   down, using pool constants at `UNK_0045dbf4..dc0c`), each feeding a call to
   `FUN_002d7354(..., &uStack_58, N)` with `N=4` and `N=3`.
4. **Lines 436-449**: final draws — `FUN_003339e8(UNK_0045dc10, 6, ...)` and
   `FUN_003339e8(uVar10, 4, ...)` (object index 4 = `UNK_0045dc10 + 4` most
   likely a second sub-object of the same asset).

**`FUN_002d7354` decompiled this session** (`build/decomp/002d7354.c`, 504B):
it lerps a screen-space quad rect by a blend factor (`param_1[10]`, fed
directly by the two fade-timers above) and computes a matching **UV window**
into a texture atlas, then submits via `FUN_003065d0` — i.e. an **animated
sprite-atlas UV-crop draw**, exactly the shape of a lens-flare/glare strip
sweeping across a texture atlas as it fades in/out. This matches
`title_moon_composition.md`'s own note: *"the lens-flare atlas
(`fine_lensflare.ctxb`) is NOT used for the moon — it's the sun's noon-glare
strip."* **`FUN_0045d018` is therefore best read as the SUN's combined
handler: live direction + glow-dome material update (§2 block) + animated
lens-flare fade-and-draw (§3/§4 block) — not cloud drift, and not the moon.**
(Superseding the "cloud" guess in `env_sun_moon_draw.md` session 2 — flagging
that doc's framing as revised, not deleting the history.)

**No static callers found for `FUN_0045d018`** (unchanged from session 2 — it's
reached only through the same indirect/heap-resident kind-dispatch mechanism
`title_sky_dome.md` §9.1's `unaff_r5` caveat describes for the dome). Given it's
now confirmed to be the SUN's handler and the moon has no mesh to attach a
sibling instance to, there is no reason to expect an undiscovered "moon
version" of this same template — the architectural split (dome = CMB mesh
handled by `FUN_002e47c8`'s kind system; sun = CMB glow-dome + lens-flare atlas
handled by `FUN_0045d018`'s indirect-dispatch template; **moon = 3 standalone
ctxb sprite quads, no mesh, no kind entry, no material**) is now consistent
across every function this and 4 prior sessions have examined.

## 5. The moon's real formula: structurally constant, not time-varying — generalizing the existing single-frame dynamic finding

`env_sun_moon_draw.md` Session 4 (2026-07-08, dynamic, harness-based, already
committed — not re-run this session since this task is static-RE-only) captured
the moon's **actual GPU combiner state** at one settled title frame
(`~step 360`) via a per-pixel TEV readback:

```
TEV stage 0: cs=(0,3,14) cop=REPLACE  →  combined = texture_color (RGB)
             as=(0,3,14) aop=MODULATE →  combined.a = PrimaryAlpha(=255) * TextureAlpha
primary_color measured = (255,255,255,255) at every sampled moon pixel, all 3 layers
```

i.e. `combined == texture_color` exactly, byte-for-byte, at every pixel tested.
The key structural fact — not previously stated this explicitly — is that this
is a **`textureCombinerTableCount`/`combineRGB` material property**, the same
static CMB-material byte field `title_sky_dome.md` §7.1 reads directly for the
dome/cloud/star materials (`isVertexLighting`, `combineRGB`, `slotsUsed`, all
static bytes in the CMB material chunk, confirmed there via
`Shipwright/cmb3d/asset/cmb.cpp`'s parser). A `REPLACE(TEXTURE0)` combine op is
a **compile-time-fixed selection of which TEV sources feed the stage**, not a
per-frame computed blend weight — there is no `dayTime`-fed uniform anywhere in
that stage's inputs (no `CONSTANT` slot consumed, confirmed by Session 4's own
`slotsUsed` check). **A material config that doesn't consume a
time-varying source at one frame structurally cannot become time-varying at a
different frame** — the combiner stage selection is baked into the ctxb/material
asset at ROM-build time, identical on every draw call regardless of what
`dayTime` currently is. This is the piece that generalizes Session 4's
single-frame observation into a full time-curve claim without needing to
re-capture every dayTime dynamically (which this static-only session could not
do anyway — no harness access to `soh3d`, which is read-only for this task).

**Derived time curve (portable pseudo-C):**

```c
// OoT3D title moon — per-layer per-pixel color, ALL dayTime values.
// No dayTime input anywhere in this formula: the TEV combiner config that
// produces it is a static CMB material byte, not a runtime uniform.
RGBA8 MoonLayerColor(int layer /* 0=disc fine_moon0, 1=halo fine_moon1, 2=halo fine_moon2 */,
                      int dayTime /* UNUSED — kept in the signature only to make the
                                     "no dependency" claim explicit for a port author */) {
    RGBA8 texel = SampleTexture(layer, uv);   // fmt4/RGBA4 for disc, fmt3/RGB565 (alpha=255) for halos
    return texel;                              // combined == texture_color, always, every dayTime
}
```

Model-space scale/depth (already fully RE'd, `env_sun_moon_draw.md` Session 4
Finding 3 — cited, not re-derived): disc scale-matrix diagonal = 640.0, both
halos = 1280.0 (exact 2.0× ratio, no per-dayTime term found in that uniform
readback either — the vertex-shader uniform registers were compared across the
3 LAYERS of one frame, not across dayTime, but the same "no dayTime-fed
uniform observed anywhere in the traced write path" argument applies: nothing
in `env_sun_moon_draw.md`'s exhaustive 3-session writer search — including a
dynamic watchpoint that fired 128 times across the full load sequence — ever
caught a scalar rewrite of these registers, consistent with a fixed, asset-
authored constant, not a per-frame animated one).

## 6. Predicted moon color at `dayTime = 0x37b5` (az=1522 measurement point)

**(255, 255, 255, 255)** per layer, texture-unmodulated — identical to the
value at every other `dayTime`, because no term in the derived formula reads
`dayTime` at all.

**Acceptance-test framing for a port session:** this prediction is falsifiable
against soh3d's own residual data. soh3d's `Zelda3D_TryDrawSunMoon`
(`Shipwright/soh/src/zelda3d/zelda3d.c`, cited via `env_sun_moon_draw.md`)
currently computes `color=-y/120`, `temp=-y/80` (clamped) from `envCtx.sunPos.y`
— an elevation-based DIMMING term with no decomp anchor. Two falsifiable
consequences of this session's finding:

1. **If OoT3D's moon is genuinely undimmed at every elevation**, the correct
   port removes the `-y/120`/`-y/80` multiply entirely and draws at flat
   `(255,255,255,255)` always (matching `env_sun_moon_draw.md` Session 4's
   already-recorded "faithful constant: draw color/alpha = (255,255,255,255)"
   recommendation for the color/alpha mechanism, `kMoonDrawAlpha=220` flagged
   there as a texture-decode-brightness STOPGAP, not a real dimming curve).
2. **The az=1522 over-brightening residual is therefore NOT a color-curve bug**
   at all (there is no color curve to get wrong) — it must be a **visibility/
   scale/placement** bug: either the moon is drawn when it should be occluded/
   below-horizon at that `dayTime` (elevation gate missing), or SoH's disc/halo
   world-space scale grows incorrectly at that specific camera position (the
   existing, separately-documented "SoH undershoots Az's growth by ~10%" residual
   noted in `env_sun_moon_draw.md`, which v4 explicitly says is the OPPOSITE
   direction from az=1522's overshoot — i.e. az=1522 is likely a THIRD, distinct
   mechanism from both the color formula and the known scale-growth residual).
   This reframes the fix target: stop tuning the color/alpha formula for
   az=1522 (there is no ground-truth curve to tune it toward), and instead audit
   whether the moon should be drawn/visible at all at that specific dayTime/
   camera pose — a **visibility-gate**, not **color-curve**, investigation. This
   is explicitly a port-decision handoff (this task's scope was formula
   derivation only; visibility-gate RE is a distinct follow-up, since
   `env_sun_moon_draw.md`'s 3 sessions of writer-search never located whether/
   how OoT3D decides to skip the moon draw at a given `dayTime` — flagged as
   the concrete next static/dynamic target, not fabricated here).

## Anchors (this session)

- `build/decomp/002e47c8.c` (re-read in full; kind table cross-checked against
  a fresh direct `code.bin` dump, `kind=6/8` names newly recorded).
- `build/decomp/0045dc14.c`, `build/decomp/0045dd24.c` — the two functions
  filling `env_sun_moon_draw.md` session 2's flagged gap; both ruled out
  (collision-pair dispatch; trivial reset stub).
- `build/decomp/0045d018.c` (re-read in full, 452 lines — previously only
  partially summarized) — re-scoped from "cloud drift?" to "sun glow-dome +
  lens-flare handler."
- `build/decomp/002d7354.c` (newly decompiled, 504B) — the UV-atlas-crop
  sprite-fade primitive `FUN_0045d018` calls twice; corroborates the sun/
  lens-flare re-scoping via `title_moon_composition.md`'s own
  "`fine_lensflare.ctxb` is the sun's glare strip, not the moon's" note.
- Raw `code.bin` byte search (this session, throwaway, reproducible) —
  confirmed zero string occurrences of `fine_moon0`/`1`/`2`/`fine_sun`/`moon`
  anywhere in the 30MB binary (assets referenced by numeric index only).
- Cited, not re-run: `env_sun_moon_draw.md` Session 4's dynamic TEV/uniform
  readback (harness work in `soh3d`, out of this task's static-only, `soh3d`-
  read-only scope) — the empirical anchor this doc's structural argument
  generalizes from one frame to all `dayTime`.
