# Boss_Goma (Queen Gohma) — OoT3D ground truth for the faithful port (SoH3D #120)

## Why
SoH3D renders Gohma's OoT3D model via the generic auto-CSAB path (plays a clip at the actor's
transform). That is NOT faithful: OoT3D's Boss_Goma DRAW does per-limb scaling + a draw offset +
limb overrides that the generic path skips, so some limbs render at the wrong (default) scale — the
"stretched tube" limb. Fix = port OoT3D Boss_Goma's draw/update faithfully into a behaviors/actor
module. This file is the decomp ground truth.

## OoT3D function addresses (Azahar oracle, gActorOverlayTable[40] @ 0x0050cd84 + 0x14 → profile)
Actor id = 40 (0x28), category 9 (BOSS), objId 28. Coordinate-matched to SoH3D (pos -160,-280,-371).
| fn | vaddr |
|----|-------|
| init    | 0x001ed884 |
| destroy | 0x001edb68 |
| update  | 0x00221f20 |
| **draw**| **0x00221d70** |

Decompiled C: oot3d-decomp/build/decomp/00221d70.c (draw), 00221f20.c (update), 001ed884.c (init).

## Draw alignment vs the N64 Rosetta (SoH z_boss_goma.c BossGoma_Draw / BossGoma_OverrideLimbDraw)
N64 `BossGoma_Draw`:
1. `Matrix_Translate(0, -4000, 0)` — a draw-space Y offset (model anchored above her world.pos).
2. backface-cull dlist seg 0x08 toggle (`noBackfaceCulling`).
3. `SkelAnime_DrawSkeletonOpa(skelanime, BossGoma_OverrideLimbDraw, BossGoma_PostLimbDraw, this)`.

N64 `BossGoma_OverrideLimbDraw` scales specific limbs per-frame:
- EYE/IRIS limb → `Matrix_Scale(eyeIrisScaleX, eyeIrisScaleY, 1.0)` (the eye opens/closes).
- TAIL limbs (TAIL4..TAIL1) → `Matrix_Scale(tailLimbsScale[i], ...)` (tail retract/extend).
`BossGoma_PostLimbDraw` records limb world positions (tail tip, claws, eye focus) for AI/spawns.

OoT3D `FUN_00221d70` (draw) — SAME shape:
- `FUN_00372224(mtx, this+0x148)` + `FUN_00372070(mtx, mtx, &{-4000-ish consts iRam00221f00..})` —
  builds the draw matrix incl. the Y draw offset (the N64 -4000).
- `FUN_0033dd8c(this->[0x2a0]*f, this->[0x2a4]*f, this->[0x2a8]*f, ..., this+0x1a4, ...)` and a second
  `FUN_0033dd8c(this->[0x2ac]*f, [0x2b0]*f, [0x2b4]*f, ...)` — apply the per-limb SCALE triples
  (this+0x2a0.. = the OoT3D analogues of eyeIrisScaleX/Y + tailLimbsScale; `f` = fRam00221f08 const).
  Branches on this+0x254 / this+0x256 (visualState / a sub-state, cf. N64 VISUALSTATE_*).
- `FUN_0035e240(this+0x1a4 /*skelAnime*/, mtx, ...)` — the actual skeleton draw with the override.

So the OoT3D draw = draw-offset matrix + per-limb scale of eye-iris & tail + skeleton draw. The
generic SoH3D CSAB path does none of the per-limb scaling, so those limbs draw at default scale
(the stretched look). State offsets to port: this+0x254/0x256 (state), this+0x2a0..0x2b4 (limb
scales) — derive their update from FUN_00221f20 (update) next.

## Port plan (SoH3D behaviors/actor/boss_goma.cpp)
1. Drive the OoT3D goma rig with the correct CSAB for the current state (her update picks the anim;
   default ceiling-idle = go_Uwait). 
2. Apply the per-limb SCALE overrides (eye-iris X/Y, tail limbs) — needs a per-bone SCALE delta
   channel (SoH3D today has rot-delta + post-rot but not scale; add SoH3D_SetBoneScaleDelta paralleling
   SoH3D_SetBoneRotDelta in soh3d_anim.cpp). Read the live scale state through the EnBossGoma/BossGoma
   C struct (64-bit-safe), mapping N64 eyeIrisScaleX/Y + tailLimbsScale[] → the OoT3D goma bone ids.
3. Apply the draw Y offset (the -4000 * scale, as a groundOffset-style pre-scale translate).
4. Verify against the Azahar oracle (warp 0x40F both sides; compare the posed limb extents / a framed
   A/B with the new REPL `aaim`/`aorbit`).

NOTE (general): the same gap applies to the OTHER bosses "rendering OoT3D" via the generic path —
they likely skip their own per-limb draw overrides too. Boss_Goma is the first faithful boss port.
