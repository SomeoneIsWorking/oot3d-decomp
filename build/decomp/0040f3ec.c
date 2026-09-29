// OoT3D decomp @ 0040f3ec  name=FUN_0040f3ec  size=24

int FUN_0040f3ec(int param_1)

{
  if (*(int *)(param_1 + 4) == 0x21f) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}
