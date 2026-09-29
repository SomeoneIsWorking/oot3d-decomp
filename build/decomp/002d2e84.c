// OoT3D decomp @ 002d2e84  name=FUN_002d2e84  size=96

void FUN_002d2e84(int param_1,ushort param_2)

{
  int *piVar1;
  int *piVar2;

  piVar1 = *(int **)(param_1 + 8);
  if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
    do {
      piVar2 = (int *)*piVar1;
      if ((char)piVar1[-0x11] != '\0') {
        *(ushort *)(piVar1 + -0xe) = *(ushort *)(piVar1 + -0xe) | param_2;
      }
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 8));
    return;
  }
  return;
}
