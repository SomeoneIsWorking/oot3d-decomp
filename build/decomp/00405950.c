// OoT3D decomp @ 00405950  name=FUN_00405950  size=124

void FUN_00405950(int param_1)

{
  int *piVar1;
  int *piVar2;

  if (*(char *)(param_1 + 0x1e8) != '\0') {
    *(undefined1 *)(param_1 + 0x1eb) = 1;
    FUN_0030e0b4();
    *(undefined1 *)(param_1 + 0x1e8) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar2 = (int *)*piVar1;
      (**(code **)(piVar1[-1] + 0x10))();
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1d4));
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  return;
}
