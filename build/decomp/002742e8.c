// OoT3D decomp @ 002742e8  name=FUN_002742e8  size=68

void FUN_002742e8(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00274334,DAT_00274330,uVar1,DAT_0027432c,param_1 + 0x1a4,0);
  *(undefined4 *)(param_1 + 0x8a8) = DAT_00274338;
  return;
}
