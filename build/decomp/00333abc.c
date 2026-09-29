// OoT3D decomp @ 00333abc  name=FUN_00333abc  size=140

void FUN_00333abc(int *param_1,int param_2,undefined4 *param_3)

{
  if (*(int *)(**(int **)(*param_1 + 8) + 8) <= param_2) {
    return;
  }
  *param_3 = *(undefined4 *)(param_1[1] + param_2 * 0x124 + 0x10);
  param_3[1] = *(undefined4 *)(param_2 * 0x124 + 0x14 + param_1[1]);
  param_3[2] = *(undefined4 *)(param_1[1] + param_2 * 0x124 + 0x18);
  param_3[3] = *(undefined4 *)(param_1[1] + param_2 * 0x124 + 0x1c);
  return;
}
