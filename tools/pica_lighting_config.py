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

The other half of the module models how the object's mode bytes get there: `CONSTRUCTOR_MODE_DEFAULTS`
is what `FUN_004c6264` leaves, `DESCRIPTOR_MODE_MAP` is what `FUN_004c6364` overwrites. Those two
tables are transcribed from ARM rather than from the decompiled C, because Ghidra renders both
functions' offsets against a base four bytes past `param_1` and the C therefore names `+0x18E` as
`0x18A`. That mistake once predicted the exact inverse of the hardware on two of config0's bits and
still produced a plausible word, which is the whole failure mode this file exists to avoid.

`param_1` is the decomp's `byte *` input. Its field offsets below are the literal ones the decompiled
C indexes; nothing here is inferred from the capture. The object's *producer* is still untyped -- see
`docs/fragment_lighting.md` -- so this models the builder, not the transport.
"""

from __future__ import annotations

from dataclasses import dataclass

# Offsets `FUN_0040cdd8` indexes on its `byte *param_1` input.
SLOT_ENABLE_BASE = 0x164  # eight bytes, one per light slot; non-zero means "this slot has a light"
SLOT_FIELD_BASES = (0x16C, 0x174, 0x17C)  # per-slot flag bytes whose set bits get CLEARED in config1
MODE_SPOT = 0x18F  # iVar1 -> config1 bit 0x10 (disable_lut_d0)
MODE_SPOT_INDEX = 0x190  # iVar2 -> config1 bit 0x11 (disable_lut_d1)
MODE_LUT_SELECT = 0x185  # iVar3 -> config1 bit 19 (disable_lut_fr; decomp shift 0x13)
MODE_LUT_ENABLE = 0x191  # 0 -> config1 bits 0x14..0x16 = 7 (disable_lut_rr/rg/rb), non-zero -> 0
CONFIG0_MODE_BASE = 0x184  # through 0x18E; every byte here feeds config0
CONFIG0_UNCONDITIONAL = 0x80000400  # OR'd outside every conditional (`0x0040cfdc`/`0x0040cfe0`)
CONFIG1_BASE = 0xFF04FFFF  # `0x0040cddc mvn r3, #0xff0000` (0xff00ffff) | `0x0040ce48 orr r2, r2, #0x40000`
SLOT_COUNT = 8

# config0's `param_2[6]` build, read off the ARM at `0x0040cf2c..0x0040cfe0` with the field names
# taken from `Azahar/src/video_core/pica/regs_lighting.h`. The register map is read as a map, not
# transcribed: a wrong bit here does not raise, it produces a clean wrong number.
#
# The builder packs config0 in TWO different ways and collapsing them into one table is a real error,
# because the two produce different words for the same input:
#
# * `CONFIG0_FLAG_BITS` -- the byte is COMPARED and normalised to 0/1 (`cmp`/`movne`), so any
#   non-zero value contributes exactly `1 << bit`. Offsets and ARM:
#     +0x189 -> bit 16 `0x0040cf4c cmp r5, #0` / `0x0040cf5c movne r5, #1` / `0x0040cf68 lsl #16`
#     +0x18A -> bit 17 `0x0040cf60 cmp r3, #0` / `0x0040cf64 movne r3, #1` / `0x0040cf6c lsl #17`
#     +0x18C -> bit 18 `0x0040cf7c cmp r3, #0` / `0x0040cf80 movne r3, #1` / `0x0040cf84 lsl #18`
#     +0x18B -> bit 19 `0x0040cf88 adds r3, r4, #0` / `0x0040cf8c movne r3, #1` / `0x0040cf94 lsl #19`
#     +0x18E -> bit 27 `0x0040cf9c cmp r6, #0` / `0x0040cfb0 movne r3, #1` / `0x0040cfb8 lsl #27`
#
# * `CONFIG0_SHIFTED_BYTES` -- the byte is SHIFTED VERBATIM, so its whole 8 bits land, not one bit.
#   The register map is the proof that these are fields and not flags: bit 4 is a 4-bit
#   `LightingConfig`, bit 22 `bump_selector` and bit 28 `bump_mode` are 2 bits each. Offsets and ARM:
#     +0x185 -> shift 2  `0x0040cf38 ldrb r7, [r0, #0x185]` / `0x0040cf50 orr r5, r6, r7, lsl #2`
#     +0x184 -> shift 4  `0x0040cf40 ldrb r8, [r0, #0x184]` / `0x0040cf54 orr r6, r5, r8, lsl #4`
#     +0x188 -> shift 22 `0x0040cf90 ldrb r4, [r0, #0x188]` / `0x0040cfa0 orr r3, r3, r4, lsl #22`
#     +0x186 -> shift 24 `0x0040cf98 ldrb r5, [r0, #0x186]` / `0x0040cfa8 orr r4, r3, r5, lsl #24`
#     +0x187 -> shift 28 `0x0040cfa4 ldrb r0, [r0, #0x187]` / `0x0040cfc0 orr r3, r3, r0, lsl #28`
#
# The pair the Ghidra base confusion swapped is +0x18A (bit 17, `shadow_secondary`) and +0x18E
# (bit 27, `clamp_highlights`): adjacent in the object, four bytes apart, and the two the constructor's
# mode-byte defaults turn on. Both are confirmed against ARM above.
CONFIG0_FLAG_BITS = {
    0x189: 0x10,  # shadow_primary
    0x18A: 0x11,  # shadow_secondary
    0x18C: 0x12,  # shadow_invert
    0x18B: 0x13,  # shadow_alpha
    0x18E: 0x1B,  # clamp_highlights
}
CONFIG0_SHIFTED_BYTES = {
    0x185: 2,  # enable_primary_alpha / enable_secondary_alpha, then the 4-bit LightingConfig
    0x184: 4,  # LightingConfig (LightingRegs::LightingConfig, 4 bits)
    0x188: 0x16,  # bump_selector (2 bits)
    0x186: 0x18,  # shadow_selector (2 bits)
    0x187: 0x1C,  # bump_mode (2 bits, LightingBumpMode)
}
# config0 bit 0 is `enable_shadow` (Azahar regs_lighting.h:182) and it comes from the OR of two
# bytes, not from either alone: `0x0040cf3c orr r6, r5, r3` (`+0x189` | `+0x18A`) then
# `0x0040cf44 orrs r6, r6, r4` / `0x0040cf48 movne r6, #1` normalise the pair to 1, and
# `0x0040cf50 orr r5, r6, r7, lsl #2` places it at bit 0. The `orrs` folds `+0x18B` into r6 first,
# but `movne` then overwrites r6 with a plain 1, so `+0x18B` has no effect here -- it drives bit 19.
CONFIG0_LOW_BITS_SOURCES = (0x189, 0x18A)
CONFIG0_ENABLE_SHADOW_BIT = 0b01
# config0 bit 1 IS NOT SET BY THIS FUNCTION AT ALL, and that is a fact about the ARM rather than
# about the register map. Every contribution to the `param_2[6]` accumulator is either an immediate
# (`0x80000000`, `0x400`), a whole byte shifted by one of 2/4/16/17/18/19/22/24/28, or the
# normalised 0-or-1 value in r6, which `0x0040cf50` places at bit 0. No shift reaches bit 1 and no
# immediate has it, so it is unreachable. A previous revision of this file emitted `0b11` here and
# called bits 0 and 1 `gamma` and `enable_primary_alpha`; `gamma` is not a field in the register map
# at all, and `enable_primary_alpha` is bit 2 (`regs_lighting.h:183`), fed by `+0x185`'s low bit
# through the `lsl #2` above. Do not reintroduce a second low bit here.

# OPEN: config0 bit 30 (`disable_bump_renorm`, regs_lighting.h:194). NOT ESTABLISHED. Two readings
# of `0x0040cfb4..0x0040cfd8` disagree, and the disagreement is load-bearing:
#
#     0x0040cfb4 cmp   r0, #0            ; r0 = param_1[+0x187] (`bump_mode`); Z = (bump_mode == 0)
#     0x0040cfc4 movne r0, #0            ; MOV without S: does NOT touch the flags
#     0x0040cfc8 moveq r0, #1            ; MOV without S: does NOT touch the flags
#     0x0040cfcc orrs  r0, r0, r4        ; CONDITIONAL on NE, and ORRS *does* write Z
#     0x0040cfd0 movne r0, #0            ; MOV without S
#     0x0040cfd4 moveq r0, #1            ; MOV without S
#     0x0040cfd8 orr   r0, r3, r0, lsl #30
#
# The decomp's `(param_1[0x187] != 0 && param_1[0x18d] == 0) << 0x1e` is the gate below. Reading the
# `orrs` as UNCONDITIONAL -- treating a skipped conditional instruction as if it had written Z --
# yields "bit 30 is a constant 0", which a previous revision of this file asserted as proven. That
# assertion is refutable: on the `bump_mode == 0` path `orrs` is SKIPPED, so Z is still 1 from the
# `cmp`, both `moveq` pairs fire, and `r0` reaches `orr` as 1 -- bit 30 SET. Taken literally the ARM
# says bit 30 is 1 unless (`+0x187 != 0` AND `+0x18D != 0`).
#
# That literal reading is NOT adopted, and the reason is evidence rather than preference: the fixture's
# captured builder input has `+0x187 == 0` and `+0x18D == 0` (its `+0x184..+0x190` words are all
# zero) and the oracle's `config0 = 0x80000400` has bit 30 CLEAR, which the literal reading cannot
# produce -- it would give `0xc0000400`. So either the recorded input and output are not one
# consistent observation of this function, or the literal reading is wrong. Both candidate readings
# agree on every value on record, so nothing observable separates them yet.
#
# Settle it with one oracle capture, not with more reading: force a material whose `bump_mode`
# (`+0x187`) is non-zero while `+0x18D` is zero. The gate predicts bit 30 set, the literal reading
# predicts it clear, and the recorded words decide. Until then the gate is kept because it is the
# reading the observation supports, NOT because it has been proven.
CONFIG0_BUMP_RENORM_GATE_OFFSET = 0x187  # `bump_mode`, NOT a shadow gate despite the decomp's naming
CONFIG0_BUMP_RENORM_INHIBIT_OFFSET = 0x18D  # read by `0x0040cfbc ldrsb r4, [sl, #0x8d]`

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

    # config0: the low-bit OR, the normalised flag bits, the verbatim shifted bytes, then the
    # unconditional `orr r0, r0, #0x80000000` / `orr r0, r0, #0x400` pair.
    config0 = 0
    if any(byte_at(offset) for offset in CONFIG0_LOW_BITS_SOURCES):
        config0 |= CONFIG0_ENABLE_SHADOW_BIT  # `0x0040cf50 orr r5, r6, r7, lsl #2` puts it at bit 0
    for offset, bit in CONFIG0_FLAG_BITS.items():
        if byte_at(offset):
            config0 |= 1 << bit
    for offset, shift in CONFIG0_SHIFTED_BYTES.items():
        config0 |= byte_at(offset) << shift
    if byte_at(CONFIG0_BUMP_RENORM_GATE_OFFSET) and not byte_at(CONFIG0_BUMP_RENORM_INHIBIT_OFFSET):
        config0 |= 1 << 30
    config0 |= CONFIG0_UNCONDITIONAL

    # param_2[2]: the object supplies the slot mapping directly in its first three bytes.
    slot_map = byte_at(0) | (byte_at(1) << 10) | (byte_at(2) << 20)
    return LightingConfigPacket(config0, config1, light_enable, slot_map, light_count)


# --- The runtime lighting object: constructor and descriptor feed -------------------------
#
# `FUN_004c6264` (252 bytes) CONSTRUCTS the object the builder reads: it zeroes four 8-byte light
# slot planes at +0x164/+0x16C/+0x174/+0x17C (so the whole +0x164..+0x183 block the builder indexes
# into is cleared), zeroes the mode block, and sets exactly two mode bytes to 1.
#
# `FUN_003fa5d0` (1,608 bytes) and `FUN_003fa34c` (672 bytes) then set the eight slot-enable bytes at
# +0x164..+0x16B for occupied slots, which is the `+0x164 = 1` the fixture shows.
#
# `FUN_004c6364` (224 bytes) is the DESCRIPTOR FEED: given the nested descriptor it writes the mode
# bytes the builder reads, and the shipping parser already retains every field it consumes.
#
# THE TWO NON-ZERO DEFAULTS ARE `+0x18E` AND `+0x191`, and that is read off the ARM, not off the
# decompiled C. The constructor's mode-block stores are a run of `strb` at +0x100 offsets with `r6`
# (which is 0, from `0x004c6268 mov r6, #0`) for every byte except two written with `r1` (which is 1,
# from `0x004c6290 mov r1, #1`):
#
#     004c62ac  strb  r6, [r0, #0x18a]
#     004c62b8  strb  r6, [r0, #0x18d]
#     004c62bc  strb  r1, [r0, #0x18e]     <- 1
#     004c62c4  strb  r6, [r0, #0x190]
#     004c62c8  strb  r1, [r0, #0x191]     <- 1
#
# Ghidra's `FUN_004c6264` body renders the mode block against `pcVar1`, which is
# `FUN_00350820(param_1 + 4, ...)` -- four bytes past `param_1` -- so its `pcVar1[0x18a]` is
# `param_1[0x18E]`. Reading the C literally is how the earlier `{0x18A: 1, 0x18D: 1, 0x190: 0}`
# happened, and it predicted the exact inverse of the hardware on two of config0's bits while still
# producing a plausible-looking word.
CONSTRUCTOR_MODE_DEFAULTS: dict[int, int] = {
    0x18E: 1,  # config0 bit 0x1B, `clamp_highlights` (Azahar regs_lighting.h:192)
    0x191: 1,  # config1 bits 20..22, `disable_lut_rr/rg/rb`; inverted by the descriptor feed
}
# Zeroed mode block: every byte the builder indexes that the constructor does not set to 1.
CONSTRUCTOR_ZEROED_MODE: tuple[int, ...] = tuple(
    offset for offset in range(0x180, 0x19D) if offset not in CONSTRUCTOR_MODE_DEFAULTS
)


def construct_lighting_object() -> dict[int, int]:
    """The object as `FUN_004c6264` leaves it, before any descriptor is applied.

    Only the bytes the builder reads are modelled; the slot planes are all zero, which is what the
    constructor's four-plane loop establishes for +0x164..+0x183.

    As it stands this object is NOT the configuration the oracle programmed. `+0x18E` makes
    `config0` bit 27 (`clamp_highlights`) set where every recorded word has it clear, and `+0x191`
    leaves `config1` bits 20..22 clear where the recorded word has all three set. Both are real
    ARM reads, so both are the constructor's own defaults rather than transcription errors -- see
    the tests for what does and does not reconcile them.
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
# not the field's own numeric encoding. The offsets here are the ARM destinations of each helper's
# return, read off `FUN_004c6364` -- an earlier revision of this file carried `0x63`/`0x62`/`0x66`
# here, which are Ghidra offsets from an unrelated base and are nowhere near the mode block:
#   004c6398  strb  r0, [r4, #0x198]   <- enum_26  (FUN_004c7ce8)
#   004c63a8  strb  r0, [r4, #0x19a]   <- scale    (FUN_004c7d60)
#   004c63b8  strb  r0, [r4, #0x18c]   <- enum_10  (FUN_004c7eb8)
#   004c63e8  strb  r0, [r4, #0x188]   <- enum_18  (FUN_004c7e18)
# The behaviour is unchanged (all four constructor defaults are already 0), but the destinations now
# name bytes the builder actually reads, so they can be checked against `CONFIG0_BITS`.
DESCRIPTOR_MODE_VIA_ENUM_HELPER: dict[int, str] = {
    0x18C: "enum_10",
    0x188: "enum_18",
    0x198: "enum_26",
    0x19A: "scale",
}


