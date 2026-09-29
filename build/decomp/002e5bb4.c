// OoT3D decomp @ 002e5bb4  name=FUN_002e5bb4  size=320

int FUN_002e5bb4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = param_1 + -0x30;
  *(int *)(param_1 + -0x10) = -*(int *)(param_1 + -0x10);
  iVar3 = DAT_002e5cf4;
  iVar2 = *(int *)(param_1 + -0x28);
  iVar4 = *(int *)(iVar2 + 0x20);
  while (iVar4 < 1) {
    iVar2 = *(int *)(iVar2 + 8);
    iVar4 = *(int *)(iVar2 + 0x20);
  }
  if (iVar2 == iVar1) {
    iVar2 = *(int *)(DAT_002e5cf4 + 0x18);
    *(int *)(iVar2 + 0x1c) = iVar1;
    *(int *)(param_1 + -0x18) = iVar2;
    *(int *)(param_1 + -0x14) = iVar3;
    *(int *)(iVar3 + 0x18) = iVar1;
  }
  else {
    *(int *)(*(int *)(iVar2 + 0x1c) + 0x18) = iVar1;
    *(int *)(param_1 + -0x18) = iVar2;
    *(undefined4 *)(param_1 + -0x14) = *(undefined4 *)(iVar2 + 0x1c);
    *(int *)(iVar2 + 0x1c) = iVar1;
  }
  iVar2 = DAT_002e5cf8;
  iVar3 = *(int *)(param_1 + -0x24);
  if ((0 < *(int *)(iVar3 + 0x20)) && (*(int *)(param_1 + -0x10) + iVar1 == iVar3)) {
    *(int *)(param_1 + -0x10) = *(int *)(param_1 + -0x10) + *(int *)(iVar3 + 0x20);
    *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0x18) = *(undefined4 *)(iVar3 + 0x18);
    *(undefined4 *)(*(int *)(iVar3 + 8) + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    *(undefined4 *)(*(int *)(iVar3 + 0xc) + 8) = *(undefined4 *)(iVar3 + 8);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  iVar3 = *(int *)(param_1 + -0x28);
  iVar4 = *(int *)(iVar3 + 0x20);
  if ((0 < iVar4) && (iVar1 - iVar4 == iVar3)) {
    *(int *)(iVar3 + 0x20) = iVar4 + *(int *)(param_1 + -0x10);
    *(undefined4 *)(*(int *)(param_1 + -0x18) + 0x1c) = *(undefined4 *)(param_1 + -0x14);
    *(undefined4 *)(*(int *)(param_1 + -0x14) + 0x18) = *(undefined4 *)(param_1 + -0x18);
    *(undefined4 *)(*(int *)(param_1 + -0x28) + 0xc) = *(undefined4 *)(param_1 + -0x24);
    *(undefined4 *)(*(int *)(param_1 + -0x24) + 8) = *(undefined4 *)(param_1 + -0x28);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
    iVar1 = iVar3;
  }
  return iVar1;
}
