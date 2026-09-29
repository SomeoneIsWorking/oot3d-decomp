// OoT3D decomp @ 00223284  name=FUN_00223284  size=228

void FUN_00223284(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,10,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,10,0x14,param_1 + 0x228,param_1 + 0xa48,0x13);
  uVar1 = DAT_00223368;
  FUN_0033391c(DAT_00223368,param_1,0x14,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,0xb,0xffffffff,0xc);
  uVar2 = DAT_0022336c;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(uVar2,param_2,param_1,param_1 + 0x1a4);
  FUN_00372d4c(uVar1,DAT_00223370,param_1 + 0xbc,DAT_00223374);
  *(undefined4 *)(param_1 + 0x126c) = 2;
  *(undefined4 *)(param_1 + 0x1270) = 2;
  return;
}
