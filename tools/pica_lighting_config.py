#!/usr/bin/env python3
"""The PICA lighting-configuration word builder recovered from OoT3D `FUN_0040cdd8`.

`FUN_0040cdd8` (`oot3d-decomp/build/decomp/0040cdd8.c`, 592 bytes) takes a 0x1a0-ish runtime
lighting object and emits a 16-word command packet. Three of its outputs are the words the host
eventually has to reproduce to choose a fragment-lighting evaluation, and until now they were only
described in prose:

* `config0` (packet word 6) — a bitfield built from the object's mode bytes, OR'd with the
  unconditional `0x80000400`.
* `config1` (packet word 8, the decomp's `uVar5`) — starts at `0xff04ffff` with the top three mode
  bits folded in, then a loop over eight slots CLEARS bits where a per-slot enable byte is set.
* the slot map and light-enable mask, which the eight-slot loop also produces.

Why this is worth executing rather than transcribing: the Gravekeeper's Hut fixture records
`config0=0x80000400`, `config1=0xff7fffff` and `light_enable=0x00000010` as *observed* values, taken
from the oracle's own live registers. This module recomputes all three from the decompiled source and
the recorded input bytes. If it reproduced them, the builder is understood well enough to port; if it
did not, the prose was wrong. `tests/test_pica_lighting_config.py` runs exactly that check, so the
claim cannot rot into a comment.

`param_1` is the decomp's `byte *` input. Its field offsets below are the literal ones the decompiled
C indexes; nothing here is inferred from the capture. The object's *producer* is still untyped -- see
`docs/fragment_lighting.md` -- so this models the builder, not the transport.
"""

from __future__ import annotations

from dataclasses import dataclass

# Offsets `FUN_0040cdd8` indexes on its `byte *param_1` input.
SLOT_ENABLE_BASE = 0x164  # eight bytes, one per light slot; non-zero means "this slot has a light"
SLOT_FIELD_BASES = (0x16C, 0x174, 0x17C)  # per-slot flag bytes whose set bits get CLEARED in config1
MODE_SPOT = 0x18F  # iVar1 -> config1 bit 0x10
MODE_SPOT_INDEX = 0x190  # iVar2 -> config1 bit 0x11
MODE_LUT_SELECT = 0x185  # iVar3 -> config1 bit 19 (decomp shift 0x13)
MODE_LUT_ENABLE = 0x191  # 0 -> config1 bits 0x14..0x16 = 7, non-zero -> 0
CONFIG0_MODE_BASE = 0x184  # through 0x18E; every byte here feeds config0
CONFIG0_UNCONDITIONAL = 0x80000400
CONFIG1_BASE = 0xFF04FFFF
SLOT_COUNT = 8

# config0's bit assignments, straight out of the decomp's `param_2[6]` expression.
CONFIG0_BITS = {
    0x185: 2,
    0x184: 4,
    0x189: 0x10,
    0x18A: 0x11,
    0x18C: 0x12,
    0x18B: 0x13,
    0x188: 0x16,
    0x186: 0x18,
    0x18E: 0x1B,
    0x187: 0x1C,
}
CONFIG0_SHADOW_GATE_OFFSET = 0x187  # bit 0x1E is set only when this is set AND 0x18D is clear
CONFIG0_SHADOW_INHIBIT_OFFSET = 0x18D

# Size of one expanded per-material lighting-configuration object, and the stride between
# consecutive ones. Derived from the LIVE oracle, not from the file layout: the object lives at
# `CmbRenderer + 0x400 + material_index * STRIDE` (the record maps CMB `+0x00` to
# `CmbRenderer + 0x400`), and 0x4C8 is both the length the delivery step copies and the stride that
# makes consecutive slots' contents differ. This is NOT the file's material entry, which is 0x15C
# (OoT3D) / 0x16C (MM3D) -- the file entry expands into this struct.
LIGHTING_OBJECT_SIZE = 0x4C8
LIGHTING_OBJECT_STRIDE = 0x4C8


