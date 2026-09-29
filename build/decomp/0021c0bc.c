// OoT3D decomp @ 0021c0bc  name=FUN_0021c0bc  size=80

void FUN_0021c0bc(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00353020(DAT_0021c114,DAT_0021c110,uVar1,DAT_0021c10c,param_1 + 0x1a4,DAT_0021c118,0);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 5;
  *(undefined4 *)(param_1 + 0x4a0) = DAT_0021c11c;
  return;
}
