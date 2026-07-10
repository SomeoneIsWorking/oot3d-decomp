// OoT3D decomp @ 002d75b0  name=FUN_002d75b0  size=44

void FUN_002d75b0(int param_1,int param_2,undefined4 *param_3)

{
  if (param_2 < 3) {
    param_1 = param_1 + param_2 * 0x60;
    *(undefined4 *)(param_1 + 0x98) = *param_3;
    *(undefined4 *)(param_1 + 0x9c) = param_3[1];
    *(undefined4 *)(param_1 + 0xa0) = param_3[2];
  }
  return;
}

