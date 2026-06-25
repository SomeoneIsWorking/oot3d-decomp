// OoT3D decomp @ 0030c9b8  name=FUN_0030c9b8  size=44

void FUN_0030c9b8(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = *param_1 + -1;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

