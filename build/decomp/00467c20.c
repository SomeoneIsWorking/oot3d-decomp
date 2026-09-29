// OoT3D decomp @ 00467c20  name=FUN_00467c20  size=172

int FUN_00467c20(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  uVar1 = DAT_00467ccc;
  *param_1 = 0;
  uVar2 = DAT_00467cd0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  uVar1 = DAT_00467cd4;
  param_1[3] = uVar2;
  uVar2 = DAT_00467cd8;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = 0;
  iVar3 = FUN_00350820(param_1 + 7,DAT_00467cdc,0x70,2);
  *(undefined4 *)(iVar3 + 0xe8) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0xf4) = 0;
  *(undefined4 *)(iVar3 + 0xf8) = 0;
  *(undefined2 *)(iVar3 + 0xfc) = 0;
  *(undefined1 *)(iVar3 + 0xfe) = 0x8c;
  *(undefined1 *)(iVar3 + 0xff) = 0x8c;
  *(undefined1 *)(iVar3 + 0x100) = 0x8c;
  *(undefined1 *)(iVar3 + 0x101) = 0;
  *(undefined4 *)(iVar3 + 0xe0) = 0;
  *(undefined4 *)(iVar3 + 0xe4) = 0;
  *(undefined4 *)(iVar3 + 0xec) = 0;
  *(undefined4 *)(iVar3 + 0xf0) = 0;
  FUN_00343280(iVar3,0xe0);
  *(undefined1 *)(iVar3 + -3) = 0;
  *(undefined1 *)(iVar3 + -2) = 0;
  return iVar3 + -0x1c;
}
