# OoT3D per-draw light setup and per-material ambient/diffuse — ground truth

Status: **RE COMPLETE (live-oracle, two scenes, four times of day). No port change required —
Zelda3D already implements both configurations faithfully.**

Method: per-draw PICA vertex-shader uniform capture (`vsuni_log`, AZAHAR_PATCH.md Patch 5 + 7)
paired with per-draw *isolation* (`drawskip`, Patch 7 — skip one draw, diff the frame, get its
exact screen footprint). Driver `tools/oracle_draw_isolate.py`. Scenes: Zora's Domain
(entrance 0x109, spot07) and Kokiri Forest (0xEE, spot04), dayTime 0x3000/0x6000/0x9000/0xC000.

Artifacts: `scratch/drawiso/{zora,zora_masks,zora_cam,kokiri}/` (vsuni.log, draws.json,
masks.npz, report.txt, camera.txt), `scratch/drawiso/zora_tev.log`.

## 1. There are exactly TWO light-slot configurations per frame

Uniform names below are the CmbVShader registers as logged: `dirN`=c(80+3N), `difN`, `ambN`,
`matDif`=c8, `matAmb`=c9, `vLit`=b9.

### (A) SCENE / room configuration — used by every room-mesh draw

```
vLit = 1
dir0 = dir1 = world (0,-1,0)          (straight DOWN; see §2 — the register is VIEW space)
dif0 = dif1 = (0,0,0)                 <-- both slots have ZERO diffuse colour
amb0 = amb1 = sceneAmbient            <-- both slots carry the SAME scene ambient
matAmb = (1,1,1)   matDif = (0,0,0)   (typical room material)
tev stage0 = MODULATE(PRIMARY_COLOR, TEXTURE0), RGB scale x2
```

Consequences, all confirmed on live captures:

* Ambient is summed **once per bound slot**, i.e. **x2** — this is the N64 `Lights_BindAll`
  semantics the earlier title RE derived, and it holds for every room draw at both scenes.
* **`matDif` is INERT for room draws**, because the scene slots' *light* diffuse colours are
  zero. Room draws that carry `matDif=(1,1,1)` (e.g. Zora draw n=54, the waterfall sheet) are
  lit identically to those carrying `matDif=(0,0,0)`. The "31 of 75 draws carry matDif=(1,1,1)"
  observation that motivated this arc is a **red herring**: those draws are either 2D/unlit
  (`vLit=0`, HUD and full-screen quads) or room draws whose slots have `dif=0`.
* Effective room shading is therefore exactly
  `clamp( 2 * texel * clamp(2*sceneAmb*matAmb * vColor) )`.

### (B) ACTOR configuration — used by every skeletal/prop draw

```
vLit = 1
dir0 = +D    dif0 = light2Color   amb0 = sceneAmbient
dir1 = -D    dif1 = light1Color   amb1 = (0,0,0)      <-- ambient counted ONCE
matAmb, matDif = the material's own values (Link: matAmb=0.4, matDif=0.498)
```

`D` is the time-of-day sun vector (§3). Ambient is applied once, plus two opposed directional
terms — the standard N64 two-light rig.

Kokiri and Zora's Domain produce byte-identical *structure*; only the scene ambient, the light
colours and `D` differ.

## 2. The PICA light-direction registers are in VIEW space, not world space

This is the single most important correction, and it **falsifies** the
"our pushed light directions do not match the oracle's" lead recorded on 2026-07-22 in
`debug_journal/2026-07-22-lighting-parity-scene-sweep.md`.

Transform (verified exact at both scenes, using the harness `az_camera` basis):

```
world = right * v.x  +  up * v.y  -  fwd * v.z
```

(note the **minus** on the forward component — the same left-handed convention as the title
camera basis, `title_view_matrix_lh.md`).

Checks:

| capture | view-space register | -> world |
|---|---|---|
| Zora scene slot, cam fwd=(0.985,-0.174,-0.006) | (7.5e-07,-0.98392,-0.17862) | (0.000,-1.000, 0.000) |
| Kokiri scene slot, cam fwd=(0.630,-0.162,-0.760) | (5.3e-06,-0.98676,-0.16217) | (0.000,-1.000, 0.000) |
| Zora actor slot0 @0x6000 | (0.12101, 0.81627,-0.56485) | (0.7027,0.7021,0.1168) |
| Kokiri actor slot0 @0x6000 | (0.61529, 0.75103,-0.23951) | (0.7028,0.7025,0.1167) |

So the scene slot direction is world **(0,-1,0)** in every scene at every time (and is irrelevant
anyway — its diffuse colour is zero), and the actor slot direction is the *same world vector* in
both scenes. Zelda3D's live `lightparams` at both scenes reports `light2dir=(0.702,0.702,0.117)`
and `light1dir=(-0.702,-0.702,-0.117)` — **identical to the oracle to 3 decimals**, with the same
colour pairing (`dif0`=our light2Col=(5,79,130), `dif1`=our light1Col=(204,229,229)).

## 3. The actor light direction is the time-of-day sun vector, not the ZSI bytes

Zora's Domain, camera held fixed, dayTime swept (view-space register -> world by §2):

| dayTime | world direction | XY angle |
|---|---|---|
| 0x3000 | ( 0.924,-0.378,-0.059) | -22.2 deg |
| 0x6000 | ( 0.702, 0.702, 0.117) |  45.0 deg |
| 0x9000 | (-0.374, 0.915, 0.150) | 112.2 deg |
| 0xC000 | (-1.000, 0.000, 0.000) | 180.0 deg |

