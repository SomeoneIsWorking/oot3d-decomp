// OoT3D decomp @ 00305980  name=FUN_00305980  size=48

int FUN_00305980(int param_1,int param_2,int **param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)(iVar1 + param_2 * 8);
  iVar3 = *piVar2;
  if (iVar3 != 0) {
    piVar2 = (int *)piVar2[1];
  }
  if (iVar3 != 0 && piVar2 != (int *)0x0) {
    *param_3 = piVar2;
    return iVar1 + iVar3;
  }
  return 0;
}

