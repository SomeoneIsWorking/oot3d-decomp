// OoT3D decomp @ 0030cad8  name=FUN_0030cad8  size=100

int FUN_0030cad8(int param_1)

{
  int *piVar1;
  int *piVar2;

  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_0030a6b0(piVar1 + -0x3b,param_1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  FUN_0030d538(param_1,*(undefined4 *)(param_1 + 4),param_1 + 4);
  return param_1;
}
