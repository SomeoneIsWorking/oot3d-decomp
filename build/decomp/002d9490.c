// OoT3D decomp @ 002d9490  name=FUN_002d9490  size=184

void FUN_002d9490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,uint param_6)

{
  int iVar1;
  uint in_fpscr;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  if (param_5 != 0 && (param_6 & 3) != 0) {
    local_14 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    local_10 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    local_c = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
    local_8 = (float)VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
    local_14 = local_14 * DAT_002d9548;
    local_10 = local_10 * DAT_002d9548;
    local_c = local_c * DAT_002d9548;
    local_8 = local_8 * DAT_002d9548;
    if (((*DAT_002d954c & 1) == 0) && (iVar1 = FUN_003679b4(DAT_002d954c), iVar1 != 0)) {
      FUN_0036788c(DAT_002d9550);
    }
    FUN_003339e8(DAT_002d955c,4,&local_14,0);
  }
  return;
}
