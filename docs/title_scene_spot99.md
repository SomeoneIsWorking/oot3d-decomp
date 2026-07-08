# OoT3D title scene `spot99` — what it actually is, vs `spot00`

RE'd 2026-07-08 to resolve the scene-level half of the title-parity gap: the oracle
title runs on scene index `0x6b` = **`spot99`** (established in
`title_gamestate_driver.md` §1 via live `play+0x104` read + byte-match against
`spot99_info.zsi`), while SoH3D's title module currently renders N64 scene **spot00**
(Hyrule Field, model 1000). This doc pins down `spot99` as a concrete asset (ZSI
scene+room structure, actor/object lists, collision) and states what SoH3D should load.

Tools: existing `oot3d-decomp/tools/scene_actors.py` (actor/object lists, already
produced `data/scene_actors/spot99.json`), `oot3d-decomp/data/scene_lighting.json`
(already has a `spot99` entry), and `soh3d/tools/oot3d_collision.py` (collision —
reused read-only for this RE, no soh3d files touched/built). ROM:
`<oot3d.3ds>`
via `SOH3D_3DS_ROM`.

## TL;DR

**`spot99` is Grezzo's own scene, built by literally CLONING `spot00`'s scene-header
data (env lighting, actor spawn table, Link spawn points, transition-actor table —
all byte-identical) and then substituting a drastically simplified, camera-path-only
room mesh/collision, trimming the alt-header count, and swapping ~3 of 8 object-bank
slots.** It is not "the same as spot00" (different file, ~25% the file size, ~13% the
collision poly count, restricted footprint) but it is also not an independent
hand-built diorama — its dressing (trees/grass/rock/hole placement, all lighting
palettes) is spot00's, verbatim. SoH3D currently substituting the full, playable
`spot00`/Hyrule Field asset at title is a genuine divergence: it renders the wrong
(larger, differently-collisioned, full-time-of-day) asset, not a faithful stand-in.

## 1. File identity

| | `spot99_info.zsi` (scene header) | `spot99_0_info.zsi` (room 0) |
|---|---|---|
| size | 23,432 B | 754,668 B |
| vs `spot00_info.zsi` (178,116 B) / `spot00_0_info.zsi` (956,440 B) | **13%** the size | **79%** the size |

`spot99` has exactly **1 room** (`spot99_0_info.zsi`) — same room count as `spot00`
(Hyrule Field is also 1 room in this ROM's layout; both use the plain, non-MQ command
shape). No `spot99_dd` (MQ) variant exists — expected, title isn't a quest state.

## 2. Scene-header command list — structurally identical shape, smaller payloads

Both files use the same 8-byte scene command stream (`docs/scene_command_handler.md`
dispatch table, cmd IDs 0x00–0x19). Walking both headers:

| cmd | spot99 (count, ptr) | spot00 (count, ptr) | meaning |
|-----|----|----|---|
| 0x18 altHeaders | 7, 0xc8 | **13**, 0x4c8 | spot99 has fewer alternate scene-setup variants (no per-quest-flag/day-night matrix needed for a scripted demo) |
| 0x15 soundSettings | 2, (shared const) | 2, (shared const) | identical |
| 0x04 roomList | 1 room | 1 room | both single-room |
| 0x03 collisionHeader | ptr 0x3030 | ptr 0x16174 | header offset shifts purely because altHeaders(7) block is shorter |
| 0x06 entranceList | 18 | 18 | identical count |
| 0x07 specialFiles | 1 | 1 | identical |
| 0x0d pathList | 1 | 1 | identical |
| 0x00 spawnList | **18** | **18** | same count (see §3) |
| 0x0f (light-settings-list per `scene_command_handler.md`, though `scene_actors.py` — see caveat §6) | 17 | 17 | **byte-identical entries** (§4) |
| 0x13 exitList | 0 | 0 | identical |
| 0x14 end | — | — | — |

**Nothing in the header command *shape* differs** — same command set, same order,
same counts everywhere except altHeaders (7 vs 13). Every size difference downstream
(scene header 23 KB vs 178 KB, room 755 KB vs 956 KB) traces to fewer alt-header
variants + a smaller collision block + a smaller mesh block, not a different header
schema.

## 3. Actor spawn table — BYTE-IDENTICAL to spot00

`data/scene_actors/spot99.json` (room 0, 74 actor entries) diffed field-by-field
against `data/scene_actors/spot00.json` (room 0, also 74 entries): **0 of 74 differ**
— identical `id`, `pos`, `rot`, `params` for every entry, same order. Actor id set:
`{29, 47, 57, 59, 74, 119, 155, 167, 274, 295, 333, 334, 337, 387}` — this is
`spot00`'s field-decoration cast (trees/grass/rocks/holes; scene_readiness.md's
spot00 gap notes name `En_Wood02`(×27), `Door_Ana`(×8), `Obj_Mure2`(×7),
`En_A_Obj`(×7) etc. — those are exactly the actors spot99 also spawns, at the same
coordinates).

