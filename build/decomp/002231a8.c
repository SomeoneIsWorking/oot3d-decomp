// OoT3D decomp @ 002231a8  name=FUN_002231a8  size=208

void FUN_002231a8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0xd,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0xd,0x19,param_1 + 0x228,param_1 + 0xa48,8);
  uVar1 = DAT_00223278;
  FUN_0033391c(DAT_00223278,param_1,0x19,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,0xe,0xffffffff,0xffffffff);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_0022327c,param_1 + 0xbc,DAT_00223280);
  *(undefined4 *)(param_1 + 0x126c) = 0x1a;
  *(undefined4 *)(param_1 + 0x1270) = 0x15;
  return;
}
