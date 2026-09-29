// OoT3D decomp @ 002449cc  name=FUN_002449cc  size=176

void FUN_002449cc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0x12,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0x12,0x10,param_1 + 0x228,param_1 + 0xa48,0x15);
  uVar1 = DAT_00244a7c;
  FUN_0033391c(DAT_00244a7c,param_1,0x10,0);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00244a80,param_1 + 0xbc,DAT_00244a84);
  *(undefined4 *)(param_1 + 0x126c) = 10;
  *(undefined4 *)(param_1 + 0x1270) = 10;
  return;
}
