// OoT3D decomp @ 0036ef10  name=FUN_0036ef10  size=108

void FUN_0036ef10(float param_1,undefined4 param_2,undefined4 param_3)

{
  if ((int)param_1 < 0x3f400000) {
    param_1 = DAT_0036ef88 + param_1 * DAT_0036ef80 * DAT_0036ef84;
    *(float *)(DAT_0036ef7c + 100) = param_1;
  }
  else {
    *(float *)(DAT_0036ef7c + 100) = param_1;
  }
  if (0x3f000000 < (int)param_1) {
    FUN_0037547c(param_3,param_2,4,DAT_0036ef94,DAT_0036ef90,DAT_0036ef8c);
  }
  return;
}
