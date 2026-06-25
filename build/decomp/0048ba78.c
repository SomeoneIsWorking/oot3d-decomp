// OoT3D decomp @ 0048ba78  name=FUN_0048ba78  size=116

void FUN_0048ba78(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = 0;
  if (0 < *(int *)(**(int **)(iVar1 + 4) + 8)) {
    do {
      local_18 = *(int *)(*(int *)(iVar1 + 4) + 4) + iVar3 * 0x28;
      iVar2 = param_2 + iVar3 * 0x24;
      FUN_0030487c(&local_18,iVar2,iVar2 + 0xc,iVar2 + 0x18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(**(int **)(iVar1 + 4) + 8));
  }
  return;
}

