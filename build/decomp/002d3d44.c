// OoT3D decomp @ 002d3d44  name=FUN_002d3d44  size=24

void FUN_002d3d44(float param_1,int param_2)

{
  if (param_1 < DAT_002d3d5c) {
    param_1 = DAT_002d3d5c;
  }
  *(float *)(param_2 + 0x2c) = param_1;
  return;
}

