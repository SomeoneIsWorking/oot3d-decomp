// OoT3D decomp @ 0024481c  name=FUN_0024481c  size=204

void FUN_0024481c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0x13,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0x13,7,param_1 + 0x228,param_1 + 0xa48,0x11);
  uVar1 = DAT_002448e8;
  FUN_0033391c(DAT_002448e8,param_1,7,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,0x12,0xffffffff,0xffffffff);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_002448ec,param_1 + 0xbc,DAT_002448f0);
  *(undefined4 *)(param_1 + 0x126c) = 6;
  *(undefined4 *)(param_1 + 0x1270) = 6;
  return;
}
