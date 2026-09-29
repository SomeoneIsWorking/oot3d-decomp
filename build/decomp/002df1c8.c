// OoT3D decomp @ 002df1c8  name=FUN_002df1c8  size=84

void FUN_002df1c8(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;

  uVar1 = param_1[6];
  if ((*param_1 & 0x10) == 0) {
    uVar2 = 0x20;
  }
  else {
    uVar2 = 0x30;
  }
  if ((*param_1 & 1) != 0) {
    return;
  }
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (*(code *)param_1[1])(uVar2,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  return;
}