Uniform rotation in the world XY plane: `angle = 360 deg * dayTime/0x10000 - 90 deg`
(residual < 0.5 deg at all four samples). Identical behaviour to N64 `z_kankyo`, which is why
Zelda3D already matches without any change.

Corollary: the `light1Dir`/`light2Dir` bytes that `Zelda3D_SceneLightSettingsOverride` writes into
`envCtx->lightSettings` are **inert for outdoor scenes** — the engine's own environment update
overwrites them with this sun vector before the renderer reads them. (Every ZSI record in the
table carries the same (72,72,72)/(-72,-72,-72) pair, which is genuine N64 scene data, not a
parse error; the runtime (72,72,12)-like vector is the 0x6000 sun, coincidentally x==y.)

## 4. Per-material ambient/diffuse

`matAmb` (c9) and `matDif` (c8) come straight from the CMB material and are already parsed onto
`CmbMaterial::mat_ambient` / `mat_diffuse` (`Shipwright/cmb3d/asset/cmb.cpp`). Observed values:
room materials `matAmb=(1,1,1) matDif=(0,0,0)`; Link `matAmb=(0.4,0.4,0.4)
matDif=(0.498,0.498,0.498)`; some props `matAmb=matDif=(1,1,1)`. Zelda3D feeds these as
`uAmbient.xyz = sceneAmb * matAmb` and `uLitDif{1,2} = matDif * lightNCol`, with
`uAmbient.w` = 2 for scene draws and 1 for actor draws — a 1:1 match to (A)/(B).

## 5. Verification that the mapping is complete (Zora's Domain)

Draw isolation gives per-draw vertex counts; ours come from `sgdump`. The oracle's 27
scene-configuration draws map **1:1 and in order** onto our 21 room groups (model 1001) plus the
6 groups of the waterfall actor model 2015: 681, 327, 390, 108, 225, 105, 39, 84, 54, 60, 2613 …
match exactly. No room geometry is missing or duplicated on our side.

## 6. What the residual Zora's Domain darkness actually is (NOT the light setup)

Per-surface ratio ours/oracle, measured inside each oracle draw's own isolation mask at a matched
camera (`scratch/drawiso/zora_masks/masks.npz`, camera eye=(-1286.4,285.1,-159.0)
fwd=(0.985,-0.174,-0.006)):

| oracle draw | what | ratio ours/oracle | tex/stage state |
|---|---|---|---|
| n=11 | near ground | 0.79 | 1 texture, 1 TEV stage |
| n=3  | rock walls  | 0.86 | 1 texture, 1 TEV stage |
| n=48 | waterfall   | 0.88 | **tex0+tex1**, stage1 op=MultiplyThenAdd |
| n=54 | water sheet | 0.78 | 1 texture, 1 TEV stage |
| n=9, n=49 | water | 0.71 | **tex0+tex1(+tex2)**, stage1/2 op=MultiplyThenAdd |
| n=15 | water | 0.62 | **tex0+tex1+tex2**, stage1/2 op=MultiplyThenAdd |
| n=4, 5, 10, 12 | distant fogged | 0.96–1.07 | 1 texture, 1 TEV stage |

Kokiri Forest, same method (`scratch/drawiso/kokiri/`): every measured surface is within
0.94–1.13, i.e. essentially at parity — including the terrain draw n=8 at 1.09, which is the
"near band ~15% bright" of the earlier sweep.

Two separate residuals, neither of them the light setup:

1. **Multi-texture / multi-stage TEV is not emulated.** Every worst-offending Zora surface
   (0.62–0.88) enables texture1 (and sometimes texture2) and runs TEV stage 1/2 with
   `color_op = MultiplyThenAdd (8)`. Zelda3D renders one texture through one stage for those
   groups (`sgdump`: `tex1=-1 dualMode=0`). This is a **material-emulation gap**, and it is the
   real explanation of "Zora's water is dark/desaturated".
2. **The single-texture ground/wall deficit (0.79/0.86) is unexplained but is not lighting.**
   All logged state matches exactly (matAmb=(1,1,1), matDif=(0,0,0), amb x2 with identical
   sceneAmbient (0.42745,0.42745,0.48627), TEV stage0 MODULATE x2, same texture address/size/
   format, same vertex count), and Zelda3D's fragment shader computes the identical expression
   `clamp(2 * texel * clamp(lit*vColor))`. The deficit is *spatially structured* (per 40-row
   band inside the ground mask: 0.92, 0.69, 0.83, 0.77, 0.93, 0.92, 1.01, 0.97 from far to
   near), i.e. non-monotonic in depth, so it is neither fog nor a gain. Remaining candidates,
   in order: an extra/missing decal-layer draw over the mid ground, ETC1 mip/LOD selection, or
   baked vertex-colour interpolation. **This is the frontier.**

## Falsified, do not re-open

* "OoT3D's per-draw light setup / per-material ambient-diffuse is unported" — it is ported; both
  configurations match the oracle exactly at two scenes and four times of day.
* "Our pushed light directions (+-0.702,+-0.702,+-0.117) differ from the oracle's
  (+-0.121,+-0.816,-+0.565)" — same vector; the oracle register is VIEW space (§2).
* "31 of 75 Zora draws carry matDif=(1,1,1) while our room draws report matDif=0" — those draws
  are unlit 2D or room draws whose scene slots carry zero light diffuse, so matDif cannot
  contribute either way (§1A).
* "The ambient-x2 rule is not universal" — it *is* universal for the SCENE configuration and
  never applies to the ACTOR configuration; Zelda3D already switches on exactly that.
