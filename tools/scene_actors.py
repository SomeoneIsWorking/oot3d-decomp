#!/usr/bin/env python3
"""scene_actors.py — static actor spawn list extractor for ALL OoT3D scenes.

Parses the ZSI scene/room files from the decrypted OoT3D RomFS and extracts every
actor spawn entry from every room, producing per-scene JSON in data/scene_actors/.

This gives game-wide static spawn coverage without running the emulator.

Usage
-----
  ZELDA3D_OOT3D_ROM=<decrypted.3ds> python3 tools/scene_actors.py
  ZELDA3D_OOT3D_ROM=<decrypted.3ds> python3 tools/scene_actors.py --scene spot04
  ZELDA3D_OOT3D_ROM=<decrypted.3ds> python3 tools/scene_actors.py --list-scenes
  python3 tools/scene_actors.py --stats                     # summary (uses existing JSON)

Output
------
  data/scene_actors/<scene_name>.json   one JSON per scene, including:
    - scene_name, scene_num (SoH sceneNum from kSoH3dSceneNames.inc), is_mq
    - rooms[]: room_num, file, actors[]: {id, pos, rot, params, room}
    - spawn_points[]: {id, pos, rot, params}  (Link spawn positions, scene-level)
    - transition_actors[]: {front_room, front_face, back_room, back_face,
                             id, pos, rot_y, params}

ZSI command reference (OoT3D, VERIFIED — see docs/scene_actor_lists.md)
-----------------------------------------------------------------------
  cmd 0x00  SpawnList   (scene-level): entry count × 16-byte ActorEntry
  cmd 0x01  ActorList   (room-level):  entry count × 16-byte ActorEntry
  cmd 0x0b  ObjectList  (room-level):  entry count × 2-byte object IDs
  cmd 0x0f  TransitionActorList (scene-level): entry count × 16-byte TransActEntry
  cmd 0x14  End

ActorEntry (16 bytes, LITTLE-ENDIAN s16 throughout):
  [0:2]  s16  id
  [2:4]  s16  pos.x
  [4:6]  s16  pos.y
  [6:8]  s16  pos.z
  [8:10] s16  rot.x
  [10:12] s16 rot.y
  [12:14] s16 rot.z
  [14:16] s16 params

TransActEntry (16 bytes, mixed):
  [0]   u8   front_room
  [1]   u8   front_face
  [2]   u8   back_room
  [3]   u8   back_face
  [4:6] s16  id       (LE)
  [6:8] s16  pos.x    (LE)
  [8:10] s16 pos.y
  [10:12] s16 pos.z
  [12:14] s16 rot_y
  [14:16] s16 params

Command addresses are PLAIN FILE OFFSETS (not segment-relative) — confirmed by collision
parser (oot3d_collision.py) and validated against live oracle data for scene 85 (spot04).
"""
from __future__ import annotations
import argparse
import json
import os
import re
import struct
import sys

import os as _os, sys as _sys  # noqa: E402
_sys.path.insert(0, _os.path.dirname(_os.path.abspath(__file__)))
from zelda3d_paths import ZELDA3D_ROOT as _ZELDA3D_ROOT, zelda3d_tools as _zpaths  # noqa: E402
_zpaths()
from ctr_romfs import CtrRom

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SOH3D_REPO = str(_ZELDA3D_ROOT)
SCENE_NAMES_INC = os.path.join(SOH3D_REPO, "Shipwright", "soh", "src", "zelda3d", "tables", "zelda3d_scene_names.inc")
OUT_DIR = os.path.join(REPO, "data", "scene_actors")

# ZSI command IDs
CMD_SPAWN_LIST = 0x00
CMD_ACTOR_LIST = 0x01
CMD_ROOM_LIST  = 0x04
CMD_OBJECT_LIST = 0x0B
CMD_TRANS_ACTORS = 0x0F
CMD_END = 0x14

ACTOR_ENTRY_SIZE = 16
TRANS_ENTRY_SIZE = 16


def _u32le(b: bytes, o: int) -> int:
    return struct.unpack_from("<I", b, o)[0]

def _u32be(b: bytes, o: int) -> int:
    return struct.unpack_from(">I", b, o)[0]

def _s16le(b: bytes, o: int) -> int:
    return struct.unpack_from("<h", b, o)[0]


def _parse_actor_entries(data: bytes, ptr: int, count: int) -> list[dict]:
    """Parse `count` 16-byte ActorEntry records at `ptr` (file offset)."""
    entries = []
    for i in range(count):
        o = ptr + i * ACTOR_ENTRY_SIZE
        if o + ACTOR_ENTRY_SIZE > len(data):
            break
        aid, px, py, pz, rx, ry, rz, params = struct.unpack_from("<hhhhhhhh", data, o)
        entries.append({
            "id":     aid,
            "pos":    [px, py, pz],
            "rot":    [rx, ry, rz],
            "params": params & 0xFFFF,
        })
    return entries


