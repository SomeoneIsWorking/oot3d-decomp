// OoT3D decomp @ 00333294  name=FUN_00333294  size=32

void FUN_00333294(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(**(int **)(param_1 + 4) + 0x14);
  if (iVar1 == 0) {
    iVar1 = 4;
  }
  if (param_2 <= iVar1) {
    *(int *)(param_1 + 0x174) = param_2;
  }
  return;
}
