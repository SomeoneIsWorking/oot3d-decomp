// OoT3D decomp @ 002a2738  name=FUN_002a2738  size=240

void FUN_002a2738(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  float fVar3;
  undefined1 auStack_68 [48];
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;

  iVar1 = (int)*(short *)((int)param_3 + 0x46);
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x11),(byte)(in_fpscr >> 0x15) & 3);
  local_10 = (float)VectorSignedToFloat(iVar1 % 4,(byte)(in_fpscr >> 0x15) & 3);
  local_10 = local_10 * DAT_002a282c;
  local_c = (float)VectorSignedToFloat((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2,
                                       (byte)(in_fpscr >> 0x15) & 3);
  local_c = local_c * DAT_002a2830;
  local_20 = DAT_002a2834;
  local_1c = DAT_002a2834;
  local_18 = DAT_002a2834;
  local_14 = DAT_002a2834;
  local_2c = *param_3;
  local_28 = param_3[1];
  local_24 = param_3[2];
  local_38 = fVar3 * DAT_002a2828 * DAT_002a2838;
  uVar2 = DAT_002a283c;
  if (*(short *)((int)param_3 + 0x5a) != 0) {
    uVar2 = DAT_002a2840;
  }
  local_34 = local_38;
  local_30 = local_38;
  FUN_00371234(uVar2,auStack_68,0);
  FUN_00371f1c(param_3[0x19],&local_2c,auStack_68,&local_38,&local_20,&local_10);
  return;
}
