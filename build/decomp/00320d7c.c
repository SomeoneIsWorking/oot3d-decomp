// OoT3D decomp @ 00320d7c  name=FUN_00320d7c  size=56

void FUN_00320d7c(int param_1,int param_2,int param_3)

{
  if (param_2 == -1) {
    param_2 = (int)*(short *)(param_1 + 0xa64);
  }
  if (param_3 == 7) {
    *(short *)(param_1 + 0xa64) = (short)param_2;
  }
  *(short *)(*(int *)(param_1 + param_2 * 4 + 0xa54) + 0x188) = (short)param_3;
  return;
}

