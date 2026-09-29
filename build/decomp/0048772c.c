// OoT3D decomp @ 0048772c  name=FUN_0048772c  size=64

void FUN_0048772c(int param_1,int param_2,int param_3)

{
  uint in_fpscr;
  float fVar1;

  if (*(char *)(param_1 + 8) != '\0') {
    if (param_2 == 0) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + param_3;
    }
    else if (param_2 == 1) {
      fVar1 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) + fVar1;
    }
  }
  return;
}
