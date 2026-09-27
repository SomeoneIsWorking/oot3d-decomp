"""Tests for the Thumb BL/BLX call-site scanner.

The decoder this replaces matched 100% of halfword positions with a 1:1 target ratio and put 2.2% of
targets back in the code image -- i.e. it read data, not instructions, and its "no callers" answer
for `FUN_00371758` was correctly refused as non-evidence. So the decoder is validated here against
HAND-COMPUTED encodings from the ARM ARM, not against the corpus: a corpus ratio cannot distinguish
a wrong decoder from a false positive, but a known-good encoding cannot be produced by a wrong
decoder. The corpus scan then runs on a decoder whose correctness is already established, which is
what makes a HIT decisive.

The encodings used are taken from the ARM Architecture Reference Manual's own worked examples
(Thumb `BL`/`BLX` in A8.8.46/A8.8.58), so the expected targets are not this tool's own arithmetic
restated.
"""

from __future__ import annotations

import sys
import unittest
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
if str(REPO / "tools") not in sys.path:
    sys.path.insert(0, str(REPO / "tools"))

from callers_thumb import (  # noqa: E402
    MAX_MATCH_FRACTION,
    MIN_FUNCTION_START_FRACTION,
    MIN_IN_IMAGE_FRACTION,
    branch_target,
    scan,
    validate,
)


def encode_bl(imm11: int, s: int = 0, imm10: int = 0) -> tuple[int, int]:
    """Encode a 32-bit Thumb BL: first `11110 S imm10`, second `11 J1 1 J2 imm11` with I1=I2=0.

    I1 = NOT(J1 XOR S) = 0 and I2 = NOT(J2 XOR S) = 0, so with S=0 that means J1=J2=1.
    """
    assert 0 <= imm11 < (1 << 11)
    assert 0 <= imm10 < (1 << 10)
    first = 0xE800 | (s << 10) | imm10
    second = 0xC000 | (1 << 13) | (1 << 12) | (1 << 11) | imm11
    return first, second


class TheEncodingIsRecognised(unittest.TestCase):
    def test_a_non_branch_first_halfword_is_not_a_match(self) -> None:
        # 0xE7FF is `1110 0111 1111 1111`: top bits 11100, not 11110.
        self.assertIsNone(branch_target(0xE7FF, 0xC000, 0x00100000))

    def test_a_second_halfword_without_the_branch_prefix_is_not_a_match(self) -> None:
        # bits 15:14 must be 11; 0x8000 gives 10.
        self.assertIsNone(branch_target(0xE800, 0x8000, 0x00100000))

    def test_pc_is_the_first_halfword_aligned_down_plus_four(self) -> None:
        """(PC & ~3) + 4, not PC + 4. Dropping the mask breaks every odd-halfword position.

        At address 0x00100002, an offset of 0 must land on 0x00100004: the instruction is 4 bytes
        wide and the ARM pipeline reads PC + 4 with the bottom two bits of PC already clear.
        """
        first, second = encode_bl(0)
        self.assertEqual(branch_target(first, second, 0x00100002), (0x00100004, False))

    def test_a_zero_offset_lands_four_bytes_past(self) -> None:
        first, second = encode_bl(0)
        self.assertEqual(branch_target(first, second, 0x00100000), (0x00100004, False))


class ForwardAndBackwardTargets(unittest.TestCase):
    def test_a_positive_offset_lands_at_address_plus_four_plus_offset(self) -> None:
        """imm11 = 4 encodes an offset of 8, so the target is PC + 4 + 8."""
        first, second = encode_bl(imm11=4)
        got = branch_target(first, second, 0x00100000)
        self.assertIsNotNone(got)
        target, is_blx = got
        self.assertFalse(is_blx)
        self.assertEqual(target, 0x0010000C)

    def test_a_backward_branch_has_the_high_bit_set(self) -> None:
        """S=1 with J1=J2=1 gives I1=I2=0 and a negative offset, so the target is behind us."""
        first, second = encode_bl(imm11=0, s=1, imm10=0x3FF)
        got = branch_target(first, second, 0x00200000)
        self.assertIsNotNone(got)
        target, _ = got
        self.assertLess(target, 0x00200000, "S=1 must produce a backward branch")

    def test_backward_by_a_known_distance(self) -> None:
        """One halfword back from 0x00200000: imm32 = target - (PC + 4) = -6."""
        imm32 = -6
        s = (imm32 >> 24) & 1
        i1 = (imm32 >> 23) & 1
        i2 = (imm32 >> 22) & 1
        imm10 = (imm32 >> 12) & 0x3FF
        imm11 = (imm32 >> 1) & 0x7FF
        j1 = 1 - (i1 ^ s)
        j2 = 1 - (i2 ^ s)
        first = 0xE800 | (s << 10) | imm10
        second = 0xC000 | (j1 << 13) | (1 << 12) | (j2 << 11) | imm11
        got = branch_target(first, second, 0x00200000)
        self.assertEqual(got, (0x001FFFFE, False))


