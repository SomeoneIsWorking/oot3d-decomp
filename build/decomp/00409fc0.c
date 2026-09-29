// OoT3D decomp @ 00409fc0  name=FUN_00409fc0  size=64

void FUN_00409fc0(int *param_1)

{
  undefined4 uVar1;

  if (*param_1 != 0) {
    uVar1 = FUN_00307674();
    (**(code **)(*(int *)*DAT_0040a000 + 0x10))((int *)*DAT_0040a000,uVar1);
  }
  *param_1 = 0;
  return;
}
