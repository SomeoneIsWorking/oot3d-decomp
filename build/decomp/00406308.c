// OoT3D decomp @ 00406308  name=FUN_00406308  size=116

void FUN_00406308(int param_1)

{
  int *piVar1;
  int *piVar2;

  if (*(char *)(param_1 + 0x10) != '\0') {
    piVar1 = *(int **)(param_1 + 8);
    if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
      do {
        piVar2 = (int *)*piVar1;
        FUN_00309fa8(piVar1 + -0x4f);
        piVar1 = piVar2;
      } while (piVar2 != (int *)(param_1 + 8));
    }
    FUN_00309e24(param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}