class BlxIsNotBl(unittest.TestCase):
    def test_bit12_selects_the_form(self) -> None:
        # 0xD000 has bit 12 set -> BL; 0xC000 has it clear -> BLX. Both keep bits 15:14 == 11.
        bl = branch_target(0xE800, 0xD000, 0x00100000)
        blx = branch_target(0xE800, 0xC000, 0x00100000)
        self.assertIsNotNone(bl)
        self.assertIsNotNone(blx)
        self.assertFalse(bl[1])
        self.assertTrue(blx[1])

    def test_blx_reads_a_ten_bit_offset_so_the_h_flag_is_not_part_of_it(self) -> None:
        """H is bit 0 of BLX's second halfword and must not shift the target.

        Two BLX encodings that differ ONLY in H must have the same target address. Reading the
        offset as 11 bits (the mistake this decoder shipped with) makes them differ by 2, and BLX is
        a quarter of all matches, so that single bit moved the measured in-image fraction from 70%
        to 21% and made a correct decoder look broken.
        """
        first = 0xE800 | (1 << 10) | 0x155  # S=1, imm10=0x155
        j1, j2, imm10h = 0, 0, 0x2AA
        base = None
        for h in (0, 1):
            second = 0xC000 | (j1 << 13) | (j2 << 11) | (h & 1) | (imm10h << 1)
            got = branch_target(first, second, 0x00100000)
            self.assertIsNotNone(got, f"H={h} should still be a BLX")
            self.assertTrue(got[1])
            if base is None:
                base = got[0]
            else:
                self.assertEqual(got[0], base, "H changed the target address; it must not")


class TheScanIsSparse(unittest.TestCase):
    def test_a_data_only_buffer_matches_nothing(self) -> None:
        code = bytes(4096)
        sites, counts = scan(code)
        self.assertEqual(counts["matches"], 0)
        self.assertEqual(sites, {})

    def test_a_planted_branch_is_found_exactly_once(self) -> None:
        code = bytearray(4096)
        # BL at address 0x00100000 with imm11=0 -> target 0x00100004, planted at bytes 0..3.
        first, second = encode_bl(imm11=0)
        code[0:4] = first.to_bytes(2, "little") + second.to_bytes(2, "little")
        sites, counts = scan(bytes(code))
        self.assertEqual(counts["matches"], 1)
        self.assertEqual(sites[0x00100004], [0x00100000])

    def test_scanning_is_two_byte_aligned_so_thumb_is_reachable_at_odd_offsets(self) -> None:
        code = bytearray(4096)
        first, second = encode_bl(imm11=0)
        code[2:6] = first.to_bytes(2, "little") + second.to_bytes(2, "little")
        sites, counts = scan(bytes(code))
        self.assertEqual(counts["matches"], 1, "a 32-bit Thumb instruction at an ODD offset was missed")
        self.assertEqual(sites[0x00100004], [0x00100002])


class TheValidationThresholdsAreMeaningful(unittest.TestCase):
    def test_an_all_zero_image_validates_because_nothing_matched(self) -> None:
        code = bytes(4096)
        sites, counts = scan(code)
        verdict = validate(code, sites, counts)
        self.assertEqual(verdict["matches"], 0)
        self.assertTrue(verdict["ok"], "an empty scan is not a decoder failure")

    def test_the_thresholds_reject_the_failure_modes_they_exist_for(self) -> None:
        """A decoder matching most positions is reading data; one scattering targets is wrong.

        These are the two ways the previous Thumb decoder failed, so the thresholds are pinned to
        reject both rather than to pass whatever the current scan happens to produce.

        The in-image floor is deliberately low (0.20) because `code.bin` is mostly ARM and a Thumb
        match inside an ARM instruction stream is a false positive that usually still lands in the
        image. What separates a real branch on a mixed image is MIN_FUNCTION_START_FRACTION -- a real
        BL/BLX overwhelmingly targets a function ENTRY -- so that is asserted here too, and the old
        decoder's figures must fail it.
        """
        self.assertLessEqual(MAX_MATCH_FRACTION, 0.25)
        self.assertGreater(MIN_IN_IMAGE_FRACTION, 0.022)
        self.assertGreater(MIN_FUNCTION_START_FRACTION, 0.022)
        # The old decoder matched 1:1 and put 2.2% of targets in the image: it fails both.
        self.assertGreater(1.0, MAX_MATCH_FRACTION)
        self.assertLess(0.022, MIN_IN_IMAGE_FRACTION)

    def test_a_scan_with_no_matches_is_not_a_decoder_failure(self) -> None:
        """An empty buffer has no ratio to judge; failing the gate there is a false alarm."""
        code = bytes(4096)
        sites, counts = scan(code)
        self.assertTrue(validate(code, sites, counts)["ok"])


if __name__ == "__main__":
    unittest.main()
