# Title-demo rider (Link on Epona) — divergence + port spec

Scope: SoH3D title-screen "flyover" (Link riding Epona across Hyrule Field
before file-select). Ground truth = OoT3D 3DS binary via oot3d-decomp;
prior work ported the OP97 camera spline (`2026-07-07-op97-camera-decode-
verified.md`) and an op-0x0a "rider cue" position/yaw integrator
(`2026-07-07-rider-cue-port.md`) into `Shipwright/soh/src/zelda3d/
zelda3d.c` (`Zelda3D_RiderStepCue` ~line 1957) + `zelda3d_cutscene.cpp`.
This doc audits whether that port actually delivers a faithful RIDER
(model + anim + pose + trajectory), not just a faithful CAMERA.

## Live observation (ground truth for the divergence)

Booted the real title demo headless (`ZELDA3D_WARP= tools/zelda3d_game.sh
start`, `SOH3D_HEADLESS=1`/Xvfb — no headed window), screenshots at two
different title-cs moments:

- `scratch/screenshots/rider_title1.png` — Epona (fully saddled, mid-gallop
  pose, textured correctly) is visible mid-field with an **empty saddle** —
  no Link on her back. A separate small green humanoid (Link) is
  crouched/kneeling on the ground far to the right, disconnected from the
  horse.
- `scratch/screenshots/rider_title2.png` — a few seconds later, Epona is
  **off-screen entirely**; Link stands alone in a static, non-riding pose
  in the middle of the field.

Engine log for this run confirms Epona's 3DS asset IS loading and
animating correctly:
```
[Zelda3D] auto-loaded model 2010 (/actor/zelda_horse.zar): cmb 'Model/epona.cmb' of 1,
  height=9239.5, bones=25 (skinned=SkelAnime retarget), 5 groups, 3 textures
```
So this is **not** an asset-loading gap (the horse CMB/skeleton/textures
are right) — it's a **synchronization/mount gap**: two independent actors
(`ACTOR_PLAYER`, `ACTOR_EN_HORSE`) moving on two independent, uncoordinated
tracks.

## Root cause

`Zelda3D_RiderStepCue` (zelda3d.c) parses the op-0x0a cue track and, in
`Zelda3D_ActorPostUpdate`, applies the integrated world.pos/yaw to
**`ACTOR_PLAYER` only**:

```c
if (gZelda3dInTitleDemo && actor != NULL && actor->id == ACTOR_PLAYER) {
    actor->world.pos.x = gZelda3dRiderPos[0];
    ...
```

