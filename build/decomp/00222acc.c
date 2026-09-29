// OoT3D decomp @ 00222acc  name=FUN_00222acc  size=208

void FUN_00222acc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0xf,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0xf,0x1a,param_1 + 0x228,param_1 + 0xa48,8);
  uVar1 = DAT_00222b9c;
  FUN_0033391c(DAT_00222b9c,param_1,0x1a,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,0x10,0xffffffff,0xffffffff);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00222ba0,param_1 + 0xbc,DAT_00222ba4);
  *(undefined4 *)(param_1 + 0x126c) = 0x19;
  *(undefined4 *)(param_1 + 0x1270) = 0x14;
  return;
}
