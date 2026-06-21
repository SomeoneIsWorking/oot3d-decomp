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

### Scan #2 (7-pass still/move, in Link's HOUSE) + poke test — partial
- 7-pass still/move/still gave 33 candidates in 3 clusters: `081a57xx/5bxx/8axx/0871ecxx` (limb/render
  matrices, Link's translation duplicated per limb), `0821exxx/0821fxxx` (Vec3f-like triples, z≈-340 —
  position COPIES: camera target / Navi-follow), `08779xxx` (~10000-range, map/screen space).
- **Poke test** (write a candidate, see if Link teleports): wrote `0x0821e638` x 124→524; it PERSISTED
  (not a per-frame matrix) but Link did NOT move → it's a position copy, not the canonical world.pos.
- **KEY GOTCHA:** scanning in Link's tiny HOUSE filters OUT the real `Actor.world.pos` — several "move"
  passes hit walls, so world.pos was UNCHANGED during a "move" and failed the changed-while-moving test.
  **Redo the scan in OPEN Kokiri Forest** (walk out the door first), where every move actually displaces
  Link. Then poke-confirm the world.pos (the one that teleports Link), read back for the actor `id`
  header → actor base → list.
- NOTE: heap addresses above are this-boot only. There is now an in-game SAVE at Link's house (File 1);
  fast-load skips the intro (see oracle.md).

## STATIC anchors from the code image (durable; via static decomp — see `static_decomp.md`)
The in-house dynamic scan kept landing on camera-focus copies + render matrices and could NOT
isolate the canonical `Actor.world.pos` (every poke reverted within a frame; even spam-write didn't
visibly teleport — the master is recomputed each frame from a value the copies don't expose, and
headless navigation out of the house was unreliable). 2026-06-21 we pivoted to **static decomp**:
extract+disassemble `.code`, find globals by reference-frequency, and cross-check vs live RAM.
These are STATIC (.data/.bss) → **run-stable every boot**, unlike the heap addresses above.

- **gSaveContext @ `0x00587958`** (CONFIRMED by content; .bss). 670 code refs (2nd-most-referenced
  global). Cross-checked live: player name "Link" (UTF-16) at `+0x1C` (`0x00587974`), save magic
  **"ZELDAZ"** at `+0x2C` (`0x00587984`), health/cap `0x30` near `+0x44`.
  - `+0x00` = **entranceIndex = `0x00BB`** (= entrance "Link's House, child" — matches where Link is).
    This is the warp lever (write entrance + trigger a scene reload). Trigger mechanism not yet found.
  - Other `0xBB` copies live at static `0x00588e58` (182 refs) — likely a play-state/next-entrance copy.
- **Top-referenced globals** (refcount): `0x0051b2f4` (749) holds heap ptr `0x08080010` (a near-empty
  arena); `0x0055a1f8` (114) holds heap ptr **`0x08000110`** — a C++ object whose `[0]` is a vtable
  ptr into rodata (`0x004eca6c`), near an **"EXPH"** (CTR EXPHeap) header — a major game/scene object,
  candidate for the GameState/PlayState root. Not yet confirmed to contain `actorCtx`.
- **The port is C++** (GREZZO): source paths like `z_actor.cpp`, `z_player.cpp`, `ctr/actor_util.cpp`
  (51 files indexed). `__FILE__` strings are NOT referenced by absolute literals (PC-relative `ADR`),
  so absolute-literal xref misses them — find actor fns by structure / vtables, not by string xref.

### NEXT (durable anchors still needed)
- **Confirm the PlayState root** (likely reachable from `0x0055a1f8 → 0x08000110`) and find
  `actorCtx.actorLists[12]` ({s32 length; Actor* head}) inside it → walk actors every boot.
- **Actor struct offsets** (id, category, params, world.pos, `next`, SkelAnime → CSAB/curFrame).
- **Warp**: find the transition trigger that consumes `gSaveContext+0x00` entranceIndex (set entrance
  + trigger → deterministic nav to open Kokiri, which UNBLOCKS the dynamic actor scan + #87).
- **En_Ko (Kokiri kids)**: per-instance type/variant + the CSAB it plays — the #87 driver.
