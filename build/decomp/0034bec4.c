// OoT3D decomp @ 0034bec4  name=FUN_0034bec4  size=92

void FUN_0034bec4(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0x12);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0034bf34,DAT_0034bf30,uVar1,DAT_0034bf2c,param_1 + 0x1a4,0x12,0);
  uVar1 = DAT_0034bf38;
  *(undefined4 *)(param_1 + 0x1050) = DAT_0034bf38;
  *(undefined4 *)(param_1 + 0x1054) = uVar1;
  *(undefined4 *)(param_1 + 0x22c) = DAT_0034bf3c;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x46,0x6e);
}
