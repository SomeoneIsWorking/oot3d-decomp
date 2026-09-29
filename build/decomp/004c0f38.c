// OoT3D decomp @ 004c0f38  name=FUN_004c0f38  size=100

int * FUN_004c0f38(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  *param_1 = param_2;
  param_1[1] = 0;
  puVar1 = (undefined4 *)FUN_0035010c(*(int *)(param_2 + 0xc) << 2);
  param_1[1] = (int)puVar1;
  *puVar1 = 0;
  iVar2 = *param_1 + 0x10;
  iVar4 = *(int *)(*param_1 + 0xc);
  if (0 < iVar4) {
    iVar3 = 0;
    do {
      iVar4 = iVar4 + -1;
      *(int *)(param_1[1] + iVar3 * 4) = iVar2;
      iVar2 = iVar2 + *(int *)(iVar2 + 0x24);
      iVar3 = iVar3 + 1;
    } while (iVar4 != 0);
  }
  return param_1;
}