`ACTOR_EN_HORSE` is never referenced anywhere under `Shipwright/soh/src/
zelda3d/` (`grep -rn ACTOR_EN_HORSE soh/src/zelda3d` = 0 hits). Epona
therefore runs entirely on her stock N64 `En_Horse` actor logic — her own
AI/idle/wander behavior, whatever position she was placed at by the scene
— completely uncoupled from the ported cue path. Link's `Player` actor
gets teleported along the cue path in isolation, with no horse under him,
so his native N64 Player state machine falls back to a grounded/standing
animation (there's nothing riding-shaped about his situation from the
game's point of view).

This inverts the actual asset/actor ownership. Ground truth
(`oot3d-decomp/docs/title_actor_world_pos.md`,
`oot3d-decomp/docs/title_gamestate_v2.md`) is explicit:

- `title_actor_world_pos.md`: "Both mounts share this world-pos slot
  (**Link is drawn attached via Epona's SkelAnime**; no second world-pos
  slot surfaced under the same scan constraints)." I.e. on the 3DS side,
  the single world-pos slot at `0x005AFFB0` the op-0x0a cue track feeds is
  **Epona's** position — Link's screen position is a derived attachment,
  not an independently-cued value.
- `title_gamestate_v2.md`: the title demo is a **real Play state** —
  `Play_Main -> Actor_UpdateAll -> Player_Update` runs exactly like normal
  gameplay, with "Player actor at a pre-allocated slot" AND "Epona actor at
  a pre-allocated slot." This is the same actor system OoT/SoH already use
  for ordinary horseback riding (Lon Lon Ranch, Hyrule Field Epona) — not a
  bespoke title-only actor kind.

So the correct model is: **the cue track drives Epona's transform; Link's
transform and pose are a natural consequence of mounting her**, using the
exact same mount mechanism SoH already has for regular horseback gameplay.

## Existing native mount mechanism to reuse (found in z_player.c / z_en_horse.c)

`Shipwright/soh/src/overlays/actors/ovl_player_actor/z_player.c` already
implements Epona-mounting for normal gameplay:

```c
// ~line 7158-7193 (mount-on-A-press path)
EnHorse* rideActor = (EnHorse*)this->rideActor;
...
this->stateFlags1 |= PLAYER_STATE1_ON_HORSE;
this->actor.world.pos.x =
    rideActor->actor.world.pos.x + rideActor->riderPos.x + (...);
this->actor.world.pos.z =
    rideActor->actor.world.pos.z + rideActor->riderPos.z + (...);
this->unk_878 = rideActor->actor.world.pos.y - this->actor.world.pos.y;
this->yaw = this->actor.shape.rot.y = rideActor->actor.shape.rot.y;
Actor_MountHorse(play, this, &rideActor->actor);
this->actor.parent = this->rideActor;
```

Once `stateFlags1 & PLAYER_STATE1_ON_HORSE` and `rideActor`/`actor.parent`
are set, the **entire existing Player state machine** (poses, anim
selection, position-follow relative to the horse) takes over — this is
the same code path real gameplay riding already exercises and that SoH3D's
CSAB auto-replace + N64-anim map already handles correctly for adult Epona
(`zelda3d_animmap.inc` already has the full `object_horse` anim map:
`gEponaGallopingAnim -> hl_anim_fastrun2_30`, `gEponaTrottingAnim ->
hl_anim_slowrun2_30`, `gEponaWalkingAnim -> hl_anim_walk2_30`, etc. — this
is why Epona's own on-screen gallop pose already looked visually correct
in the screenshots; only her POSITION was wrong).

**Do not invent a title-only Link animation hack.** Mounting Link onto the
real title Epona actor via this existing mechanism gets pose + animation
selection for free, faithfully, through the same system real riding uses.

## Port spec (ready to apply — NOT applied here per task scope: zelda3d.c is off-limits to this session)

1. **Retarget the cue integrator's target actor from `ACTOR_PLAYER` to the
   title's live `ACTOR_EN_HORSE` instance.** In `Zelda3D_ActorPostUpdate`,
   change the `actor->id == ACTOR_PLAYER` branch to `actor->id ==
   ACTOR_EN_HORSE` (matched against the specific title-demo horse instance
   — there should be exactly one `En_Horse` actor spawned by the
   `ENTR_HYRULE_FIELD_PAST_BRIDGE_SPAWN` title entrance in `SCENE_HYRULE_
   FIELD` room 0; confirm via REPL `actorscan 0x14` once a stable harness
   session is available — the two runs in this session both exited
   uncommanded after ~1-2 REPL round-trips, a harness-stability issue
   outside this task's scope, flag separately). Apply
   `gZelda3dRiderPos`/`gZelda3dRiderYaw` to that actor's `world.pos` /
   `shape.rot.y` / `world.rot.y` exactly as currently done for Player.

2. **Mount Link onto that Epona actor** once per title-demo entry (in the
   same reset path as `Zelda3D_RiderReset`, gated on the
   `gZelda3dRiderWasInTitle` rising edge already used for cue-state reset):
   set `player->rideActor = (Actor*)eponaActor`,
   `player->stateFlags1 |= PLAYER_STATE1_ON_HORSE`,
   `player->actor.parent = player->rideActor`, and call
   `Actor_MountHorse(play, player, &eponaActor->actor)` — the literal
   native call z_player.c already uses for real mounting. On title exit
   (the existing `gZelda3dInTitleDemo -> 0` transitions), clear
   `PLAYER_STATE1_ON_HORSE` / `rideActor` / `actor.parent` symmetrically so
   normal gameplay isn't left thinking Link is mounted.

3. **Drop the old direct `ACTOR_PLAYER` world.pos/rot writes entirely**
   once (1)+(2) land — Link's transform then comes from the existing
   mounted-rider Player code (steps 7158-7193 pattern), which reads
   Epona's now-correctly-cued position/yaw every frame. This also
   auto-fixes the "wrong Link pose" symptom (no separate animation
   selection needed — see above).

4. **Wire the parsed-but-dropped `cue.action` field** (`RiderCue::action`,
   values 0x40/0x41/0x24 per `2026-07-07-rider-cue-port.md`'s 15-cue
   itinerary) to explicitly select Epona's N64 animation for the current
   cue segment, rather than leaving it to whatever ambient AI/idle state
   the native (now cue-driven, no longer wandering) `En_Horse` actor would
   otherwise pick. Suggested mapping (needs a short confirmation pass
   against the itinerary, not done in this session — durations/context
   make 0x40=gallop and 0x41=idle the likely read; 0x24 is either trot or
   a shot-transition/stop marker and should be checked against where it
   appears in the 15-cue sequence):
   - `0x40` -> force N64 anim resolving to `gEponaGallopingAnim` (CSAB
     `hl_anim_fastrun2_30`)
   - `0x41` -> `gEponaIdleAnim` (`hl_anim_wait2`)
   - `0x24` -> `gEponaTrottingAnim` (`hl_anim_slowrun2_30`) — confirm vs.
     0x24's actual cue durations/positions in the itinerary before locking
     this in; this is the one open mapping question in the RE'd data.
   Implementation seam: same place `Zelda3D_TitleCsRiderCue` already
   returns `cueYaw`/`p0`/`p1` — extend it to also return `action`, and have
   the title tick force-select the corresponding N64 anim resource on the
   Epona actor for the cue's `[start,end)` window (mirrors the existing
   `animforce`-style override machinery already in `zelda3d.c`, but driven
   automatically rather than via REPL).

## What's still open / deferred (do not treat as blocking this spec)

- **Byte-exact limb pose parity** (SkelAnime tables at `0x005642D0`
  Epona / `0x005A54D8` Link, 25 bones each, 36-byte {pos,rot,scale}
  entries) is a DEEPER RE target than what this spec needs. Per
  `title_gamestate.md`'s "Falsification" section, the writer chain that
  drives table B during title (as opposed to normal gameplay's
  `FUN_002c3e34`/Player action-func slot) is still unidentified — "the
  title-demo path drives a *different* pipeline into the same table."
  That is a legitimate follow-on RE task (next attack vectors already
  listed there: heap-pointer inventory diff, or reverse from
  `FUN_003204a4`'s callers with a title-active breakpoint) but is
  independent of — and not required for — fixing the model-sync/mount gap
  above. The port spec here (CSAB-driven riding via the existing
  mount mechanism) delivers correct model/position/animation-family
  parity; only frame-exact procedural limb wobble would need the deeper
  pose-table RE.
- **Harness/game-process stability**: both headless title-demo runs this
  session exited uncommanded (no crash logged) after 1-2 REPL round trips,
  before a 3rd `shot`/`actorscan` could confirm the exact live
  `ACTOR_EN_HORSE` instance/position at title. Not a title-rider-specific
  bug as far as this session's evidence shows; flagged for whoever next
  drives the harness, since step 1 above needs `actorscan 0x14` to nail
  down "exactly one title Epona instance" before the retarget lands.
- Tooling note: `tools/soh3d_game.sh` / `SOH3D_HEADLESS` env names in the
  `soh3d-game-control` skill doc are **stale** — the actual scripts are
  `tools/zelda3d_game.sh` / `tools/zelda3d_repl.py`, and the headless env
  var is `ZELDA3D_HEADLESS=1` (not `SOH3D_HEADLESS`). Using the old names
  silently no-ops the headless guard and launches a HEADED window (this
  happened once during this session's investigation; caught and killed
  immediately via `tools/zelda3d_game.sh stop`). The skill doc should be
  updated to the current names — separate small workflow fix, flagged
  here rather than done inline since it's outside this task's file scope.

## Files referenced

- `Shipwright/soh/src/zelda3d/zelda3d.c` (read-only this session — the
  actual edit for steps 1-4 above lands here; `Zelda3D_ActorPostUpdate`
  ~line 436, `Zelda3D_RiderStepCue`/`Zelda3D_RiderReset` ~line 1899-1993)
- `Shipwright/soh/src/zelda3d/zelda3d_cutscene.cpp` (`RiderCue` struct
  ~line 80, op-0x0a parse ~line 298; extend to surface `action`)
- `Shipwright/soh/src/zelda3d/zelda3d_animmap.inc` (existing
  `object_horse` N64-anim -> CSAB table, lines 416-425 — already correct,
  reused as-is)
- `Shipwright/soh/src/overlays/actors/ovl_player_actor/z_player.c`
  (native mount mechanism to reuse, ~line 7158-7193;
  `PLAYER_STATE1_ON_HORSE`, `rideActor`, `Actor_MountHorse`)
- `oot3d-decomp/docs/title_actor_world_pos.md`,
  `oot3d-decomp/docs/title_gamestate.md`,
  `oot3d-decomp/docs/title_gamestate_v2.md` (ground truth this spec is
  derived from)
- Evidence: `scratch/screenshots/rider_title1.png`,
  `scratch/screenshots/rider_title2.png`
