// OoT3D decomp @ 004094b4  name=FUN_004094b4  size=64

int FUN_004094b4(int param_1,int param_2,int param_3)

{
  int iVar1;

  if (param_2 != 0x1400) {
    param_3 = param_2 + -0x1400;
  }
  if (param_2 != 0x1400 && param_3 != 1) {
    iVar1 = 0;
    if (param_2 != 0x1403) {
      iVar1 = param_2 + -0x1400;
    }
    if (param_2 != 0x1403 && iVar1 != 2) {
      if (param_2 == 0x1406) {
        param_1 = param_1 << 2;
      }
      else {
        param_1 = 0;
      }
      return param_1;
    }
    param_1 = param_1 << 1;
  }
  return param_1;
}
