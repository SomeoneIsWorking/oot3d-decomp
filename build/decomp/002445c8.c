// OoT3D decomp @ 002445c8  name=FUN_002445c8  size=176

void FUN_002445c8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,1,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,1,5,param_1 + 0x228,param_1 + 0xa48,0x13);
  uVar1 = DAT_00244678;
  FUN_0033391c(DAT_00244678,param_1,5,0);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_0024467c,param_1 + 0xbc,DAT_00244680);
  *(undefined4 *)(param_1 + 0x126c) = 7;
  *(undefined4 *)(param_1 + 0x1270) = 7;
  return;
}
