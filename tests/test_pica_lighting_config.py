#!/usr/bin/env python3
"""Check the recovered `FUN_0040cdd8` configuration builder against the oracle's recorded capture.

The claim under test is not "the builder does something" but "the builder reproduces the words the
oracle actually wrote". Three independent observed values have to come out of the decompiled source:

    config0      = 0x80000400
    config1      = 0xff7fffff
    light_enable = 0x00000010

If any of them does not, the prose in `docs/fragment_lighting.md` is wrong and the configuration
transport cannot be ported from it. The negative cases matter as much: a builder that returned the
right answers for any input would pass the positive test and prove nothing, so the bit-field and the
slot loop are each checked against inputs where they must visibly differ.

The SECOND claim under test is what `FUN_004c6264` and `FUN_004c6364` leave in the object, and it is
recorded here as a contradiction rather than smoothed away. The constructor's two non-zero mode bytes
are `+0x18E` and `+0x191`, not `+0x18A` and `+0x18D` (Ghidra renders both against a base four bytes
past `param_1`). Read correctly, the constructor's defaults alone do NOT produce the recorded
`config0` or `config1`; see `ConstructorDefaultsContradictTheFixture`.
"""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent / "tools"))

from pica_lighting_config import (  # noqa: E402
    CONFIG0_BUMP_RENORM_GATE_OFFSET,
    CONFIG0_ENABLE_SHADOW_BIT,
    CONFIG0_FLAG_BITS,
    CONFIG0_LOW_BITS_SOURCES,
    CONFIG0_SHIFTED_BYTES,
    CONFIG0_UNCONDITIONAL,
    DESCRIPTOR_MODE_MAP,
    DESCRIPTOR_MODE_VIA_ENUM_HELPER,
    HUT_LIGHTING_OBJECT,
    HUT_OBSERVED,
    MODE_LUT_ENABLE,
    MODE_LUT_SELECT,
    MODE_SPOT,
    SLOT_ENABLE_BASE,
    SLOT_FIELD_BASES,
    apply_descriptor,
    build_lighting_config,
    construct_lighting_object,
    LIGHTING_OBJECT_SIZE,
)


class ReproducesTheOracleCapture(unittest.TestCase):
    def test_all_three_observed_words(self) -> None:
        packet = build_lighting_config(HUT_LIGHTING_OBJECT)
        self.assertEqual(packet.config0, HUT_OBSERVED["config0"], f"config0 {packet.config0:#010x}")
        self.assertEqual(packet.config1, HUT_OBSERVED["config1"], f"config1 {packet.config1:#010x}")
        self.assertEqual(
            packet.light_enable, HUT_OBSERVED["light_enable"], f"mask {packet.light_enable:#010x}"
        )

    def test_light_count_and_light_enable(self) -> None:
        packet = build_lighting_config(HUT_LIGHTING_OBJECT)
        self.assertEqual(packet.light_count, 2, "the fixture has two occupied slots")
        # The loop's uVar13: occupied slot index shifted by the running count, so slots 0 and 1 give
        # 0 and 1<<4 -- the recorded light_enable 0x10. This is NOT the slot map, which comes from the
        # object's own first three bytes and is a separate output.
        self.assertEqual(packet.light_enable, 0x10)
        self.assertEqual(packet.slot_map, 0, "an all-zero head of the object maps no slots")

    def test_config0_keeps_its_unconditional_bits_with_no_mode_input(self) -> None:
        """`0x80000400` is OR'd unconditionally, so it survives an all-zero mode object.

        The decompiled expression ends `| 0x80000400` outside every conditional, and the fixture's
        +0x184..+0x190 bytes are all zero -- so those two bits are not a converted owner-mask. This is
        the distinction the Hut write-up draws, and it is load-bearing: reading them as a conversion
        would put a material flag in the PICA config word that the guest never derives it from.
        """
        packet = build_lighting_config({})
        self.assertEqual(packet.config0, CONFIG0_UNCONDITIONAL)
        self.assertEqual(packet.config0 & 0x400, 0x400)
        self.assertEqual(packet.config0 & 0x80000000, 0x80000000)


