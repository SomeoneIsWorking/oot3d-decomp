// OoT3D decomp @ 0029c21c  name=FUN_0029c21c  size=120

void FUN_0029c21c(int param_1)

{
  if (*(char *)(param_1 + 0x1b5) != '\0') {
    *DAT_0029c294 = 0;
  }
  FUN_00350f34(param_1,param_1 + 0x1d4,param_1 + 0x1d8,0);
  FUN_00350f34(param_1,param_1 + 0x1cc,param_1 + 0x1d0,0);
  if (*(int *)(param_1 + 0x1dc) != 0) {
    (**(code **)(*(int *)*DAT_0029c298 + 0x10))((int *)*DAT_0029c298,*(int *)(param_1 + 0x1dc));
  }
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  return;
}
