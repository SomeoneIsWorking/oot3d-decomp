// OoT3D decomp @ 00347790  name=FUN_00347790  size=220

void FUN_00347790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  uint in_fpscr;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;

  local_34 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  local_28 = (float)VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
  local_2c = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  local_30 = (float)VectorUnsignedToFloat(param_6,(byte)(in_fpscr >> 0x15) & 3);
  local_34 = local_34 * DAT_0034786c;
  local_28 = local_28 * DAT_0034786c;
  local_2c = local_2c * DAT_0034786c;
  local_30 = local_30 * DAT_0034786c;
  if (((*DAT_00347870 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_00347870), iVar1 != 0)) {
    FUN_0036788c(DAT_00347874);
  }
  FUN_002d04c0(param_1,DAT_00347880,param_2,param_9,&local_34,param_7,param_10,param_8,param_11);
  return;
}
