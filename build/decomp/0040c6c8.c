// OoT3D decomp @ 0040c6c8  name=FUN_0040c6c8  size=124

void FUN_0040c6c8(int param_1)

{
  int iVar1;
  int iVar2;
  int iStack_18;

  iVar2 = 0;
  if (0 < *(int *)(**(int **)(param_1 + 4) + 8)) {
    do {
      iStack_18 = *(int *)(*(int *)(param_1 + 4) + 4) + iVar2 * 0x28;
      iVar1 = *(int *)(param_1 + 0xc);
      func_0x0030487c(&iStack_18,iVar1 + iVar2 * 0x24,iVar2 * 0x24 + 0xc + iVar1,
                      iVar1 + iVar2 * 0x24 + 0x18);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(**(int **)(param_1 + 4) + 8));
  }
  return;
}
