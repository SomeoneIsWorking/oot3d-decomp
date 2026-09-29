// OoT3D decomp @ 00244a88  name=FUN_00244a88  size=176

void FUN_00244a88(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,6,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,6,0x11,param_1 + 0x228,param_1 + 0xa48,0x14);
  uVar1 = DAT_00244b38;
  FUN_0033391c(DAT_00244b38,param_1,0x11,0);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00244b3c,param_1 + 0xbc,DAT_00244b40);
  *(undefined4 *)(param_1 + 0x126c) = 0xb;
  *(undefined4 *)(param_1 + 0x1270) = 0xb;
  return;
}
