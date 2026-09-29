// OoT3D decomp @ 00407acc  name=FUN_00407acc  size=76

void FUN_00407acc(int param_1,undefined4 *param_2)

{
  param_2[0x30] = 0;
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2);
    *param_2 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = param_2;
    return;
  }
  return;
}
