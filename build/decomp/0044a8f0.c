// OoT3D decomp @ 0044a8f0  name=FUN_0044a8f0  size=176

void FUN_0044a8f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  FUN_002e219c(*(undefined4 *)(param_1 + 4),DAT_0044a9a0);
  iVar1 = 0;
  do {
    iVar2 = (int)(char)iVar1;
    iVar3 = param_1 + iVar2 * 4;
    FUN_002e2134(*(undefined4 *)(iVar3 + 8),DAT_0044a9a0,iVar2);
    FUN_002e1e3c(DAT_0044a9a0,iVar2,*(int *)(iVar3 + 0x10) != 0);
    FUN_002e1fa4(DAT_0044a9a0,iVar2,(int)*(char *)(param_1 + iVar2 + 0x20));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  FUN_002e1df4(DAT_0044a9a0,*(undefined1 *)(param_1 + 2));
  FUN_002e1ea8(DAT_0044a9a0,*(undefined1 *)(param_1 + 1));
  FUN_002e1f00(DAT_0044a9a0,*(undefined2 *)(param_1 + 0x24));
  FUN_00453e74(DAT_0044a9a0,*(undefined1 *)(param_1 + 0x23));
  FUN_002e1f54(DAT_0044a9a0,*(undefined2 *)(param_1 + 0x26));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}
