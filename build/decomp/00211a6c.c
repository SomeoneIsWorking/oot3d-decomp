// OoT3D decomp @ 00211a6c  name=FUN_00211a6c  size=184

void FUN_00211a6c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  *(undefined1 *)(param_1 + 0x1f) = 6;
  FUN_00353dd0(param_2,param_1 + 0x254);
  FUN_00353d24(param_2,param_1 + 0x254,param_1,DAT_00211b24);
  FUN_00372f38(param_1,param_2,0);
  FUN_0034fe20(param_1,param_2,param_1 + 0x1a8,0,0,0,0,0);
  uVar1 = DAT_00211b28;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400;
  *(undefined2 *)(param_1 + 0x248) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0x24a) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0x24c) = *(undefined2 *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_0037572c(uVar1,param_1);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00211b2c;
  return;
}
