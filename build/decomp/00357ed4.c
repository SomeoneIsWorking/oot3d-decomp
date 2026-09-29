// OoT3D decomp @ 00357ed4  name=FUN_00357ed4  size=36

void FUN_00357ed4(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  param_2[1] = param_3;
  param_2[2] = param_4;
  *param_2 = 0;
  *param_2 = *(undefined4 *)(param_1 + 0x2280);
  *(undefined4 **)(param_1 + 0x2280) = param_2;
  return;
}
