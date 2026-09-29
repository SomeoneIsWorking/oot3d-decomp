// OoT3D decomp @ 00333a38  name=FUN_00333a38  size=132

void FUN_00333a38(int *param_1,int param_2,undefined4 *param_3)

{
  if (param_2 < *(int *)(**(int **)(*param_1 + 8) + 8)) {
    *(undefined4 *)(param_1[1] + param_2 * 0x124 + 0x10) = *param_3;
    *(undefined4 *)(param_1[1] + param_2 * 0x124 + 0x14) = param_3[1];
    *(undefined4 *)(param_1[1] + param_2 * 0x124 + 0x18) = param_3[2];
    *(undefined4 *)(param_1[1] + param_2 * 0x124 + 0x1c) = param_3[3];
  }
  return;
}
