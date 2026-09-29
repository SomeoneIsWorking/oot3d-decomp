// OoT3D decomp @ 0027f76c  name=FUN_0027f76c  size=224

void FUN_0027f76c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  uint in_fpscr;
  float fVar1;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [16];
  float local_18;
  undefined4 local_14;

  fVar1 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x56),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar1 = fVar1 * DAT_0027f84c;
  local_18 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x15) % 4,
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_18 = local_18 * DAT_0027f850;
  local_14 = DAT_0027f854;
  FUN_00332fc0(param_1,auStack_28,(int)*(short *)(param_3 + 0x11),
               (int)*(short *)((int)param_3 + 0x46),(int)*(short *)(param_3 + 0x12),0xff,
               (int)*(short *)(param_3 + 0x13),(int)*(short *)((int)param_3 + 0x4e),
               (int)*(short *)(param_3 + 0x14));
  local_34 = *param_3;
  local_30 = param_3[1];
  local_2c = param_3[2];
  local_40 = fVar1 * DAT_0027f858;
  local_3c = local_40;
  local_38 = local_40;
  FUN_00371f1c(param_3[0x19],&local_34,0,&local_40,auStack_28,&local_18);
  return;
}
