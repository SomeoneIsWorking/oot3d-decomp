#!/usr/bin/env python3
"""
scene_lighting.py — extract OoT3D per-scene environment lighting settings
from the romfs ZSI scene headers.

Usage:
    python3 tools/scene_lighting.py [output.json]

Reads SOH3D_3DS_ROM from env (or from soh3d/.env).
Writes per-scene JSON to <output.json> (default: data/scene_lighting.json).

Output format:
  {
    "scene_name": [
      {
        "ambient": [r, g, b],
        "light0": { "dir": [x, y, z], "color": [r, g, b] },
        "light1": { "dir": [x, y, z], "color": [r, g, b] },
        "fog_end": float,
        "draw_dist": float,
        "fog_start": int,
        "blend_rate": int
      },
      ...   // one entry per setting index (12 entries typical)
    ],
    ...
  }

OoT3D ZSI EnvLightSettings format (28 bytes / entry, CONFIRMED 2026-06-23):
  +0x00  u8[3]  ambientColor RGB
  +0x03  s8[3]  light0Dir    xyz (unit vector * 127)
  +0x06  u8[3]  light0Color  RGB
  +0x09  s8[3]  light1Dir    xyz (unit vector * 127)
  +0x0c  u8[3]  light1Color  RGB
  +0x0f  u8     pad
  +0x10  f32 LE fogEnd        (world units)
  +0x14  f32 LE drawDistance  (world units)
  +0x18  u16 LE  bits[0..9]=fogStart  bits[10..15]=blendRate/4
  +0x1a  u8[2]  unknown (extra data, not consumed by known game paths)

Note: entry 0 in each scene has a different format (appears to be scene-level
defaults or a metadata header); entries 1..N-1 are the per-time-of-day settings.
Entry 0 is included as-is in the JSON for completeness (its float fields may
be valid but its color interpretation differs).
"""

import json
import os
import re
import struct
import sys
from pathlib import Path

# ---- ROM path ---------------------------------------------------------------

def find_rom() -> str:
    rom = os.environ.get("SOH3D_3DS_ROM")
    if rom:
        return rom
    env_path = Path(__file__).resolve().parents[2] / "soh3d" / ".env"
    if env_path.exists():
        for line in env_path.read_text().splitlines():
            m = re.match(r'^\s*SOH3D_3DS_ROM\s*=\s*"?([^"#\n]+)"?', line)
            if m:
                return m.group(1).strip()
    raise RuntimeError("SOH3D_3DS_ROM not set and not found in soh3d/.env")


# ---- CtrRom (inline copy of the relevant parts) ----------------------------
# We inline what we need so this tool works standalone from oot3d-decomp without
# a Python path dependency on soh3d/tools.

try:
    sys.path.insert(0, str(Path(__file__).resolve().parents[2] / "soh3d" / "tools"))
    from ctr_romfs import CtrRom
except ImportError:
    raise ImportError(
        "Cannot import CtrRom from soh3d/tools/ctr_romfs.py. "
        "Make sure /home/<user>/repo/soh3d/tools/ctr_romfs.py exists."
    )


# ---- ZSI parsing ------------------------------------------------------------

ENTRY_STRIDE = 28  # OoT3D confirmed stride

def parse_entry(data: bytes, offset: int) -> dict:
    """Parse one 28-byte OoT3D EnvLightSettings entry."""
    b = data[offset : offset + ENTRY_STRIDE]
    amb   = [b[0], b[1], b[2]]
    l0d   = [struct.unpack_from("b", b, 3 + i)[0] for i in range(3)]
    l0c   = [b[6], b[7], b[8]]
    l1d   = [struct.unpack_from("b", b, 9 + i)[0] for i in range(3)]
    l1c   = [b[12], b[13], b[14]]
    # b[15] = pad
    fog_end   = struct.unpack_from("<f", b, 16)[0]
    draw_dist = struct.unpack_from("<f", b, 20)[0]
    fog_bits  = struct.unpack_from("<H", b, 24)[0]
    fog_start = fog_bits & 0x3FF
    blend_rate = ((fog_bits >> 10) & 0x3F) * 4
    return {
        "ambient": amb,
        "light0": {"dir": l0d, "color": l0c},
        "light1": {"dir": l1d, "color": l1c},
        "fog_end": round(fog_end, 1),
        "draw_dist": round(draw_dist, 1),
        "fog_start": fog_start,
        "blend_rate": blend_rate,
    }


def parse_scene_env(data: bytes) -> list[dict] | None:
    """
    Walk the ZSI command list, find cmd 0x0F, return list of env setting dicts.
    Returns None if no env cmd found.
    """
    # ZSI magic check (first 4 bytes)
    magic = data[:3]
    if magic != b"ZSI":
        return None

    off = 16  # commands start after 16-byte header (magic + scene name)
    while off + 8 <= len(data):
        cmd1 = struct.unpack_from(">I", data, off)[0]
        cmd2 = struct.unpack_from("<I", data, off + 4)[0]
        ctype = (cmd1 >> 24) & 0xFF
        count = (cmd1 >> 16) & 0xFF
        off += 8
        if ctype == 0x14:  # CMD_END
            break
        if ctype == 0x0F:  # CMD_ENV_LIGHTING
            entries = []
            for i in range(count):
                entry_off = cmd2 + i * ENTRY_STRIDE
                if entry_off + ENTRY_STRIDE > len(data):
                    break
                entries.append(parse_entry(data, entry_off))
            return entries
    return None


# ---- Is this a scene header (not a room file)? ------------------------------

def is_scene_header(path: str) -> bool:
    """
    Scene headers: filename has no room number, e.g. spot01_info.zsi
    Room files:    filename has a room number, e.g. spot01_0_info.zsi
    We identify room files by a digit sequence before _info.zsi.
    """
    name = os.path.basename(path)
    # Room files look like: name_<digits>_info.zsi  or  name_<digits>_<suffix>_info.zsi
    return not re.search(r"_\d+_", name)


# ---- Main -------------------------------------------------------------------

def main(out_path: str | None = None) -> None:
    rom_path = find_rom()
    rom = CtrRom(rom_path)

    if out_path is None:
        out_dir = Path(__file__).resolve().parent.parent / "data"
        out_dir.mkdir(parents=True, exist_ok=True)
        out_path = str(out_dir / "scene_lighting.json")

    results: dict[str, list[dict]] = {}

    scene_files = sorted(
        (fe for fe in rom.iter_files()
         if fe.path.startswith("/scene/") and fe.path.endswith(".zsi")
            and is_scene_header(fe.path)),
        key=lambda fe: fe.path,
    )

    print(f"Scanning {len(scene_files)} scene headers …")
    for fe in scene_files:
        name = os.path.basename(fe.path).replace("_info.zsi", "")
        data = rom.read(fe)
        entries = parse_scene_env(data)
        if entries:
            results[name] = entries
            print(f"  {name}: {len(entries)} settings")
        else:
            print(f"  {name}: no env cmd (skipped)")

    with open(out_path, "w") as f:
        json.dump(results, f, indent=2)

    print(f"\nWrote {len(results)} scenes → {out_path}")


if __name__ == "__main__":
    out = sys.argv[1] if len(sys.argv) > 1 else None
    main(out)
