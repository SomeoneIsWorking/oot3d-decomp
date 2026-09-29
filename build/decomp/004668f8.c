// OoT3D decomp @ 004668f8  name=FUN_004668f8  size=212

void FUN_004668f8(int param_1)

{
  int *piVar1;
  int *piVar2;

  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_0047f3f4(piVar1 + -0x16);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_0047f458(piVar1 + -0x16);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_0047f71c(piVar1 + -0x16);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
  }
  return;
}
