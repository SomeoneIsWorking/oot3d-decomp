// OoT3D decomp @ 003688a8  name=FUN_003688a8  size=156

void FUN_003688a8(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  if (*(int *)(**(int **)(*param_1 + 8) + 8) <= param_2) {
    return;
  }
  *(undefined4 *)(param_1[1] + param_2 * 0x124 + param_3 * 0x10 + 0x20) = *param_4;
  *(undefined4 *)(param_1[1] + param_2 * 0x124 + param_3 * 0x10 + 0x24) = param_4[1];
  *(undefined4 *)(param_1[1] + param_2 * 0x124 + param_3 * 0x10 + 0x28) = param_4[2];
  *(undefined4 *)(param_1[1] + param_2 * 0x124 + param_3 * 0x10 + 0x2c) = param_4[3];
  return;
}

