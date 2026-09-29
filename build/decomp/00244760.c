// OoT3D decomp @ 00244760  name=FUN_00244760  size=176

void FUN_00244760(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0x14,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0x14,8,param_1 + 0x228,param_1 + 0xa48,0x10);
  uVar1 = DAT_00244810;
  FUN_0033391c(DAT_00244810,param_1,8,0);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00244814,param_1 + 0xbc,DAT_00244818);
  *(undefined4 *)(param_1 + 0x126c) = 9;
  *(undefined4 *)(param_1 + 0x1270) = 9;
  return;
}
