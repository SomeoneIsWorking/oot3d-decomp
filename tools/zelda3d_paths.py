"""zelda3d_paths.py — resolve the superproject (zelda3d) from inside oot3d-decomp.

oot3d-decomp is vendored as a **submodule** at `<zelda3d>/oot3d-decomp`. Before that
it was a SIBLING checkout of a repo named `soh3d`, and every tool here grew its own
copy of `../soh3d/tools` + `SOH3D_3DS_ROM`. The rename to `zelda3d` plus the submodule
move broke all of them simultaneously, each in its own way and each with its own error
message. This module is the single place that knows where things are, so the next
layout change is one edit rather than five.

    from zelda3d_paths import ZELDA3D_ROOT, zelda3d_tools, find_oot3d_rom
"""
import os
import re
import sys
from pathlib import Path

DECOMP_ROOT = Path(__file__).resolve().parents[1]
ZELDA3D_ROOT = Path(os.environ.get("ZELDA3D_REPO") or DECOMP_ROOT.parent)

ROM_ENV = "ZELDA3D_OOT3D_ROM"


def zelda3d_tools() -> Path:
    """Put the superproject's tools/ on sys.path and return it.

    Lets this repo reuse ctr_romfs / zar / csab rather than carrying second copies
    that drift out of sync.
    """
    p = ZELDA3D_ROOT / "tools"
    if not p.is_dir():
        raise RuntimeError(
            f"{p} not found — oot3d-decomp expects to be a submodule of zelda3d "
            f"(override the superproject with ZELDA3D_REPO=<path>)")
    sp = str(p)
    if sp not in sys.path:
        sys.path.insert(0, sp)
    return p


def find_oot3d_rom() -> str:
    """Path to the decrypted OoT3D .3ds: $ZELDA3D_OOT3D_ROM, else the superproject .env."""
    rom = os.environ.get(ROM_ENV)
    if rom:
        return rom
    env_path = ZELDA3D_ROOT / ".env"
    if env_path.exists():
        for line in env_path.read_text().splitlines():
            m = re.match(rf'^\s*(?:export\s+)?{ROM_ENV}\s*=\s*"?([^"#\n]+)"?', line)
            if m:
                return m.group(1).strip()
    raise RuntimeError(f"{ROM_ENV} not set and not found in {env_path}")