def _parse_trans_entries(data: bytes, ptr: int, count: int) -> list[dict]:
    """Parse `count` 16-byte TransActEntry records at `ptr` (file offset)."""
    entries = []
    for i in range(count):
        o = ptr + i * TRANS_ENTRY_SIZE
        if o + TRANS_ENTRY_SIZE > len(data):
            break
        fR, fF, bR, bF = struct.unpack_from("BBBB", data, o)
        aid   = _s16le(data, o + 4)
        px    = _s16le(data, o + 6)
        py    = _s16le(data, o + 8)
        pz    = _s16le(data, o + 10)
        rotY  = _s16le(data, o + 12)
        params = struct.unpack_from("<H", data, o + 14)[0]
        entries.append({
            "front_room": fR,
            "front_face": fF,
            "back_room":  bR,
            "back_face":  bF,
            "id":     aid,
            "pos":    [px, py, pz],
            "rot_y":  rotY,
            "params": params,
        })
    return entries


def _walk_commands(data: bytes):
    """Yield (cmd_type, count, ptr) for each command in the ZSI command list."""
    if len(data) < 16 or data[:3] != b"ZSI":
        return
    off = 16
    while off + 8 <= len(data):
        cmd1 = _u32be(data, off)
        ptr  = _u32le(data, off + 4)
        ctype = (cmd1 >> 24) & 0xFF
        count = (cmd1 >> 16) & 0xFF
        yield ctype, count, ptr
        off += 8
        if ctype == CMD_END:
            break


def parse_room_file(data: bytes, room_num: int) -> dict:
    """Parse a room ZSI file and return its actor list and object list."""
    actors = []
    objects = []
    for ctype, count, ptr in _walk_commands(data):
        if ctype == CMD_ACTOR_LIST:
            entries = _parse_actor_entries(data, ptr, count)
            for e in entries:
                e["room"] = room_num
            actors.extend(entries)
        elif ctype == CMD_OBJECT_LIST:
            for i in range(count):
                o = ptr + i * 2
                if o + 2 <= len(data):
                    oid = struct.unpack_from("<H", data, o)[0]
                    objects.append(oid)
    return {"actors": actors, "objects": objects}


def parse_scene_file(data: bytes) -> dict:
    """Parse a scene-header ZSI file and return spawn_points and transition_actors."""
    spawns = []
    trans  = []
    for ctype, count, ptr in _walk_commands(data):
        if ctype == CMD_SPAWN_LIST:
            spawns = _parse_actor_entries(data, ptr, count)
        elif ctype == CMD_TRANS_ACTORS:
            trans = _parse_trans_entries(data, ptr, count)
    return {"spawn_points": spawns, "transition_actors": trans}


def _load_scene_num_map() -> dict[str, int]:
    """Parse soh3d_scene_names.inc -> {oot3d_folder -> soh sceneNum}."""
    m: dict[str, int] = {}
    try:
        with open(SCENE_NAMES_INC) as f:
            for line in f:
                match = re.match(r'\s*/\*\s+0x([0-9a-fA-F]+)\s+SCENE_\S+.*\*/\s+"([^"]+)"', line)
                if match:
                    m[match.group(2)] = int(match.group(1), 16)
    except FileNotFoundError:
        pass
    return m


def _find_room_files(rom: CtrRom, scene_base: str) -> list[tuple[int, str]]:
    """Return sorted [(room_num, '/scene/<path>')] for a given scene base name.

    Regular scenes: <scene_base>_N_info.zsi  (e.g. ddan_0_info.zsi for ddan)
    MQ (_dd) scenes: <base>_N_dd_info.zsi    (e.g. ddan_0_dd_info.zsi for ddan_dd)
    """
    if scene_base.endswith("_dd"):
        # MQ variant: strip "_dd" suffix, room files are <base>_N_dd_info.zsi
        base_no_dd = scene_base[:-3]
        pattern = re.compile(
            rf"/scene/{re.escape(base_no_dd)}_(\d+)_dd_info\.zsi$", re.IGNORECASE
        )
    else:
        pattern = re.compile(
            rf"/scene/{re.escape(scene_base)}_(\d+)_info\.zsi$", re.IGNORECASE
        )
    rooms = []
    for fe in rom.iter_files():
        m = pattern.match(fe.path)
        if m:
            rooms.append((int(m.group(1)), fe.path))
    return sorted(rooms)


def _scene_is_mq(scene_base: str) -> bool:
    return "_dd" in scene_base.lower()


def process_scene(rom: CtrRom, scene_base: str, scene_num_map: dict[str, int]) -> dict:
    """Parse a full scene (header + all rooms) and return the JSON-serialisable dict."""
    scene_hdr_path = f"/scene/{scene_base}_info.zsi"
    scene_data = rom.read(rom.get(scene_hdr_path))
    hdr = parse_scene_file(scene_data)

    room_entries = _find_room_files(rom, scene_base)
    rooms_out = []
    for room_num, rpath in room_entries:
        room_data = rom.read(rom.get(rpath))
        r = parse_room_file(room_data, room_num)
        rooms_out.append({
            "room_num": room_num,
            "file":     rpath,
            "actors":   r["actors"],
            "objects":  r["objects"],
        })

    all_actors = [a for r in rooms_out for a in r["actors"]]
    actor_ids = sorted(set(a["id"] for a in all_actors))

    scene_num = scene_num_map.get(scene_base)

    return {
        "scene_name":          scene_base,
        "scene_num":           scene_num,       # SoH/N64 scene index (None if no mapping)
        "is_mq":               _scene_is_mq(scene_base),
        "scene_header_file":   scene_hdr_path,
        "room_count":          len(room_entries),
        "spawn_points":        hdr["spawn_points"],
        "transition_actors":   hdr["transition_actors"],
        "rooms":               rooms_out,
        "actor_id_set":        actor_ids,         # quick look-up
        "total_actor_spawns":  len(all_actors),
    }


