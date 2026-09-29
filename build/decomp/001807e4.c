// OoT3D decomp @ 001807e4  name=FUN_001807e4  size=48

void FUN_001807e4(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_00180854 + 4));
  VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(uVar1,10,0x1e);
}
