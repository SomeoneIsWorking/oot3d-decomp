// OoT3D decomp @ 0033d174  name=FUN_0033d174  size=140

void FUN_0033d174(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  if (2 < param_2) {
    return;
  }
  param_1 = param_1 + param_2 * 0x60;
  *(undefined4 *)(param_1 + 0x88) = *param_3;
  *(undefined4 *)(param_1 + 0x98) = *param_4;
  *(undefined4 *)(param_1 + 0xa8) = *param_5;
  *(undefined4 *)(param_1 + 0xb8) = *param_6;
  *(undefined4 *)(param_1 + 0x8c) = param_3[1];
  *(undefined4 *)(param_1 + 0x9c) = param_4[1];
  *(undefined4 *)(param_1 + 0xac) = param_5[1];
  *(undefined4 *)(param_1 + 0xbc) = param_6[1];
  *(undefined4 *)(param_1 + 0x90) = param_3[2];
  *(undefined4 *)(param_1 + 0xa0) = param_4[2];
  *(undefined4 *)(param_1 + 0xb0) = param_5[2];
  *(undefined4 *)(param_1 + 0xc0) = param_6[2];
  *(undefined4 *)(param_1 + 0x94) = param_3[3];
  return;
}

