// OoT3D decomp @ 002cde90  name=FUN_002cde90  size=44

float FUN_002cde90(float param_1,char *param_2)

{
  bool bVar1;

  bVar1 = false;
  if (*param_2 == '\0') {
    bVar1 = *(float *)(param_2 + 0x10) == DAT_002cdebc;
    param_1 = DAT_002cdebc;
  }
  if (!bVar1) {
    param_1 = *(float *)(param_2 + 4) * DAT_002cdec0;
  }
  return param_1;
}
