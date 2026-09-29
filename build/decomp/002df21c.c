// OoT3D decomp @ 002df21c  name=FUN_002df21c  size=72

void FUN_002df21c(uint *param_1)

{
  uint uVar1;

  uVar1 = param_1[6];
  if ((*param_1 & 1) != 0) {
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      (*(code *)param_1[1])(0x20,param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
    return;
  }
  return;
}
