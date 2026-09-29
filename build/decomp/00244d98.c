// OoT3D decomp @ 00244d98  name=FUN_00244d98  size=204

void FUN_00244d98(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0x16,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0x16,4,param_1 + 0x228,param_1 + 0xa48,0x13);
  uVar1 = DAT_00244e64;
  FUN_0033391c(DAT_00244e64,param_1,4,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,0x14,0xffffffff,0xffffffff);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00244e68,param_1 + 0xbc,DAT_00244e6c);
  *(undefined4 *)(param_1 + 0x126c) = 5;
  *(undefined4 *)(param_1 + 0x1270) = 5;
  return;
}