class ConstructorDefaultsContradictTheFixture(unittest.TestCase):
    """`FUN_004c6264`'s defaults, read off ARM, against the oracle's recorded words.

    **These expectations are a swap, not a move.** They previously pinned `config0 = 0x80020400`
    (the fixture plus bit `0x11`) and a constructor-only `config1 = 0xff7fffff`, both of which were
    consequences of reading `CONSTRUCTOR_MODE_DEFAULTS` as `{0x18A: 1, 0x18D: 1, 0x190: 0}`. That
    table is the Ghidra base confusion: its two non-zero entries were really `+0x18E` and `+0x191`.

    The first error was visible -- the tool predicted bit `0x11` set where the hardware has it clear.
    The second was not: leaving `+0x191` at 0 made the constructor reproduce the fixture's `config1`
    *exactly*, which is what made the wrong table look validated. The constructor actually sets
    `+0x191 = 1`, so `config1` bits 20..22 come out clear where the recorded word has all three set.
    An agreement that depended on a byte the constructor sets was never an independent path to the
    observed value; it was a coincidence with a good disguise.
    """

    def test_constructor_defaults_are_exactly_two_bytes(self) -> None:
        self.assertEqual(
            {offset: value for offset, value in construct_lighting_object().items() if value},
            {0x18E: 1, 0x191: 1},
            "the constructor's mode block is 0 everywhere except +0x18E and +0x191",
        )

    def test_config0_contradicts_the_fixture_by_exactly_bit_27(self) -> None:
        """The open word, recorded rather than hidden.

        `+0x18E` maps to `config0` bit `0x1B` = `clamp_highlights`, so a constructor-only object
        yields `0x88000400` where the oracle recorded `0x80000400`. The difference is exactly bit 27
        and nothing else.

        This is a WEAKER gap than the one it replaces. The old mismatch was bit `0x11`, driven by
        `+0x18A`, a byte nothing on the chain writes -- so it was an unexplained difference. Bit 27
        is driven by `+0x18E`, which the constructor sets and which nothing in the recovered chain
        writes either, so the byte is likewise unaccounted for. But the direction is now the honest
        one: the tool no longer claims a bit the hardware has clear.
        """
        packet = build_lighting_config(construct_lighting_object())
        self.assertEqual(packet.config0, 0x88000400)
        self.assertEqual(packet.config0 & ~0x8000000, HUT_OBSERVED["config0"])
        self.assertNotEqual(packet.config0, HUT_OBSERVED["config0"])
        self.assertEqual(
            packet.config0 ^ HUT_OBSERVED["config0"],
            0x8000000,
            "exactly bit 27, `clamp_highlights`, and nothing else",
        )

    def test_config1_contradicts_the_fixture_in_bits_20_to_22(self) -> None:
        """The old `test_config1_needs_no_descriptor_at_all`, inverted, and asserted as a failure.

        `+0x191` is the builder's LUT-enable byte: `0x191 ? 0 : 7 << 20`. The constructor sets it to
        1, so bits 20..22 (`disable_lut_rr/rg/rb`) come out CLEAR, giving `0xff0fffff` where the
        oracle recorded `0xff7fffff`. The old table asserted equality here because it wrongly left
        `+0x191` at 0.
        """
        packet = build_lighting_config(construct_lighting_object())
        self.assertEqual(packet.config1, 0xFF0FFFFF)
        self.assertNotEqual(packet.config1, HUT_OBSERVED["config1"])
        self.assertEqual(
            packet.config1 ^ HUT_OBSERVED["config1"], 0x700000, "exactly bits 20..22, and nothing else"
        )

    def test_the_descriptor_feed_is_what_makes_config1_reachable(self) -> None:
        """The replacement for the independent path the wrong table appeared to provide.

        `FUN_004c6364` overwrites `+0x191` from the descriptor's `flag_14`
        (`0x004c63d0 ldrb r1, [r0, #0x14]` / `0x004c63dc strb r1, [r4, #0x191]`). Applying a
        descriptor with `flag_14` clear is therefore what reproduces the recorded `config1` from the
        constructed object -- one step later than the old claim, and it now rests on a byte the ARM
        actually writes.

        It still does not fix `config0`: bit 27 survives, because nothing writes `+0x18E`.
        """
        fed = apply_descriptor(construct_lighting_object(), {"flag_14": False})
        packet = build_lighting_config(fed)
        self.assertEqual(packet.config1, HUT_OBSERVED["config1"])
        self.assertEqual(packet.config0 ^ HUT_OBSERVED["config0"], 0x8000000)

    def test_no_lights_are_enabled_before_the_slot_writer_runs(self) -> None:
        packet = build_lighting_config(construct_lighting_object())
        self.assertEqual(packet.light_count, 0)
        self.assertEqual(packet.light_enable, 0)