Link's own scene-level spawn points (cmd 0x00, 18 entries): 17 of 18 byte-identical;
entry 0 (the default Link spawn, actor id 581) differs only in `rot.y`
(`12424` vs `25036`) and `params` (`0` vs `1`) — everything else (`pos`) identical.
Irrelevant for title (Player/Epona position there is driven by the CS rider-track, not
the scene spawn point — see `title_rider_driver.md`), but confirms the spawn table
itself is a copy with one field hand-edited.

Transition-actor table (cmd, 17 entries in both): also byte-identical between the two
scenes — but the decoded values (front/back room indices up to 250, negative actor
ids) are physically nonsensical for a field scene. **This block is very likely
mis-parsed by the existing `scene_actors.py`/CMD_TRANS_ACTORS=0x0F assignment** — see
the caveat in §6; not fixed here (out of scope for the scene-identity question, and
irrelevant to title since a single-room scene has no real room transitions), but
flagged so it isn't mistaken for a real spot99-vs-spot00 divergence.

## 4. Env/lighting — BYTE-IDENTICAL to spot00

`data/scene_lighting.json`: spot99 and spot00 each carry **17** `Zelda3dLightSlot`
entries (28 B each, per `scene_command_handler.md` §"Scene_CmdLightSettingsList"),
and **all 17 are byte-identical** (ambient/light0/light1 dir+color, fog start/end,
draw_dist, blend_rate) — confirmed via direct dict comparison, not sampling. spot99's
title-demo lighting is not custom-authored; it inherits spot00's full day/night/event
palette table verbatim (the title cs's `Flags_SetEnv`/env-cursor mechanics documented
in `title_gamestate_driver.md` presumably select one of these 17 slots the same way
Hyrule Field does — likely the dawn/4-AM slot, since the title cs sets time 04:00 per
that doc's opcode-0x8C finding).

## 5. Room mesh + collision — the actual divergence: heavily decimated, camera-path-only

This is where spot99 stops being a copy:

- **Collision** (`oot3d_collision.py`, cmd 0x03 → CollisionHeader):
  - `spot99`: **306 verts, 497 polys**
  - `spot00`: **2,243 verts, 3,754 polys**
  - spot99's collision is **~13% the polygon count** of spot00's.
  - **Bounding box** (raw Vec3s units): spot99 X∈[-6760,5400] Z∈[701,11593] vs
    spot00's full-field X∈[-11048,6732] Z∈[-1755,16668]. spot99's collision covers
    only a **sub-region** of the full field — consistent with "just enough ground for
    the title cs's camera flyover + rider path," not the whole playable Hyrule Field.
  - Y ranges are comparable (spot99 [-505,661] vs spot00 [-1095,669]), i.e. similar
    terrain height variation is retained where present, just a smaller X/Z footprint.

- **Mesh** (cmd 0x0a, room-file mesh-data blob): spot99's room-0 mesh block sits at
  file offset `0xb7e46` vs spot00's `0xe7b56` — everything before that offset (raw
  CMB/vertex/DL data) is smaller in spot99 (room file 755 KB vs 956 KB total, ~79%),
  proportionally less than the 13%-of-polys collision reduction, meaning the VISUAL
  mesh is trimmed less aggressively than collision (expected — camera-visible terrain
  needs more detail than invisible-collision-only edges, and skybox/distant terrain
  still needs full draw geometry even outside the collision footprint).

**Room-header command list is structurally identical** between the two room files
(`0x18 altHeaders(7 vs 13)`, `0x16`, `0x08`, `0x12`, `0x10`, `0x05`, `0x0a mesh`,
`0x0b objectList(8)`, `0x01 actorList(74)`, `0x14 end` — same order, same counts
except altHeaders and the two payload sizes above).

## 6. Object list — 3 of 8 slots swapped

Room-0 `ObjectList` (cmd 0x0B, 8 entries):

| slot | spot99 | spot00 |
|---|---|---|
| 0 | 1 (`OBJECT_GAMEPLAY_KEEP`) | 1 (same) |
| 1 | 258 | 258 |
| 2 | **180** | **964** |
| 3 | 0 (empty) | 0 (same) |
| 4 | 0 (empty) | 0 (same) |
| 5 | **32324** | **31572** |
| 6 | **11** | **14** |
| 7 | 0 (empty) | 0 (same) |

5 of 8 slots identical (including slot 0 = the shared `gameplay_keep`, present in
both — trees/rocks/holes draw from it in both scenes, consistent with the identical
actor table). **3 slots differ: index 2, 5, 6.**

