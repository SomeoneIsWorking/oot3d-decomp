# Door_Ana (grotto hole / trapdoor entrance) — OoT3D ground truth for SoH3D #115

## Question
How does OoT3D render the grotto entrance hole? (N64 `DoorAna_Draw` draws ONE shared display list
`gGrottoDL` from `OBJECT_GAMEPLAY_FIELD_KEEP` via `POLY_XLU` — z_door_ana.c, no per-scene or
per-type selection; the same hole everywhere.)

## Answer: the grotto hole is a single CMB inside the FIELD-KEEP zar (mirrors N64)
OoT3D keeps the grotto hole in **`/actor/zelda_field_keep.zar`** (the OoT3D equivalent of N64
`gameplay_field_keep`), under `Model/`:

| CMB | meaning | bytes | bones | notes |
|-----|---------|------:|------:|-------|
| `Model/ana01_modelT.cmb` | grotto hole | 7296 | 1 | "ana"=hole (穴), "T"=translucent (matches N64 Xlu) |

One CMB for every grotto in the game — no per-scene branch, the simplest door-family replacement.

### Geometry (verified offline via tools/cmb.py, 2026-06-25)
- **Bones:** 1 bone, id 0, parent -1, trans (0,0,0), rot (0,0,0), scale (1,1,1) — a static model
  rooted at the origin.
- **Extent:** X/Z ±~3.9k, Y -290..709 — a flat ground-plane disc with a shallow raised stone rim
  (the dark opening sits in the center, rocky debris ring around it).

### Scale
N64's grotto collider is a radius-50 cylinder (`sCylinderInit` in z_door_ana.c), so the visible hole
is ~50 world-units in radius. The ana01 disc is ~3900 units radius, so the CMB→world scale is
≈ 50/3900 ≈ **0.013**. Calibrated live against the N64 hole footprint in Kakariko Village
(entrance 0xDB, the visible non-hidden grotto at params=40); live-retunable via REPL `gscale 22`.

## Grotto types (behavior, not draw)
`actor.params & 0x300` selects the grotto's open-state:
- `0x000` — normal, always-visible grotto (draws the hole immediately).
- `0x200` — HIDDEN grotto, requires a bomb/hammer to open (no hole until opened).
- `0x100` — Song of Storms grotto.
These gate the *update* (open) logic and the collider; the *draw* is the same `ana01` hole for all
of them once visible. The behavior is shared N64 code that runs unchanged in SoH3D — only the draw is
replaced (behaviors/actor/door_ana.cpp).

## SoH3D port
`Shipwright/soh/src/soh3d/behaviors/actor/door_ana.cpp` — model REPLACEMENT keyed off
`ACTOR_DOOR_ANA`, resolves `/actor/zelda_field_keep.zar|Model/ana01_modelT.cmb`, draws it at the
actor's world.pos + shape.rot at scale 0.013. Falls through to the N64 `gGrottoDL` if the CMB is
absent.
