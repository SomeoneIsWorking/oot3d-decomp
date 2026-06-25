// OoT3D decomp @ 004c0588  name=FUN_004c0588  size=56

void FUN_004c0588(int param_1,float *param_2)

{
  *param_2 = -*(float *)(param_1 + 4) * *(float *)(param_1 + 0x44);
  param_2[1] = -*(float *)(param_1 + 8) * *(float *)(param_1 + 0x40);
  param_2[2] = -*(float *)(param_1 + 0xc);
  return;
}

