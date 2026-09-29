// OoT3D decomp @ 00244c04  name=FUN_00244c04  size=204

void FUN_00244c04(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,1,param_1 + 0x228,param_1 + 0xa48,0xf);
  uVar1 = DAT_00244cd0;
  FUN_0033391c(DAT_00244cd0,param_1,1,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,1,0xffffffff,0xffffffff);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00244cd4,param_1 + 0xbc,DAT_00244cd8);
  *(undefined4 *)(param_1 + 0x126c) = 0xe;
  *(undefined4 *)(param_1 + 0x1270) = 0xc;
  return;
}
