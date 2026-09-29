// OoT3D decomp @ 002ff488  name=FUN_002ff488  size=72

void FUN_002ff488(int param_1)

{
  int *piVar1;

  *(char *)(DAT_002ff4d0 + 3) = (char)param_1;
  piVar1 = DAT_002ff4d4;
  if (param_1 != 0) {
    return;
  }
  if (*DAT_002ff4d4 != 0) {
    FUN_002d3d38();
  }
  if (piVar1[1] != 0) {
    FUN_002d3d38();
  }
  if (piVar1[3] != 0) {
    FUN_002d3d38();
    return;
  }
  return;
}
