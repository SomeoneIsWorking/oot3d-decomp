// OoT3D decomp @ 0035046c  name=FUN_0035046c  size=96

void FUN_0035046c(int *param_1)

{
  undefined4 uVar1;

  if (param_1[2] != 0) {
    uVar1 = FUN_003685a0();
    (**(code **)(*(int *)*DAT_003504cc + 0x10))((int *)*DAT_003504cc,uVar1);
    param_1[2] = 0;
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 4))();
    *param_1 = 0;
  }
  param_1[1] = 0;
  return;
}