class DescriptorFeedMapsOntoTheBuilderInputs(unittest.TestCase):
    def test_builder_inputs_written_by_the_feed_are_real_builder_inputs(self) -> None:
        """`FUN_004c6364` writes more than the builder consumes; name the difference.

        +0x192, +0x193, +0x195 and +0x199 are runtime flags the builder does not read -- they belong to
        other consumers of the same object. Asserting "every written byte is a builder input" would
        be false, and quietly dropping the extras would hide that the object is shared. So the
        non-builder bytes are named, and the test fails if a byte lands in neither set.
        """
        builder_inputs = {
            0x184, 0x185, 0x186, 0x187, 0x188, 0x189, 0x18A, 0x18B, 0x18C, 0x18D, 0x18E, 0x18F,
            0x190, 0x191,
        }
        other_consumers = {0x192, 0x193, 0x195, 0x198, 0x199, 0x19A}
        for offset in DESCRIPTOR_MODE_MAP:
            self.assertTrue(
                offset in builder_inputs or offset in other_consumers,
                f"+0x{offset:X} is written by FUN_004c6364 but is neither a builder input nor a"
                " declared other-consumer flag",
            )
        # The overlap that matters: the feed must actually cover the mode bytes the builder reads.
        self.assertEqual(
            sorted(set(DESCRIPTOR_MODE_MAP) & builder_inputs), [0x189, 0x18B, 0x191]
        )

    def test_enum_helper_destinations_are_the_arm_stores_not_ghidra_offsets(self) -> None:
        """The four `func_0x004c7xxx` results are stored where the ARM says, not at `0x62`/`0x63`/`0x66`.

        `FUN_004c6364` stores them at `0x004c63b8 -> [r4, #0x18c]`, `0x004c63e8 -> [r4, #0x188]`,
        `0x004c6398 -> [r4, #0x198]` and `0x004c63a8 -> [r4, #0x19a]`. An earlier revision of the tool
        used `0x63`/`0x62`/`0x66`, which are nowhere near the mode block and cannot be compared with
        `CONFIG0_FLAG_BITS` at all. Two of the four land on bytes the builder reads, so the
        destinations are load-bearing, not cosmetic.
        """
        self.assertEqual(
            DESCRIPTOR_MODE_VIA_ENUM_HELPER,
            {0x18C: "enum_10", 0x188: "enum_18", 0x198: "enum_26", 0x19A: "scale"},
        )
        enum_helper_bytes = set(DESCRIPTOR_MODE_VIA_ENUM_HELPER)
        builder_bytes = set(CONFIG0_FLAG_BITS) | set(CONFIG0_SHIFTED_BYTES) | set(
            CONFIG0_LOW_BITS_SOURCES
        )
        self.assertEqual(
            sorted(enum_helper_bytes & builder_bytes),
            [0x188, 0x18C],
            "enum_18 and enum_10 write config0 bytes and must be at the ARM's offsets",
        )

    def test_flag_14_drives_the_lut_enable_mode_byte(self) -> None:
        """The one builder input whose descriptor source is a plain bool, not an enum helper.

        `FUN_004c6364` writes `param_1[0x191] = descriptor[0x14] != 0`, and `+0x191` is exactly the
        builder's LUT-enable mode byte -- so a material with `flag_14` set selects a different config1
        than one without it. That is the switch between the no-LUT and LUT forms, and it is reachable
        from an authored material field.

        **Polarity swap.** The old version asserted the opposite of the first line: it read the
        constructor as leaving bits 20..22 SET (`0x700000`), which was true only under the wrong
        `+0x191` default. The constructor sets `+0x191 = 1`, so LUTs start ENABLED after
        construction, and `flag_14 = 0` is what disables them -- which is the state every recorded
        word is in. The second line (a set `flag_14` clears the group) is unchanged.
        """
        lighting = construct_lighting_object()
        self.assertEqual(build_lighting_config(lighting).config1 & 0x700000, 0)
        fed = apply_descriptor(lighting, {"flag_14": False})
        self.assertEqual(build_lighting_config(fed).config1 & 0x700000, 0x700000)
        unfed = apply_descriptor(lighting, {"flag_14": True})
        self.assertEqual(build_lighting_config(unfed).config1 & 0x700000, 0)

    def test_apply_descriptor_does_not_mutate_its_input(self) -> None:
        lighting = construct_lighting_object()
        before = dict(lighting)
        apply_descriptor(lighting, {"flag_14": True, "enabled": True})
        self.assertEqual(lighting, before)


