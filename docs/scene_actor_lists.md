# OoT3D scene/room command format — actor spawn lists

Reverse-engineered 2026-06-23. Tool: `tools/scene_actors.py`.
Output: `data/scene_actors/<scene_name>.json` — one JSON per scene.

## Coverage

- **114 scenes** (102 regular + 12 Master Quest `_dd` variants)
- **610 rooms** total
- **7,346 actor spawn entries** statically extracted

## ZSI format summary

OoT3D stores scene data in `romfs:/scene/` as `.zsi` files:

| File pattern                    | Type                       |
|---------------------------------|----------------------------|
| `<scene>_info.zsi`              | Scene header (collision, spawn points, transition actors, room list) |
| `<scene>_N_info.zsi`            | Room N (geometry CMB + actor list + object list) |
| `<scene>_dd_info.zsi`           | MQ scene header            |
| `<scene>_N_dd_info.zsi`         | MQ room N                  |

### File header

```
0x00  magic  "ZSI\x01" (OoT3D)  or  "ZSI\x09" (MM)
0x04  name   12 bytes, null-padded ASCII
0x10  start of command list
```

### Command list

8-byte commands from offset 0x10, until type 0x14 (End):

```
byte 0   = command type  (big-endian u32 field, upper byte)
byte 1   = entry count   (same u32 field, second byte)
bytes 4-7 = data/ptr     LITTLE-ENDIAN u32 = plain file offset
```

**Command addresses are plain file offsets** — confirmed by the collision parser
(`oot3d_collision.py`) and validated against live oracle data for scene 85 (spot04).

### Relevant commands

| cmd  | name               | file type      | notes                                      |
|------|--------------------|----------------|--------------------------------------------|
| 0x00 | SpawnList          | scene header   | count × 16-byte ActorEntry (Link spawn pts)|
| 0x01 | ActorList          | room           | count × 16-byte ActorEntry                 |
| 0x04 | RoomList           | scene header   | count = # rooms; ptr encodes names (see §) |
| 0x0B | ObjectList         | room           | count × 2-byte object IDs (u16 LE)         |
| 0x0F | TransitionActorList| scene header   | count × 16-byte TransActEntry              |
| 0x14 | End                | both           | terminates command list                     |

Room file names (`rom:/scene/ddan_0_info.zsi`, etc.) appear as 32-byte null-padded
strings immediately after the End command in the scene header. The cmd 0x04 ptr field
does NOT directly index these strings (it falls within the command table area); the
correct approach is to match room files by name pattern in the RomFS (tool does this).

### ActorEntry — 16 bytes, ALL fields LITTLE-ENDIAN s16

```
[0:2]   s16  id       (actor ID, indexes gActorOverlayTable)
[2:4]   s16  pos.x
[4:6]   s16  pos.y
[6:8]   s16  pos.z
[8:10]  s16  rot.x
[10:12] s16  rot.y
[12:14] s16  rot.z
[14:16] s16  params   (& 0xFFFF in JSON for unsigned display)
```

CONFIRMED little-endian by validation against live oracle. The oracle reads live
`Actor.pos` (Vec3f) from OoT3D RAM; spawn Vec3s and live Vec3f are 1:1 same units.

### TransActEntry — 16 bytes

```
[0]     u8   front_room
[1]     u8   front_face
[2]     u8   back_room
[3]     u8   back_face
[4:6]   s16  id       (LE)
[6:8]   s16  pos.x    (LE)
[8:10]  s16  pos.y
[10:12] s16  pos.z
[12:14] s16  rot_y
[14:16] u16  params
```

## Validation against live oracle (scene 85 = spot04 = Kokiri Forest)

The live oracle (the embedded-Azahar harness, `actors`) observed 98 live actors including
8 × En_Ko (id=355) at confirmed positions. Static parse of `spot04_0_info.zsi` yields:

| type | oracle pos         | static spawn pos   | match |
|------|--------------------|---------------------|-------|
| 0    | (-292, 0, -430)    | [-292, 0, -430]    | ✓     |
| 1    | (45, 0, -272)      | [45, 0, -272]      | ✓     |
| 2    | (-608, 120, 1021)  | [-608, 120, 1021]  | ✓     |
| 3    | (-1471, -80, -294) | [-1471, -80, -294] | ✓     |
| 4    | (669, 0, 521)      | [669, 0, 521]      | ✓     |
| 5    | (853, 100, -311)   | [853, 100, -311]   | ✓     |
| 6    | (-678, 1, -179)    | [-678, 1, -179]    | ✓     |
| 12=FADO | (-10, 180, -22) | [-10, 180, -22]   | ✓     |

8/8 exact matches.  ENKO_TYPE = `params & 0xFF`.

**Live count (98) > static spawn count (101 across 3 rooms, room 0 has 80).** This is
expected: live count reflects actors currently alive (some despawned), while the static
list includes ALL possible spawns (some of which activate only conditionally, e.g. via
event flags). The static list is the authoritative upper bound.

## JSON schema (data/scene_actors/<scene>.json)

```json
{
  "scene_name":         "spot04",
  "scene_num":          85,           // SoH/N64 scene index (null if unmapped)
  "is_mq":              false,
  "scene_header_file":  "/scene/spot04_info.zsi",
  "room_count":         3,
  "spawn_points":       [ {"id": 0, "pos": [x,y,z], "rot": [rx,ry,rz], "params": N}, ... ],
  "transition_actors":  [ {"front_room": N, "front_face": N, "back_room": N, "back_face": N,
                            "id": N, "pos": [x,y,z], "rot_y": N, "params": N}, ... ],
  "rooms": [
    {
      "room_num": 0,
      "file":     "/scene/spot04_0_info.zsi",
      "actors":   [ {"id": N, "pos": [x,y,z], "rot": [rx,ry,rz], "params": N, "room": 0}, ... ],
      "objects":  [ objId, ... ]
    }, ...
  ],
  "actor_id_set":       [sorted list of distinct actor IDs],
  "total_actor_spawns": 101
}
```

## Unmapped scenes

- `kokiri` — the small Kokiri home-interiors grouping; no SoH scene num
- `spot99` — OoT3D-only scene (Saria cutscene forest path?); no SoH scene num

## Investigation notes

- **Endianness**: ZSI cmd1 = big-endian (type in byte 0); cmd2/ptr = little-endian.
  ActorEntry fields = all little-endian s16. This was determined empirically by
  checking id=355 (En_Ko) parsed LE vs BE — LE gives the correct id.

- **MQ room naming**: for scene `ddan_dd`, rooms are `ddan_0_dd_info.zsi` (not
  `ddan_dd_0_info.zsi`). Pattern: strip `_dd` from scene name, look for `_N_dd_info.zsi`.

- **cmd 0x04 ptr**: the data pointer in the room-list command does NOT directly point
  to the room name strings. Room name strings start after the End command. The tool
  ignores the ptr and finds rooms by RomFS pattern matching instead.

- **Dead end**: the "kokiri" scene is the small interior grouping, NOT Kokiri Forest.
  Kokiri Forest = scene 0x55 = OoT3D folder `spot04`. Confirmed via `soh3d_scene_names.inc`.
