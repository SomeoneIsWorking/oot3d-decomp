// OoT3D decomp @ 00418984  name=FUN_00418984  size=196

int FUN_00418984(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_00418a48;
  *(undefined *)(param_1 + 0xfd) = 0;
  *(undefined *)((int)param_1 + 0x3f5) = 0;
  *(undefined *)((int)param_1 + 0x3f6) = 0;
  param_1[0xfe] = 0;
  param_1[0x100] = 0xffffffff;
  param_1[0xff] = 0;
  param_1[0x101] = 0;
  iVar1 = FUN_00350820(param_1 + 0x102,DAT_00418a4c,0x10,0xf);
  iVar1 = FUN_00350820(iVar1 + 0xf0,DAT_00418a50,0x54,0xc);
  iVar1 = FUN_00301390(iVar1 + 0x420);
  iVar1 = FUN_00350820(iVar1 + 0xe40,DAT_00418a54,0x1c,0xc);
  *(undefined4 *)(iVar1 + -0x1754) = 0;
  *(undefined *)(iVar1 + -0x1750) = 0;
  *(undefined *)(iVar1 + -0x174d) = 0;
  *(undefined *)(iVar1 + -0x174c) = 0;
  *(undefined *)(iVar1 + -0x174f) = 0;
  *(undefined *)(iVar1 + -0x174e) = 0;
  *(undefined4 *)(iVar1 + 0x150) = 0;
  *(undefined4 *)(iVar1 + 0x154) = 0;
  FUN_00343280(iVar1 + -0x173c,0x48);
  FUN_00343280(iVar1 + -0x13f4,0x80);
  return iVar1 + -0x1758;
}

