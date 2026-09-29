// OoT3D decomp @ 002c3130  name=FUN_002c3130  size=124

int * FUN_002c3130(int param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;

  piVar1 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 4) != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      if (((uint)piVar1[2] <= param_2) && (param_2 < (uint)piVar1[3])) {
        piVar2 = (int *)FUN_002c3130(piVar1 + 5);
        if (piVar2 == (int *)0x0) {
          piVar2 = piVar1 + -1;
        }
        return piVar2;
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return (int *)0x0;
}
