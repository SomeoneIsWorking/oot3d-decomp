// OoT3D decomp @ 00331094  name=FUN_00331094  size=164

void FUN_00331094(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  if (*(int *)(**(int **)(*param_1 + 8) + 8) <= param_2) {
    return;
  }
  if (5 < param_3) {
    return;
  }
  *param_4 = *(undefined4 *)(param_1[1] + param_2 * 0x124 + param_3 * 0x10 + 0x20);
  param_4[1] = *(undefined4 *)(param_3 * 0x10 + 0x24 + param_1[1] + param_2 * 0x124);
  param_4[2] = *(undefined4 *)(param_3 * 0x10 + 0x28 + param_1[1] + param_2 * 0x124);
  param_4[3] = *(undefined4 *)(param_1[1] + param_2 * 0x124 + param_3 * 0x10 + 0x2c);
  return;
}

