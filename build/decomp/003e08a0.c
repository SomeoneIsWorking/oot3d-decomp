// OoT3D decomp @ 003e08a0  name=FUN_003e08a0  size=104

void FUN_003e08a0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x98) < iRam003e0908) {
    if ((int)ABS(*(float *)(param_1 + 0x2c) - *(float *)(*(int *)(param_2 + 0x20ac) + 0x2c)) <
        iRam003e0908 + -0x580000) {
      if (-1 < *(short *)(iRam003e090c + param_1)) {
        FUN_00375c10(param_2);
      }
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
  }
  return;
}
