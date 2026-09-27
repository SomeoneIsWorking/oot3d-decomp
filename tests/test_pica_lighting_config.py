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
"""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent / "tools"))

from pica_lighting_config import (  # noqa: E402
    CONFIG0_UNCONDITIONAL,
    DESCRIPTOR_MODE_MAP,
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


class ConstructorDefaultsReproduceConfig1(unittest.TestCase):
    """A second, independent path to the same observed value.

    `FUN_004c6264` initialises the runtime lighting object before any descriptor is applied, and its
    defaults alone already produce the fixture's `config1`. That matters because it is derived from
    the object's constructor rather than from the fixture's recorded input bytes -- two unrelated
    sources agreeing on the same word is much stronger than either alone, and it is what makes the
    feed tractable: the mode block is typed, not guessed.
    """

    def test_config1_needs_no_descriptor_at_all(self) -> None:
        packet = build_lighting_config(construct_lighting_object())
        self.assertEqual(packet.config1, HUT_OBSERVED["config1"])

    def test_no_lights_are_enabled_before_the_slot_writer_runs(self) -> None:
        packet = build_lighting_config(construct_lighting_object())
        self.assertEqual(packet.light_count, 0)
        self.assertEqual(packet.light_enable, 0)

    def test_config0_differs_from_the_fixture_by_exactly_one_bit(self) -> None:
        """The open byte, recorded rather than hidden.

        The constructor sets `+0x18A = 1`, and `FUN_0040cdd8` maps that byte to config0 bit 0x11, so a
        constructor-only object yields `0x80020400` where the oracle recorded `0x80000400`. The
        difference is exactly bit 0x11 and nothing else, which localises the remaining unknown to a
        SINGLE byte: something clears `+0x18A` on the Hut's path, and no recovered function writes it
        (`FUN_004c6364` covers +0x189/+0x18B/+0x191/+0x192/+0x193/+0x195 only).

        When that writer is found, this test is the thing that flips -- and until then it is the
        standing evidence that the feed is one byte from complete.
        """
        packet = build_lighting_config(construct_lighting_object())
        self.assertEqual(packet.config0 & ~0x20000, HUT_OBSERVED["config0"])
        self.assertNotEqual(packet.config0, HUT_OBSERVED["config0"])
        self.assertEqual(packet.config0 ^ HUT_OBSERVED["config0"], 0x20000)


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
        other_consumers = {0x192, 0x193, 0x195, 0x199}
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

    def test_flag_14_drives_the_lut_enable_mode_byte(self) -> None:
        """The one builder input whose descriptor source is a plain bool, not an enum helper.

        `FUN_004c6364` writes `param_1[0x191] = descriptor[0x14] != 0`, and `+0x191` is exactly the
        builder's LUT-enable mode byte -- so a material with `flag_14` set selects a different config1
        than one without it. That is the switch between the no-LUT and LUT forms, and it is reachable
        from an authored material field.
        """
        lighting = construct_lighting_object()
        self.assertEqual(build_lighting_config(lighting).config1 & 0x700000, 0x700000)
        fed = apply_descriptor(lighting, {"flag_14": True})
        self.assertEqual(build_lighting_config(fed).config1 & 0x700000, 0)

    def test_apply_descriptor_does_not_mutate_its_input(self) -> None:
        lighting = construct_lighting_object()
        before = dict(lighting)
        apply_descriptor(lighting, {"flag_14": True, "enabled": True})
        self.assertEqual(lighting, before)


class TheBuilderActuallyRespondsToItsInputs(unittest.TestCase):
    """Negative controls. A builder that ignored its input would pass the fixture test."""

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
