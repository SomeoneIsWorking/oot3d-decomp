// OoT3D decomp @ 004058d4  name=FUN_004058d4  size=76

uint FUN_004058d4(uint param_1,int param_2)

{
  uint uVar1;

  uVar1 = 0;
  if (param_2 == 0) {
    return param_1;
  }
  if (param_2 == 1) {
    return param_1 >> 1;
  }
  if (param_2 == 3) {
    uVar1 = (param_1 >> 3) * 0xe;
    if ((param_1 & 7) != 0) {
      uVar1 = (uVar1 + (param_1 & 7) * 2) - 2;
    }
  }
  return uVar1;
}
