# En_Horse hoof-dust world position — terrain-warp reconciliation (+ a bigger dead-path finding)

## Ground truth (N64/SoH twin, confirmed source read — no new Ghidra RE needed this session)

`Shipwright/soh/src/overlays/actors/ovl_En_Horse/z_en_horse.c` (the vendored SoH twin of the N64
En_Horse actor, structurally identical to the OoT N64 decomp) is the reference:

- `EnHorse_PostDraw(Actor* thisx, PlayState* play, Skin* skin)` is passed as the `SkinPostDraw`
  callback to `func_800A6360` (`Skin_DrawImpl`, `z_skin.c`), invoked from `EnHorse_Draw` once the
  native skin's limb matrices have been computed for THIS frame's pose. It writes
  `this->frontRightHoof` / `frontLeftHoof` / `backRightHoof` / `backLeftHoof` via
  `Skin_GetLimbPos(skin, n64LimbIndex, &hoofOffset, &dst)` at specific animation-frame windows keyed
  by `this->animationIdx`/`this->action` (idle stamp, stopping, `ENHORSE_ANIM_GALLOP` — the clip
  played during the title-cs ride — jumps), then sets a bit in `this->dustFlags`.
- `EnHorse_Update`, run the FOLLOWING logic frame, checks `this->dustFlags` and calls
  `func_800287AC` (`EffectSsDust_Spawn`, `z_effect_soft_sprite_old_init.c`) at the stashed hoof
  position — this is the literal `EffectSsDust` spawn the task asked to locate.
- N64 hoof limb indices (from the `Skin_GetLimbPos` call sites): `frontLeftHoof`=20,
  `frontRightHoof`=28, `backLeftHoof`=37, `backRightHoof`=45 (the native N64 skin's own bone
  numbering).

## Mechanism correction (this session): Epona's BODY is NOT currently OoT3D-replaced — a bigger, separate finding

An earlier draft of this session's fix assumed Epona's visible mesh is the OoT3D `epona.cmb` model
(25 bones, `actor/zelda_horse.zar`) under Zelda3D's AUTO skinned-actor replacement
(`zelda3d.c` `Zelda3D_TryAuto`, `e->skinned==1` for `OBJECT_HORSE`) — that model DOES load
successfully (`[Zelda3D] auto-loaded model 2010 ... bones=25 (skinned=SkelAnime retarget)`), and
`actorsnear`'s REPL audit reports Epona as `AUTO:/actor/zelda_horse.zar (skin)`.

**That report is a static eligibility classification, not a live per-frame draw confirmation.**
Tracing the actual draw call chain: `EnHorse_Draw` → `func_800A6360` → `Skin_DrawImpl` (`z_skin.c`),
which loops calling `Skin_DrawAnimatedLimb`/`Skin_DrawLimb` directly — **`z_skin.c` has ZERO Zelda3D
references anywhere.** The Zelda3D draw-replacement hooks (`Zelda3D_SkelAnimeDraw` /
`Zelda3D_SkelAnimeDrawRaw`) are wired into `z_skelanime.c`'s `SkelAnime_DrawSkeletonOpa` /
`SkelAnime_DrawOpa` / `SkelAnime_DrawFlexSkeletonOpa` / etc — the **`SkelAnime` draw family**, a
completely different animation/draw system than the **`Skin` system** En_Horse exclusively uses.
`Zelda3D_TryAuto`'s skinned branch (`e->skinned==1`) always defers with `return 0` expecting "the
SkelAnime hook" to intercept mid-native-draw and consume `gZelda3dPendingActor`/`gZelda3dPendingModel`
— for En_Horse those globals get set every frame and are simply **never consumed**, because
`Skin_DrawImpl` never reaches a `SkelAnime_Draw*` call.

**Live-verified this session** (`ZELDA3D_DUST_DEBUG=1` instrumentation logging every hoof-dust spawn,
plus an A/B with `ZELDA3D_N64ANIM=0` vs default-on producing byte-identical "not OoT3D-replaced"
behavior either way): Epona currently ALWAYS renders as the native N64 mesh with the HD texture pack
(the on-screen "4K TEXTURES BY HENRIKO" credit visible in title-cs screenshots is the tell — that
credit is for the texture-pack enhancement, not an OoT3D model swap), regardless of
`ZELDA3D_N64ANIM`. **Porting Epona's body to the real OoT3D `epona.cmb` model requires wiring a
Zelda3D choke point into `Skin_DrawImpl` (mirroring the existing `SkelAnime_Draw*` hooks) — a
separate, larger port, out of scope this session, journaled as the honest remainder.** Until then,
any fix for a hoof/dust/mane/tail symptom on Epona should assume the NATIVE N64 skeleton and mesh are
what's actually on screen, not the CMB.

## The dust bug that IS real and fixable now: terrain-warp Y not reconciled for the effect

