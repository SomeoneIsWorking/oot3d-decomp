// OoT3D decomp @ 00244cdc  name=FUN_00244cdc  size=176

void FUN_00244cdc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,3,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,3,4,param_1 + 0x228,param_1 + 0xa48,0x13);
  uVar1 = DAT_00244d8c;
  FUN_0033391c(DAT_00244d8c,param_1,4,0);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00244d90,param_1 + 0xbc,DAT_00244d94);
  *(undefined4 *)(param_1 + 0x126c) = 4;
  *(undefined4 *)(param_1 + 0x1270) = 4;
  return;
}
