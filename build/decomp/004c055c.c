// OoT3D decomp @ 004c055c  name=FUN_004c055c  size=40

bool FUN_004c055c(int param_1)

{
  return (int)(*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
              *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c)) < DAT_004c0584;
}