def _clamped_inverse(value: int) -> int:
    """`1 - value`, floored at 0 — the decomp's `1 - (uint)x` with its `if (1 < x) iVar = 0` guard."""
    if value > 1:
        return 0
    return 1 - value


@dataclass(frozen=True)
class LightingConfigPacket:
    """The three host-relevant outputs plus the slot bookkeeping they are derived from."""

    config0: int
    config1: int
    light_enable: int
    slot_map: int
    light_count: int

    def as_observed_words(self) -> dict[str, int]:
        return {
            "config0": self.config0,
            "config1": self.config1,
            "light_enable": self.light_enable,
        }


def build_lighting_config(lighting: bytes | bytearray | dict[int, int]) -> LightingConfigPacket:
    """Run the recovered `FUN_0040cdd8` configuration build over a lighting object.

    `lighting` is the runtime object: either raw bytes (indexed by the offsets above) or a sparse
    `{offset: byte}` mapping, which is how a capture records the fields that are known.
    """
    def byte_at(offset: int) -> int:
        if isinstance(lighting, dict):
            return lighting.get(offset, 0) & 0xFF
        return lighting[offset] & 0xFF

    # config1: the four mode bits, then the eight-slot loop that clears bits for set flags.
    config1 = CONFIG1_BASE
    config1 |= _clamped_inverse(byte_at(MODE_SPOT)) << 0x10
    config1 |= _clamped_inverse(byte_at(MODE_SPOT_INDEX)) << 0x11
    config1 |= _clamped_inverse(byte_at(MODE_LUT_SELECT)) << 19
    config1 |= (7 if byte_at(MODE_LUT_ENABLE) == 0 else 0) << 0x14

    # The loop's `uVar13` is the PICA light-enable mask (occupied slot index shifted by the running
    # count), and it lands in packet word 0xC. The SLOT MAP is a different value: `param_2[2]`,
    # assembled from the object's own first three bytes. Conflating the two is easy because for the Hut
    # fixture both happen to be small, and the wrong one still reproduces 0x10.
    light_enable = 0
    slot_map = 0
    light_count = 0
    for slot in range(SLOT_COUNT):
        if byte_at(SLOT_ENABLE_BASE + slot) == 0:
            continue
        if byte_at(SLOT_FIELD_BASES[0] + slot):
            config1 &= ~(1 << (slot & 0xFF))
        if byte_at(SLOT_FIELD_BASES[1] + slot):
            config1 &= ~(1 << ((slot + 8) & 0xFF))
        if byte_at(SLOT_FIELD_BASES[2] + slot):
            config1 &= ~(1 << ((slot + 0x18) & 0xFF))
        # The decomp shifts by the count BEFORE the increment (`uVar13 |= uVar6 << ((uVar14 & 0x3f) << 2)`
        # runs before `uVar14 = uVar15` with `uVar15 = uVar14 + 1`), so the first occupied slot lands in
        # nibble 0. Incrementing first would shift every entry one slot along.
        light_enable |= slot << ((light_count & 0x3F) << 2)
        light_count += 1

    # config0: the mode bitfield, the shadow gate, then the unconditional OR.
    config0 = 0
    for offset, bit in CONFIG0_BITS.items():
        if byte_at(offset):
            config0 |= 1 << bit
    if byte_at(CONFIG0_SHADOW_GATE_OFFSET) and not byte_at(CONFIG0_SHADOW_INHIBIT_OFFSET):
        config0 |= 1 << 0x1E
    config0 |= CONFIG0_UNCONDITIONAL

    # param_2[2]: the object supplies the slot mapping directly in its first three bytes.
    slot_map = byte_at(0) | (byte_at(1) << 10) | (byte_at(2) << 20)
    return LightingConfigPacket(config0, config1, light_enable, slot_map, light_count)


