// OoT3D decomp @ 001f7094  name=FUN_001f7094  size=176

void FUN_001f7094(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00353dd0(param_2,param_1 + 0x254);
  FUN_00353d24(param_2,param_1 + 0x254,param_1,DAT_001f7144);
  *(undefined1 *)(param_1 + 0x1f) = 6;
  FUN_00372f38(param_1,param_2,0);
  FUN_0034fe20(param_1,param_2,param_1 + 0x1a8,0,*DAT_001f7148,0,0,0);
  FUN_0035fb94(param_1 + 0x246,param_1 + 0x34);
  uVar1 = DAT_001f714c;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_0037572c(uVar1,param_1);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_001f7150;
  return;
}
