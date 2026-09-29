// OoT3D decomp @ 0047d758  name=FUN_0047d758  size=76

void FUN_0047d758(int *param_1)

{
  if (*param_1 != 0) {
    *(undefined4 *)(*param_1 + 0xb8) = *(undefined4 *)param_1[1];
    if (*param_1 != 0) {
      FUN_002d4a10(*(float *)param_1[2] * (float)param_1[3],*param_1,0);
      return;
    }
  }
  return;
}
