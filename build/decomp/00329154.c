// OoT3D decomp @ 00329154  name=FUN_00329154  size=84

void FUN_00329154(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1e0,5);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_003291b0,DAT_003291ac,uVar1,DAT_003291a8,param_1 + 0x1e0,5,1);
  *(undefined4 *)(param_1 + 0x6c) = DAT_003291b4;
  *(undefined1 *)(param_1 + 0x964) = 4;
  *(undefined4 *)(param_1 + 0x950) = DAT_003291b8;
  return;
}