**Caveat — these object IDs do NOT reliably resolve through the N64 `object_table.h`
enum.** Two of the three differing values (964, 31572, 32324) exceed the N64 table's
402-entry range entirely, which means OoT3D's room-level object bank uses its own,
larger index space (consistent with `actor_layout.md`'s prior finding that OoT3D actor
ids/tables don't follow the N64 numbering 1:1 past the low range). Looking up the
*other* three differing/shared small values against `object_table.h` as a sanity check
(180→`OBJECT_MO`, 11→`OBJECT_WALLMASTER`, 14→`OBJECT_BOX`) produces semantically
implausible results for a field/title scene (no Wallmaster or treasure-box object
belongs in Hyrule Field) — so those matches are almost certainly coincidental
small-integer collisions, not real identifications. **Not resolved this session**:
building an OoT3D-side object-index table (from the ROM's own object directory, not
the N64 enum) is the correct next step to identify what these 3 slots actually are —
plausible candidates given the title cs content are a dedicated 2D-logo/overlay object
(`title_logo_us`/`g_title` per `title_2d_overlay_logo.md`) or a scene-specific dressing
prop, but that's inference, not decompiled fact.

## 7. What this means for SoH3D — concrete recommendation

**SoH3D rendering `spot00`/model 1000 at title is a substitution bug, not a
close-enough stand-in.** `spot99` is a real, separate ROM asset (own `_info.zsi` +
`_0_info.zsi`) with its own (smaller) collision and mesh — it is not merely "spot00
with a different camera bolted on."

Concretely, the port needs:

1. **Load `spot99`'s own ZSI/room asset**, not `spot00`'s. SoH3D's asset pipeline
   already has machinery to import an OoT3D scene into SoH format (spot00/Hyrule
   Field is proof it works); the title module needs the equivalent import run against
   `spot99_info.zsi` + `spot99_0_info.zsi` specifically, producing its own scene/room
   data (own collision mesh at the ~13%-density/sub-footprint extent measured in §5,
   own trimmed mesh) — not a flag/branch that reuses the already-imported spot00
   asset.
2. **Actor placement + lighting can be inherited from the existing spot00 port
   verbatim** — §3/§4 prove the source data is byte-identical, so if SoH3D's spot00
   scene-object/env import is already faithful, the same actor-spawn-table and
   17-slot lighting-palette output should be reusable/shared for spot99's header
   without new RE — the only NEW asset work is the geometry/collision itself (§5) and
   figuring out the 3 swapped object slots (§6, currently unresolved — may matter for
   whatever prop/decoration those slots draw during the cs).
3. **Do not hand-author or approximate spot99's terrain.** Since it's a real,
   ROM-native, drastically simpler mesh (755 KB, 306-vertex collision) than full
   Hyrule Field, importing it directly is both more correct AND cheaper than porting
   the full spot00 field geometry for a background that's only ever seen from a fixed
   flyover camera path.
4. Fewer alt-headers (7 vs 13, §2) means the title-demo doesn't need spot00's full
   day/night/quest-flag header matrix — the port only needs whichever ONE of the 7
   alt-header slots the boot-time hint (`sceneNum==0x51` special-case, per
   `title_gamestate_driver.md` §1) actually selects; that slot-selection isn't RE'd
   yet and is the next open item if the port needs to pick the exact alt-header.

## 8. Open items for next session

1. Identify the 3 swapped object-bank slots (§6) — needs an OoT3D-native object index
   table (built from the ROM's object directory/asset manifest, not the N64 enum) to
   resolve ids 180/32324/11 (spot99) vs 964/31572/14 (spot00) to actual asset names.
2. Confirm which of spot99's 7 alt-headers is selected at boot (the `sceneNum==0x51`
   Play_Init special-case, `title_gamestate_driver.md` §1) — needed if the port must
   pick a specific header rather than header 0.
3. **Tooling correction flagged, not fixed**: `scene_actors.py`'s `CMD_TRANS_ACTORS =
   0x0F` conflicts with `scene_command_handler.md`'s dispatch-table finding that cmd
   0x0F is `lightSettingsList` (SOLVED, cross-verified via the envCtx pointer writes)
   and cmd **0x0E** is `transitionActors`. The "transition_actors" arrays currently in
   every `data/scene_actors/*.json` (including spot99.json/spot00.json used in this
   doc) are almost certainly mis-parsed light-settings bytes reinterpreted as 16-byte
   actor records — explains the physically-impossible room indices (up to 250) and
   ids (negative, out-of-range) observed in both scenes' `transition_actors` field.
   Irrelevant to the spot99-vs-spot00 comparison in this doc (identical raw bytes
   either way), but whoever next touches transition-actor data (room-to-room warps)
   should re-point `scene_actors.py` at cmd 0x0E and re-generate, not trust the
   existing field.
