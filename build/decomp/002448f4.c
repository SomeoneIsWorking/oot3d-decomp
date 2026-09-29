// OoT3D decomp @ 002448f4  name=FUN_002448f4  size=204

void FUN_002448f4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0x15,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0x15,6,param_1 + 0x228,param_1 + 0xa48,0xf);
  uVar1 = DAT_002449c0;
  FUN_0033391c(DAT_002449c0,param_1,6,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,0x13,0xffffffff,0xffffffff);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_002449c4,param_1 + 0xbc,DAT_002449c8);
  *(undefined4 *)(param_1 + 0x126c) = 8;
  *(undefined4 *)(param_1 + 0x1270) = 8;
  return;
}