def apply_descriptor(lighting: dict[int, int], descriptor: dict[str, int | bool]) -> dict[int, int]:
    """Apply `FUN_004c6364` to a constructed object, returning a new mapping.

    Only the boolean-ish fields are carried through faithfully: the four `func_0x004c7xxx` helpers
    are bounded enum conversions whose exact tables live in the 3DS material compiler and are NOT
    recovered here, so those outputs are left at the constructor's value rather than invented. The
    Hut's recorded descriptor has every one of those fields at its zero/default branch, so the
    omission costs nothing for this fixture.

    This feed is what turns the constructor's object into the recorded configuration: the observed
    `config1 = 0xff7fffff` needs `+0x191 == 0`, and the constructor sets that byte to 1. Applying
    the descriptor overwrites it (`0x004c63d0 ldrb r1, [r0, #0x14]` / `0x004c63dc strb r1, [r4,
    #0x191]`, and the recorded descriptor's `+0x14` is 0), so `config1` reproduces. `config0` still
    does not, by exactly bit 27 -- see the test that records that.
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
#
# That "+0x184..+0x190 all zero" is the fixture's OWN captured builder input, read at
# `FUN_0040cdd8`'s entry, so it includes `+0x18E` = 0. `CONSTRUCTOR_MODE_DEFAULTS` says `+0x18E` = 1
# and nothing in the ARM image writes that byte again. The two facts are compatible only if the
# builder's input is not the constructor's output, which is the unresolved 0x1CC-vs-0x4C8 stride
# conflict in `docs/fragment_lighting.md`. The fixture is unaffected by the constructor defaults
# because it supplies its own bytes, and the three observed words are reproduced from them.
HUT_LIGHTING_OBJECT: dict[int, int] = {
    SLOT_ENABLE_BASE + 0: 0x01,
    SLOT_ENABLE_BASE + 1: 0x01,
}
HUT_OBSERVED = {
    "config0": 0x80000400,
    "config1": 0xFF7FFFFF,
    "light_enable": 0x00000010,
}
