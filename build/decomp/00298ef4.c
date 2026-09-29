// OoT3D decomp @ 00298ef4  name=FUN_00298ef4  size=68

void FUN_00298ef4(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00298f40,DAT_00298f3c,uVar1,DAT_00298f38,param_1 + 0x1a4,0);
  *(undefined4 *)(param_1 + 0x8a8) = DAT_00298f44;
  return;
}
