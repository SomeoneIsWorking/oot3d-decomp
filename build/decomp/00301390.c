// OoT3D decomp @ 00301390  name=FUN_00301390  size=128

int FUN_00301390(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_00301414;
  *param_1 = DAT_00301410;
  param_1[0x306] = uVar1;
  FUN_002fbb10(param_1 + 0x306);
  iVar2 = FUN_002e77e8(param_1 + 0x309);
  iVar2 = FUN_002ffa20(iVar2 + 0x1c4);
  FUN_00343280(iVar2 + -0xdd0,0x400);
  FUN_00343280(iVar2 + -0x9d0,0x800);
  *(undefined4 *)(iVar2 + -0xde4) = 0;
  *(undefined4 *)(iVar2 + -0xddc) = 0;
  *(undefined4 *)(iVar2 + -0xdd8) = 0;
  *(undefined4 *)(iVar2 + -0xdd4) = 0;
  FUN_002e68ac(iVar2 + -0xde8);
  return iVar2 + -0xde8;
}

