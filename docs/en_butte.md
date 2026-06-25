# En_Butte (ambient butterfly) — OoT3D ground truth for SoH3D #115

## Question
How does OoT3D render the ambient butterfly? (N64 `EnButte_Draw` draws a 3-limb SkelAnime butterfly
— `gButterflySkel` + `gButterflyAnim` from `OBJECT_GAMEPLAY_FIELD_KEEP` — via
`SkelAnime_DrawSkeletonOpa`, gated on `drawSkelAnime`.)

## Answer: butterfly CMB + a flight CSAB inside the FIELD-KEEP zar (mirrors N64)
OoT3D keeps the butterfly in **`/actor/zelda_field_keep.zar`** (the OoT3D equivalent of N64
`gameplay_field_keep`):

| file | meaning | bytes | notes |
|------|---------|------:|-------|
| `Model/butterfly.cmb` | butterfly model | 3968 | **3 bones** (body id0 + 2 wings id1/id2, both parented to body) |
| `Anim/butterfly_fly.csab` | looping flight/flap | 1504 | the wing-flap + flight clip |

One CMB + one CSAB for every butterfly — no per-scene branch.

### Geometry (verified offline via tools/cmb.py, 2026-06-25)
- **Bones:** 3 — id0 body (parent -1), id1 + id2 wings (parent 0), all trans (0,0,0).
- **Extent:** X ±367, Y -432..500, Z -7.7..414 (~735 wide). A small creature.

### Scale
N64 draws the butterfly at actor scale **0.01** (`ICHAIN_VEC3F_DIV1000(scale, 10)` in z_en_butte.c).
The OoT3D CMB is ~735 units wide; calibrated live (Kakariko, entrance 0xDB) to **0.006** to match the
small N64 butterfly footprint (0.02 was ~3x too large). Live-retunable via REPL `gscale 23`.

## Behavior (shared N64 code, not replaced)
The butterfly's flight (wander, hover, follow-Link, fairy transform on Song of Storms) is shared N64
logic that runs unchanged and just moves `actor.world.pos` + `shape.rot`. Only the wing-flap DRAW is
replaced. Two draw modes via `drawSkelAnime` (EnButte field @ 0x258):
- `true` — normal: draw the animated skeleton (→ OoT3D CMB + butterfly_fly.csab in SoH3D).
- `false` — fairy transform: N64 draws a flash effect (`gEffFlash1DL`) instead of the skeleton.
  SoH3D falls through to the N64 draw in this case so the transform effect renders unchanged.

## SoH3D port
`Shipwright/soh/src/soh3d/behaviors/actor/en_butte.cpp` — animated model REPLACEMENT keyed off
`ACTOR_EN_BUTTE`. Resolves `/actor/zelda_field_keep.zar|Model/butterfly.cmb`, flaps it with
`butterfly_fly.csab` via `SoH3D_UpdateAnimAuto` (phase-locked to the live N64 SkelAnime so each
butterfly flaps at its own tempo; the per-emit pose snapshot pairs each draw with its own pose),
drawn at world.pos + shape.rot, scale 0.006. Falls through to N64 when `drawSkelAnime` is false.
