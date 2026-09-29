// OoT3D decomp @ 00244b44  name=FUN_00244b44  size=180

void FUN_00244b44(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0xe,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0xe,0x1b,param_1 + 0x228,param_1 + 0xa48,8);
  uVar1 = DAT_00244bf8;
  FUN_0033391c(DAT_00244bf8,param_1,0x1b,0);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00244bfc,param_1 + 0xbc,DAT_00244c00);
  *(undefined4 *)(param_1 + 0x126c) = 0x17;
  *(undefined4 *)(param_1 + 0x1270) = 0x12;
  return;
}
