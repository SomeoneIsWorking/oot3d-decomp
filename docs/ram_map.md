# OoT3D emulated-RAM reverse-engineering journal

Empirical RE of OoT3D's RAM (USA, title `0x0004000000033500`) via the Azahar oracle (see
`docs/oracle.md`). No symbols — addresses derived by memory scanning + OoT-N64 (zeldaret/oot) parallels.
**Mark CONFIRMED vs GUESS. Note which addresses are run-stable (static BSS) vs per-boot (heap).**

## Address space (3DS virtual, OoT3D process)
| base | region | notes |
|------|--------|-------|
| `0x00100000` | `.text` (ARM code) | BL-opcode stream confirmed |
| `0x08000000` | heap | actor allocations, transforms; **addresses change every boot** |
| `0x0C000000` | mapped | |
| `0x14000000` | linear heap (~32 MB) | FS/asset data (`DU..` headers) |
| `0x30000000` | N3DS extra RAM | |

## Memory-scan methodology (the right way)
To find a value by behavior, alternate **still / move / still / move / still**, snapshotting the heap
each time, and keep floats that are **unchanged across every *still* interval** AND **changed across
every *move* interval**. Camera/animation jitter fails "unchanged while still"; constants fail "changed
while moving". (A single move+diff gives hundreds of false positives — camera, anim, particles. The
alternation is what isolates it.) Implemented in `soh3d:tools/azahar_scan.py` `find_player_pos`.
- Result: 277 candidates (naive 1-move diff) → **40** (still/move/still/move/still). Validated 2026-06-21.

## Findings

### Link world position (per-boot heap; CONFIRMED behavior)
- Scan isolated a position component cluster around `0x081a5770` (this boot only). The bytes there are
  **transform/limb matrices** (1.0 diagonals, 0.01 model scale, translation = Link's world pos), with
  the same translation duplicated at `0x081a5b90 / 5bf0 / 8a48 / 0871ec80` (per-limb world matrices).
  x at `+0x00`, z at `+0x20` (y between is constant on flat floor, so it wasn't flagged).
- These are NOT the clean `Actor.world.pos` Vec3f (which is x,y,z contiguous). The matrices are
  downstream of it. **Heap addresses differ every boot — do not hardcode.**

### NEXT (durable anchors needed)
- **Find the static global context / actor-list head** (OoT N64: `gPlayState`/`gGlobalContext` with
  `actorCtx.actorLists[12]`). It lives in static BSS → **run-stable address**, the proper anchor: from
  it, walk each category's actor list every boot. Find it by: locate Link's Actor (clean world.pos
  Vec3f, with `id`/category header just before it — search a contiguous moved x,y? ,z and read back for
  a small actor-id), then find the list node/pointer that references it; the list head pointer sits in
  the static context.
- **Actor struct offsets** (id, category, params, world.pos, `next` ptr, SkelAnime ptr → CSAB/curFrame).
- **gSaveContext + nextEntranceIndex** for warp injection (write entrance, trigger load).
- **En_Ko (Kokiri kids)**: per-instance type/variant + the CSAB it plays — the #87 driver and the model
  for a full per-NPC variant/anim sweep.
