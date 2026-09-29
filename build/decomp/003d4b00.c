// OoT3D decomp @ 003d4b00  name=FUN_003d4b00  size=80

void FUN_003d4b00(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0x724) == 0) {
    uVar1 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_003d4b84 + 4));
    VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(uVar1,10,0x1e);
  }
  return;
}