def main():
    ap = argparse.ArgumentParser(description="Extract actor spawn lists from OoT3D ZSI files.")
    ap.add_argument("--scene", metavar="NAME",
                    help="Process only this scene base name (e.g. spot04)")
    ap.add_argument("--list-scenes", action="store_true",
                    help="List all available scene base names and exit")
    ap.add_argument("--stats", action="store_true",
                    help="Print summary stats from existing JSON files and exit")
    ap.add_argument("--rom", metavar="PATH",
                    default=os.environ.get("ZELDA3D_OOT3D_ROM"),
                    help="Path to decrypted OoT3D .3ds (or set ZELDA3D_OOT3D_ROM)")
    args = ap.parse_args()

    if args.stats:
        _print_stats()
        return

    if not args.rom:
        sys.exit("error: set ZELDA3D_OOT3D_ROM env var or pass --rom <path>")

    rom = CtrRom(args.rom)

    # Collect all scene headers
    all_zsi = sorted(fe.path for fe in rom.iter_files()
                     if fe.path.startswith("/scene/") and fe.path.endswith(".zsi"))

    def _base(p):
        """Extract scene base name: /scene/<base>_info.zsi"""
        m = re.match(r"/scene/([a-zA-Z0-9_]+)_info\.zsi$", p)
        return m.group(1) if m else None

    scene_bases = sorted(filter(None, {_base(p) for p in all_zsi
                                       if not re.match(r"/scene/[a-zA-Z0-9_]+_\d+", p)}))

    if args.list_scenes:
        for s in scene_bases:
            print(s)
        return

    if args.scene:
        if args.scene not in scene_bases:
            sys.exit(f"scene '{args.scene}' not found; use --list-scenes")
        scene_bases = [args.scene]

    scene_num_map = _load_scene_num_map()
    os.makedirs(OUT_DIR, exist_ok=True)

    total_actors = 0
    total_scenes = 0
    for scene_base in scene_bases:
        try:
            result = process_scene(rom, scene_base, scene_num_map)
        except Exception as exc:
            print(f"WARN: {scene_base}: {exc}", file=sys.stderr)
            continue
        out_path = os.path.join(OUT_DIR, f"{scene_base}.json")
        with open(out_path, "w") as f:
            json.dump(result, f, indent=2)
        total_actors += result["total_actor_spawns"]
        total_scenes += 1
        if not args.scene:
            # Print a one-line summary per scene
            mq_tag = " [MQ]" if result["is_mq"] else ""
            sn = f" scene=0x{result['scene_num']:02X}" if result["scene_num"] is not None else ""
            print(f"  {scene_base:<30}{sn}{mq_tag}: "
                  f"{result['room_count']} rooms, {result['total_actor_spawns']} actors")
        else:
            print(f"Wrote {out_path}")

    print(f"\nDone: {total_scenes} scenes, {total_actors} total actor spawns -> {OUT_DIR}/")


def _print_stats():
    """Print a summary table from existing JSON files."""
    if not os.path.isdir(OUT_DIR):
        sys.exit(f"No data directory at {OUT_DIR}; run without --stats first")
    rows = []
    for fname in sorted(os.listdir(OUT_DIR)):
        if not fname.endswith(".json"):
            continue
        with open(os.path.join(OUT_DIR, fname)) as f:
            d = json.load(f)
        rows.append((
            d.get("scene_name", "?"),
            d.get("scene_num"),
            d.get("is_mq", False),
            d.get("room_count", 0),
            d.get("total_actor_spawns", 0),
            len(d.get("transition_actors", [])),
        ))
    rows.sort(key=lambda r: (r[2], r[1] if r[1] is not None else 999))
    total_scenes = len(rows)
    total_rooms  = sum(r[3] for r in rows)
    total_actors = sum(r[4] for r in rows)
    print(f"{'Scene':<32} {'Num':>4}  MQ  {'Rooms':>5}  {'Actors':>6}  {'TransAct':>8}")
    print("-" * 68)
    for name, num, mq, nrooms, nactors, ntrans in rows:
        ns = f"0x{num:02X}" if num is not None else "  --"
        print(f"  {name:<30} {ns}  {'*' if mq else ' ':>2}  {nrooms:>5}  {nactors:>6}  {ntrans:>8}")
    print("-" * 68)
    print(f"  {'TOTAL':<30}       {'':>2}  {total_rooms:>5}  {total_actors:>6}")
    print(f"\n{total_scenes} scenes")


if __name__ == "__main__":
    main()
