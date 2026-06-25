// OoT3D decomp @ 00313bdc  name=FUN_00313bdc  size=60

void FUN_00313bdc(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 8) == param_1) {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    if (*(int **)(*param_1 + 0xc) == param_1) {
      *(undefined4 *)(*param_1 + 0xc) = 0;
    }
    if (*param_1 != 0) {
      *param_1 = 0;
    }
  }
  return;
}

