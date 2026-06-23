#!/usr/bin/env python3
"""zar_ram_csab.py — Generic live CSAB-name resolver via ZAR directory in RAM.

Closes the #89 exact-naming frontier for ANY skeletal OoT3D actor by reading the ZAR
file directory directly from emulated 3DS RAM (Azahar oracle RPC), rather than relying on
actor-specific pool-index tables (En_Ko) or static catalog animLength matching.

## Method

For a live actor whose `animLength` is ambiguous (multiple CSABs in its ZAR share the
same frame count), we can resolve the exact CSAB by:

  1. Look up the actor's objectId via `gActorOverlayTable` (already done in actors.py /
     oracle_export.py).
  2. Scan the ObjectCtx slot array (PlayState + OBJCTX_SLOT_BASE, stride SLOT_STRIDE) for
     a slot whose objectId field matches. Read the ZAR data pointer at `slot + SLOT_DATA`.
  3. Read the ZAR binary from RAM (same layout as the on-disk ZAR). Parse its file directory
     to enumerate all CSAB entries and their RAM addresses.
  4. For each candidate CSAB file, read `duration = u32(csab_data + 0x28) + 1` and compare
     to the actor's live `animLength`. In most cases this narrows to one match (actors
     rarely have two CSABs with identical durations AND both are real candidates). If still
     ambiguous, fall through to step 5.
  5. (Optional / future) Walk the live CSAB ptr chain via the actor's anim-player pointer
     at `actor + anim_ctrl_off + CTRL_ANIMPLAYER` (vtable 0x4EC018) to read the currently-
     bound CSAB address and match it against the ZAR's enumerated CSAB data ptrs.

## ZAR layout in RAM (identical to on-disk ZAR)

  0x00  "ZAR\\x01" magic (4 bytes)
  0x04  u32 total_size
  0x08  u16 n_types
  0x0A  u16 n_files
  0x0C  u32 types_section_off   (relative to ZAR base)
  0x10  u32 meta_section_off    (per-file: u32 size + u32 name_ptr_off relative to ZAR base)
  0x14  u32 data_section_off    (per-file data-offset table: u32 each, relative to ZAR base)

## ObjectCtx slot layout (discovered via En_Ko oracle session, 2026-06-23)

  PlayState base address is read from gPlayState (0x0050AF34).
  ObjectCtx slots begin at PlayState + 0x3D5C.
  Slot stride = 0x80.  Max slots = 32 (safe upper bound; N64 used 19; 3DS likely similar).
  slot + 0x00: s16 objectId   (loaded object ID; -1 = empty)
  slot + 0x04: u32 data_ptr   (RAM address of the loaded ZAR; 0 = not yet loaded)

Verified: km1 (objectId=0xFC) is at PlayState+0x3D5C, kw1 (objectId=0xFD) at +0x3DDC
(= +0x3D5C + 1*0x80).

## Usage

  # Standalone: show all live actors with live-resolved CSAB name
  python3 tools/zar_ram_csab.py

  # Import: call resolve_actor_csab(rpc, actor_dict) where actor_dict is from actors.py
  from zar_ram_csab import LiveCsabResolver
  res = LiveCsabResolver(rpc)
  name = res.resolve(actor_id, object_id, anim_ctrl_off, anim_length, actor_addr)
"""

from __future__ import annotations

import struct
import sys
import os
from typing import Optional

sys.path.insert(0, os.path.dirname(__file__))
from actors import Rpc, enumerate_actors, profile_for  # noqa: E402

# ---------------------------------------------------------------------------
# Constants (all verified via oracle + static analysis)
# ---------------------------------------------------------------------------

GPLAYSTATE           = 0x0050AF34    # .data global → PlayState*
OVLTABLE             = 0x0050CD84    # gActorOverlayTable base (stride 0x20)
ARENA_LO, ARENA_HI   = 0x09000000, 0x0A000000  # actor arena bounds

# ObjectCtx slot layout relative to PlayState
OBJCTX_SLOT_BASE     = 0x3D5C       # PlayState + this = first ObjectCtx slot
SLOT_STRIDE          = 0x80         # bytes between consecutive slots
SLOT_OBJECTID        = 0x00         # s16 at slot+0 (loaded objectId; -1 = empty)
SLOT_DATA_PTR        = 0x04         # u32 at slot+4 (ZAR RAM address; 0 = not loaded)
MAX_SLOTS            = 32           # safe upper bound for slot scan

