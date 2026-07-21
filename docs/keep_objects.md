# Dungeon-keep objects (pots / push blocks / switches / crates) — OoT3D ground truth for SoH3D #115

Several N64 "keep-object" actors draw a DL from a shared keep object (OBJECT_GAMEPLAY_DANGEON_KEEP
or OBJECT_GAMEPLAY_KEEP) rather than a per-actor object. OoT3D mirrors this: the equivalent CMBs
live in **`/actor/zelda_dangeon_keep.zar`** (the OoT3D `gameplay_dangeon_keep`). Enumerated from the
ROM 2026-06-25 (tools/ctr_romfs.py + tools/zar.py). 31 CMBs; the relevant ones:

| CMB (Model/...)           | N64 actor / DL                         | notes |
|---------------------------|----------------------------------------|-------|
| `tubo_model.cmb`          | EN_TUBO_TRAP `gPotDL`                   | **DONE** — pot.cpp (single unthemed pot) |
| `tubo_hahen_model.cmb`    | pot fragments `gPotFragmentDL`         | break debris |
| `kibako_model.cmb`        | OBJ_KIBAKO `gSmallWoodenBoxDL`          | **DONE** — kibako.cpp (200u cube, base Y=0, scale 0.1) |
| `kibako_hahen_model.cmb`  | crate fragments                        | |
| `switch_{1,2,4,5,6,7,9,10,11}_model.cmb` | OBJ_SWITCH (0x12A)      | floor/crystal/eye switches; ANIMATED (up/down, tex scroll) |
| `crashbox_model.cmb`      | breakable box                          | |
| `brick_15_<theme>_<size>_model.cmb` | OBJ_OSHIHIKI (0xFF) push block | **DONE** — push_block.cpp (per-dungeon themed 600u cubes, scale=sScales) — see below |
| `efc_candle_modelT.cmb`   | candle effect                          | |
| `doorkagi_model.cmb` / `doorkusari_model.cmb` | door lock / chain          | for locked doors |

## Pot (EN_TUBO_TRAP) — DONE
N64 `z_en_tubo_trap.c`: `Gfx_DrawDListOpa(play, gPotDL)` from OBJECT_GAMEPLAY_DANGEON_KEEP, actor
scale 0.1. OoT3D = `tubo_model.cmb` (W±87, H 0..160, base Y≈0, faces radial, single CMB across all
dungeons). Ported in `behaviors/actor/pot.cpp` (EnTuboTrapBehavior::tryDrawModel), world scale 0.13
(162-unit CMB → ~21 world units, calibrated to N64 pot base footprint in Spirit Temple). The OoT3D
pot is a taller urn redesign vs the squat N64 pot, so base width — not height — is the match target.
Verified live (Spirit Temple ent 130, x6 pots). Commit d254952.

## Crate (OBJ_KIBAKO 0x110) — DONE
N64 `z_obj_kibako.c`: `Gfx_DrawDListOpa(play, gSmallWoodenBoxDL)` from OBJECT_GAMEPLAY_DANGEON_KEEP,
actor scale 0.1 (`ICHAIN_VEC3F_DIV1000(scale, 100)`). OoT3D = `kibako_model.cmb` (X/Z ±100, Y 0..200,
base at origin, single mesh/texture). Ported in `behaviors/actor/kibako.cpp`, world scale 0.1.
**Reproduction**: the crate appears in no coverage room-0, so spawn it with `spawnp 0x110 0` in any
dungeon (OBJECT_GAMEPLAY_DANGEON_KEEP loaded). Verified live in Spirit Temple — solid grounded crate.

