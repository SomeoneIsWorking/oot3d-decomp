// OoT3D decomp @ 002d2ee4  name=FUN_002d2ee4  size=276

void FUN_002d2ee4(undefined4 param_1,int param_2)

{
  if (*DAT_002d2ef0 == '\0') {
    return;
  }
  *(undefined4 *)(DAT_002d2ef0 + param_2 * 4 + 8) = param_1;
  if (*DAT_004855f4 != '\0') {
    *(undefined4 *)(DAT_004855f4 + param_2 * 4 + 8) = param_1;
    FUN_002e2134(DAT_00489b80);
    return;
  }
  return;
}
