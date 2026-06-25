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
| `brick_15_<theme>_<size>_model.cmb` | OBJ_OSHIHIKI (0xFF) push block | per-dungeon themed cubes — see below |
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

## Push block (OBJ_OSHIHIKI 0xFF) — INVESTIGATED, blocked on reproduction
N64 `z_obj_oshihiki.c`: draws ONE mesh `gPushBlockDL` (unit cube) scaled by `sScales[params & 0xF]`,
with a swappable texture (silver/base/gray) and a per-scene RGB tint (`sColors`).
- **Sizes** `sScales[]` = SMALL `1/10`, MEDIUM `1/6`, LARGE `1/5`, HUGE `1/3` (× gPushBlockDL).
  (params&0xF: 0–3 = S/M/L/H START_ON, 4–7 = S/M/L/H START_OFF.)
- **Scene→theme** (N64 `sScenes[]` order, matching the brick filename codes):
  Deku Tree→`deku`, Dodongo's Cavern→`dod`, Forest Temple→`frs`, Fire Temple→`fire`,
  Water Temple→`wat`, **Spirit Temple→`soul`**, Shadow Temple→`dark`, Ganon's Tower→(ganon? no brick
  — uses white tint), Gerudo Training Ground→`gerd`.
- **OoT3D bricks**: `brick_15_<theme>_<size>_model.cmb` — each is a **600-unit cube, base Y=0**.
  CRUCIAL: `_sa` and `_La` are BOTH 600 units (measured) — size is conveyed by the ACTOR SCALE,
  not the CMB. Available themes/sizes vary (soul: sa, La; dark: Ma; dod: Sa, Sb; frs: Ma, Mb; ...).
- **Port plan** (NOT yet done): module `behaviors/actor/push_block.cpp`, scene→theme table above,
  pick the brick CMB, world scale = `(gPushBlockDL_raw_size × sScales[type]) / 600`. STILL NEED the
  N64 `gPushBlockDL` raw cube dimension (extract from the OTR object, or measure a drawn block) to
  set the scale faithfully — without it the scale is a guess.
- **REPRODUCTION — SOLVED (2026-06-25):** the room-actor-list issue is moot now that `spawnp` exists.
  Spawn a block on demand in any dungeon (OBJECT_GAMEPLAY_DANGEON_KEEP loaded) with
  `spawnp 0xFF <params>`, where `params` low nibble = size (`sScales` index) and the theme is the
  scene's (the scene→theme table above). This is how the crate (OBJ_KIBAKO) was unblocked. STILL
  NEED the N64 `gPushBlockDL` raw cube dimension for a faithful scale before porting.

## Switch (OBJ_SWITCH 0x12A) — not started
Animated (floor switch depresses, crystal/eye switches have tex scroll + on/off state). Multiple
`switch_N_model.cmb`. More complex than a static prop — needs the up/down + tex-scroll state, so it's
a poorer early target than the static pot/crate. Subtype = `params>>4 & 7`.

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
