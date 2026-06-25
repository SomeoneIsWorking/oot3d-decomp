// OoT3D decomp @ 0041f024  name=FUN_0041f024  size=132

int FUN_0041f024(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_0041f0a8;
  iVar1 = FUN_00350820(param_1 + 8,DAT_0041f0ac,0x54,3);
  *(undefined4 *)(iVar1 + 0x904) = DAT_0041f0b0;
  FUN_002fbb10();
  *(undefined *)(iVar1 + -0x1c) = 0;
  FUN_00343280(iVar1 + 0x104,0x400);
  FUN_00343280(iVar1 + 0x504,0x400);
  *(undefined4 *)(iVar1 + -0x18) = 0;
  *(undefined4 *)(iVar1 + -0x14) = 0;
  *(undefined4 *)(iVar1 + -0x10) = 0;
  *(undefined4 *)(iVar1 + -0xc) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -4) = 0;
  *(undefined4 *)(iVar1 + 0x910) = 0;
  FUN_002fb9c4(iVar1 + -0x20);
  return iVar1 + -0x20;
}

