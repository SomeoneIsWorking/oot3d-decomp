// OoT3D decomp @ 00301628  name=FUN_00301628  size=68

int * FUN_00301628(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;

  piVar1 = (int *)FUN_002f1424(param_2 + 0x10);
  piVar2 = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar1[2] = param_2;
    piVar1[1] = *(int *)(param_1 + 0x10);
    **(undefined4 **)(param_1 + 0x10) = piVar1;
    *(int **)(param_1 + 0x10) = piVar1;
    piVar2 = piVar1 + 4;
    *piVar1 = param_1;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x10);
  }
  return piVar2;
}
