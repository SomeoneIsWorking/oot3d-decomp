// OoT3D decomp @ 00222ef4  name=FUN_00222ef4  size=220

void FUN_00222ef4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,2,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,2,0xb,param_1 + 0x228,param_1 + 0xa48,0x1a);
  uVar1 = DAT_00222fd0;
  FUN_0033391c(DAT_00222fd0,param_1,0xb,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,4,0xffffffff,0xffffffff);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00222fd4,param_1 + 0xbc,DAT_00222fd8);
  *(undefined4 *)(param_1 + 0x126c) = 0x10;
  *(undefined4 *)(param_1 + 0x1270) = 0xe;
  *(undefined2 *)(DAT_00222fdc + param_1) = 3;
  return;
}
