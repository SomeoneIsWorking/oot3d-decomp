// OoT3D decomp @ 002c5900  name=FUN_002c5900  size=188

void FUN_002c5900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint in_fpscr;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;

  local_20 = (float)VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
  local_1c = (float)VectorUnsignedToFloat(param_6,(byte)(in_fpscr >> 0x15) & 3);
  local_18 = (float)VectorUnsignedToFloat(param_7,(byte)(in_fpscr >> 0x15) & 3);
  local_20 = local_20 * DAT_002c59bc;
  local_1c = local_1c * DAT_002c59bc;
  local_18 = local_18 * DAT_002c59bc;
  local_14 = DAT_002c59c0;
  if (((*DAT_002c59c4 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_002c59c4), iVar1 != 0)) {
    FUN_0036788c(DAT_002c59c8);
  }
  FUN_002c56c4(DAT_002c59d4,param_2,param_3,param_4,&local_20);
  return;
}
