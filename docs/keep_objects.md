# Dungeon-keep objects (pots / push blocks / switches / crates) — OoT3D ground truth for SoH3D #115

Several N64 "keep-object" actors draw a DL from a shared keep object (OBJECT_GAMEPLAY_DANGEON_KEEP
or OBJECT_GAMEPLAY_KEEP) rather than a per-actor object. OoT3D mirrors this: the equivalent CMBs
live in **`/actor/zelda_dangeon_keep.zar`** (the OoT3D `gameplay_dangeon_keep`). Enumerated from the
ROM 2026-06-25 (tools/ctr_romfs.py + tools/zar.py). 31 CMBs; the relevant ones:

| CMB (Model/...)           | N64 actor / DL                         | notes |
|---------------------------|----------------------------------------|-------|
| `tubo_model.cmb`          | EN_TUBO_TRAP `gPotDL`                   | **DONE** — pot.cpp (single unthemed pot) |
| `tubo_hahen_model.cmb`    | pot fragments `gPotFragmentDL`         | break debris |
| `kibako_model.cmb`        | OBJ_KIBAKO / crate                      | wooden crate |
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
- **REPRODUCTION BLOCKER (2026-06-25):** in Spirit Temple ent 130, `actorscan 0xFF` finds 1 block at
  (542,-50,-1) with `drawn=0`; `tp` does NOT load its room, and `roomwarp 1..28` never makes it
  `drawn=1` (the room's actor list doesn't spawn the block in headless). Per the project hard rule,
  do NOT attempt the push-block fix until reproduction is reliable: either (a) build/extend repro
  tooling so an arbitrary scene actor can be force-spawned/observed, or (b) find an entrance where a
  push block is in room 0 (check coverage_results.json for OBJ_OSHIHIKI; Dodongo's Cavern,
  Ganon's Tower, GTG also have them).

## Switch (OBJ_SWITCH 0x12A) — not started
Animated (floor switch depresses, crystal/eye switches have tex scroll + on/off state). Multiple
`switch_N_model.cmb`. More complex than a static prop — needs the up/down + tex-scroll state, so it's
a poorer early target than the static pot/crate. Subtype = `params>>4 & 7`.
