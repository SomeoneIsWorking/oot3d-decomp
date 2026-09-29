// OoT3D decomp @ 00166a00  name=FUN_00166a00  size=208

void FUN_00166a00(int param_1,undefined4 param_2)

{
  FUN_00372d4c(DAT_00166ad8,DAT_00166ad0,param_1 + 0xbc,DAT_00166ad4);
  FUN_00372f38(param_1,param_2,param_1 + 0x630,1,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,1,0,param_1 + 0x228,param_1 + 0x3c8,8);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x56c,param_1,DAT_00166adc);
  FUN_00350318(param_1 + 0xa0,0,DAT_00166ae0);
  *(undefined1 *)(param_1 + 0x1f) = 6;
  FUN_0037572c(DAT_00166ae4,param_1);
  FUN_0034f55c(param_1,param_2);
  *(undefined4 *)(param_1 + 0x568) = DAT_00166ae8;
  return;
}