class Config0FieldPacking(unittest.TestCase):
    """`param_2[6]`, packed two different ways, both read off ARM.

    The tool's previous single `offset -> bit` table applied `1 << bit` to every byte, which is right
    for the five COMPARED bytes and wrong for the five SHIFTED ones. Neither mistake could raise:
    both produced clean plausible words. Bit 30 (`disable_bump_renorm`) is a separate matter -- it is
    genuinely unresolved between two readings of the ARM, and `test_bit_30_is_the_unresolved_renorm_gate`
    pins that rather than papering over it.
    """

    def test_compared_bytes_normalise_to_one_bit_however_large(self) -> None:
        for offset, bit in CONFIG0_FLAG_BITS.items():
            # `+0x189` and `+0x18A` also feed config0 bit 0 through their own OR; account for it
            # rather than pretending those two bytes only reach their own bit.
            extra = CONFIG0_ENABLE_SHADOW_BIT if offset in CONFIG0_LOW_BITS_SOURCES else 0
            for value in (1, 2, 0x80, 0xFF):
                with self.subTest(offset=hex(offset), value=value):
                    self.assertEqual(
                        build_lighting_config({offset: value}).config0,
                        (1 << bit) | extra | CONFIG0_UNCONDITIONAL,
                    )

    def test_config0_bit_1_is_never_set(self) -> None:
        """Bit 1 is unreachable, so no byte may put it there.

        Every contribution to the `param_2[6]` accumulator is an immediate (`0x80000000`, `0x400`), a
        whole byte shifted by one of 2/4/16/17/18/19/22/24/28, or the normalised 0-or-1 in r6 that
        `0x0040cf50` places at bit 0. Nothing reaches bit 1. A previous revision emitted `0b11` and
        called bits 0 and 1 `gamma` and `enable_primary_alpha` -- `gamma` is not a field in the
        register map at all, and `enable_primary_alpha` is bit 2, fed by `+0x185`'s low bit through
        the `lsl #2`. This sweeps every mode byte at a value that would set bit 1 if the shift were
        off by one.
        """
        for offset in set(CONFIG0_FLAG_BITS) | set(CONFIG0_SHIFTED_BYTES):
            for value in (1, 2, 0x80, 0xFF):
                with self.subTest(offset=hex(offset), value=value):
                    self.assertEqual(
                        build_lighting_config({offset: value}).config0 & 0x2,
                        0,
                        f"+0x{offset:X}={value} must not reach bit 1",
                    )

    def test_shifted_bytes_land_whole(self) -> None:
        for offset, shift in CONFIG0_SHIFTED_BYTES.items():
            with self.subTest(offset=hex(offset)):
                # `+0x187` is `bump_mode`, the one shifted byte that also feeds the disputed bit 30
                # gate, so its expected word carries that term. Everything else is the shifted byte
                # alone, and a wrong shift shows up as a wrong bit here.
                extra = 0
                if offset == CONFIG0_BUMP_RENORM_GATE_OFFSET:
                    extra = 1 << 30  # `+0x187 != 0` and the default `+0x18D == 0`
                self.assertEqual(
                    build_lighting_config({offset: 3}).config0,
                    (3 << shift) | extra | CONFIG0_UNCONDITIONAL,
                    f"+0x{offset:X} is shifted verbatim, so 3 sets {shift} and {shift + 1}",
                )

    def test_shift_and_flag_tables_do_not_overlap(self) -> None:
        """A byte in both tables would be packed twice, and the two packings can disagree."""
        self.assertEqual(set(CONFIG0_FLAG_BITS) & set(CONFIG0_SHIFTED_BYTES), set())
        self.assertEqual(set(CONFIG0_LOW_BITS_SOURCES) & set(CONFIG0_FLAG_BITS), {0x189, 0x18A})

    def test_bit_0_is_the_or_of_0x189_and_0x18a(self) -> None:
        """config0 bit 0 is `enable_shadow`, and it comes from the OR of two bytes, not either alone.

        `0x0040cf3c orr r6, r5, r3` ORs `+0x189` with `+0x18A`, `0x0040cf44 orrs r6, r6, r4` /
        `0x0040cf48 movne r6, #1` normalise that OR to 1, and `0x0040cf50 orr r5, r6, r7, lsl #2`
        places it at bit 0. `+0x18B` is folded into the `orrs` and then overwritten by the `movne`,
        so it must NOT reach bit 0 -- it drives bit 19. Only bit 0 is set; `test_config0_bit_1_is_never_set`
        covers the adjacent bit, which is unreachable.
        """
        for value in (1, 0x80):
            self.assertEqual(build_lighting_config({0x189: value}).config0 & 0b01, 0b01)
            self.assertEqual(build_lighting_config({0x18A: value}).config0 & 0b01, 0b01)
            self.assertEqual(build_lighting_config({0x18A: value}).config0 & 0x30000, 0x20000)
        self.assertEqual(build_lighting_config({0x18B: 1}).config0 & 0b01, 0, "+0x18B is bit 19 only")
        self.assertEqual(build_lighting_config({0x18B: 1}).config0 & 0x80000, 0x80000)

    def test_bit_30_is_the_unresolved_renorm_gate(self) -> None:
        """NOT ESTABLISHED: two readings of `0x0040cfb4..0x0040cfd8` disagree, and the fixture
        cannot separate them. Pinned as the decomp's gate so the value is visible, not hidden.

        The decomp renders `(param_1[0x187] != 0 && param_1[0x18d] == 0) << 0x1e`, which is the
        behaviour modelled here. Reading `0x0040cfcc orrs r0, r0, r4` as unconditional yields "bit 30
        is a constant 0", and that was asserted as proven in a previous revision of this file. It is
        refutable: on the `bump_mode == 0` path the `orrs` is SKIPPED, so Z is still 1 from
        `0x0040cfb4 cmp`, both `moveq` pairs fire, and `r0` reaches `0x0040cfd8 orr r0, r3, r0,
        lsl #30` as 1 -- bit 30 set. Taken literally the ARM sets bit 30 unless
        (`+0x187 != 0` AND `+0x18D != 0`).

        The literal reading is not adopted, because the fixture contradicts it: the captured builder
        input has `+0x187 == 0` and `+0x18D == 0` while the oracle's `config0 = 0x80000400` has bit
        30 CLEAR, which the literal reading cannot produce (it would give `0xc0000400`). So either
        the recorded input and output are not one consistent observation, or the literal reading is
        wrong. Every value on record agrees under both readings.

        This test therefore pins the SHAPE of the disagreement, not a proven truth: it asserts the
        gate, so the next reader sees which value is live, and the sweep shows exactly which inputs
        the two candidates separate on -- the inputs the settling capture has to produce.
        """
        # The gate: `+0x187` non-zero and `+0x18D` zero is the only combination either candidate
        # reads differently for the fixture-free case, so it is the discriminator to capture.
        self.assertEqual(
            build_lighting_config({0x187: 0x01, 0x18D: 0x00}).config0 & 0x40000000, 0x40000000
        )
        # `bump_mode` is a 2-bit field (`LightingBumpMode`), so 0..3 is its whole domain. For every
        # other combination both readings agree that bit 30 is clear.
        for bump_mode in (0x00, 0x01, 0x02, 0x03):
            for inhibit in (0x00, 0x01, 0xFF):
                with self.subTest(bump_mode=bump_mode, inhibit=inhibit):
                    packet = build_lighting_config({0x187: bump_mode, 0x18D: inhibit})
                    if bump_mode and not inhibit:
                        continue  # the disputed combination, asserted above
                    self.assertEqual(packet.config0 & 0x40000000, 0)
        # The bump_mode field itself (bits 28..29) is real and verbatim -- only bit 30 is disputed.
        self.assertEqual(build_lighting_config({0x187: 2}).config0 & 0x30000000, 2 << 28)
        # Above its domain the byte is still shifted whole, so it spills into bit 30. That spill is
        # the `lsl #28` and not the gate: it arrives with bit 31, which the gate cannot produce.
        self.assertEqual(build_lighting_config({0x187: 0xFF}).config0 & 0x30000000, 0x30000000)
        self.assertEqual(build_lighting_config({0x187: 0x0F}).config0 & 0x40000000, 0x40000000)


