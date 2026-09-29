// OoT3D decomp @ 003b3218  name=FUN_003b3218  size=92

void FUN_003b3218(int param_1)

{
  if ((int)(*(float *)(param_1 + 0xec) * *(float *)(param_1 + 0xec) +
           *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0xf4)) < DAT_003b3274) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    (**(code **)(DAT_003b3278 + ((uint)(int)*(short *)(param_1 + 0x1c) >> 0xb & 0x1c)))(param_1);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003b327c;
  }
  return;
}
