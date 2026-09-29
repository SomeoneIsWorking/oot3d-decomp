// OoT3D decomp @ 0018c21c  name=FUN_0018c21c  size=204

void FUN_0018c21c(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_00372d4c(DAT_0018c2f0,DAT_0018c2e8,param_1 + 0xbc,DAT_0018c2ec);
  FUN_00372f38(param_1,param_2,param_1 + 0x710,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1fc,0,2,param_1 + 0x280,param_1 + 0x4bc,0xb);
  FUN_0036e734(param_1 + 0x1fc,2);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0018c2f4);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_0037572c(DAT_0018c2f8,param_1);
  iVar1 = DAT_0018c300;
  *(undefined4 *)(param_1 + 0x708) = DAT_0018c2fc;
  *(undefined2 *)(iVar1 + param_1) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 6;
  return;
}