# --- The runtime lighting object: constructor and descriptor feed -------------------------
#
# `FUN_004c6264` (252 bytes) CONSTRUCTS the object the builder reads: it zeroes four 8-byte light
# slot planes at +0x160/+0x168/+0x170/+0x178 (so the whole +0x160..+0x17F block the builder indexes
# into is cleared), zeroes the mode block, and sets exactly two mode bytes to 1.
#
# `FUN_003fa5d0` (1,608 bytes) and `FUN_003fa34c` (672 bytes) then set the eight slot-enable bytes at
# +0x164..+0x16B for occupied slots, which is the `+0x164 = 1` the fixture shows.
#
# `FUN_004c6364` (224 bytes) is the DESCRIPTOR FEED: given the nested descriptor it writes the mode
# bytes the builder reads, and the shipping parser already retains every field it consumes.
CONSTRUCTOR_MODE_DEFAULTS: dict[int, int] = {
    0x18A: 1,
    0x18D: 1,
    0x190: 0,
}
# Zeroed mode block: every byte the builder indexes that the constructor does not set to 1.
CONSTRUCTOR_ZEROED_MODE: tuple[int, ...] = tuple(
    offset for offset in range(0x180, 0x19D) if offset not in CONSTRUCTOR_MODE_DEFAULTS
)


def construct_lighting_object() -> dict[int, int]:
    """The object as `FUN_004c6264` leaves it, before any descriptor is applied.

    Only the bytes the builder reads are modelled; the slot planes are all zero, which is what the
    constructor's four-plane loop establishes for +0x160..+0x17F.
    """
    lighting: dict[int, int] = {offset: 0 for offset in range(0x160, 0x1A0)}
    lighting.update(CONSTRUCTOR_MODE_DEFAULTS)
    return lighting


# `FUN_004c6364`'s descriptor -> mode-byte map, in the decomp's own order. `param_1` is the runtime
# object; `param_2` is the nested descriptor the shipping parser keeps as
# `CmbMaterial::FragmentLightingDescriptor`. The `func_0x004c7xxx` helpers are bounded enum
# conversions, so each contributes a presence/absence byte rather than a raw descriptor word.
DESCRIPTOR_MODE_MAP: dict[int, str] = {
    0x189: "enum_1c",
    0x18B: "enum_12",
    0x191: "flag_14",
    0x192: "flag_1e",
    0x193: "flag_1f",
    0x195: "flag_23",
    0x199: "enabled",
}
# Written through an enum helper, so the byte is "did this descriptor field select a valid value",
# not the field's own numeric encoding.
DESCRIPTOR_MODE_VIA_ENUM_HELPER: dict[int, str] = {
    0x63: "enum_10",
    0x62: "enum_18",
    0x66: "enum_26",
    0x19A: "scale",
}


def apply_descriptor(lighting: dict[int, int], descriptor: dict[str, int | bool]) -> dict[int, int]:
    """Apply `FUN_004c6364` to a constructed object, returning a new mapping.

    Only the boolean-ish fields are carried through faithfully: the four `func_0x004c7xxx` helpers
    are bounded enum conversions whose exact tables live in the 3DS material compiler and are NOT
    recovered here, so those outputs are left at the constructor's value rather than invented. That
    omission is deliberate and is why `config0` does not yet reproduce the fixture -- see the test.
    """
    updated = dict(lighting)
    for offset, field in DESCRIPTOR_MODE_MAP.items():
        updated[offset] = 1 if descriptor.get(field) else 0
    for offset in DESCRIPTOR_MODE_VIA_ENUM_HELPER:
        updated.setdefault(offset, 0)
    return updated


# The Gravekeeper's Hut entrance 0x030d draw 4 fixture, as recorded by the oracle's own register
# capture: `config0=0x80000400`, `config1=0xff7fffff`, `light_enable=0x00000010`, slot mapping
# [0,1,0,0,0,0,0,0], max_light_index=1. Its input object had every +0x184..+0x190 byte zero and
# +0x164 == 0x00000101 -- i.e. light slots 0 and 1 occupied, nothing else.
HUT_LIGHTING_OBJECT: dict[int, int] = {
    SLOT_ENABLE_BASE + 0: 0x01,
    SLOT_ENABLE_BASE + 1: 0x01,
}
HUT_OBSERVED = {
    "config0": 0x80000400,
    "config1": 0xFF7FFFFF,
    "light_enable": 0x00000010,
}
