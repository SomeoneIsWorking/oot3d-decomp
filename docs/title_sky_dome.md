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
This is init-time asset binding (called once from scene-init `0x004490d8`,
`param_3` = a scene config byte) — it picks WHICH zar + sub-object set is bound,
i.e. the 3DS analog of "which sky group". The per-frame variant (time-of-day 0..3)
selection + the actual dome/cloud/star draw emission live in a per-frame draw
function not yet located (search stalled — see `env_sun_moon_draw.md` §"Why the
search stalled"; recommended next step is a JIT watchpoint on the dome vertex
buffer, not more static xref walking).

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
