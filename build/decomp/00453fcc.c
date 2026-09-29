// OoT3D decomp @ 00453fcc  name=FUN_00453fcc  size=92

void FUN_00453fcc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;

  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_0030eea8(piVar1 + -0x37,param_2,param_3);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return;
}
