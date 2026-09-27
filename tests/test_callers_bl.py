#!/usr/bin/env python3
"""Tests for callers_bl.py.

The tool exists because getting its addressing wrong produces a result that is indistinguishable
from a real negative: computing `BL` targets in file-offset space and searching for a function's
virtual address finds **zero callers for every function**, which reads exactly like "nothing calls
this". That is how a whole recovered call chain can look refuted when it is not.

So the properties pinned here are:

* the target arithmetic is PC-relative and in VA space (`offset + BASE + 8 + (imm24 << 2)`);
* `BL` is recognised by its encoding and nothing else is mistaken for one;
* sign extension is correct in both directions, including the largest negative offset;
* the self-validation refuses to report anything when the decoder looks wrong, which is the only
  thing standing between a broken decoder and a confident wrong answer.
"""

from __future__ import annotations

import struct
import sys
import tempfile
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
if str(REPO / "tools") not in sys.path:
    sys.path.insert(0, str(REPO / "tools"))

import callers_bl  # noqa: E402


def encode_bl(offset_words: int) -> int:
    """Encode an ARM `BL` with a 24-bit word offset (already shifted, i.e. in words)."""
    imm = offset_words & 0x00FFFFFF
    return 0x0B000000 | imm


class TargetArithmetic(unittest.TestCase):
    def test_a_backward_branch_uses_pc_plus_eight(self) -> None:
        # BL at VA 0x1000 with word offset -1 targets 0x1000 + 8 - 4 = 0x1004.
        word = encode_bl(-1)
        self.assertEqual(callers_bl.bl_target(word, 0x1000), 0x1004)

    def test_a_forward_branch_uses_pc_plus_eight(self) -> None:
        self.assertEqual(callers_bl.bl_target(encode_bl(4), 0x1000), 0x1000 + 8 + 16)

    def test_a_zero_offset_targets_pc_plus_eight(self) -> None:
        self.assertEqual(callers_bl.bl_target(encode_bl(0), 0x1000), 0x1008)

    def test_a_negative_offset_is_sign_extended_not_masked(self) -> None:
        """The bug this tool exists to prevent, in its smallest form.

        Masking instead of sign-extending turns a backward call into a call ~16 MiB away, so the
        real caller is never found and the function looks uncalled.
        """
        word = encode_bl(-0x100)  # -256 words = -1024 bytes
        self.assertEqual(callers_bl.bl_target(word, 0x100000), 0x100000 + 8 - 1024)
        self.assertNotEqual(callers_bl.bl_target(word, 0x100000), 0x100000 + 8 + (0x00FFFF00 << 2))

    def test_the_largest_negative_offset_is_handled(self) -> None:
        # Expectation derived from the encoding rather than by hand: imm24 = -0x800000, and the
        # word offset is shifted left by 2. bl_target returns a 32-bit VA, so it is masked.
        imm = -0x800000
        expected = (0x800000 + 8 + (imm << 2)) & 0xFFFFFFFF
        self.assertEqual(callers_bl.bl_target(encode_bl(imm), 0x800000), expected)
        # And the mask is observable: the arithmetic result is negative before masking.
        self.assertLess(0x800000 + 8 + (imm << 2), 0)


class OnlyBlIsRecognised(unittest.TestCase):
    def test_a_branch_is_not_a_call(self) -> None:
        self.assertIsNone(callers_bl.bl_target(0x0A000000, 0x1000))  # B

    def test_a_data_processing_instruction_is_not_a_call(self) -> None:
        self.assertIsNone(callers_bl.bl_target(0xE28DD00C, 0x1000))  # ADD sp, sp, #0xc

    def test_a_load_store_is_not_a_call(self) -> None:
        self.assertIsNone(callers_bl.bl_target(0xE5901000, 0x1000))  # LDR r1, [r0]

    def test_a_conditional_bl_is_still_a_call(self) -> None:
        # `cond` occupies the top nibble, so a BLNE has 0x0B in bits 27-24 with cond != 0b1110.
        self.assertEqual(callers_bl.bl_target(0x0B000010, 0x2000), 0x2000 + 8 + (0x10 << 2))


class ScanAndValidation(unittest.TestCase):
    def _image(self, words: list[int]) -> bytes:
        return b"".join(struct.pack("<I", w) for w in words)

    def test_a_bl_is_found_at_its_own_va_not_its_offset(self) -> None:
        """The exact failure: searching offset space finds nothing."""
        # A BL at file offset 0x1000 (VA 0x101000) targeting VA 0x102000.
        target_va = 0x00102000
        site_va = 0x00101000
        word_offset = (target_va - (site_va + 8)) >> 2
        code = bytearray(0x2000)
        struct.pack_into("<I", code, 0x1000, encode_bl(word_offset))
        sites, total = callers_bl.scan(bytes(code))
        self.assertEqual(total, 1)
        self.assertEqual(sites[target_va], [site_va])

    def test_validation_passes_on_an_image_whose_calls_stay_inside(self) -> None:
        # The image spans VA 0x00100000..0x00104000, so the fixed target must be inside that range.
        code = bytearray(0x4000)
        dest = 0x00103000
        for site in range(0, 0x1000, 4):
            site_va = 0x00100000 + site
            struct.pack_into("<I", code, site, encode_bl((dest - (site_va + 8)) >> 2))
        verdict = callers_bl.validate(bytes(code), callers_bl.scan(bytes(code))[0])
        self.assertTrue(verdict["ok"])
        self.assertGreaterEqual(verdict["in_image_fraction"], callers_bl.MIN_IN_IMAGE_FRACTION)
        self.assertEqual(verdict["targets_in_image"], 1)

    def test_validation_fails_when_targets_fall_outside_the_image(self) -> None:
        """A decoder that scatters targets outside the image must be refused, not reported."""
        code = bytearray(0x1000)
        # Target something far outside the image for every call.
        dest = 0x7F000000
        for site in range(0, 0x100, 4):
            site_va = 0x00100000 + site
            struct.pack_into("<I", code, site, encode_bl((dest - (site_va + 8)) >> 2))
        sites, _ = callers_bl.scan(bytes(code))
        verdict = callers_bl.validate(bytes(code), sites)
        self.assertFalse(verdict["ok"])
        self.assertEqual(verdict["targets_in_image"], 0)

    def test_a_non_bl_image_scans_clean_and_validates_vacuously(self) -> None:
        code = struct.pack("<I", 0xE28DD00C) * 0x100
        sites, total = callers_bl.scan(code)
        self.assertEqual(total, 0)
        self.assertEqual(sites, {})
        # Nothing to judge: an empty scan must not claim to have validated anything.
        verdict = callers_bl.validate(code, sites)
        self.assertEqual(verdict["distinct_targets"], 0)


class CliRefusesWithoutACodeImage(unittest.TestCase):
    def test_a_missing_code_bin_is_a_clear_error_not_a_zero_result(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            rc = callers_bl.main(["0x00308498", "--bin", str(Path(tmp) / "nope.bin")])
            self.assertEqual(rc, 2)


if __name__ == "__main__":
    unittest.main()
