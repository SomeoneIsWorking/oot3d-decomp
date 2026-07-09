# spot00 (Hyrule Field) terrain material lighting — ROM ground truth

Derived directly from the OoT3D ROM (`/scene/spot00_0_info.zsi`'s embedded `spot00_00` CMB,
room 0 — this is the terrain SoH3D's title screen renders; the title runs on the REAL Hyrule
Field scene `spot00`, with `spot99` supplying only the cutscene/camera/light-schedule data, NOT
the terrain geometry — see `zelda3d_scene_names.inc` line 88 and `zelda3d.c Zelda3D_SceneName`).

Extracted with `soh3d/scratch/title_lighting/mat_dump.py` (byte-for-byte port of
`Shipwright/cmb3d/asset/cmb.cpp`'s `parseMats()` offsets — fragment_lighting@+0x00,
vertex_lighting@+0x01, mat_ambient RGB-BE@+0xA4, mat_diffuse RGB-BE@+0xA8, comb stage-0
scale from the combiner-settings table at `matsChunk+0x0C+n*stride`).

## Material table (38 materials, all but 2 identical shape)

| materials | vertexLighting | fragmentLighting | matAmbient | matDiffuse | combScale(stage0 op=MODULATE 0x2100) |
|---|---|---|---|---|---|
| 0-16, 18-32, 34-37 (34 mats — includes the ground/hill/grass materials) | 1 | 0 | WHITE (1,1,1) | **BLACK (0,0,0)** | mostly **2.0** (a few =1.0) |
| 17 | 1 | 0 | WHITE | WHITE (1,1,1) | 1.0 |
| 33 | **0** | 0 | WHITE | BLACK | 2.0 |

**Ground truth formula for the field ground/hill/grass materials** (matDiffuse black ⇒ the
N·L directional term is provably a no-op, exactly like the previously-solved Kokiri case in
`docs/oot3d_world_lighting_re.md`):

```
color = saturate( combScale(2.0) * texel * bakedVertexColor * (sceneAmbient/255 * matAmbient(1,1,1)) )
       = saturate( 2 * texel * vColor * sceneAmbient/255 )
```

No fragment lighting, no per-vertex normal/diffuse contribution, no fog term baked into this
material class. The ENTIRE day/night darkening for this terrain rides on `sceneAmbient` alone
(exactly the "flat time-blended ambient, times a fixed combiner scale" model — no NdotL port
needed here, unlike materials with non-black matDiffuse elsewhere in the game).

## Cross-check against SoH3D's shipped shader

`Shipwright/libultraship/src/fast/zelda3d_sdl3gpu.cpp` (`kFrag`, the legacy/default
non-`gUnifiedRenderer` path — this is the ACTIVE path for CMB room draws since
`gUnifiedRenderer` defaults to 0) already implements exactly this formula for
`sceneLitPath` (`uParams.y<0.5 && uAmbient.w>0`):

```glsl
rgb = t.rgb * vColor.rgb;         // skip the CPU flat-tint entirely
if (uAmbient.w > 0.0) rgb *= uAmbient.xyz;   // sceneAmbient/255 * matAmbient
rgb = clamp(rgb, 0.0, 1.0) * uExtra.w;       // combScale (2.0 for field ground)
```

`ubo.uAmbient.xyz = gZelda3dAmbient[i] * grp.matAmbient[i]` and `gZelda3dAmbient` is fed
every frame from `play->envCtx.lightSettings.ambientColor/255` (`zelda3d.c
Zelda3D_UpdateLight`), which for the title demo is written by the verified-correct
`Zelda3D_TitleLightSettingsOverride` (see `debug_journal/2026-07-07-title-lighting-solved.md`
— ambient/light1/light2 verified ±1 vs the Azahar oracle at 4 dayTime samples).

**So both the MODEL (shader math) and the INPUT DATA (ambient feed) are independently
correct** for this material class. The ~3x/~0.3x uniform darkness the 2026-07-08 audit found
(`debug_journal/2026-07-08-title-parity-audit-ranked.md` item #1) is NOT explained by:
- a missing NdotL/diffuse term (matDiffuse is BLACK — ruled out by ROM bytes above);
- a double-application of CPU tint + shader ambient (the shader's `sceneLitPath` branch
  explicitly SKIPS `uTintSkin`/`shade` — see the 2026-07-04 fix note inline in `kFrag`);
- `lit`/`gZelda3dLightEnable` misrouting (room draws pass `lit=0` unconditionally —
  `Zelda3D_DrawRoomGL` never ORs the sign bit into `modelId`, confirmed in
  `gfx_zelda3d_draw_handler_custom`, `interpreter.cpp`);
- `gZelda3dWorldLit` being off (defaults to 1, only ever changed by REPL);
- the "ka=0/kd/ke `worldshade`" CPU-tint path (default OFF, `Zelda3D_SceneTint`/`worldshade`
  are bypassed entirely once `sceneLitPath` is active for this material class).

## OPEN — the residual is a plumbing/asset gap, not a model gap

Given the model + the CPU-side ambient input are both provably right, the remaining
~0.3x (consistent across R/G/B at 2 sample points, 2 content-matched frames) must be ONE of:

1. `uAmbient.xyz` at the shader not actually equal to `sceneAmbient/255` at draw time
   (a UBO-fill or upload bug specific to this draw — needs a live `sgdump <modelId>` for the
   spot00 field model at the exact content-matched frame to confirm `ambColor=(0.20,0.26,0.43)`
   reaches the dump).
2. `texel * vColor` (the baked ingredients) decoding measurably darker in SoH3D's C++ CMB
   loader than the real PICA200 values for THIS specific asset (spot00's field ground,
   as opposed to Kokiri's, which was previously verified) — e.g. a vertex-color datatype/scale
   edge case in `Cmb::readAttr` (`cmb.cpp` line ~403) not exercised by Kokiri's format.
3. An un-ported additional multiplicative stage specific to exterior/daylight materials that
   spot00 uses but Kokiri didn't (only 2 of 38 spot00 materials differ from the Kokiri-typical
   shape — mat17 is fully-diffuse-lit, mat33 is fully unlit — worth double-checking which
   materials the actual hill/grass draws at pixel (200,150)/(200,220) resolve to, in case they
   are mat17/33 rather than the "typical" class above).

**Next step (live, not offline — per project rule):** run `sgdump <fieldModelId>` via the
SoH3D REPL at the audit's content-matched frame (raw step 360) and compare `ambColor`,
`vtxLit`, `matAmb`, `matDif`, `combScale` per-group against this doc's ROM-derived table, and
separately sample `vColor0` (the dumped first baked vertex color) to check it isn't
anomalously dark relative to the ROM bytes. This will show directly which of the 3 candidates
above is live. Building/running the harness was out of scope for this pass (headless build
budget); the SG_DUMP facility already exists (`zelda3d_sdl3gpu.cpp` ~line 1480) — it's a REPL
call away, not new tooling.
