// OoT3D decomp @ 00357194  name=FUN_00357194  size=120

byte FUN_00357194(float *param_1,float *param_2,float *param_3)

{
  byte bVar1;

  bVar1 = *param_3 < *param_1;
  if (*param_1 < *param_2) {
    bVar1 = bVar1 | 2;
  }
  if (param_3[1] < param_1[1]) {
    bVar1 = bVar1 | 4;
  }
  if (param_1[1] < param_2[1]) {
    bVar1 = bVar1 | 8;
  }
  if (param_3[2] < param_1[2]) {
    bVar1 = bVar1 | 0x10;
  }
  if (param_1[2] < param_2[2]) {
    bVar1 = bVar1 | 0x20;
  }
  return bVar1;
}
