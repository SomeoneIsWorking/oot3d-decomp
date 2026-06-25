# En_Ex_Ruppy — colored rupee (diving game / shooting gallery / thrown)

Actor `ACTOR_EN_EX_RUPPY` (0x131). The diving-game prize rupees, shooting-gallery target
rupees, and the courtyard-guard / "wow coin" thrown rupees. Appears in `n64_ids` of
`SCENE_SHOOTING_GALLERY` (ent 0x3B, x6) and `SCENE_CASTLE_COURTYARD_GUARDS_DAY` (ent 0x7A, x6).

## N64 ground truth (z_en_ex_ruppy.c)

`EnExRuppy_Draw` draws ONE display list `gRupeeDL` (OBJECT_GAMEPLAY_KEEP) and swaps texture
segment 0x08 per `this->colorIdx`:

```
rupeeTextures[] = { gRupeeGreenTex, gRupeeBlueTex, gRupeeRedTex, gRupeePinkTex, gRupeeOrangeTex }
```

So the geometry is shared across all colors; only the texture changes. `mtxScale = colorIdx>=3 ? 17.5 : 25.0`,
applied on top of the actor's own `scale` (set per type: 0.01 diving, 0.02 courtyard/giant, 0.1 "wow coin").
Draw early-returns while `this->invisible` (mid-drop / blown up).

The SoH "new drops" / 3D-model path uses `rupeeTexturesNew[]` and documents that the N64
pink/orange textures are an **authentic naming bug**: the 3D mapping is

```
colorIdx 0 -> GREEN   1 -> BLUE   2 -> RED   3 -> GOLD   4 -> PURPLE
```

`EnExRuppy` struct (`z_en_ex_ruppy.h`): `s16 colorIdx @0x150`, `s16 type @0x152`,
`s16 invisible @0x154`.

## OoT3D asset

The OoT3D romfs has a single rupee zar, `/actor/zelda_gi_rupy.zar`, with one CMB
`Model/zelda_gi_rupy.cmb`. It does NOT texture-swap a single mesh — it bakes all five color
variants into ONE model as five distinct **mesh_ids**, all stacked at the same origin:

| mesh_id | meshes (sepd) | texture   | color (3D order) | geometry |
|---------|---------------|-----------|------------------|----------|
| 0       | 0 (s1), 5 (s0) | i_ctex60a | green            | small (X±19, Y±30) |
| 1       | 1 (s3), 6 (s2) | i_ctex61a | blue             | small |
| 2       | 2 (s4), 7 (s5) | i_ctex62a | red              | small |
| 3       | 3 (s7), 8 (s6) | i_ctex63a | gold             | **big** (X±24, Y±40) |
| 4       | 4 (s8), 9 (s9) | i_ctex64a | purple           | small |

i.e. **mesh_id == colorIdx exactly**, in the same GID order OoT3D's GetItem_Draw indexes by
colorIdx. (Each color is 2 meshes — the gem body + a second sepd, both on the same mesh_id.)
The gold variant (mesh_id 3) bakes a bigger gem directly into the geometry, where the N64
instead shrinks gold/purple via the 17.5 mtxScale.

## SoH3D port (behaviors/actor/ruppy.cpp)

`EnExRuppyBehavior::tryDrawModel` resolves the CMB, reads live `colorIdx` through the C struct,
and sets the per-frame mesh_id visibility mask `SoH3D_GL_SetMidMask(modelId, 1 << colorIdx)` so
only the matching color draws (without the mask all five stack). worldScale = `actor->scale.x *
mul` (mul gscale slot 17, calibrated to ~25 — the N64 mtxScale, since CMB units ≈ N64 rupee
units), preserving the N64 per-type relative sizing. Honors `invisible` (draw nothing, still
suppress N64).

**Verified** live at ent 0x3B (2026-06-25): colorIdx 1 -> blue, colorIdx 4 -> purple on screen
(read via the `ainfo` rupee colorIdx debug aid), distinct gems, single color each, no stacking.
This is the first port to use the midMask channel for a NON-Link color/variant select — a
reusable pattern for any CMB that packs variants as distinct mesh_ids.
