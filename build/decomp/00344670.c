// OoT3D decomp @ 00344670  name=FUN_00344670  size=60

void FUN_00344670(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x78) = param_2;
  FUN_003446ac(*(undefined4 *)(param_1 + 100),*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 4);
  piVar2 = (int *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 0x1bc);
  iVar1 = *(int *)(param_1 + 0x68);
  *(int **)(iVar1 + 4) = piVar2;
  iVar3 = *(int *)(*piVar2 + 0x14);
  if (iVar3 == 0) {
    iVar3 = 4;
  }
  *(int *)(iVar1 + 0x174) = iVar3;
  *(int **)(*(int *)(iVar1 + 8) + 0x350) = piVar2;
  *(undefined *)(*(int *)(iVar1 + 8) + 6) = 0;
  return;
}

