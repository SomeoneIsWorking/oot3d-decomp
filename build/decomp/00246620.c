// OoT3D decomp @ 00246620  name=FUN_00246620  size=240

void FUN_00246620(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  uint in_fpscr;
  float fVar1;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  float local_18;
  undefined4 local_14;

  fVar1 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x5a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar1 = fVar1 * DAT_00246710;
  local_18 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x16),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_18 = local_18 * DAT_00246714;
  local_14 = DAT_00246718;
  FUN_0035619c(param_1,auStack_28,auStack_38,(int)*(short *)(param_3 + 0x11),
               (int)*(short *)((int)param_3 + 0x46),(int)*(short *)(param_3 + 0x12),0xff,
               (int)*(short *)(param_3 + 0x13),(int)*(short *)((int)param_3 + 0x4e),
               (int)*(short *)(param_3 + 0x14));
  local_44 = *param_3;
  local_40 = param_3[1];
  local_3c = param_3[2];
  local_50 = fVar1 * DAT_0024671c;
  local_4c = local_50;
  local_48 = local_50;
  if (*(int *)(param_3[0x19] + 0x1fc) == 0) {
    FUN_003429c8(param_3[0x19],1,auStack_38);
  }
  FUN_00371f1c(param_3[0x19],&local_44,0,&local_50,auStack_28,&local_18);
  return;
}
