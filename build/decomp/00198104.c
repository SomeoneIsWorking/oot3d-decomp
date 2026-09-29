// OoT3D decomp @ 00198104  name=FUN_00198104  size=80

void FUN_00198104(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0019815c,DAT_00198158,uVar1,DAT_00198154,param_1 + 0x1a4,0);
  *(undefined2 *)(DAT_00198160 + param_1) = 0x2d;
  *(undefined4 *)(param_1 + 0x8a8) = DAT_00198164;
  return;
}
