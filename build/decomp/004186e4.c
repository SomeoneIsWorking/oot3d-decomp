// OoT3D decomp @ 004186e4  name=FUN_004186e4  size=156

void FUN_004186e4(undefined4 *param_1)

{
  int iVar1;

  *param_1 = DAT_00418780;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x16) = 0;
  param_1[6] = 0;
  param_1[8] = 0xffffffff;
  param_1[7] = 0;
  param_1[9] = 0;
  iVar1 = FUN_00350820(param_1 + 10,DAT_00418784,0x10,5);
  iVar1 = FUN_00350820(iVar1 + 0x50,DAT_00418788,0x54,7);
  iVar1 = FUN_00301390(iVar1 + 0x268);
  iVar1 = FUN_00350820(iVar1 + 0xe40,DAT_0041878c,0x1c,4);
  *(undefined4 *)(iVar1 + -0x111c) = 0;
  *(undefined1 *)(iVar1 + -0x1118) = 0;
  *(undefined1 *)(iVar1 + -0x1117) = 0;
  *(undefined1 *)(iVar1 + -0x1116) = 0;
  *(undefined1 *)(iVar1 + -0x1115) = 0;
  *(undefined1 *)(iVar1 + -0x1114) = 0;
  *(undefined1 *)(iVar1 + -0x1113) = 0;
  return;
}
