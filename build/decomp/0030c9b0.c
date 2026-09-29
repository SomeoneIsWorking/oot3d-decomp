// OoT3D decomp @ 0030c9b0  name=FUN_0030c9b0  size=8

void FUN_0030c9b0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;

  iVar1 = *(int *)(param_2 + 4);
  piVar2 = *(int **)(param_2 + 8);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = *param_1 + -1;
  *(int *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}
