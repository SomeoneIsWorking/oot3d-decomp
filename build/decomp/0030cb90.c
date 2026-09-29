// OoT3D decomp @ 0030cb90  name=FUN_0030cb90  size=84

void FUN_0030cb90(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;

  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_003102dc(piVar1 + -0x3b,param_2);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return;
}
