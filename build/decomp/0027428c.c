// OoT3D decomp @ 0027428c  name=FUN_0027428c  size=76

void FUN_0027428c(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,2);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_002742e0,DAT_002742dc,uVar1,DAT_002742d8,param_1 + 0x1a4,2);
  *(undefined1 *)(param_1 + 0xd19) = 0;
  *(undefined4 *)(param_1 + 0xc7c) = DAT_002742e4;
  return;
}