# ZAR header offsets (relative to ZAR base in RAM)
ZAR_MAGIC_OFF        = 0x00         # "ZAR\x01" (4 bytes)
ZAR_N_FILES_OFF      = 0x0A         # u16
ZAR_META_OFF         = 0x10         # u32 → meta section offset (per-file size+name)
ZAR_DATA_OFF         = 0x14         # u32 → data offset table (per-file data rel to ZAR base)

# CSAB header: duration at +0x28 (u32 = frameCount - 1)
CSAB_DURATION_OFF    = 0x28

# Anim controller: CSAB anim-player pointer offset (relative to the skeleton-ptr field offset S)
# Layout:  actor + S + 0x08 = ptr → C++ object (vtable 0x004EC018) = anim player
CTRL_ANIMPLAYER_REL  = 0x08         # anim-player ptr offset relative to the skel-ptr field


# ---------------------------------------------------------------------------
# Low-level helpers
# ---------------------------------------------------------------------------

def _u16(data: bytes, off: int) -> int:
    return struct.unpack_from("<H", data, off)[0]

def _s16(data: bytes, off: int) -> int:
    return struct.unpack_from("<h", data, off)[0]

def _u32(data: bytes, off: int) -> int:
    return struct.unpack_from("<I", data, off)[0]

def _cstr(data: bytes, off: int) -> str:
    end = data.index(b"\x00", off)
    return data[off:end].decode("ascii", "replace")


# ---------------------------------------------------------------------------
# ZAR directory parser (reads from raw bytes, works on both ROM and RAM copies)
# ---------------------------------------------------------------------------

class ZarDir:
    """Parsed ZAR directory: list of (name, data_offset_rel_to_zar_base, size) entries."""

    def __init__(self, data: bytes):
        if data[0:4] != b"ZAR\x01":
            raise ValueError(f"bad ZAR magic: {data[0:4]!r}")
        n_files      = _u16(data, ZAR_N_FILES_OFF)
        meta_off     = _u32(data, ZAR_META_OFF)
        data_sec_off = _u32(data, ZAR_DATA_OFF)

        # Per-file data offsets (relative to ZAR base)
        data_offsets = [_u32(data, data_sec_off + 4 * i) for i in range(n_files)]

        self.files: list[dict] = []
        for i in range(n_files):
            m = meta_off + 8 * i
            fsize    = _u32(data, m)
            name_off = _u32(data, m + 4)
            fname    = _cstr(data, name_off)
            self.files.append({
                "index":      i,
                "name":       fname,
                "data_off":   data_offsets[i],   # relative to ZAR base
                "size":       fsize,
            })

    def csab_entries(self) -> list[dict]:
        """Return file entries whose name ends in .csab."""
        return [f for f in self.files if f["name"].lower().endswith(".csab")]


# ---------------------------------------------------------------------------
# ObjectCtx slot scanner
# ---------------------------------------------------------------------------

class ObjectCtxScanner:
    """Scan the ObjectCtx slot array in RAM to find a loaded ZAR by objectId."""

    def __init__(self, r: Rpc):
        self._r    = r
        self._ps   = r.read32(GPLAYSTATE)
        self._base = self._ps + OBJCTX_SLOT_BASE

    def find_zar_ptr(self, object_id: int) -> Optional[int]:
        """Return the RAM ZAR base address for object_id, or None if not found / not loaded."""
        for i in range(MAX_SLOTS):
            slot_addr = self._base + i * SLOT_STRIDE
            try:
                slot_data = self._r.read(slot_addr, 8)
            except Exception:
                break
            oid  = _s16(slot_data, SLOT_OBJECTID)
            dptr = _u32(slot_data, SLOT_DATA_PTR)
            if oid == object_id and ARENA_LO <= dptr < ARENA_HI:
                return dptr
        return None

    def dump_slots(self) -> list[dict]:
        """Dump all non-empty slots (for debugging)."""
        out = []
        for i in range(MAX_SLOTS):
            slot_addr = self._base + i * SLOT_STRIDE
            try:
                slot_data = self._r.read(slot_addr, 8)
            except Exception:
                break
            oid  = _s16(slot_data, SLOT_OBJECTID)
            dptr = _u32(slot_data, SLOT_DATA_PTR)
            if oid != -1:
                out.append({"slot": i, "addr": f"{slot_addr:#x}",
                            "objectId": oid, "data_ptr": f"{dptr:#x}"})
        return out


# ---------------------------------------------------------------------------
# Live CSAB resolver
# ---------------------------------------------------------------------------

