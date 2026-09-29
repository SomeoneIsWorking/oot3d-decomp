// OoT3D decomp @ 0040c0e4  name=FUN_0040c0e4  size=100

int FUN_0040c0e4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  *param_1 = DAT_0040c148;
  FUN_003445d4(param_1 + 1);
  FUN_003445d4(param_1 + 0x6f);
  param_1[0xe1] = 0;
  uVar1 = DAT_0040c14c;
  param_1[0xe2] = 0;
  uVar2 = DAT_0040c150;
  param_1[0xe3] = 0;
  param_1[0xdd] = uVar1;
  param_1[0xde] = uVar2;
  param_1[0xdf] = uVar1;
  param_1[0xe0] = uVar2;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  iVar3 = FUN_003488e4(param_1 + 0x6f);
  iVar3 = FUN_003488e4(iVar3 + -0x1b8);
  return iVar3 + -4;
}