## Push block (OBJ_OSHIHIKI 0xFF) — DONE
N64 `z_obj_oshihiki.c`: draws ONE mesh `gPushBlockDL` (unit cube) scaled by `sScales[params & 0xF]`,
with a swappable texture (silver/base/gray) and a per-scene RGB tint (`sColors`).
- **Sizes** `sScales[]` = SMALL `1/10`, MEDIUM `1/6`, LARGE `1/5`, HUGE `1/3` (× gPushBlockDL).
  (params&0xF: 0–3 = S/M/L/H START_ON, 4–7 = S/M/L/H START_OFF; so size = `(params & 0xF) & 3`.)
- **Scene→theme** (N64 `sScenes[]` order, matching the brick filename codes):
  Deku Tree→`deku`, Dodongo's Cavern→`dod`, Forest Temple→`frs`, Fire Temple→`fire`,
  Water Temple→`wat`, **Spirit Temple→`soul`**, Shadow Temple→`dark`, Ganon's Tower→(no brick
  — N64 uses an `mREG` white tint), Gerudo Training Ground→`gerd`.
- **OoT3D bricks** (enumerated from `zelda_dangeon_keep.zar`): `brick_15_<theme>_<Size><variant>_model.cmb`,
  each a **600-unit cube, base Y=0**. Shipped set: `deku_Sa, dod_Sa, dod_Sb, frs_Ma, frs_Mb, fire_Sa,
  wat_Ma, wat_Mb, soul_sa, soul_La, dark_Ma, gerd_La`. CRUCIAL: `_sa` and `_La` are BOTH 600 units —
  size is conveyed by the ACTOR SCALE, not the CMB; the filename size letter selects texture detail.
- **RAW gPushBlockDL SIZE — RESOLVED = 600-unit cube** (no OTR extraction needed). Derived from the
  collision math in `z_obj_oshihiki.c:328`: `colCheckOffset = sColCheckPoints[i] * (actor.scale * 10.0f)`
  with the bottom-face check points at `±29.99`. At actor scale 1.0 the half-extent is `29.99 * 10 ≈ 300`
  → 600-unit cube. (`sFaceVtx` likewise reaches Y=60 × scale×10 = 600 tall at scale 1.0.)
- **Faithful world scale = `sScales[type]` directly.** N64 in-world block = `600 (raw cube) × sScales`;
  OoT3D CMB is also 600u; so world scale = `(600 × sScales) / 600 = sScales`. (S=0.1, M=1/6, L=0.2, H=1/3.)
