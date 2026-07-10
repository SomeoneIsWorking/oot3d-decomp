# OoT3D title sky-dome subsystem — assets, draw path, and SoH parity audit

Session 2026-07-08. Scope: the SKY layers of the OoT3D title-demo (dome
gradient, cloud band, star layer, sun/moon discs), the exact ROM assets that
back them, the RE'd selection/draw path, and a faithfulness audit of SoH's
`Zelda3D_TryDrawSky` / `Zelda3D_SkyModelId` (`Shipwright/soh/src/zelda3d/zelda3d.c`).

Companion docs: `env_sun_moon_draw.md` (sun/moon direction math + env kind
table), `title_moon_composition.md` (3-layer moon), `title_lighting_disabled.md`
(title 3D pass runs with PICA fragment-lighting OFF). Cross-repo: soh3d memory
`soh3d-oot3d-sky` (the #28 dome-replacement port).

---

## 1. Exact ROM assets — `/kankyo/BlueSky.zar` (extracted: `scratch/extract/BlueSky.zar`, 848736 B)

Full member manifest (from the ZAR string table):

### Dome gradient meshes (`model/*_tenkyu*.cmb`) — vertex-colour, NO texture
Four weather groups × four time-of-day variants:

| group  | variants                         | notes |
|--------|----------------------------------|-------|
| fine   | `fine_tenkyu_0..3`               | clear sky. 0=sunrise, 1=day, 2=sunset, 3=night (vcol order matches N64 sSkyboxTable, verified in #28) |
| cloud  | `cloud_tenkyu_0..3`              | cloudy weather |
| holy   | `holy_tenkyu0..3`  (NO underscore)| "holy"/temple sky |
| **dark** | `dark_tenkyu0..3` (NO underscore)| **deep-dark variant — NOT used by SoH (see §4 gap 2)** |

The dome look is entirely per-vertex baked colour (a hemisphere-cap gradient);
there is no texture on the tenkyu meshes. Decoded in SoH via the `SKY:` forced-CMB
key with `bakedVertexColor=TRUE` + all groups `depthWrite=0`.

### Cloud band meshes (`model/*_kumo_*.cmb`) + scroll (`misc/*_kumo_*.cmab`)
`fine_kumo_a0..3`, `fine_kumo_b1`, `cloud_kumo_a0..3`, `holy_kumo_a0..3`,
`holy_kumo_b0/b1`, `dark_kumo_a0..3`. Textured, alpha-blended horizon band.
Texcoord scroll animations: `misc/{fine,cloud,holy,dark}_kumo_a.cmab` +
`fine_kumo_b.cmab`, `holy_kumo_b.cmab` — each a single LINEAR U-translation
track (constant U scroll; parsed in soh3d `tools/cmab.py`, base-layer rate
−1/900 fine/cloud, −1/600 holy).

### Star layer (`model/fine_star.cmb`) — ONE model, no per-weather variant
L8 (luminance) textured dome cap, additive blend, per-vertex baked twinkle
brightness. This is the ONLY star asset in the zar.

### Sun / moon discs (`tex/*.ctxb`) — standalone sprites, NO mesh
`tex/fine_sun.ctxb`, `tex/cloud_sun.ctxb`, `tex/fine_lensflare.ctxb`,
`tex/cloud_lensflare.ctxb`, `tex/fine_moon0.ctxb` (128×128 crescent disc,
RGBA4/alpha), `tex/fine_moon1.ctxb` (64×64 inner glow, additive),
`tex/fine_moon2.ctxb` (64×64 outer glow, additive). There is ALSO a vertex-
coloured sun-glow dome cap `model/fine_sun.cmb` / `model/cloud_sun.cmb` (SoH
uses the `fine_sun.ctxb` billboard instead — a documented residual).

Note: there is **no moon MESH** (`model/*moon*` absent) — the moon is only the
three ctxb sprites, confirming the #28e / `title_moon_composition.md` finding.

A separate `/kankyo/Dark.zar` also exists (referenced by the env kind table
below, kind 4) — not extracted here; relevant to gap 2.

---

## 2. Selection path — the env "kind" table (RE'd, `env_sun_moon_draw.md`)

The 3DS does NOT index a flat `sSkyboxTable` the way N64 does. `FUN_002e47c8`
(generic environment-object loader, xref'd from the live `"rom:/kankyo/BlueSky.zar"`
string @ VA 0x0054984c) dispatches on a **"kind" byte** into a table at
VA **0x0054984c**, stride **0x50**, each entry `char name[0x40] + 3×u32`:

| kind | zar                    | +0x44 | +0x48 | +0x4c |
|------|------------------------|-------|-------|-------|
| 0    | `rom:/kankyo/BlueSky.zar` | 0 | 0    | 0   |
| 1    | `rom:/kankyo/BlueSky.zar` | 0 | 0x10 | 0x2 |
| 3    | `rom:/kankyo/BlueSky.zar` | 0 | 0x10 | 0x2 |
| 4    | `rom:/kankyo/Dark.zar`    | 0 | 0x4  | 0x2 |
| 5    | `rom:/kankyo/BlueSky.zar` | 0 | 0x10 | 0x2 |

The trailing u32s are small object/UV indices into the zar (NOT floats/scale).

**CORRECTION (§9, 2026-07-10 session 5): `FUN_002e47c8` is NOT init-only asset
binding.** It IS called once from scene-init `0x004490d8` for asset binding, but the
same function is ALSO the per-call time-of-day variant/blend SELECTOR and the DRAW
SUBMISSION site for kind values `{1,4,6,8}` (kind 1 = "fine", title's dome group) — see
§9 for the full decompiled selection/blend logic, its own schedule table (VA
`0x0053200a`, boundary-identical to `kTitleLightSchedule`), and a plausible (not fully
dynamically confirmed) second, likely-per-frame caller `FUN_00450b40`. The "search
stalled, needs a JIT watchpoint" framing below is SUPERSEDED for the dome (kept for the
record; may still apply to the moon, which §9 does not address).

## 3. Direction math (CONFIRMED, N64-identical)
`Environment_Update` (0x0045dd30) computes the sun/moon light direction with
`sin/cos(dayTime-0x8000) * {-120, 120, 20}` (float consts at VA 0x0045e804/08/0c),
truncated to s8 and stored as `light1Dir` (envCtx+0xb5..b7) / negated `light2Dir`
(+0xbb..bd). Byte-for-byte the N64 constants. The `*25` world-distance the N64
sunPos uses is absent (this store is the LIGHTING dir, not a Vec3f sprite offset).

## 4. Title 3D pass runs with fragment-lighting DISABLED
Per `title_lighting_disabled.md`: every triangle at settled title has
`regs.lighting.disable==1` and near-zero vertex colour on landscape draws. The
sky palette comes from CMB material-combiner constants + the tenkyu baked vertex
colours — NOT from a runtime lighting term. (Two fullscreen 512×256 quads
`0x2095aa00`/`0x2091a900` were seen but are the top-screen UI/logo layer
(common_bg01/ura), not the sky — see zelda3d.c task-#16 note.)

---

## 5. SoH parity audit — `Zelda3D_TryDrawSky` / `Zelda3D_SkyModelId`

**FAITHFUL (asset sourcing + decode):**
- Every visible sky layer is pulled from the real `/kankyo/BlueSky.zar` and
  decoded with the correct format path: tenkyu = vertex-colour gradient CMB;
  kumo = textured alpha band with the real `.cmab` U-scroll rate; fine_star =
  L8 additive; sun/moon = ctxb sprites (3-layer moon composite matches
  `title_moon_composition.md` draw order + blend modes). No N64 skybox, no
  fabricated gradient. This half is correct and should NOT be re-litigated.
- Layer compositing order (dome → stars → clouds, dawn/dusk cross-fade of the
  upper variant at `skyboxBlend`) mirrors the N64 two-dome blend.

**GENUINE GAP 1 — title dome variant is FROZEN at fine-night, ignores the
flowing title dayTime.**
`Zelda3D_ApplyTitleCam` (zelda3d.c ~2204-2206) hardcodes every frame:
```c
play->envCtx.skybox1Index = 3;   // fine_tenkyu_3 (night)
play->envCtx.skybox2Index = 3;
play->envCtx.skyboxBlend  = 0;
```
This runs in `Zelda3D_ReplPoll` (end of `Play_Update`), i.e. AFTER
`Environment_Update` (which SoH already runs and which computes the schedule's
skybox1/2Index+blend from dayTime). So the hardcode STOMPS the schedule result,
and `Zelda3D_TryDrawSky` (draw-time, later) reads the frozen night index.

Meanwhile the title LIGHTING is NOT frozen: `Zelda3D_TitleLightSettingsOverride`
flows the palette by the same title dayTime, which the 2026-07-07 lighting solve
established flows 4:01 AM → daylight (≈+6 units/cs-frame; over the ~2400-frame
title loop dayTime advances from 0x2AD7 to ≈0x6317 = past dawn into day). Result:
**SoH brightens the title LIGHT toward dawn while pinning the SKY to night — an
internal inconsistency the N64/OoT3D schedule does not have.** If OoT3D's title
sky is meant to brighten with the same clock (its lighting does), SoH is showing
a stale night dome for most of the demo.

CONFIRMED EMPIRICALLY (probe `scratch/sky/late2_probe.py`, plain `step`, no
`soh_titlecs`, both engines free-run from `title_settled.state`):

| raw step | Az upper-sky | SoH upper-sky | Az full-frame | SoH full-frame |
|----------|--------------|---------------|---------------|----------------|
| 360      | (39,43,74)   | (34,40,68)    | (59,67,69)    | (44,51,59)     |
| 1000     | (48,55,76)   | (34,31,72)    | **(79,80,51)**| **(33,35,60)** |

- At step 360 (early, content-matched) the two NIGHT domes MATCH within ~5/255
  — SoH's night dome + gradient decode is FAITHFUL. (An earlier single-pixel
  (300,20)=(69,66,84) reading was a star/moon-glow texel, discounted.)
- By step 1000 **Az has transitioned toward dawn**: full-frame goes from bluish
  (59,67,69) to a warm daylit (79,80,51) — blue drops, red/green rise; the pure
  upper-sky band brightens (R 39→48). **SoH stays frozen dark-night**: full-frame
  (44,51,59)→(33,35,60) (blue-dominant), upper-sky R unchanged (34→34). SxS PNGs:
  `scratch/sky/l2_360_sxs.png`, `l2_1000_sxs.png` (top=Az, bottom=SoH).
- This is the smoking gun for gap 1: as the title clock flows past dawn, OoT3D's
  sky brightens but SoH's is pinned to `fine_tenkyu_3` (night). (Caveat: past the
  first title-cs segment the two engines' demo loops can content-desync — but the
  SKY-band divergence tracks the mechanism exactly, and the 2026-07-07 lighting
  solve independently established the title dayTime flows into daylight, so two
  independent lines converge.)

**GENUINE GAP 2 — `dark_tenkyu` / `Dark.zar` never used.**
`Zelda3D_SkyModelId` maps only fine/cloud/holy (idx 0..8). BlueSky.zar's
`dark_tenkyu0..3` group and the `Dark.zar` kind-4 asset are unreachable. If the
title (or any deep-night scene) is authored to use the darker `dark_tenkyu`/
Dark.zar sky rather than `fine_tenkyu_3`, SoH renders the wrong (lighter/bluer)
night dome. This is the direct asset-level candidate for any night-sky colour
divergence — the fix is to bind the correct variant, not to tint fine_tenkyu_3.

**MINOR residuals (already documented, not new):** cloud 2nd multitex layer
(kumo ch1 −4/900) omitted by the single-texcoord path; `*_kumo_b*` variants
unused; `fine_sun.cmb` vertex glow-cap unused (billboard used instead).

---

## 6. Port spec (ready-to-apply)

**Fix gap 1 (highest value, small):** stop overwriting the schedule at title.
In `Zelda3D_ApplyTitleCam`, keep `skyboxDisabled=false` / `skyboxId=NORMAL_SKY`
but DELETE the three `skybox{1,2}Index/Blend` assignments so `Environment_Update`'s
own time-of-day schedule (already running, driven by the flowing title
`gSaveContext.dayTime`) selects the dome variant + cross-fade — exactly the seam
the title lighting already uses. Then the dome transitions night→dawn→day in
lockstep with the ported lighting. Verify with the harness: boot from
`title_settled.state`, plain `step` (no `soh_titlecs`), snapshot early vs late,
confirm SoH's upper-sky band tracks Az's brightening (probe scaffold:
`scratch/sky/late2_probe.py`).
- Risk: if `Environment_Update` at title produces skybox1Index=99 (uninitialised,
  see z_kankyo.c:268) because the title-cs suppressed the normal skybox init,
  guard: `if (idx==99) idx=<schedule fallback from dayTime>` rather than
  re-hardcoding 3.

**Fix gap 2 (if the night variant proves wrong after gap-1):** add the dark group
to `Zelda3D_SkyModelId`/`SkyCloudModelId` and select it when the env kind byte =
4 (Dark.zar) or the scene's night variant demands `dark_tenkyu`. Requires either
(a) extracting `/kankyo/Dark.zar` and adding a `SKY:/kankyo/Dark.zar|...` mapping,
or (b) remapping the night index to `dark_tenkyu3` within BlueSky.zar. Gate on
RE ground truth (which kind the title scene binds) — do NOT swap blindly.

**Do NOT** chase the moon-halo hue / base-sky saturation as a standalone colour
bug: per `debug_journal/2026-07-08-title-sky-color.md` the earlier "base-colour
divergence" was a `soh_titlecs` clock-desync measurement artifact. The genuine,
structural gaps are variant SELECTION (gaps 1-2), not a per-pixel tint.

---

## 7. Session 2026-07-10 (decomp stream #3): full dome/cloud colour-pipeline dump —
NOT vertex-lit (terrain's per-enabled-light ambient sum does NOT apply), and the two
stable soh3d residuals (night sky too bright/green; dawn sky missing +R, gaining
+G/+B instead) trace to SoH's borrowed **N64** skybox cross-fade SCHEDULE TABLE
running measurably ahead of the true title-clock phase, not to a lighting-math term.

Task: soh3d `debug_journal/2026-07-10-title-arc-closing-measurement-v2.md` residuals
(1) night-sky R/G brighter/greener than oracle, stable v1→v2, and (3) dawn sky (cs
588+) where the oracle warms toward +R but SoH's shift lands on +G/+B instead. Both
were flagged as "sky-dome path" and asked whether the just-proven terrain
per-enabled-light ambient sum (`title_env_lighting.md` §10/§11) also explains the
dome. **It does not** — the real culprit is named in §7.3 below.

### 7.1 Combiner dump (corrected offsets, `scratch/decomp_agent/dump_combiner.py`)
against every dome/cloud/star material in `/kankyo/BlueSky.zar`
(`fine/cloud/holy/dark_tenkyu0..3`, `fine/cloud_kumo_a0..3`, `fine_kumo_b1`,
`fine_star`, 20+ materials sampled): **`isVertexLighting=0` and `isFragmentLighting=0`
on every one, no exceptions.** This is the terrain material class's structural
opposite (spot00's ground materials are `vertexLighting=1`) — the whole
`CmbVShader.shbin` per-enabled-light ambient-sum block (`title_env_lighting.md`
§10.2, gated `ifu bool=9 IsVertexLighting`) is **provably unreached** for every sky
asset, the same way it was already ruled out for the fire-glow overlay
(`2026-07-10-title-arc-closing-measurement-v2.md` §2). This closes the task's
opening hypothesis cleanly: the dome's brightness/hue residuals are NOT the
terrain ambient-sum mechanism showing up a second time.

Per-material TEV stage 0 (the only stage; `textureCombinerTableCount=1` throughout):

| asset class | example | combineRGB | RGB sources (slots actually consumed) | scale |
|---|---|---|---|---|
| dome gradient (`*_tenkyu*`) | `fine_tenkyu_0..3` | `REPLACE` | src0=`PRIMARY_COLOR` (slotsUsed=1 — src1/src2 unused leftovers) | x1 |
| cloud band (`*_kumo_a*/_b*`) | `fine_kumo_a0..3` | `MODULATE` | src0=`TEXTURE0`, src1=`PRIMARY_COLOR` (slotsUsed=2) | x1 |
| star dome | `fine_star` | `MODULATE` | src0=`CONSTANT`(=constColor[0]=(255,255,127,255) warm-white), src1=`TEXTURE0` — **PRIMARY_COLOR (vColor) is NOT an RGB source at all for stars**, only feeds alpha (src0=PRIMARY_COLOR, src1=TEXTURE0) | x1 |

None of the sampled materials source `CONSTANT` in a slot the combine op actually
consumes for the dome/cloud case (`comb_uses_const` correctly evaluates false —
verified against `Shipwright/cmb3d/asset/cmb.cpp`'s own `slotsUsed`-gated read, the
same logic `title_env_lighting.md` §9.1 validated for terrain). So the dome's ground-
truth pixel formula is simply:

```
domeGradient = PRIMARY_COLOR                        // = bakedVertexColor, no material tint
cloudBand    = TEXTURE0 * PRIMARY_COLOR              // = texel * bakedVertexColor
starDome.rgb = CONST0.rgb * TEXTURE0.rgb             // vColor NOT in the RGB term
starDome.a   = PRIMARY_COLOR.a * TEXTURE0.a           // vColor's baked twinkle magnitude
```

**Confirmed at the vertex-shader-bytecode level, not just the CMB material byte
level**: disassembling `CmbVShader.shbin` words 108–120 (`tools/shbin_disasm.py
scratch/CmbVShader.shbin --range 108 135`, extending `title_env_lighting.md` §10's
already-cited disassembly) shows the `IsVertexLighting=0` branch (word 112 onward)
is a **plain, ambient-free pass-through**:

```
112  mov  r10.xyzw, c8.xyzw        ; r10 = MatDiffuseColor (fallback if !HasColor)
113  ifu  bool=5 (HasColor) ...
114    mul r10.xyzw, c90.zzzz, v2.xyzw   ; HasColor=1 (true for every tenkyu/kumo mesh):
                                          ; r10 = VertexAttributeScale0.z * aColor  -- OVERWRITES the fallback
120  mov  o1.xyzw, r10.xyzw        ; o1 (COLOR / PRIMARY_COLOR) = r10
```

No `LightAmbientColor_i`/`MatAmbientColor` read anywhere in this branch (those only
appear in the `IsVertexLighting=1` block at word 76+, §10.2). `VertexAttributeScale0.z`
is a CPU-supplied uniform (not a CMB byte, same "runtime uniform, not static-visible"
caveat as `title_env_lighting.md` §10's open item) but structurally can only be a
flat, channel-uniform multiplier (it's a scalar `.z` broadcast via `zzzz` swizzle) —
it cannot itself produce the channel-SPECIFIC (R-vs-G/B) sign split the residuals
show, so it is not chased further here.

### 7.2 SoH's port — matches this formula exactly (re-confirmed by tracing the live shader/CPU state)

`Shipwright/soh/src/zelda3d/zelda3d_model.cpp` (`buildFromCmb`, `bakedVertexColor`
path) keeps the CMB's baked vertex colour unmodified (only a NaN/out-of-range
sanitizer, `zelda3d_model.cpp:352-368`, dead for tenkyu — values are clean per §7.4).
`Shipwright/cmb3d/asset/cmb_glgroups.cpp:52` reads `vertex_lighting` straight from the
real CMB byte (`offs+1`, matches `dump_combiner.py`'s `isVertexLighting` field
1:1 — `Shipwright/cmb3d/asset/cmb.cpp:193`), so `grp.vertexLighting=false` for every
sky group. In the shared fragment shader (`Shipwright/libultraship/src/fast/
zelda3d_sdl3gpu.cpp` `kFrag`):

- `lit` (the half-Lambert `uParams.y` gate) is hardcoded `0` for every sky draw —
  `gfx_zelda3d_draw_handler_custom` (`interpreter.cpp:4359`) computes `lit = (handle<0)`
  and the sky emitter (`Zelda3D_TryDrawSky`, `zelda3d.c:3568`) never sets handle's
  sign bit, only bit 30 (the sky/far-plane flag) — so `shade` never gets the
  half-Lambert NdotL term for sky draws, and with a plain-white tint (255,255,255,255)
  `shade` reduces to `(1,1,1)`.
- `ambGroup = grp.vertexLighting && gZelda3dWorldLit && !forceUnlit` is **false**
  (vertexLighting=false) → `uAmbient.w=0` → `sceneLitPath=false` → shader takes the
  `else` branch `rgb = t.rgb * vColor.rgb * shade` = `t.rgb * vColor.rgb`.
- Fog is skipped for sky draws (`uLightDir.w>0.5` from the sky flag disables the
  `uFog.w>0.5 && uLightDir.w<0.5` gate).
- Dome materials have no texture (`tex0_idx=-1`, 0 textures in the CMB); `texIndex`
  falls back to `DummyTexture()` (white, confirmed by `zelda3d_sdl3gpu.cpp:1775-1784`'s
  `texIndex<m->textures.size()` guard failing for an empty texture array), so
  `t.rgb=(1,1,1)` and the dome pixel reduces to exactly `vColor.rgb` — **byte-for-byte
  the oracle's `REPLACE(PRIMARY_COLOR)` formula.**
- Cloud materials DO have `TEXTURE0` bound; `rgb = t.rgb*vColor.rgb` again matches
  `MODULATE(TEXTURE0,PRIMARY_COLOR)` exactly.

**Conclusion: SoH's shader/CPU pipeline for the dome and cloud materials is
formula-exact against the oracle's real combiner, confirmed at both the CMB-material
level and the vertex-shader-bytecode level.** (The star material's `CONSTANT`-not-
`vColor` RGB term is a separate, already-known, smaller residual — see §7.5 — not
part of residuals (1)/(3), which are dome/cloud-mid-sky-region measurements.)

### 7.3 The real mechanism: SoH's cross-fade INDEX PAIR + BLEND WEIGHT come from N64's
`D_8011FC1C[0]` schedule table, which reaches "already blending toward sunrise" almost
immediately — while the oracle (a structurally different, still-undecompiled 3DS
schedule, §2 above) is still showing genuine night content at the same title-clock
value.

With §7.1/§7.2 closing off "wrong colour math," the only remaining live input to the
dome's rendered colour is WHICH baked-colour dome(s) get drawn and at what blend
weight — i.e. `play->envCtx.skybox1Index` / `skybox2Index` / `skyboxBlend`, computed
every frame by real, **unmodified N64 game code**, `Environment_UpdateSkybox`
(`Shipwright/soh/src/code/z_kankyo.c:613-789`) against a **N64-authored** schedule
table `D_8011FC1C[0]` (the "Fine" weather group; `z_kankyo.c:112-121`):

```
entry            startTime  endTime   blend  idx1        idx2
0x0000-0x2AAC    0          10924     0      3 (night)   3 (night)
0x2AAC-0x3556    10924      13654     1      3 (night)   0 (sunrise)   <- night->sunrise blend
0x3556-0x4000    13654      16384     0      0 (sunrise) 0 (sunrise)
0x4000-0x5556    16384      21846     1      0 (sunrise) 1 (day)       <- sunrise->day blend
0x5556-0xAAAB    21846      43691     0      1 (day)     1 (day)
  ...(sunset/night mirror, not reached in the title's dayTime window)
```

This table is fed by `gSaveContext.skyboxTime`, which the 2026-07-10
`4f05fc90` fix made track the title's own `dayTime` clock 1:1 (`skyboxTime = dayTime`,
same write site as the ported `TitlePresentation`). The **rate** of that clock —
`dayTime = 0x2AD7 + 6*cs` (`cs` = title-cs frame count) — was independently RE'd and
verified against 4 live oracle samples in `f115871f` ("title RE: pin oracle dayTime
schedule — rate is correct, bug is cursor PHASE"), so it is trustworthy input here.

Feeding the sweep doc's own 10 measured points through `D_8011FC1C[0]` (cs derived
from the sweep's `az` column via the task's own `cs=(az+176)/2`, matching this doc's
existing az↔cs convention):

| az | cs | dayTime | idx1(name) | idx2(name) | blendW | sweep's own content label |
|---|---|---|---|---|---|---|
| 100 | 138 | 0x2e13 | 3 (night) | 0 (sunrise) | **0.319** | "night, moon rising" |
| 200 | 188 | 0x2f3f | 3 (night) | 0 (sunrise) | **0.429** | "night, rider distant" |
| 360 | 268 | 0x311f | 3 (night) | 0 (sunrise) | **0.605** | "moonlit rider crossing" |
| 500 | 338 | 0x32c3 | 3 (night) | 0 (sunrise) | **0.759** | "grass close-up push" |
| 700 | 438 | 0x351b | 3 (night) | 0 (sunrise) | **0.978** | "logo fade-in" |
| 1000 | 588 | 0x389f | 0 (sunrise) | 0 (sunrise) | 0.0 (pure) | "logo display + copyright" |
| 1300 | 738 | 0x3c23 | 0 (sunrise) | 0 (sunrise) | 0.0 (pure) | "logo display, castle wall" — **dawn-warmth residual named HERE** |
| 1522 | 849 | 0x3ebd | 0 (sunrise) | 0 (sunrise) | 0.0 (pure) | "logo display" |
| 1700 | 938 | 0x40d3 | 0 (sunrise) | 1 (day) | 0.039 | "logo display" |
| 1900 | 1038 | 0x432b | 0 (sunrise) | 1 (day) | 0.148 | "logo display" |

(Computed with `Environment_LerpWeight`'s own linear form, `w=(t-start)/(end-start)`,
against the schedule literally quoted above — reproducible without the emulator.)

**This is the named mechanism for both residuals:**

- **Residual (1), night sky too bright/green**: at az=100/200/360 — points the
  sweep's own content description still calls "night"/"moonlit" (moon still visibly
  rising, i.e. genuinely nocturnal on the oracle) — SoH's schedule has **already
  blended 32%–60% of the way toward `fine_tenkyu_0` (sunrise)**. §"1. Exact ROM
  assets" of this doc's own vertex-colour dump (reproduced in `title_env_lighting.md`
  companion work) shows `fine_tenkyu_0`'s baked colour is warm **yellow-green**
  (e.g. horizon `(0.96,0.87,0.51)`, mid-band `(0.53,0.65,0.38)`) — high R AND
  (especially) high G relative to the pure-night `fine_tenkyu_3` band it's blending
  over (`(0.08,0.10,0.57)`, B-dominant). Blending 32-60% of that warm-yellow-green
  variant into what should still be a pure dark-blue night dome is EXACTLY a
  "mid-sky brighter and greener than the oracle" signature — the sweep's measured
  `d` up to `-52` on G (SoH above Az) is the right order of magnitude for a
  30-60% mix of a G-heavy variant that shouldn't be present yet.
- **Residual (3), dawn misses +R / gains +G,+B instead**: at az=1300/1522 — the exact
  points the sweep doc labels "dawn-sky warmth" — SoH's schedule has moved PAST any
  blend and is sitting on **pure `fine_tenkyu_0`** (blendW=0.0, no mixing). Two
  compounding effects from being on this variant at this time: (a) `fine_tenkyu_0`
  itself is more yellow-green than true warm-red (G ≥ R at most sampled bands, see
  above) — so even "the right index, faithfully rendered" reads G-leaning rather
  than R-leaning; (b) by az=1700/1900 SoH has moved on again into the
  **sunrise→day** blend (idx2=1, `fine_tenkyu_1`, a bright cyan/blue day variant —
  horizon `(0.80,1.0,1.0)`), actively pulling G/B UP further while the oracle (on
  its own, separately-timed schedule) is plausibly still deeper in its actual dawn
  transition, still gaining R. Both effects point the same direction the residual
  measures: **SoH's sky-dome clock is running measurably AHEAD of the oracle's real
  transition**, landing on cooler/greener variants earlier than it should.

**Root cause, precisely scoped**: `D_8011FC1C`'s transition BOUNDARIES (`0x2AAC`,
`0x3556`, `0x4000`, `0x5556`, …) are **N64-authored** values, standing in for the
3DS's own per-frame dome-variant/blend selection logic — which `title_sky_dome.md`
§2 already flagged as **not yet located** (search stalled; needs a JIT watchpoint on
the dome vertex buffer / skybox-selection call, out of this session's static-only
scope). There is no static evidence the two consoles share transition timing; the
measurement above is the first concrete, quantified evidence that they very likely
**don't** — the borrowed N64 table puts SoH about half a "blend window" ahead of
where the sweep's own frame content says the oracle actually is. This reframes gap 1
of §5 above (which only established that the schedule WASN'T frozen, post-4f05fc90):
it now flows, but on the wrong clock-to-variant mapping.

**Port guidance**: do not hand-tune `D_8011FC1C`'s time constants to fit these 10
points (that is exactly the "fitted constant" anti-pattern the stop-microtuning
directive bans) — the correct fix is finding and porting the 3DS's OWN schedule
(§2's open item), which is very likely a small time-boundary table analogous to
`D_8011FC1C` but living in the 3DS binary, reachable from wherever
`Environment_Update`/`FUN_0045dd30` or its caller selects the per-frame tenkyu
variant. Until that table is found, the honest state is: mechanism identified and
quantified, exact 3DS boundary values not yet recovered (flagged, not fabricated).

### 7.4 Baked vertex-colour sanity (all 4 `fine_tenkyu` variants, zenith-to-horizon bands)

Decoded directly from the CMB `color` attribute (`tools/cmb.py`'s `Cmb.read_attr`,
UBYTE/255 scale, matches the shader's `VertexAttributeScale0.z*v2` — §7.1) with no
NaN/out-of-range values anywhere (the `zelda3d_model.cpp:352-368` sanitizer never
fires for this asset):

| variant | horizon (y≈0) | mid (y≈68) | zenith (y≈108) |
|---|---|---|---|
| 0 sunrise | (0.96,0.87,0.51) | (0.23,0.31,0.33) | (0.08,0.09,0.23) |
| 1 day | (0.80,1.00,1.00) | (0.13,0.53,1.00) | (0.00,0.31,0.95) |
| 2 sunset | (0.77,0.40,0.15) | (0.45,0.23,0.44) | (0.17,0.09,0.35) |
| 3 night | (0.08,0.10,0.57) | (0.06,0.04,0.20) | (0.02,0.01,0.08) |

Confirms the N64-order labelling (`sSBVRFine0..3Pal = {gSunriseSkyboxTLUT,
gDaySkyboxTLUT, gSunsetSkyboxTLUT, gNightSkyboxTLUT}`, `z_vr_box.c:472-509` — real,
unmodified N64 source, so this index↔semantic mapping is ground truth, not a
port-side guess) is genuinely correct: idx0 warm yellow-green, idx1 bright cyan-blue,
idx2 red-orange, idx3 dark blue. **No CMAB animates these colours** — the BlueSky.zar
manifest (§1) has exactly 6 `.cmab` files and every one is a UV-scroll track for the
cloud band (`misc/*_kumo_a.cmab`, `misc/*_kumo_b.cmab`); there is no colour-curve CMAB
anywhere in the archive. The day/night colour progression is entirely the 4-mesh
discrete cross-fade covered by §7.3 — confirms the task's item-2 question ("any CMAB
animating dome/cloud colours") has a clean **NO** answer.

### 7.5 Fire-glow texture decode check (`g_title_efc` / `g_title_mable_t`) — clean, no anomaly found

Quick static check per the task brief (flag, don't chase): both textures in
`g_title.cmb` decode as PICA `GF_L8` (glFormat `0x14016757`, `dtype=0x1401`
UBYTE, 1 byte/texel — `128*128=16384`/`64*64=4096` matches `data_len` exactly, no
padding surprise). Detiling (8×8 Morton swizzle, `tools/`-equivalent of
`Shipwright/cmb3d/asset/pica_texture.cpp`'s `tiled()` helper) and sampling:

- `g_title_efc` (128×128, "flame gradient"): values range 0–208, mean 24.3, radial
  falloff shape (`corner=0`, `center=103`) consistent with a glow sprite — no
  anomaly.
- `g_title_mable_t` (64×64, detail mask): values range 1–255, mean 123.9, no
  degenerate all-zero/all-max region — no anomaly.

Both match `GF_L8`'s already-fixed decode convention (`pica_texture.cpp:145-162`:
alpha forced opaque, not aliased from luminance — the star-brightness fix's same
correction, already ported). **No format/offset/decode bug found in either
texture** — the fire-glow gap documented in
`2026-07-10-title-arc-closing-measurement-v2.md` §2 (0.31–0.54x additive-delta
ratio) is **not** texture-decode-rooted; it remains attributed to that doc's
still-open candidates (alpha-staging ceiling / the dual-texture `ADD_MULT` mask
contribution's exact magnitude) — this session adds one more ruled-out cause to
that list, nothing more.

### Anchors (this session)

- `scratch/decomp_agent/dump_combiner.py` (soh3d, pre-existing from the terrain
  session) run against every `BlueSky.zar` dome/cloud/star material and against
  `g_title.cmb` — all commands reproducible offline (`scratch/extract/*.cmb`
  already extracted by an earlier soh3d session).
- `tools/shbin_disasm.py scratch/CmbVShader.shbin --range 108 135` (this repo) —
  the `IsVertexLighting=0` fallback branch, words 108-120.
- `Shipwright/soh/src/code/z_kankyo.c:112-121` (`D_8011FC1C[0]`) and
  `Shipwright/soh/src/code/z_vr_box.c:472-509` (`sSkyboxTable`/N64 index↔semantic
  naming) — real N64 source already vendored in the soh3d tree, unmodified.
- `Shipwright/soh/src/zelda3d/zelda3d_model.cpp`, `Shipwright/cmb3d/asset/
  cmb_glgroups.cpp`, `Shipwright/libultraship/src/fast/zelda3d_sdl3gpu.cpp` (`kFrag`)
  — SoH's sky-draw color path, traced statically, no live probing needed.
- Schedule-vs-content table (§7.3) computed by a throwaway python snippet
  reproducing `Environment_LerpWeight`'s linear form against the literal
  `D_8011FC1C[0]` values quoted above — no tool committed (trivial to
  reconstruct, ~20 lines).

---

## 8. Session 2026-07-10 (decomp stream #4): the real 3DS per-frame schedule table
FOUND — but it is the already-known LIGHT schedule, and it only PARTLY explains §7's
residuals; falsified for residual (3), not blindly adopted

Task: §7's closing item — find the 3DS's OWN per-frame dome-variant/blend schedule
(structurally like `D_8011FC1C` but 3DS-authored) via a **byte-level structural scan**
of `build/code.bin` for a table of ascending `u16` time boundaries ending at `0xFFFF`
with small index bytes, rather than more call-graph walking (§2/§7.3 already record two
prior sessions' call-graph search stalling on indirect/heap dispatch). Static RE only,
per this session's brief.

### 8.1 The scan and what it found

`scratch/decomp_stream/scan_sky_schedule2.py` (this session, committed) brute-force
scans every 2-byte-aligned offset in `code.bin` for runs of `{u16 start, u16 end, u8
idx1, u8 idx2}` (6-byte stride — the shape that turned out to be real; an 8-byte
variant with a separate blend byte, matching N64's literal `struct_8011FC1C` layout,
was also tried and found nothing outside noise) where the chain starts at `0x0000`,
each `end` feeds the next `start`, and the chain terminates at `0xFFFF`. It found
**exactly 5 valid 9-entry chains**, back-to-back, 0x36 (54) bytes apart, at file
offset `0x00431efc` (VA `0x00531efc`) — using this repo's established
file-offset→VA base (`+0x00100000`, cross-checked against the `"cmab"` string anchor
in `title_logo_fireglow_cmab.md`: file-offset `4118250`(`0x3ED6EA`) → VA `0x004ed6ea`
→ base `0x00100000`, consistent).

**This table is not new** — it is the exact table `soh3d` commit `5ba95e40` ("RE: 3DS
time-based light schedule") already found and ported as `kTitleLightSchedule`
(`Shipwright/soh/src/zelda3d/zelda3d_cutscene.cpp:578-588`), consumed by
`Environment_Update` (`FUN_0045dd30`) to blend `ambientColor`/`light1Color`/
`light2Color`/`fogColor` — **not** documented anywhere as also driving
`skybox1Index`/`skybox2Index`. This session's independent byte-scan re-derivation is
useful corroboration (a second, from-scratch method landing on the identical 9-entry,
6-byte-stride table at the identical VA) but is not itself new ground truth about the
table's *consumer*. The 5 chains found correspond to the 5 "config" rows already
described in the `5ba95e40` commit message (`54B rows`, `row = env[0x21]`); row 0
(index range 0-3, the one used at title per that commit) is the one analyzed below.

**One dead-end explicitly ruled out this session**: `FUN_002de22c` (the generic
schedule-blend engine used by the light path, `build/decomp/002de22c.c`) reads what
*looked* like a second, separate 8-byte-stride table via a cached base pointer
(`iVar5 = iRam002de568`, then `iVar5+0xd8+n*8`). Checked whether this is a genuine
second (dome?) table with `FindDataWriters` on `0x002de558..0x002de570` (the block of
Ghidra-named "Ram" pseudo-globals `iVar5` is assembled from): **zero code references
anywhere in the binary**, and the addresses themselves fall *inside* `FUN_002de22c`'s
own body (`0x002de22c`-`~0x002de674`). This is a Ghidra decompiler artifact (almost
certainly a NEON/coprocessor addressing mode Ghidra's ARM SLEIGH model didn't resolve
cleanly), not a real second table — **do not chase `iVar5+0xd8` as a lead**, it isn't
a resolvable static reference and the "8-byte stride, separate table" reading from
`env_sun_moon_draw.md`'s session-2 notes on this same function should be treated the
same way (unverified decompiler noise, not a finding).

### 8.2 The exact 3DS-vs-N64 boundary diff (title's active row, config 0 = "fine")

Both schedules use the **identical 9-interval index cycle**
`(3,3)(3,0)(0,0)(0,1)(1,1)(1,2)(2,2)(2,3)(3,3)` — i.e. the day/night state-machine
SHAPE (night → night/sunrise blend → pure sunrise → sunrise/day blend → pure day →
day/sunset blend → pure sunset → sunset/night blend → pure night) is unchanged from
N64. Only the boundary TIMES differ, and they differ in a clean, systematic way — every
**blend/transition** window is almost exactly **2×** wider on the 3DS, and the widened
time is taken out of the **day** hold window (the sunrise/sunset pure-hold widths are
essentially unchanged):

| interval (state) | N64 `D_8011FC1C[0]` width | 3DS `kTitleLightSchedule` width | ratio |
|---|---|---|---|
| pure night (start) | `[0,0x2AAC)` = 10924 | `[0,0x2AAC)` = 10924 | 1.00× (shared boundary) |
| night→sunrise blend | `[0x2AAC,0x3556)` = 2730 | `[0x2AAC,0x4000)` = **5460** | **2.00×** |
| pure sunrise | `[0x3556,0x4000)` = 2730 | `[0x4000,0x4AAB)` = 2731 | 1.00× (shifted later, same width) |
| sunrise→day blend | `[0x4000,0x5556)` = 5462 | `[0x4AAB,0x6000)` = 5461 | 1.00× |
| pure day | `[0x5556,0xAAAB)` = 21845 | `[0x6000,0xA000)` = **16384** | 0.75× (shorter) |
| day→sunset blend | `[0xAAAB,0xB556)` = 2731 | `[0xA000,0xB556)` = **5462** | **2.00×** |
| pure sunset | `[0xB556,0xC001)` = 2731 | `[0xB556,0xC001)` = 2731 | 1.00× (shared boundary) |
| sunset→night blend | `[0xC001,0xCAAC)` = 2731 | `[0xC001,0xD556)` = **5461** | **2.00×** |
| pure night (end) | `[0xCAAC,0xFFFF)` = 13651 | `[0xD556,0xFFFF)` = 10921 | 0.80× (shorter) |

Shared boundary values between the two tables: `{0, 0x2AAC, 0x4000, 0xB556, 0xC001,
0xFFFF}` (6 of 10 boundary points identical); everything else moved. Net effect: on
the 3DS-authored clock, **every transition takes roughly twice as long** as the
N64-borrowed table SoH currently uses, and the extra time is funded by shortening the
"pure day" hold.

### 8.3 Hypothesis test against §7.3's two residuals — PARTIALLY corroborates, PARTIALLY falsifies

§7.3 already showed the mechanism (SoH's schedule clock running ahead of the oracle)
using `D_8011FC1C`. Since this newly-confirmed 3DS table produces systematically
*wider* blend windows (i.e. a *slower*-advancing schedule at the same `dayTime`), it is
a natural candidate to test directly against the same 4 measured points — **without
assuming it's actually the dome's consumer, just checking whether its numbers move the
residuals the right direction**:

| point | dayTime | N64 result (already in §7.3) | 3DS-table result (this session) | residual (1)/(3) direction |
|---|---|---|---|---|
| az=100/cs=138 | 0x2e13 | idx(3,0) blendW=0.319 | idx(3,0) blendW=**0.160** | **improves** — half the sunrise contamination on a still-night oracle frame |
| az=360/cs=268 | 0x311f | idx(3,0) blendW=0.605 | idx(3,0) blendW=**0.302** | **improves** — same, ~half |
| az=1300/cs=738 | 0x3c23 | idx(0,0) — **pure sunrise**, no night left | idx(3,0) blendW=**0.819** — **still 18% night mixed in** | **worsens** — reintroduces up to 18% of `fine_tenkyu_3`'s deep-blue (0.02,0.01,0.08 zenith / 0.08,0.10,0.57 horizon) at exactly the frame the oracle is measured warming toward +R; blending MORE night in pulls bluer, the wrong direction for a "missing +R, gaining +G/+B" residual |
| az=1522/cs=849 | 0x3ebd | idx(0,0) — pure sunrise | idx(3,0) blendW=**0.941** — still 6% night mixed in | **worsens**, same mechanism, smaller magnitude |

(All 4 numbers independently recomputed this session against the literal boundary/idx
values quoted in §8.2 and the port's own `Environment_LerpWeight`-shaped linear form;
reproducible with `scratch/decomp_stream/sky_schedule_check.py`, committed.)

**Honest conclusion — do not adopt this table for the dome wholesale.** It cleanly
improves residual (1) (both points land closer to the oracle's still-genuinely-night
content) but it actively moves residual (3) in the wrong direction (both points regain
a small night-blue contamination that pure-N64-sunrise didn't have, worsening the
"missing +R" symptom rather than fixing it). This is inconsistent with "the dome just
needs `D_8011FC1C` swapped for `kTitleLightSchedule`" — either (a) the dome genuinely
consumes a **different, still-unlocated** 3DS table (this repo's 3 prior sessions
already established the actual dome/moon per-frame draw dispatch is reached through
indirect/heap-resident function pointers invisible to static `ListCallers`/xref
scanning — see §2 and `env_sun_moon_draw.md` §"Why the search stalled" / session 3),
or (b) the dome and the light both consume this exact table but at a **different `dayTime`
anchor/offset** than the light path uses (e.g. a scene- or kind-specific bias not
modeled here), or (c) residual (3)'s "dawn-warmth" characterization in
`2026-07-10-title-arc-closing-measurement-v2.md` is itself imprecise (az↔cs↔dayTime
convention drift) and the true oracle transition happens later than `dt=0x3ebd`. This
session's static-only budget cannot distinguish those — flagging honestly rather than
picking one and porting it.

### 8.4 Deliverable status vs the task brief

- **3DS schedule table, full entries**: delivered — §8.2's 9-row table, VA
  `0x00531efc` (config/row 0, the title's active row), independently re-derived by
  byte-level scan and cross-confirmed against the pre-existing `soh3d` port
  (`kTitleLightSchedule`).
- **Selection/blend code decompiled**: NOT newly delivered this session — the
  consumer is the already-decompiled `Environment_Update` (`FUN_0045dd30`, fully in
  `build/decomp/0045dd30.c` from prior sessions); this session did not locate new
  consumer code because the honest finding is that **this table's known consumer
  (`Environment_Update`) is the LIGHT path, and the DOME's own consumer remains
  unlocated** (§8.1's dead-end explicitly rules out one static lead so a future
  session doesn't re-try it).
- **Diff against N64 `D_8011FC1C` timings**: delivered in full, §8.2.
- **Title-specific schedule**: confirmed — row/config 0 is the row `env[0x21]`
  selects at title (per the pre-existing `5ba95e40` port, live-dump-verified there).
- **Not delivered, flagged honestly**: proof that this exact table (as opposed to a
  distinct, still-hidden dome table) is what selects `skybox1Index`/`skybox2Index`.
  §8.3's falsification on residual (3) argues against assuming so. The next
  concrete step, if pursued, is dynamic (per §2/§7.3/`env_sun_moon_draw.md`'s
  repeated conclusion): a harness watch on `envCtx.skybox1Index`/`skybox2Index`'s
  actual FCRAM address across the title's dawn window, correlated against `dayTime`,
  which would show directly whether the transition times match §8.2's 3DS table, the
  old `D_8011FC1C` numbers, or neither — static analysis alone has now been tried
  from multiple angles (this session's structural byte-scan, 3 prior sessions' call
  graph/indirect-dispatch tracing) and has a well-documented ceiling.

### Anchors (this session)

- `scratch/decomp_stream/scan_sky_schedule2.py` (this session, not committed — scratch/ is gitignored, trivially reproducible) — the structural byte
  scanner that found the table at VA `0x00531efc`, 5 rows × 9 entries × 6 bytes.
- `scratch/decomp_stream/sky_schedule_check.py` (this session, not committed — same gitignore convention as the scanner) — recomputes §8.2's width
  table and §8.3's 4-point hypothesis test from the literal boundary/idx values (no
  emulator, reproducible offline).
- `Shipwright/soh/src/zelda3d/zelda3d_cutscene.cpp:568-604` (`soh3d`, commit
  `5ba95e40`) — the pre-existing `kTitleLightSchedule` port + `Environment_Update`
  consumer citation this session cross-confirmed byte-for-byte via an independent
  method.
- `build/decomp/002de22c.c` (`FUN_002de22c`, pre-existing decompile) — re-examined
  this session; the `iVar5+0xd8` second-table reading is ruled out as a Ghidra
  decompiler artifact (`FindDataWriters` on `0x002de558..0x002de570`: 0 refs,
  addresses fall inside the function's own body).

---

## 9. Session 2026-07-10 (decomp stream #5): the DOME's own selector/blend function
FOUND — `FUN_002e47c8`, with its OWN schedule table at VA `0x0053200a`, boundary-
identical to `kTitleLightSchedule`. This closes §2/§7/§8's repeated "dome per-frame
draw dispatch not located" open item.

Task: locate the exact per-frame dome-variant/blend selection code (not just a table),
reconcile it against the sweep's 5 named residual points. Static RE only.

### 9.1 The draw site: `FUN_002e47c8` is NOT init-only asset binding — it's also the
per-call time-of-day selector AND the draw submission

§2 mis-scoped this function as "init-time asset binding (called once from scene-init
`0x004490d8`)". Re-decompiling its **full** body (previously only excerpted) shows it
is a generic **per-env-"kind" object handler** — a big switch on `param_3` (the "kind"
byte, same table VA `0x0054984c` as §2's kind table) — and for kind values `{1,4,6,8}`
(kind **1 = "fine"**, BlueSky.zar's day/night dome group — the one title uses; kind 4 =
Dark.zar; 6/8 unidentified, not chased) it does NOT just bind an asset. It:

1. **Looks up the current index pair + blend weight from a live time value** via an
   8-byte-stride range table (§9.2).
2. **Writes the result into a small per-kind state struct** (`unaff_r5+0x10`=idx1,
   `+0x11`=idx2, `+0x13`=blend byte 0-255) — Ghidra's `unaff_r5` naming means this base
   pointer is set by the caller/earlier in-function code the decompiler didn't fully
   resolve to a clean C expression; not pinned to an exact `play+K` offset this session
   (see caveat below).
3. **Immediately issues the actual draw**, using the *local* `idx1`/`idx2`/blend values
   (not a re-read of the struct) as direct arguments to
   `FUN_002d50e8(ctx, idx1, idx2, blendByte, 0)` / `FUN_002d5468(ctx, idx1, idx2,
   blendByte, 0)` — a small mesh-bind-and-submit primitive (not decompiled further this
   session; out of the task's scope, which asked for the selection/blend mechanism, not
   the CMB-binding internals).

So **`FUN_002e47c8` IS the draw site** for the dome cross-fade — selection, blend-weight
computation, and draw submission are one function, not three separate stages spread
across static/dynamic code as §2/§7 assumed.

**Caveat — exact struct base (`unaff_r5`) not pinned to a `play+K` offset.** An older,
unrelated live-RAM-diff session (`docs/ram_map.md` §"dayTime → slot selector", a
different, generic-gameplay investigation, NOT title-specific) independently found and
DYNAMICALLY confirmed a `play+0x3370` `u8[2]` byte pair that "drives both skybox and
environment lighting" and cycles through slot values matching exactly this doc's idx0-3
semantics. This is a plausible match for `unaff_r5+0x10/+0x11` (kind=1's instance of
this struct) but was not re-derived or cross-confirmed this session — flagged as
corroborating, not proven identical.

### 9.2 The schedule table — VA `0x0053200a`, immediately adjacent to (and boundary-
identical with) `kTitleLightSchedule`

The range table `FUN_002e47c8` reads (row-select logic omitted — a small rain/weather
check against a separate global, row 0 = the non-rain "fine" case, which is what runs at
title) sits at pool-literal-resolved VA **`0x0053200a`** (Ghidra's `iRam002e4ddc` —
another literal-pool artifact, same shape as §8.1's ruled-out lead, but this one
resolves cleanly via `ReadWord` to a real, dumpable table, not a decompiler ghost).
Row stride `0x48` (72 = 9×8 bytes); row 0 dumped directly from `build/code.bin`
(file-offset = VA − `0x00100000`, this repo's established base):

```
entry: {u16 start, u16 end, u8 blendFlag, u8 idx1, u16 idx2(low byte used)}

idx  start   end     blendFlag  idx1  idx2
0    0x0000  0x2aac    0         3     3    (pure night)
1    0x2aac  0x4000    1         3     0    (night→sunrise blend)
2    0x4000  0x4aab    0         0     0    (pure sunrise)
3    0x4aab  0x6000    1         0     1    (sunrise→day blend)
4    0x6000  0xa000    0         1     1    (pure day)
5    0xa000  0xb556    1         1     2    (day→sunset blend)
6    0xb556  0xc001    0         2     2    (pure sunset)
7    0xc001  0xd556    1         2     3    (sunset→night blend)
8    0xd556  0xffff    0         3     3    (pure night)
```

**This is byte-for-byte the same 9-boundary shape §8.2 already documented for
`kTitleLightSchedule` at VA `0x00531efc`** — and the two tables are **contiguous in
memory**: `0x531efc` (light table, 5 rows × 9 entries × 6 bytes = `0x10E` bytes) ends at
exactly `0x531efc + 0x10E = 0x53200a` — the dome table's row 0 starts at the very next
byte. Two separate, purpose-built tables (6-byte light-color-slot entries vs 8-byte
dome-index+blend entries) compiled back-to-back into the same data blob, sharing
identical time boundaries. This explains why §8.1's static byte-scanner (which searched
`code.bin`'s `.rodata` region generically) never flagged this specific 8-byte-stride
table as a *distinct* finding — it read the boundary values correctly enough to note
the two tables' widths matched (§8.2 already observed shared boundaries), but concluded
the *consumer* was unconfirmed; this session found and decompiled that consumer
directly (`FUN_002e47c8`), removing the "coincidence vs shared consumer" ambiguity.

**Blend-weight formula** — `FUN_00361490(end, start, curTime)`, decompiled this
session (`build/decomp/00361490.c`):
```c
float LerpWeight(int end, int start, int curTime) {
    float span = (float)(end - start);
    if (span == 0.0f) return 1.0f;             // fRam003614dc = 1.0f
    float w = 1.0f - (float)(end - curTime) / span;   // == (curTime-start)/span
    return (w < 1.0f) ? w : 1.0f;               // clamp ceiling only
}
```
then `blendByte = round_or_trunc(LerpWeight(...) * 255.0f)` (the `255.0f` pool constant
independently confirmed via `ReadWord` on `0x2e4de0` = `0x437f0000` = `255.0`). This is
the exact `Environment_LerpWeight` shape already assumed by §7.3/§8.3 — now confirmed
as the DOME's real formula, not an assumption borrowed from the light path.

**Time source (`curTime`)** — `*(short*)(0x00588e58 + 0xa8)` = VA **`0x00588f00`**, a
**static** global (`ReadWord` on the literal-pool slot `0x2e4dd4` resolves to
`0x00588e58`, a `.bss`/`.data` address, NOT a per-boot heap pointer). This is a
different global from `envCtx`'s own light-interpolation slot index
(`play+0x31DA`/`unk_BF`, `env_context_layout.md`) — the dome and the light schedule
read the *same conceptual* dayTime but through two structurally separate globals/tables,
not one shared field.

### 9.3 Draw-site call graph — two confirmed static callers, one likely per-frame

`ListCallers` on `0x002e47c8` found exactly 2 callers:

1. **`FUN_004490d8`** (already known, §2's "scene-init asset binding" caller) —
   confirmed once more, still plausibly a one-shot/scene-load call.
2. **`FUN_00450b40`** — new this session. Calls `FUN_002e47c8(play, play+0x564, 1)`
   unconditionally near the top of its body. Static evidence this is itself a
   per-frame **GameState `main` tick function**, not a one-shot init: `r2`-verified raw
   memory at VA `0x004164cc` (one of `Graph_ThreadEntry`'s exit-value comparison slots,
   `title_gamestate_driver.md`'s "9-slot `gGameStateOverlayTable`" dispatch) literally
   contains the value `0x00450b40` — i.e. this engine's state-transition scheme appears
   to use a GameState's own `main`-function VA as its self-identifying "exit code" for
   comparison, meaning `0x00450b40` is registered as a real GameState main, called every
   `GameState_Update` tick while that state is active (the same calling shape as
   `Play_Main`).
   - **Not fully closed this session**: which GameState `0x00450b40` belongs to, and
     whether it runs *concurrently with* or *instead of* `Play_Main` during the title
     demo, was not traced (would need either a call-graph walk from
     `Play_Main`'s two untraced sub-calls `FUN_002e4514`/`FUN_002e25f0` — neither
     references `0x002e47c8` or `0x564` directly, checked this session, dead end — or a
     live watchpoint on `0x00450b40`'s entry during title, which is dynamic work,
     out of this session's static-only scope). Flagged as the one remaining open item:
     the mechanism and its table are now fully decompiled and reproducible offline; the
     exact frame-cadence of its title invocation is inferred (very likely per-frame,
     given it recomputes a live time-driven blend every call with no caching) but not
     dynamically confirmed.

### 9.4 Reconciliation against the 5 named residual points

Recomputing `LerpWeight` directly against §9.2's literal table (row 0, "fine") for the
task's named points (`dayTime = 0x2AD7 + 6·cs`, `cs=(az+176)/2`, both already RE'd and
verified — `f115871f`):

| az | cs | dayTime | active entry | idx1,idx2 | blendW | predicted horizon colour (lerp of §7.4's baked bands) |
|---|---|---|---|---|---|---|
| 100  | 138 | 0x2e13 | 1 `[0x2aac,0x4000)` | 3,0 | 0.160 | (0.22,0.22,0.56) — still strongly blue/night |
| 200  | 188 | 0x2f3f | 1 | 3,0 | 0.214 | (0.27,0.26,0.55) — still blue/night |
| 360  | 268 | 0x311f | 1 | 3,0 | 0.302 | (0.35,0.33,0.55) — blue-dominant, warming |
| 1300 | 738 | 0x3c23 | 1 (still, `0x3c23<0x4000`) | 3,0 | 0.819 | (0.80,0.73,0.52) — strongly red/warm, R>G>B |
| 1522 | 849 | 0x3ebd | 1 (still, `0x3ebd<0x4000`) | 3,0 | 0.941 | (0.90,0.82,0.52) — strongly red/warm |

(horizon-band colours: idx3 night `(0.08,0.10,0.57)`, idx0 sunrise `(0.96,0.87,0.51)`,
linear lerp `night·(1-blendW) + sunrise·blendW`, matching the N64-precedent two-dome
draw-then-alpha-blend compositing; §7.1/§7.2 already established the combiner does no
extra tinting, so this is the literal on-screen colour this mechanism predicts.)

**Residual (1) — night too bright/green (az 100/200/360): EXPLAINED, and the real
table meaningfully IMPROVES on the old N64-table framing.** At these points the real
3DS boundaries put SoH only 16-30% of the way through the night→sunrise blend — half to
a third of the 32-60% contamination §7.3 computed off the *borrowed N64* `D_8011FC1C`
table. The predicted colour stays blue-dominant (`B` ≈ 0.55, well above `R`/`G` ≈
0.22-0.35) at all three points — consistent with the oracle's own "still night/moonlit"
content labels, i.e. the real 3DS mechanism does NOT itself demand an early green
contamination; the residual's *size* (SoH currently even greener/brighter than this
predicts) points at SoH's port not yet implementing this table, not at the table's own
math.

**Residual (3) — dawn missing +R, gains +G/+B (az 1300/1522): NOT fully explained by
schedule mechanism alone — direction is right, magnitude falls short, and the real
table's own prediction is actually LESS red than the N64-fallback SoH renders today.**
At both points the real table predicts a genuinely warm, R-dominant colour (R≈0.80-0.90,
clearly R>G>B) — so the *mechanism* is not broken and does produce "dawn warmth." But
it is **not pure sunrise** at these `dayTime`s (both still fall inside entry 1, the
night→sunrise blend, at 82%/94% toward sunrise) — compared to SoH's current N64-table
fallback, which (per §7.3) is already at **pure** `fine_tenkyu_0` (blendW=1.0, no night
residual at all) by these points, because N64's `D_8011FC1c` blend window is narrower
and finishes earlier. Swapping in the real table's 18%/6% remaining night contamination
therefore **pulls R and G down together** (night's R,G are both low; night's B is close
to sunrise's B) — net effect: **less red-dominant than SoH's current render**, the wrong
direction to fix a "missing +R" residual, confirming §8.3's "worsens" call now on a
provably-real (not hypothesized) table.
  - **What's still missing, honestly**: the schedule mechanism is closed; the residual
    gap is best explained by the **already-flagged dayTime clock PHASE bug**
    (`f115871f`: "rate is correct, bug is cursor PHASE") — if SoH's derived `dayTime` at
    a given `cs`/`az` step runs slightly behind the oracle's true internal `dayTime` at
    the same visual frame, the oracle would already be further into (or past) the
    sunrise blend window than SoH's clock computes, which is exactly a "missing warmth"
    signature. This session did not re-derive the phase offset (dynamic oracle work,
    out of static-RE scope) — flagging as the concrete next step rather than guessing a
    correction constant.

### 9.5 Port-ready spec

```c
// Per-frame, for the title's "fine" dome group (kind=1):
//   dayTime: u16, SoH's already-ported title clock (kTitleLightSchedule's own input)
struct { u16 start, end; u8 blendFlag; u8 idx1; u8 idx2; } kDomeSchedule[9] = {
    {0x0000,0x2aac,0,3,3}, {0x2aac,0x4000,1,3,0}, {0x4000,0x4aab,0,0,0},
    {0x4aab,0x6000,1,0,1}, {0x6000,0xa000,0,1,1}, {0xa000,0xb556,1,1,2},
    {0xb556,0xc001,0,2,2}, {0xc001,0xd556,1,2,3}, {0xd556,0xffff,0,3,3},
};
// find the entry with start<=dayTime<end (last entry treated end-inclusive)
// idx1/idx2 = play->envCtx.skybox1Index/skybox2Index (fine_tenkyu_<idx>)
// blend = entry.blendFlag ? clamp01((dayTime-start)/(float)(end-start)) : 0.0f
//         maps directly to play->envCtx.skyboxBlend (was previously assumed to be the
//         SAME schedule as the light path; it is a SEPARATE, boundary-identical table —
//         port this literal table, do not reuse kTitleLightSchedule's index field for
//         the dome, even though the numbers happen to currently overlap 1:1)
```

This table is a straight drop-in replacement for whatever schedule currently drives
`Zelda3D_ApplyTitleCam`'s skybox fields (§6's gap-1 fix) — it happens to be
numerically identical to `kTitleLightSchedule`'s boundaries, so if SoH's port already
uses `kTitleLightSchedule` to select `skybox1Index`/`skybox2Index`/`skyboxBlend` (as a
consequence of the §7.3-era stopgap), **no port-side change is required for the
boundary values themselves** — only the *justification* changes (this is now the real,
independently-confirmed dome consumer, not a borrowed light-path assumption). The
outstanding correctness gap (residual 3) is the dayTime phase bug, not this table.

### Anchors (this session)

- `build/decomp/002e47c8.c` (re-dumped in full, 5227 bytes C; was previously only
  excerpted for its init-time asset-binding half) — the draw-site function.
- `build/decomp/00361490.c` (72 bytes C) — the lerp-weight helper.
- `build/decomp/00450b40.c` (15880 bytes C, 427 lines) — candidate per-frame caller;
  only its head (through the `FUN_002e47c8` call) was read this session.
- `build/decomp/00416208.c` (`Graph_ThreadEntry`, re-dumped) — the exit-value dispatch
  table cross-checked via `r2`'s raw memory read (`ldr r1,[0x4164cc] ; [0x4164cc:4]=
  0x450b40`) to support the "state main-as-ID" reading of `FUN_00450b40`'s caller
  status.
- `ReadWord` on `0x2e4dc8/dcc/dd0/dd4/dd8/ddc/de0` — resolved all of `FUN_002e47c8`'s
  literal-pool "`iRamXXXXXXXX`" pseudo-globals to real addresses/constants:
  `0x0054984c` (kind table, confirms §2), `0x00588958`, `0x00531eb4`, `0x00588e58`
  (curTime struct base), `0x0000ffff`, `0x0053200a` (**the dome schedule table**),
  `0x437f0000` (=255.0).
- Direct `build/code.bin` byte dump (this session's throwaway python, not committed —
  reproducible via the file-offset formula and the entry layout in §9.2) — the 2-row,
  9-entry table content quoted above.
