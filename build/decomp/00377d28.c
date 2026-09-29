// OoT3D decomp @ 00377d28  name=FUN_00377d28  size=16

int FUN_00377d28(int param_1,code *param_2)

{
  int iVar1;
  int iVar2;

  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + -8);
  if (*(int *)(param_1 + -4) != 0) {
    iVar2 = iVar1 * *(int *)(param_1 + -4) + param_1;
    do {
      iVar2 = iVar2 - iVar1;
      (*param_2)(iVar2);
    } while (param_1 != iVar2);
  }
  return param_1 + -8;
}
