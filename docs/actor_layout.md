# OoT3D actor system layout (CONFIRMED — static decomp + live oracle cross-check)

Recovered 2026-06-21 from static disasm of `build/code.bin` and **verified against the live Azahar
oracle** at Link's House (scene 52). These are the durable anchors the in-RAM scan could not reach:
the globals below are STATIC (`.data`), so they hold every boot; the heap pointers they lead to are
per-boot but reached deterministically through the chain. Enumerate with the harness **`actors`** command.

## The durable chain
```
gPlayState  @ 0x0050AF34  (.data, 30 code refs)  ->  PlayState*   (e.g. 0x0871e840)
PlayState + 0x0104        =  s16 sceneNum         (Link's House = 52 = 0x34, verified)
PlayState + 0x208C        =  actorCtx             (code computes playState + 0x2000 + 0x8C)
actorCtx  + 0x08          =  u32 total live actor count
actorCtx  + 0x0C          =  ActorListEntry[12] { s32 count; Actor* head }   (stride 0x08)
                             index = actor category (0..11); walk each list via Actor.next.
```
Other `.data` words also currently hold the PlayState ptr (0x005043e0, 0x00504498, 0x0050af44,
0x00516f40, 0x0058b2e0, 0x005c1880) — subsystem caches. `0x0050AF34` has the most refs; use it.

Category indices (N64 ACTORCAT_*, same order): 0 SWITCH, 1 BG, 2 PLAYER, 3 EXPLOSIVE, 4 NPC,
5 ENEMY, 6 PROP, 7 ITEMACTION, 8 MISC, 9 BOSS, 10 DOOR, 11 CHEST.

## Actor instance layout (CONFIRMED from Actor_Spawn writes + live Player read)
Recovered from the spawn/init routine at **0x003738D0** (the field stores) and confirmed by reading
the live Player (`@0x098f4010`, id 0, cat 2, pos (1,0,95) = Link's House). Offsets:

| off    | type   | field           | notes |
|--------|--------|-----------------|-------|
| 0x000  | s16    | id              | actor id (indexes gActorOverlayTable) |
| 0x002  | u8     | category        | 0..11 (= the list index it lives in) |
| 0x003  | u8     | room            | 0xFF = "any room" |
| 0x004  | u32    | flags           | |
| 0x008  | Vec3f  | pos (x,y,z)     | world position (the spawn pos) |
| 0x014  | Vec3s  | rot (x,y,z)     | |
| 0x01C  | s16    | params          | spawn params (NOT the id; see note) |
| 0x12C  | Actor* | prev            | intrusive doubly-linked list within category |
| 0x130  | Actor* | next            | new actors are prepended to the list head |
| 0x134  | fn     | init            | = ActorProfile.init  (0 after init has run) |
| 0x138  | fn     | destroy         | = ActorProfile.destroy |
| 0x13C  | fn     | update          | = ActorProfile.update (Player overrides per state) |
| 0x140  | fn     | draw            | = ActorProfile.draw |
| 0x144  | void*  | overlayEntry    | = &gActorOverlayTable[id] |

Actors are NOT in the 0x08000000 application heap — they are allocated from the zelda arena at
**~0x098F4000** (allocator object @ static 0x005A2E3C). Scanning only 0x08xxxxxx misses every actor
(this wasted the prior session's heap scans). The arena moves per boot; reach it via the chain above.

NOTE / dead end: the accessor at 0x003C06BC reads `id = (u16 @ obj+0x1C) >> 7` and indexes the
overlay table — but on a real Actor +0x1C is `params`, so that function operates on a *different*
struct (not Actor). Don't use the `>>7` trick to read an actor id; read the s16 at +0x00.

## gActorOverlayTable @ 0x0050CD84  (.data, stride 0x20)  — CONFIRMED
Indexed by actor id. Entry layout (N64 ActorOverlay-compatible, but no overlay loading — statically
linked, so loadedRamAddr/vrom/name fields are 0):

| off  | field        |
|------|--------------|
| 0x14 | ActorProfile* (a.k.a. initInfo) |
| 0x1C | allocType / numLoaded |

**ActorProfile** (pointed to by entry+0x14) — N64 ActorInit-exact:

| off  | type | field |
|------|------|-------|
| 0x00 | s16  | id |
| 0x02 | u8   | category |
| 0x04 | u32  | flags |
| 0x08 | s16  | objectId |
| 0x0C | u32  | instanceSize (e.g. Player = 0x2A4C) |
| 0x10 | fn   | init |
| 0x14 | fn   | destroy |
| 0x18 | fn   | update |
| 0x1C | fn   | draw |

Overlay entry +0x18 (name ptr) is 0 in OoT3D — actor names are stripped. Map id->name via a known
N64/OoT3D id table if needed (OoT3D uses its own id space: e.g. id 273 = a PROP, id 389 = ITEMACTION
at Link's House — not identical to N64 ids).

## Still open
- **SkelAnime / animation + jointTable offset** inside the actor (the #87 En_Ko variant/anim driver).
  Next: disasm Player_Init (0x00191844) / SkelAnime_Update to find the skeleton+anim fields, then read
  a live actor's current animation. (Player adds 0x5000 to its base for a sub-struct — Player is huge.)
- **Warp**: gSaveContext+0x00 = entranceIndex (see ram_map.md). Find the transition trigger that
  consumes it for deterministic headless navigation.