class LiveCsabResolver:
    """
    Resolve the exact CSAB name for any live OoT3D actor by parsing the ZAR directory
    in RAM and matching the actor's live `animLength`.

    This is the generic alternative to:
      - Static animLength lookup in csab_catalog.json (ambiguous for shared-duration CSABs)
      - Actor-specific pool-index tables (e.g. En_Ko's sEnKoCsabTable @ 0x0052bc24)

    Flow:
      1. resolve() calls _get_zar_dir() which scans ObjectCtx for the actor's objectId
         and reads/parses the ZAR header from RAM.
      2. For each CSAB in the ZAR, read duration from csab_data+0x28 (u32+1).
      3. Match against animLength (within ±1 tolerance for float rounding).
      4. If still ambiguous, optionally walk the live anim-player pointer to read the
         currently-bound CSAB address and match against ZAR file data ptrs.
    """

    def __init__(self, r: Rpc):
        self._r       = r
        self._scanner = ObjectCtxScanner(r)
        self._zar_cache: dict[int, Optional[ZarDir]] = {}  # objectId → ZarDir | None
        self._zar_base: dict[int, int] = {}                # objectId → ZAR RAM base

    # ------------------------------------------------------------------
    # Public API
    # ------------------------------------------------------------------

    def resolve(self, actor_id: int, object_id: int, anim_length: float,
                actor_addr: int, anim_ctrl_off: Optional[int] = None) -> dict:
        """
        Resolve the CSAB name for the given actor.

        Args:
          actor_id:      numeric OoT3D actor ID
          object_id:     objectId from the actor's ActorProfile (may be -1 = unknown)
          anim_length:   animLength float read from live RAM (the CSAB frame count)
          actor_addr:    actor RAM address (used for anim-player ptr disambiguation)
          anim_ctrl_off: offset S into the actor where the skeleton-ptr lives (from
                         oracle_export.find_anim_ctrl); used for fallback disambiguation.

        Returns:
          {
            "name":       str | None,    # exact CSAB name; None if ambiguous or not found
            "ambiguous":  bool,
            "candidates": [str],         # list of matching CSAB names
            "method":     str,           # "zar_ram" | "anim_player" | "miss"
            "zar_base":   str,           # hex RAM address of the ZAR (or "")
          }
        """
        if object_id <= 0:
            return self._miss("unknown objectId")

        zar_dir = self._get_zar_dir(object_id)
        if zar_dir is None:
            return self._miss(f"ZAR not found in ObjectCtx for objectId=0x{object_id:X}")

        zar_base = self._zar_base.get(object_id, 0)
        candidates = self._match_by_duration(zar_dir, zar_base, anim_length)

        if len(candidates) == 1:
            return {
                "name": candidates[0]["name"],
                "ambiguous": False,
                "candidates": [candidates[0]["name"]],
                "method": "zar_ram",
                "zar_base": f"{zar_base:#x}",
            }
        if not candidates:
            return self._miss(f"no CSAB with animLength={anim_length:.1f} in ZAR obj=0x{object_id:X}",
                              zar_base)

        # Ambiguous — try to disambiguate via live anim-player CSAB pointer
        if anim_ctrl_off is not None:
            resolved = self._disambiguate_by_animplayer(
                actor_addr, anim_ctrl_off, candidates, zar_base)
            if resolved is not None:
                return {
                    "name": resolved,
                    "ambiguous": False,
                    "candidates": [c["name"] for c in candidates],
                    "method": "anim_player",
                    "zar_base": f"{zar_base:#x}",
                }

        return {
            "name": None,
            "ambiguous": True,
            "candidates": [c["name"] for c in candidates],
            "method": "zar_ram",
            "zar_base": f"{zar_base:#x}",
        }

    def resolve_from_actor(self, actor: dict, anim_ctrl_off: Optional[int] = None,
                           anim_length: Optional[float] = None) -> dict:
        """
        Convenience wrapper: actor dict is from actors.py `read_actor` / oracle_export.
        Looks up objectId via the overlay table automatically.
        """
        actor_id  = actor["id"]
        actor_addr = actor["addr"]
        prof = profile_for(self._r, actor_id)
        object_id = prof["objectId"] if prof else -1
        al = anim_length if anim_length is not None else 0.0
        return self.resolve(actor_id, object_id, al, actor_addr, anim_ctrl_off)

    # ------------------------------------------------------------------
    # Internal: ZAR directory reading from RAM
    # ------------------------------------------------------------------

    def _get_zar_dir(self, object_id: int) -> Optional[ZarDir]:
        """Return parsed ZarDir for object_id's ZAR, caching the result."""
        if object_id in self._zar_cache:
            return self._zar_cache[object_id]

        zar_ptr = self._scanner.find_zar_ptr(object_id)
        if zar_ptr is None:
            self._zar_cache[object_id] = None
            return None

        try:
            # Read just the ZAR header (first 0x18 bytes) to get sizes/offsets.
            hdr = self._r.read(zar_ptr, 0x18)
            if hdr[0:4] != b"ZAR\x01":
                self._zar_cache[object_id] = None
                return None

            total_size = _u32(hdr, 0x04)
            # Cap read at a reasonable max (16 MB) to guard against garbage data.
            if total_size < 8 or total_size > 0x1000000:
                self._zar_cache[object_id] = None
                return None

            # We only need the directory, not all file data.  Read only up to the
            # end of the name strings, which live before the data section.
            # Heuristic: read min(total_size, 0x4000) bytes for the directory.
            dir_read = min(total_size, 0x4000)
            zar_data = self._r.read(zar_ptr, dir_read)
            zd = ZarDir(zar_data)

            self._zar_cache[object_id] = zd
            self._zar_base[object_id]  = zar_ptr
            return zd
        except Exception:
            self._zar_cache[object_id] = None
            return None

    # ------------------------------------------------------------------
    # Internal: duration matching
    # ------------------------------------------------------------------

    def _match_by_duration(self, zar_dir: ZarDir, zar_base: int,
                           anim_length: float) -> list[dict]:
        """
        For each CSAB in the ZAR, read its duration from RAM and return entries whose
        duration matches anim_length (within ±0.5 tolerance = rounding of float→int).
        """
        target = int(round(anim_length))
        matches = []
        for f in zar_dir.csab_entries():
            dur = self._read_csab_duration(zar_base, f["data_off"])
            if dur is not None and abs(dur - target) <= 1:
                matches.append({
                    "name":     os.path.splitext(os.path.basename(f["name"]))[0],
                    "duration": dur,
                    "data_off": f["data_off"],
                    "index":    f["index"],
                })
        return matches

    def _read_csab_duration(self, zar_base: int, file_data_off: int) -> Optional[int]:
        """Read the CSAB duration (frameCount) from RAM."""
        addr = zar_base + file_data_off
        if not (ARENA_LO <= addr < ARENA_HI):
            return None
        try:
            raw = self._r.read(addr, CSAB_DURATION_OFF + 4)
            if raw[0:4] != b"csab":
                return None
            return _u32(raw, CSAB_DURATION_OFF) + 1
        except Exception:
            return None

    # ------------------------------------------------------------------
    # Internal: anim-player CSAB-ptr disambiguation
    # ------------------------------------------------------------------

    def _disambiguate_by_animplayer(self, actor_addr: int, anim_ctrl_off: int,
                                    candidates: list[dict], zar_base: int) -> Optional[str]:
        """
        Walk actor+anim_ctrl_off+CTRL_ANIMPLAYER_REL (ptr to anim-player obj, vtable
        0x004EC018) and try to match the currently-bound CSAB address against the candidate
        list.  Returns the matching CSAB name, or None if disambiguation fails.

        Note: this pointer is transient (updated per-frame).  It is only valid if the
        oracle is running and the actor is being updated (i.e. Link is within ~400 units).
        """
        try:
            animplayer_ptr_addr = actor_addr + anim_ctrl_off + CTRL_ANIMPLAYER_REL
            ap_ptr = self._r.read32(animplayer_ptr_addr)
            if not (ARENA_LO <= ap_ptr < ARENA_HI):
                return None
            # Anim-player object layout (vtable 0x4EC018):
            # The object holds an array of per-bone/track objects followed by a pointer
            # to the active CSAB data. The direct CSAB data pointer is NOT at a fixed
            # offset — but we know from the En_Ko analysis that the active CSAB data
            # lives at `csab_zar_file_base = zar_base + file_data_off` for one of the
            # candidates. We can attempt to find a pointer-sized value in the anim-player
            # object that matches one of the candidate addresses.
            #
            # Scan the first 0x80 bytes of the anim-player object for a pointer that
            # hits one of the candidate CSAB data addresses.
            ap_data = self._r.read(ap_ptr, 0x80)
            for c in candidates:
                target_addr = zar_base + c["data_off"]
                for off in range(0, 0x80 - 3, 4):
                    val = _u32(ap_data, off)
                    if val == target_addr:
                        return c["name"]
        except Exception:
            pass
        return None

    # ------------------------------------------------------------------
    # Internal helpers
    # ------------------------------------------------------------------

    @staticmethod
    def _miss(reason: str, zar_base: int = 0) -> dict:
        return {
            "name": None,
            "ambiguous": False,
            "candidates": [],
            "method": "miss",
            "zar_base": f"{zar_base:#x}" if zar_base else "",
            "_miss_reason": reason,
        }


