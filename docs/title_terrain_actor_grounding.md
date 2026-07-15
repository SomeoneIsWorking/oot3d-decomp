# Title-cs actor grounding (tree/dust vs. hill occlusion) — HONEST STATUS: engineering approximation, not decomp-confirmed

Quality-bar backfill for SoH3D commit `36525326` ("title: ground scripted title-cs actors onto
OoT3D terrain (fixes tree/hill occlusion)"), which extended `Zelda3D_TerrainWarpEnabled()`
(`Shipwright/soh/src/zelda3d/zelda3d.c`) to unconditionally ground title-cs actors (rider/horse and
static props like `En_Wood02` trees) onto the OoT3D render mesh via a per-actor render Y-offset,
independent of the global OoT3D-collision toggle. Per the project rule that behavioral divergences
should be RE'd against the 3DS decomp *before* porting, this doc should have existed before that
commit landed. It didn't — this is the requested backfill, and it is written **honestly**: the
mechanism this fix approximates is NOT yet confirmed against the OoT3D 3DS binary.

## (a) Observed behavior (ground truth we DO have — from the real 3DS/Azahar oracle, not decomp)

Live-oracle screenshots (Azahar, forced eye/target `(3643,231,1789) -> (-4071,58,5217)`, same view
used both to diagnose and to verify this fix) show the OoT3D title-cs's `En_Wood02` tree correctly
**nested into / occluded by** the hill silhouette in front of it, and the horse's dust puffs sitting
on the visible ground plane, not floating above or poking through the terrain. This is a direct
visual observation of the real 3DS renderer's output, not a decomp derivation — no Ghidra RE backs
the *mechanism* that produces it yet (see (c)).

Before the fix, SoH3D rendered the same tree at its raw legacy-N64 CS/spawn-coordinate height, which
does not account for the (different, more detailed) OoT3D terrain mesh's relief — the tree silhouette
poked above the ridge instead of being hidden behind it (see commit `36525326`'s message and
`scratch/screenshots/after_fix_eye*.png`, `title_tree_terrain_fixed*.png`, gitignored).

## (b) SoH3D-side mechanism used to approximate it (confirmed, in-repo, NOT 3DS ground truth)

`Zelda3D_ActorRenderYOffset()` (`zelda3d.c`, ~line 4229) is a **pre-existing gameplay-path**
mechanism (used generally whenever OoT3D collision is enabled and an actor's N64 collision floor
differs from the OoT3D render-mesh floor at the same XZ): it raycasts the actual OoT3D room mesh at
the actor's XZ, finds the OoT3D floor closest to the actor's N64 collision floor, and returns the
delta `oot_floor - n64_floor` as a render-only Y offset (`Actor_Draw` in `z_actor.c` adds it at draw
time; it never touches `actor->world.pos.y`, so gameplay/physics/collision are untouched).

`Zelda3D_TerrainWarpEnabled()` previously gated this offset OFF whenever OoT3D collision was
installed, on the theory that BgCheck floor-snapping during normal gameplay already keeps
`actor->world.pos.y` on the OoT3D-collision floor, so the render offset would double-correct. Commit
`36525326` added an unconditional override during the title cs
(`Zelda3D_Title_IsActive()` — same predicate discussed in
`title_n64_cs_teardown_has_no_3ds_counterpart.md`), because title-cs actors are **not** driven
through normal BgCheck floor-snap gameplay physics at all on the SoH3D side: the rider/horse is
positioned by the ported CS waypoint track (`title_rider.cpp`, `title_rider_driver.md`,
`title_rider_cs_dispatch.md`), and static props like the trees are placed from the raw legacy-N64
scene actor-spawn list — neither path ever calls into BgCheck, so their `world.pos.y` never gets
reconciled against the OoT3D render mesh's relief on the SoH3D side, whether or not OoT3D collision
is enabled.

## (c) Confirmed-decomp vs. engineering-approximation — explicit flag

**This is an ENGINEERING APPROXIMATION, not a confirmed-decomp mechanism.** Specifically:

- **NOT decomp-confirmed:** whether the real OoT3D 3DS binary runs any kind of per-actor floor-snap
  / BgCheck raycast for title-cs-scripted actors (trees, rider) at all. A dedicated RE pass (agent,
  see below) searched `oot3d-decomp/docs/` for this and found none: `divergence_map.md` decompiles
  `Actor_UpdateBgCheckInfo` (VA `0x376340`) only in a generic Player/gameplay-region-gate context,
  unrelated to title-CS actors; `title_rider_port_spec.md`'s addendum in fact finds the OPPOSITE for
  the mounted-rider case — Link's world position during the ride is a literal copy
  (`this->actor.world.pos = rideActor->actor.world.pos + rideActor->riderPos`) with no
  raycast/grounding step, and traces a *separate* SoH3D-only bug (an over-applied
  `Zelda3D_PosedGroundOffset` heuristic) to a "floats above Epona" symptom — i.e. SoH3D already has
  precedent for a grounding heuristic causing a bug rather than fixing one. No `En_Wood02` update
  function or any floor-raycast routine has been located/decompiled in the ROM for the title-cs
  static props.
- **What IS plausible, not yet verified:** static title-cs dressing (trees etc.) is likely just
  authored at spawn coordinates that were HAND-PLACED against the OoT3D terrain mesh by Grezzo (no
  runtime grounding needed at all, unlike SoH3D which inherited N64 spawn coordinates authored
  against the *N64* terrain and must reconcile them against the differently-shaped OoT3D mesh at
  runtime). If true, real 3DS hardware needs zero runtime mechanism here — the "grounding" SoH3D
  performs is entirely compensating for using the wrong (N64-authored) source coordinates against the
  right (OoT3D) render mesh, not replicating some 3DS runtime behavior.
- **Risk this creates:** if a genuine BgCheck floor-snap turns out to run for these actors on
  real hardware with different behavior than a straight nearest-floor raycast (e.g. it might
  preserve height above ground rather than snap flush, or use a different "closest surface"
  tie-break for multi-level terrain), this fix's specific raycast policy could diverge from it in
  edge cases (multi-level terrain, steep slopes) even though it fixes the observed single-view
  symptom. Not currently reproduced/known to be an issue — flagged as a residual, not an active bug.

## Next step if this needs to become decomp-confirmed

Ghidra decompile the title-cs static-prop actor's `Update`/`Init` function (locate via the spot99
actor list per `title_scene_spot99.md`, cross-referenced against the `En_Wood02` object bank entry)
and check whether it calls any BgCheck floor routine at spawn/update time, or whether its `world.pos`
is a static copy from the actor-spawn table with no runtime Y adjustment at all. Not done this
session (out of scope for a documentation backfill per the task brief — this doc intentionally does
NOT fabricate that citation).

## Code citation

`Zelda3D_TerrainWarpEnabled()` in `Shipwright/soh/src/zelda3d/zelda3d.c` cites this doc directly in
its own comment (see the title-cs branch of that function).

## Anchors referenced

- `title_n64_cs_teardown_has_no_3ds_counterpart.md` — the `Zelda3D_Title_IsActive()` predicate this
  fix also gates on.
- `divergence_map.md` lines ~216, ~259 — `Actor_UpdateBgCheckInfo` (VA `0x376340`), generic
  gameplay context, not title-CS-specific.
- `title_rider_port_spec.md` (2026-07-15 addendum) — mounted-rider world-pos IS a literal copy, no
  raycast/grounding; documents a related SoH3D-only grounding-heuristic bug (`Zelda3D_PosedGroundOffset`
  over-application).
- `title_rider_driver.md`, `title_rider_cs_dispatch.md`, `title_scene_spot99.md` — ported CS
  waypoint / actor-spawn sourcing for title-cs actors (SoH3D side, confirms these actors don't run
  through normal BgCheck gameplay physics).
