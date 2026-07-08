#!/usr/bin/env python3
"""Static scan of gActorOverlayTable -> ActorProfile.objectId, looking for the
actor(s) whose declared objectId matches one of spot99's 3 differing
room-object-bank slots (180, 32324, 11) vs spot00's (964, 31572, 14).

Pure static read of build/code.bin (no live harness needed) - the overlay
table and ActorProfile structs are compile-time .data/.rodata, per
docs/actor_layout.md. file_offset = VA - LOAD_BASE.
"""
import struct

LOAD_BASE = 0x00100000
CODE = "./build/code.bin"
OVLTABLE = 0x0050CD84
STRIDE = 0x20
PROFILE_PTR_OFF = 0x14

TARGETS = {180, 32324, 11}
SPOT00_SIDE = {964, 31572, 14}
SHARED = {1, 258, 0}

with open(CODE, "rb") as f:
    data = f.read()

def va2off(va):
    return va - LOAD_BASE

def read_u32(va):
    off = va2off(va)
    if off < 0 or off + 4 > len(data):
        return None
    return struct.unpack_from("<I", data, off)[0]

def read_i16(va):
    off = va2off(va)
    if off < 0 or off + 2 > len(data):
        return None
    return struct.unpack_from("<h", data, off)[0]

CODE_LO = LOAD_BASE
CODE_HI = LOAD_BASE + len(data)

hits = []
MAX_ID = 700
for actor_id in range(MAX_ID):
    entry_va = OVLTABLE + actor_id * STRIDE
    prof_ptr = read_u32(entry_va + PROFILE_PTR_OFF)
    if prof_ptr is None:
        break
    if not (CODE_LO <= prof_ptr < CODE_HI):
        continue
    obj_id = read_i16(prof_ptr + 0x08)
    if obj_id is None:
        continue
    cat = None
    cat_off = va2off(prof_ptr + 0x02)
    if 0 <= cat_off < len(data):
        cat = data[cat_off]
    init_fn   = read_u32(prof_ptr + 0x10)
    destroy_fn= read_u32(prof_ptr + 0x14)
    update_fn = read_u32(prof_ptr + 0x18)
    draw_fn   = read_u32(prof_ptr + 0x1C)
    entry = (actor_id, obj_id, cat, prof_ptr, init_fn, destroy_fn, update_fn, draw_fn)
    if obj_id in TARGETS:
        hits.append(entry)

print(f"scanned actor ids 0..{MAX_ID-1}, table base=0x{OVLTABLE:08x}")
print(f"\nactors whose ActorProfile.objectId matches a spot99-only slot {TARGETS}:")
for (aid, obj, cat, prof, init_fn, destroy_fn, update_fn, draw_fn) in hits:
    print(f"  actorId={aid:4d}  objectId={obj:6d} (0x{obj & 0xffff:04x})  category={cat}  "
          f"profile=0x{prof:08x}  init=0x{init_fn:08x}  destroy=0x{destroy_fn:08x}  "
          f"update=0x{update_fn:08x}  draw=0x{draw_fn:08x}")
if not hits:
    print("  (none found in range; consider widening MAX_ID or checking table stride/offset)")