Independent of which model draws Epona's body, the dust's **world position** is unconditionally
computed from the native N64 skin skeleton, whose Y ultimately derives from the N64 collision floor
height. `zelda3d.c`'s `Zelda3D_TerrainWarpEnabled()` (comment ~line 1092) already documents exactly
this class of bug — *"the title tree/dust-vs-hill occlusion bug: ... title-cs actors ... are
positioned from the PORTED CS waypoint track / raw N64 actor-spawn XYZ ... never from a BgCheck
floor-snap ... so they render at their raw legacy-N64 height and can poke through (or float above)
OoT3D terrain relief the N64 mesh didn't have"* — and that reconciliation already runs for actor
MODELS (`Zelda3D_ActorRenderYOffset`, a render-only Y lift applied at `Actor_Draw` time, never
touching `world.pos`) and unconditionally for the title cs. **`EffectSsDust` particles spawn through
their own path (`func_800287AC`/`EffectSs_Spawn`) and never got this reconciliation at all** — their
Y sits at the raw N64-collision-consistent height while the OoT3D render terrain around them (which
DOES already get warped/relief-corrected for the title cs) can differ, so a puff can visually land
inside a raised hill or hover above a lowered one — independent of whether Epona's own body is N64 or
OoT3D.

## Port

`Shipwright/soh/src/zelda3d/zelda3d.c`:
- `Zelda3D_RenderYOffsetAtXZ(PlayState*, Actor*, float x, float z)` — the core of the pre-existing
  `Zelda3D_ActorRenderYOffset` (raycast the OoT3D room mesh vs the N64 collision floor and return the
  delta), factored out to take an explicit `(x,z)` instead of always using `actor->world.pos` — a
  hoof sits laterally offset from the horse's own root, so it needs the terrain delta AT ITS OWN xz,
  not the horse center's. `Zelda3D_ActorRenderYOffset` itself is now a one-line wrapper over it (no
  behavior change for its existing callers).
- `Zelda3D_HoofDustWorldPos(PlayState* play, Actor* horseActor, float* ioPos)` — given a hoof
  position ALREADY computed the native way (`ioPos` in/out), adds the OoT3D-vs-N64 Y delta at the
  hoof's own XZ. No-op (returns 0, `ioPos` unchanged) whenever the terrain warp isn't active or there's
  no OoT3D room mesh here.

`Shipwright/soh/src/overlays/actors/ovl_En_Horse/z_en_horse.c`: `EnHorse_ResolveHoofPos` wraps every
hoof `Skin_GetLimbPos` call site in `EnHorse_PostDraw` — computes the position the native way
unchanged, then lets `Zelda3D_HoofDustWorldPos` reconcile its Y. A pure fixup: identical to vanilla
N64 behavior whenever Zelda3D/the terrain warp is inactive, and requires no changes to the dust
spawn/consume logic in `EnHorse_Update` at all.

Diagnostic tooling landed alongside the fix (kept, not removed — dust is small/short-lived/easily
occluded and hard to confirm by eye): `ZELDA3D_DUST_DEBUG=1` logs every hoof-dust position resolve
(`[Zelda3D dust] limb=%d pos=(...) corrected=%d actorY=%.1f`) to stderr, same convention as
`zelda3d.c`'s existing `gZelda3dAnimDebug` `[SKELSCALE]` print.

## Verification

Live, headless (`ZELDA3D_HEADLESS=1 ZELDA3D_WARP= ZELDA3D_DUST_DEBUG=1 tools/zelda3d_game.sh start`),
through the title cs's gallop cue window (native `cutsceneAction=1`/`animationIdx=ENHORSE_ANIM_GALLOP`
per `oot3d-decomp/docs/title_rider_cs_dispatch.md`'s `[750,925]` Move-cue window, though gallop
persists well beyond that single cue in practice): stderr shows `corrected=1` on every hoof-dust
resolve during the gallop (e.g. `limb=45 pos=(-6550.5,-47.5,4721.6) corrected=1 actorY=-48.0`),
confirming the fix's code path is live and actively adjusting the dust's Y away from the raw native
value. Screenshot `scratch/screenshots/horse_dust_final.png` (gitignored) shows visible dust puffs at
Epona's hooves grounded against the grass during the gallop, not floating/detached.

Not independently re-verified this session (would need the SAME view before/after — the live
game's title-cs driver stalls intermittently under heavy REPL polling load, a pre-existing harness
fragility unrelated to this fix, see the journal): a side-by-side frame showing a puff visibly nested
BEHIND the hill silhouette specifically (vs simply landing on the correct local ground plane, which
IS confirmed). The mechanism is the same one already proven for trees (commit `36525326`), so this is
assessed as very likely correct, not visually reconfirmed pixel-for-pixel.

See `debug_journal/2026-07-15-epona-hoof-dust-depth.md`.
