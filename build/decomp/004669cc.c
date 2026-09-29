// OoT3D decomp @ 004669cc  name=FUN_004669cc  size=80

void FUN_004669cc(int param_1)

{
  int *piVar1;
  int *piVar2;

  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_0047f958(piVar1 + -0x4f,1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  return;
}
