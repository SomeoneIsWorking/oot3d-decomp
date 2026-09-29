// OoT3D decomp @ 002e461c  name=FUN_002e461c  size=68

void FUN_002e461c(undefined1 *param_1,int param_2)

{
  if (param_2 == 1) {
    *param_1 = 1;
    param_1[2] = 1;
  }
  else if (param_2 == 2) {
    *param_1 = 1;
    param_1[2] = 0;
  }
  else {
    if (param_2 != 3) {
      *param_1 = 0;
      return;
    }
    *param_1 = 2;
  }
  return;
}
