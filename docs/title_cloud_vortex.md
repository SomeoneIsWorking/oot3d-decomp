# Title-screen Death Mountain cloud VORTEX — two additive ring draws, not one

Session 2026-07-10 (vortex agent). Symptom: soh3d's title vortex above Death Mountain
(matched frames az=1000 / soh=1408) rendered present but far dimmer and structureless vs
the oracle's bright, churning spiral. Root cause: **the vortex is a composite of TWO
concentric additive ring draws, and soh3d only drew one of them.**

## 1. Ground truth (embedded-Azahar draw log + per-pixel TEV dump, settled title az=1000)

Method: `soh3d_harness` `draw_log` one-frame capture at az frame 1000 (the frame with the
mountain + vortex in view — the `soh_boot + 3x soh_step 400` "settled title" shot used by
older probes is a DIFFERENT cutscene shot with no mountain, and contains **no** ring draw at
all; always verify the capture frame shows the element). Per-pixel `PIXEL` dump via the new
generic `SOH3D_PIXEL_TEX=<physaddr>` env hook added to
`Azahar/src/video_core/renderer_software/sw_rasterizer.cpp` (extends the old hardcoded
moon/fire address list).

Two draws cover the vortex screen region (fb x 397–480, y 0–188):

| draw | texture (VRAM) | asset | TEV stage 0 | blend | tris/frame |
|---|---|---|---|---|---|
| room ring | `0x1847e380` 64×64 ETC1A4 | spot99 room 0 CMB, material 0 `doughnut_modelT` | MODULATE(PRIMARY, TEX0) **×1** | src=SRC_ALPHA dst=ONE | ~6 |
| actor ring | `0x184de380` 128×128 ETC1A4 | `/actor/zelda_efc_doughnut.zar` → `Model/doughnut_modelT.cmb` | MODULATE(PRIMARY, TEX0) **×2** (stage 1 = MODULATE(PREV, CONST4=white) pass-through) | src=SRC_ALPHA dst=ONE | ~10 |

VRAM at `0x184de380` byte-matches the zar CMB's texture exactly (`vram_184de380.bin` ==
zar texture bytes). Both draws' per-pixel `PRIMARY_COLOR = (60,74,100,255)` — the scene-lit
feed: `sceneAmbient(61,75,100)/255 × 2 enabled lights × baked vColor(0.502 constant)` with
FULL alpha (`soh_env` reports the identical live ambient on the SoH side at the matched
frame). So the pixel formula per ring is `out += tex.rgb × primary.rgb × (scale) × tex.a`,
and the oracle's bright "arms" are where the two rings' fuzzy patterns overlap (up to 3× the
single-ring energy) while the ACTOR ring slowly rotates against the static room ring
(pattern visibly churns across 60/120-frame captures; ring geometry sxy is frame-stable).

Geometry: room ring mesh centroid (12600, 5200, −3800), radius 2880 (24 verts). Actor ring
CMB is authored at model-space radius **28800** → ×0.1 = 2880: exactly concentric/co-sized
with the room ring (screen bboxes agree within a few px). 0.1 is precisely N64
`Bg_Spot16_Doughnut`'s background-scene scale (`z_bg_spot16_doughnut.c` Init default), and
the N64 update law `shape.rot.y -= 0x20`/frame supplies the rotation; the 3DS remake reuses
this actor behavior. The zar's third piece (`doughnut_aya_modelT.cmb`, alpha-blended, with
`misc/doughnut_aya_modelT.cmab` UV scroll) is **not drawn at the settled title** (no
64×128 ETC1A4 alpha-blend draw in the frame) — it's the Death Mountain Trail fiery/expanding
variant's layer; not ported for title.

## 2. What was wrong in soh3d

soh3d drew ONLY the room-mesh ring (room draw-group 24 — byte-correct: additive blend,
vColor 0.502, ambient×2; verified via `sgdump 1000`). The bright ×2 actor-layer ring never
existed on the SoH side (`actorscan 0xE5` = 0: SoH's title spawns no Bg_Spot16_Doughnut;
on 3DS it is drawn by the title-demo's own object list). Net: ~1/3 of the additive energy,
no arm structure → "much dimmer / washed out".

## 3. Port (soh3d)

- `Shipwright/soh/src/zelda3d/behaviors/title/title_cloud_vortex.{h,cpp}` — emits the
  actor ring right after the title room draw (`Zelda3D_DrawRoomGL`), model
  `SKY:/actor/zelda_efc_doughnut.zar|doughnut_modelT` ("SKY:" load prefix = keep baked
  vertex color; the draw does NOT set the far-plane handle bit, so depth-test vs the
  mountain still applies). Anchor = room ring centroid via new
  `Zelda3D_ModelGroupCentroid(modelId, materialIndex, out)` (`zelda3d_model.cpp`) —
  asset-derived, no coordinate constants. Scale 0.1, rotY −0x20/frame, tint white —
  combiner ×2 / additive blend / ambient-lit primary all ride the existing byte-driven
  generic pipeline (`comb_scale_rgb`, blend bytes, `uAmbient` sum).
- Verified at az=1000/soh=1408 (element-masked swirl-pixel stats, region x 300–400, y 0–60):
  swirl pixel count 137 → **711** (oracle 655); swirl mean (70,85,112) → **(100,123,170)**
  (oracle (118,119,164)); p95 (98,112,120) → **(124,151,208)** (oracle (142,149,203)).
  Whole-frame mean-abs-diff vs oracle improved 23.86 → 23.23 (no regression). The residual
  region-mean R gap is the separately-documented sky-hue/schedule residual
  (`title_sky_dome.md` §7.3), not the vortex.

## 4. Side finding — per-slot light ENABLE is presence-based, not direction-based

`title_env_lighting.md` §10/§11's ambient sum was ported (2026-07-10, soh3d 02181072) with a
guess: light2 counted only if its direction is non-degenerate (`l2len > 0.5`). The oracle
per-pixel dump falsifies that gate: at the title's night slots the spot99 lightSettings
entries author **light1Dir = light2Dir = (0,0,0)** yet `PRIMARY_COLOR = ambient × 2 ×
vColor` — the 3DS still counts BOTH EnvLightSettings lights (a zero direction only nulls
that light's diffuse N·L term; matches N64 `Lights_BindAll` presence semantics and
`FUN_003fa5d0`'s runtime `lightRec+0xe4 == 1.0f` enable flag being per-slot presence, not a
direction test). soh3d now passes `numEnabledLights = 2` unconditionally
(`zelda3d.c` `Zelda3D_UpdateLight`). Note: at az=1000/soh=1408 the *blended* l2dir happens
to be non-degenerate (slot pair 3→0, blend 83), so this change is a no-op at that exact
frame — it matters at pure-night cursor positions and any scene whose authored dirs are
zero.

## 5. Artifacts / repro

- `soh3d/scratch/vortex/` — draw logs (`az1000_draws.log`, `az1000_pixels.log`,
  `actor_ring_pixels.log`), VRAM texture dumps + decodes, before/after crops
  (`verify_ab.png`), probe scripts (`oracle_vortex_probe.py`).
- Repro: spawn harness from `scratch/title_settled.state`, `soh_boot`, `run 1000`,
  `soh_step 1408`, `snapshot`; one-frame `draw_log` (+ `SOH3D_PIXEL_TEX=184de380` in env
  for the per-pixel dump).
