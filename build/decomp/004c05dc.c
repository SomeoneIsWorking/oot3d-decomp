// OoT3D decomp @ 004c05dc  name=FUN_004c05dc  size=60

undefined4 FUN_004c05dc(int *param_1)

{
  if ((char)param_1[1] != '\0') {
    return 1;
  }
  if (*(int *)(*param_1 + 4) != 3) {
    return 0;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return 1;
}