# ---------------------------------------------------------------------------
# Standalone CLI — list all live actors with live-resolved CSAB name
# ---------------------------------------------------------------------------

def main():
    import argparse
    ap = argparse.ArgumentParser(
        description="Show live OoT3D actors with CSAB names resolved via ZAR RAM parsing")
    ap.add_argument("--slots", action="store_true", help="Dump ObjectCtx slots and exit")
    ap.add_argument("--actor", type=lambda x: int(x, 0),
                    help="Only show actors with this ID (decimal or hex)")
    ap.add_argument("--json", action="store_true", help="Emit JSON instead of a table")
    args = ap.parse_args()

    r = Rpc()
    resolver = LiveCsabResolver(r)

    if args.slots:
        scanner = ObjectCtxScanner(r)
        slots = scanner.dump_slots()
        print(f"ObjectCtx slots (PlayState+{OBJCTX_SLOT_BASE:#x}, stride={SLOT_STRIDE:#x}):")
        for s in slots:
            print(f"  slot {s['slot']:2d} @ {s['addr']}  objectId=0x{s['objectId']:04X}"
                  f"  data_ptr={s['data_ptr']}")
        return

    # Import find_anim_ctrl from oracle_export for the full pipeline
    sys.path.insert(0, os.path.dirname(__file__))
    try:
        from oracle_export import find_anim_ctrl, read_anim, inst_size, ACTOR_NAMES
    except ImportError:
        find_anim_ctrl = read_anim = inst_size = None
        ACTOR_NAMES = {}

    info  = enumerate_actors(r)
    rows  = []

    for cat, (cnt, actors) in sorted(info["cats"].items()):
        for a in actors:
            if args.actor is not None and a["id"] != args.actor:
                continue
            prof      = profile_for(r, a["id"])
            object_id = prof["objectId"] if prof else -1

            anim    = None
            ctrl_s  = None
            if find_anim_ctrl is not None and inst_size is not None:
                sz = inst_size(r, a["id"])
                ctrl_s, data = find_anim_ctrl(r, a["addr"], sz)
                if ctrl_s is not None:
                    anim = read_anim(data, ctrl_s)

            al = anim["animLength"] if anim else 0.0

            csab_res = resolver.resolve(
                actor_id=a["id"],
                object_id=object_id,
                anim_length=al,
                actor_addr=a["addr"],
                anim_ctrl_off=ctrl_s,
            ) if al > 0 else {"name": None, "ambiguous": False, "candidates": [],
                               "method": "no_anim", "zar_base": ""}

            rows.append({
                "addr":      f"{a['addr']:#x}",
                "id":        a["id"],
                "name":      ACTOR_NAMES.get(a["id"], f"id{a['id']}"),
                "objectId":  f"0x{object_id:04X}" if object_id >= 0 else "?",
                "animLen":   round(al, 2),
                "csab":      csab_res,
                "pos":       [round(p, 1) for p in a["pos"]],
            })

    if args.json:
        import json
        print(json.dumps({"scene": info["scene"], "actors": rows}, indent=2))
        return

    print(f"scene={info['scene']}  actors={len(rows)}")
    print(f"{'addr':>10} {'id':>4} {'name':<16} {'objId':>6} {'len':>6}  "
          f"{'csab_name':<32}  {'method':<12}  pos")
    for row in rows:
        cr   = row["csab"]
        aln  = f"{row['animLen']:6.1f}" if row["animLen"] > 0 else "     -"
        if cr["method"] == "no_anim":
            cname = "-"
        elif cr["name"]:
            cname = cr["name"]
        elif cr["ambiguous"]:
            cands = "|".join(cr["candidates"][:2])
            if len(cr["candidates"]) > 2:
                cands += "..."
            cname = f"?({cands})"
        else:
            reason = cr.get("_miss_reason", "?")
            cname = f"!{reason[:20]}"
        px, py, pz = row["pos"]
        print(f"{row['addr']:>10} {row['id']:4d} {row['name']:<16} {row['objectId']:>6} "
              f"{aln}  {cname:<32}  {cr['method']:<12}  ({px:7.1f},{py:6.1f},{pz:7.1f})")


if __name__ == "__main__":
    main()
