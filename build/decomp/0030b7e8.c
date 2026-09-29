// OoT3D decomp @ 0030b7e8  name=FUN_0030b7e8  size=24

void FUN_0030b7e8(float param_1,int param_2)

{
  if (param_1 < DAT_0030b800) {
    param_1 = DAT_0030b800;
  }
  *(float *)(param_2 + 0xb0) = param_1;
  return;
}
