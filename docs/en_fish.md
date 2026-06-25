# En_Fish (ambient swimming fish) — OoT3D ground truth for SoH3D #115

## Question
How does OoT3D render the ambient fish? (N64 `EnFish_Draw` draws a 7-limb SkelAnime fish — `gFishSkel`
+ `gFishInWaterAnim` (swim) / `gFishOutOfWaterAnim` (flop) from `OBJECT_GAMEPLAY_KEEP`.)

## Answer: fish CMB + swim/jump CSABs inside the KEEP zar (mirrors N64)
OoT3D keeps the fish in **`/actor/zelda_keep.zar`** (OoT3D equivalent of N64 `gameplay_keep`) under
`fish/`:

| file | meaning | bytes | notes |
|------|---------|------:|-------|
| `fish/model/fishsmall.cmb` | fish model | 4352 | **8 bones** (spine chain for the swim wiggle) |
| `fish/Anim/fs2_swim.csab`  | swim (looping) | 800 | mirrors N64 gFishInWaterAnim |
| `fish/Anim/fs2_jump.csab`  | out-of-water flop | 584 | mirrors N64 gFishOutOfWaterAnim |

### Geometry (verified offline via tools/cmb.py, 2026-06-25)
- **Bones:** 8 (spine chain). **Extent:** X ±224, Y -613..682, Z -1310..619 (~1930 long in Z, the
  swim axis; tail extends toward -Z, head toward +Z).

### Scale
N64 draws the swimming fish at actor scale **0.01** (`ICHAIN_VEC3F_DIV1000(scale, 10)`; some states
override to 0.001/0.01). The OoT3D CMB is ~1930 units long; **0.008** matches the small N64 fish
footprint live (Zora's Domain, entrance 0x108). Live-retunable via REPL `gscale 24`.

## Behavior (shared N64 code, not replaced)
Swim/wander/dart/flee logic runs unchanged and moves `actor.world.pos` + `shape.rot`; only the
body-wiggle DRAW is replaced. Two anims: swim (default for all ambient world fish — Zora's Domain,
Zora's Fountain, Gerudo Valley, Grottos) and the out-of-water flop (only after Link catches and drops
a fish — a held/edge-case state, not in the render audit).

## SoH3D port
`Shipwright/soh/src/soh3d/behaviors/actor/en_fish.cpp` — animated model REPLACEMENT keyed off
`ACTOR_EN_FISH`. Resolves `/actor/zelda_keep.zar|fish/model/fishsmall.cmb`, wiggles it with
`fs2_swim.csab` via `SoH3D_UpdateAnimAuto` (phase-locked to the live N64 SkelAnime; per-emit pose
snapshot per fish), drawn at world.pos + shape.rot, scale 0.008. First increment always plays
fs2_swim (the flop isn't a visible world gap); fs2_jump is in the zar for a later swim-vs-flop wiring.
