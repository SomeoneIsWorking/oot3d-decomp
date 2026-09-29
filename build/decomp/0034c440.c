// OoT3D decomp @ 0034c440  name=FUN_0034c440  size=76

void FUN_0034c440(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1e0,1);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00353020(DAT_0034c494,DAT_0034c490,uVar1,DAT_0034c48c,param_1 + 0x1e0,DAT_0034c498,1);
  *(undefined4 *)(param_1 + 0xcb8) = 9;
  *(undefined4 *)(param_1 + 0xcc0) = DAT_0034c49c;
  return;
}
