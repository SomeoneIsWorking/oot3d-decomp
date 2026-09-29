// OoT3D decomp @ 00222e00  name=FUN_00222e00  size=228

void FUN_00222e00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,9,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,9,0x13,param_1 + 0x228,param_1 + 0xa48,0x16);
  uVar1 = DAT_00222ee4;
  FUN_0033391c(DAT_00222ee4,param_1,0x13,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,9,0xffffffff,10);
  uVar2 = DAT_00222ee8;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar2,param_2,param_1,param_1 + 0x1a4);
  FUN_00372d4c(uVar1,DAT_00222eec,param_1 + 0xbc,DAT_00222ef0);
  *(undefined4 *)(param_1 + 0x126c) = 1;
  *(undefined4 *)(param_1 + 0x1270) = 1;
  return;
}