class TheBuilderActuallyRespondsToItsInputs(unittest.TestCase):
    """Negative controls. A builder that ignored its input would pass the fixture test."""

    def test_an_all_zero_object_reproduces_the_oracle_baseline(self) -> None:
        """Checked against LIVE runtime bytes, not a transcribed fixture.

        The 0x4C8-byte configuration object is located at
        `CmbRenderer + 0x400 + material_index * 0x4C8` (the record maps CMB `+0x00` to
        `CmbRenderer + 0x400`, and 0x4C8 is the expanded per-material stride -- the file's
        0x15C/0x16C entry is a different thing). Dumped from the oracle at the title screen,
        material slot 1 -- an unlit material -- is all zeros in the fields the builder reads, and
        this model fed those live bytes returns exactly the `config0`/`config1` pair the oracle's own
        registers were recorded at. The `light_enable` difference is not a failure: the recorded
        fixture is a ONE-light material and this slot has no light enabled.

        Pinned as the all-zero object rather than as the captured bytes so the test needs no captured
        data and no ROM, while still being a reproduction of observed oracle registers.
        """
        packet = build_lighting_config(bytes(LIGHTING_OBJECT_SIZE))
        words = packet.as_observed_words()
        self.assertEqual(words["config0"], 0x80000400)
        self.assertEqual(words["config1"], 0xFF7FFFFF)
        self.assertEqual(packet.light_enable, 0)

    def test_an_empty_object_has_no_lights(self) -> None:
        packet = build_lighting_config({})
        self.assertEqual(packet.light_count, 0)
        self.assertEqual(packet.light_enable, 0)

    def test_light_enable_encodes_the_occupied_slots(self) -> None:
        packet = build_lighting_config({SLOT_ENABLE_BASE + 0: 1, SLOT_ENABLE_BASE + 3: 1})
        self.assertEqual(packet.light_count, 2)
        # slot 0 -> shift 0, slot 3 -> shift 4.
        self.assertEqual(packet.light_enable, 0x00 | (0x03 << 4))

    def test_config1_lut_enable_bit_flips_with_the_mode_byte(self) -> None:
        off = build_lighting_config({MODE_LUT_ENABLE: 0})
        on = build_lighting_config({MODE_LUT_ENABLE: 1})
        self.assertNotEqual(off.config1, on.config1)
        # Bits 0x14..0x16 are bits 20..22, i.e. mask 0x700000 -- not 0x70000, which is bits 16..18 and
        # belongs to the spot/LUT-select group.
        self.assertEqual(on.config1 & 0x700000, 0, "a set LUT-enable byte clears bits 20..22")
        self.assertEqual(off.config1 & 0x700000, 0x700000)

    def test_config1_spot_mode_flips_bit_0x10(self) -> None:
        self.assertEqual(build_lighting_config({MODE_SPOT: 0}).config1 & 0x10000, 0x10000)
        self.assertEqual(build_lighting_config({MODE_SPOT: 1}).config1 & 0x10000, 0)
        # Values above 1 clamp to the same "off" state, matching the decomp's `if (1 < x) iVar = 0`.
        self.assertEqual(build_lighting_config({MODE_SPOT: 7}).config1, build_lighting_config({MODE_SPOT: 1}).config1)

    def test_config1_lut_select_flips_bit_19(self) -> None:
        # The decomp's shift literal is 0x13 = 19. Reading it as 0x19 lands the bit in the top byte and
        # still looks plausible, which is why the fixture check exists.
        self.assertEqual(build_lighting_config({MODE_LUT_SELECT: 0}).config1 & 0x80000, 0x80000)
        self.assertEqual(build_lighting_config({MODE_LUT_SELECT: 1}).config1 & 0x80000, 0)

    def test_config1_slot_flags_clear_their_bit_groups(self) -> None:
        """Each per-slot flag byte clears one 8-bit group, at the slot's own index."""
        for index, base in enumerate(SLOT_FIELD_BASES):
            group_shift = (0, 8, 0x18)[index]
            slot = 2
            before = build_lighting_config({SLOT_ENABLE_BASE + slot: 1}).config1
            after = build_lighting_config(
                {SLOT_ENABLE_BASE + slot: 1, base + slot: 1}
            ).config1
            self.assertEqual(after, before & ~(1 << (slot + group_shift)))
            self.assertNotEqual(after, before, f"group {index} flag had no effect")

    def test_a_slot_flag_without_an_enabled_slot_does_nothing(self) -> None:
        """The loop only reaches the flag bytes for occupied slots, so a flag on an empty slot is inert."""
        inert = build_lighting_config({SLOT_FIELD_BASES[0] + 5: 1})
        self.assertEqual(inert.config1, build_lighting_config({}).config1)
        self.assertEqual(inert.light_count, 0)

    def test_light_enable_shifts_follow_the_running_count(self) -> None:
        packet = build_lighting_config({SLOT_ENABLE_BASE + slot: 1 for slot in (0, 1, 2, 4)})
        self.assertEqual(packet.light_count, 4)
        # slot index shifted by the count so far: 0<<0, 1<<4, 2<<8, 4<<12.
        self.assertEqual(packet.light_enable, 0x0 | (1 << 4) | (2 << 8) | (4 << 12))

    def test_slot_map_comes_from_the_object_head_not_the_loop(self) -> None:
        """The slot map is the object's own bytes, so the loop must not touch it.

        Getting this wrong is invisible on the fixture, where both outputs happen to be small, so it
        is pinned directly: occupied slots with a non-zero object head must leave slot_map alone.
        """
        packet = build_lighting_config(
            {SLOT_ENABLE_BASE + 0: 1, 0: 0x21, 1: 0x01, 2: 0x02}
        )
        self.assertEqual(packet.light_enable, 0x0)
        # byte 0 unshifted, byte 1 << 10, byte 2 << 20 -- the decomp's `*p | p[1] << 10 | p[2] << 20`.
        self.assertEqual(packet.slot_map, 0x21 | (0x01 << 10) | (0x02 << 20))


class RawBytesAndSparseMapsAgree(unittest.TestCase):
    def test_sparse_and_raw_inputs_produce_the_same_packet(self) -> None:
        raw = bytearray(0x1A0)
        raw[SLOT_ENABLE_BASE + 0] = 0x01
        raw[SLOT_ENABLE_BASE + 1] = 0x01
        self.assertEqual(build_lighting_config(raw), build_lighting_config(HUT_LIGHTING_OBJECT))


if __name__ == "__main__":
    unittest.main()