- **PORTED:** module `behaviors/actor/push_block.cpp` (`ObjOshihikiBehavior::tryDrawModel`). Scene→brick
  table above; Spirit picks `soul_La` for L else `soul_sa`; other scenes have one brick each. gscale slot
  20 (base multiplier 1.0, per-size = sScales). Unknown scenes (Ganon's Tower) fall through to N64.
- **VERIFIED LIVE (2026-06-25):** Spirit Temple ent 130, `spawnp 0xFF 0` (small `soul_sa`) and
  `spawnp 0xFF 2` (large `soul_La`) — both render the themed sandstone brick, grounded, sized correctly
  relative to Link (large ≈ 2× small). Repro: `spawnp 0xFF <params>` in any dungeon with the keep loaded.

## Switch (OBJ_SWITCH 0x12A) — floor pads DONE (2026-07-21), crystal/eye follow-up
N64 `z_obj_switch.c` selects the draw by `type = params & 7` (0 floor, 1 rusty-floor, 2 eye, 3/4
crystal); floor picks `floorSwitchDLists[(params>>4)&7] = {gFloorSwitch1DL, gFloorSwitch3DL,
gFloorSwitch2DL, gFloorSwitch2DL}`.

**switch_N CMB identities** (confirmed live 2026-07-21 by spawning Obj_Switch in Hyrule Field and
color-matching each OoT3D CMB against the N64 DL it replaces — `switch_N` forced via the module's
`gscale 25 <N>` bring-up override, N64 side viewed with the subtype's params):

| OoT3D CMB | appearance | N64 DL / subtype |
|---|---|---|
| `switch_1_model.cmb`  | **gold** flat trapezoid pad | `gFloorSwitch1DL`  (floor subType 0) |
| `switch_2_model.cmb`  | **red** flat trapezoid pad  | `gFloorSwitch3DL`  (floor subType 1) |
| `switch_11_model.cmb` | **blue** flat trapezoid pad | `gFloorSwitch2DL`  (floor subType 2,3) |
| `switch_6_model.cmb`  | upright **crystal diamond** (colored gem on base) | `gCrystalSwitchDiamond*` (crystal) |
| `switch_9_model.cmb`  | upright **white crystal diamond** | crystal variant |
| `switch_10_model.cmb` | **orange** flat pad | `gRustyFloorSwitchDL` (rusty floor, type 1) |
| `switch_4,5,7`        | tall (h≈450-517), untested | crystal core / eye (TBD) |

**PORTED:** floor pads (subType 0/1/2/3 → switch_1/2/11/11) via `behaviors/actor/obj_switch.cpp`
(door-pattern static CMB at the actor transform; the up/down press is the actor's own Y-translation).
Verified: all three resolve via the behavior key and render the correct colored 3DS pad, grounded, at
Hyrule Field. **Rusty floor (type 1) -> switch_10, ported.** An earlier by-eye pass wrongly rejected switch_10 as
"orange, not brown": the OoT3D CMBs render markedly brighter than the N64 DLs (N64 subjects measure
val 0.19-0.25 vs 0.50-0.80 for CMBs), so raw colour impressions mislead. `tools/model_match.py`
ranked it #1 (shape 0.83, colour 0.85) and elimination confirms it — the four flat pads are colour
variants of ONE mesh, and gold/red/blue are taken by the three floor subtypes.
**NOT yet ported:** EYE (animated eye-frame texture) and CRYSTAL (translucent + env-color on/off state + UV scroll) — these
have dynamic material state a static CMB won't capture, so they still fall through to N64. Subtype =
`params>>4 & 7`; type = `params & 7`.

---

# Field-keep objects (`/actor/zelda_field_keep.zar`) — OoT3D ground truth for SoH3D #115

A second shared keep, the OoT3D `gameplay_field_keep` (N64 OBJECT_GAMEPLAY_FIELD_KEEP), holds the
overworld props that N64 actors draw from `gameplay_field_keep`. Enumerated from the ROM 2026-06-25
(tools/ctr_romfs.py + tools/zar.py). 18 CMBs; the relevant ones:

| CMB (Model/...)                  | N64 actor / DL                          | notes |
|----------------------------------|-----------------------------------------|-------|
| `hatisu_model.cmb`               | OBJ_COMB (0x19E) `gFieldBeehiveDL`      | **DONE** — comb.cpp (beehive) |
| `hatisu_hahen_model.cmb`         | beehive fragments `gFieldBeehiveFragmentDL` | break debris |
| `obj_isi01_model.cmb`            | OBJ_HAMISHI (0x1D2) `gSilverRockDL`     | **DONE** — hamishi.cpp (silver rock) |
| `butterfly.cmb`                  | EN_BUTTE (0x1E) butterfly               | animated flutter |
| `ana01_modelT.cmb`               | grotto hole cover                       | trapdoor (DOOR_ANA family) |
| `obj_door_omote_model.cmb`       | a door front                            | (cf. zelda_keep door CMBs) |
| `obj_ginbure_model.cmb` / `_h_`  | EN_EX_RUPPY (0x131)? silver rupee/target| ginbure = silver-sway |
| `c_bombwall{before,after}_model.cmb` / `s16*` / `s16b*` | BG_BOMBWALL (0xD0) bombable wall | **DONE** — bombwall.cpp (state-aware); s16/s16b = per-scene variants (later) |
| `grass05_model.cmb` / `_up`/`_dn`| field grass                             | |
| `flower1_model.cmb`              | field flower                            | |

## Beehive (OBJ_COMB 0x19E) — DONE
N64 `z_obj_comb.c`: `ObjComb_Draw` → `gSPDisplayList(POLY_OPA_DISP++, gFieldBeehiveDL)` from
OBJECT_GAMEPLAY_FIELD_KEEP, actor scale 0.1 (`ICHAIN_VEC3F_DIV1000(scale, 100)`). The draw pivots
about `pos.y + 118*scale.y` then translates back `-118*scale.y` purely so the hive can swing on its
attachment point — for the rest pose those translates cancel and the hive sits at world.pos.
OoT3D = `hatisu_model.cmb` (hachi-su = beehive; W/D ±161.6, H -160..188, single bone, one CMB across
all fields). The OoT3D hive is a redesign with deeper honeycomb cells vs the N64 hive but the same
footprint. Ported in `behaviors/actor/comb.cpp` (ObjCombBehavior::tryDrawModel), world scale 0.1
(REPL `gscale 14`), matching the N64 footprint (verified live, Grottos ent 0x3F, x2 hives, A/B vs
N64 enable-toggle — near-identical size). The pivot offset is irrelevant to the rest draw so no Y
correction is needed.

## Silver rock (OBJ_HAMISHI 0x1D2) — DONE
N64 `z_obj_hamishi.c`: `ObjHamishi_Draw` → `gSPDisplayList(POLY_OPA_DISP++, gSilverRockDL)` from
OBJECT_GAMEPLAY_FIELD_KEEP at the actor matrix with no extra Y offset, actor scale 0.4
(`ICHAIN_VEC3F_DIV1000(scale, 400)`). The Megaton-Hammer-smashable gray boulder. OoT3D =
`obj_isi01_model.cmb` (isi = stone; X -94.6..79.4, Y -96.8..95.2, Z -91.9..94.0, center-origin,
single bone, one CMB). Mirrors N64's center-origin draw so no Y correction. Ported in
`behaviors/actor/hamishi.cpp` (ObjHamishiBehavior::tryDrawModel), world scale 0.4 (REPL `gscale 15`).
Verified live (Death Mountain Crater ent 0x147, 11 rocks — needs ADULT Link to spawn; log confirms
`auto-loaded model … obj_isi01_model.cmb height=192.0`). Grounded, Link-smashable boulder size.

## Bombable wall (BG_BOMBWALL 0xD0) — DONE (increment 1)
N64 `z_bg_bombwall.c`: `BgBombwall_Draw` → `Gfx_DrawDListOpa(play, this->dList)` from
OBJECT_GAMEPLAY_FIELD_KEEP at the actor matrix (world.pos + shape.rot.y + scale 0.1). `this->dList`
is `gBgBombwallNormalDL` while intact, `gBgBombwallBrokenDL` once bombed. OoT3D:
`Model/c_bombwallbefore_model.cmb` (intact bricked alcove; X ±700, Y -40..1760, Z 0..261, base at
Y≈0, brick face on one side) and `Model/c_bombwallafter_model.cmb` (the top remnant after the bottom
blows out). The N64 uses ONE Normal DL across every scene, so the unscoped c_bombwall pair is the
universal match (`s16`/`s16b` are per-scene texture variants — a later refinement). Ported in
`behaviors/actor/bombwall.cpp` (BgBombwallBehavior::tryDrawModel), world scale 0.1 (REPL `gscale 16`).
STATE-AWARE: reads the live `((BgBombwall*)actor)->dList` through the C struct and picks before/after
(`dList == (Gfx*)gBgBombwallBrokenDL`) so the passage doesn't stay solid after bombing. Verified live
(Death Mountain Trail ent 0x13D, adult Link; log `auto-loaded model … c_bombwallbefore_model.cmb
height=1800.0`): brick wall set into the cliff face at the actor position, correct orientation via the
standard shape.rot transform. Broken-state (after CMB) is handled in code; not yet live-bombed.
