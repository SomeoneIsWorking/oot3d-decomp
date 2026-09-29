// OoT3D decomp @ 00196a2c  name=FUN_00196a2c  size=68

void FUN_00196a2c(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00196a78,DAT_00196a74,uVar1,DAT_00196a70,param_1 + 0x1a4,0);
  *(undefined4 *)(param_1 + 0x568) = DAT_00196a7c;
  return;
}
