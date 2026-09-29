// OoT3D decomp @ 001adeec  name=FUN_001adeec  size=992

void FUN_001adeec(int param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;

  fVar7 = DAT_001ae2a4;
  local_28 = DAT_001ae2a4;
  local_24 = DAT_001ae2a4;
  local_20 = DAT_001ae2a4;
  FUN_00373bec(*(undefined4 *)(param_1 + 0x430));
  FUN_00357fd0(*(undefined4 *)(DAT_001ae2a8 + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  local_44 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x450),(byte)(in_fpscr >> 0x15) & 3);
  local_44 = local_44 * DAT_001ae2ac;
  local_40 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x451),(byte)(in_fpscr >> 0x15) & 3);
  local_40 = local_40 * DAT_001ae2ac;
  local_3c = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x452),(byte)(in_fpscr >> 0x15) & 3);
  local_3c = local_3c * DAT_001ae2ac;
  local_38 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x453),(byte)(in_fpscr >> 0x15) & 3);
  local_38 = local_38 * DAT_001ae2ac;
  FUN_00357388(param_1,&local_44,4,0);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001ae2b0,0,param_1,0);
  if ((*(int *)(DAT_001ae2b4 + param_2) + 1U & 3) == (int)*(short *)(param_1 + 0x1c)) {
    local_20 = *(float *)(param_1 + 0x5c) * DAT_001ae2b8;
    FUN_003735ac(param_1 + 0x488,param_1 + 0x148,&local_28);
    local_20 = *(float *)(param_1 + 0x5c) * DAT_001ae2bc;
    FUN_003735ac(param_1 + 0x494,param_1 + 0x148,&local_28);
    local_28 = *(float *)(param_1 + 0x54) * DAT_001ae2c0;
    FUN_003735ac(param_1 + 0x4ac,param_1 + 0x148,&local_28);
    local_28 = -local_28;
    FUN_003735ac(param_1 + 0x4a0,param_1 + 0x148,&local_28);
  }
  uVar1 = DAT_001ae2cc;
  local_68 = *(undefined4 *)(param_1 + 0x28);
  iVar6 = 0;
  local_58 = *(float *)(param_1 + 0x2c) + (*(float *)(param_1 + 0x58) - DAT_001ae2c4) * DAT_001ae2c8
  ;
  local_48 = *(undefined4 *)(param_1 + 0x30);
  local_4c = *(float *)(param_1 + 0x46c) * DAT_001ae2d0;
  local_74 = local_4c * 1.0;
  local_64 = local_4c * 0.0;
  local_54 = local_4c * 0.0;
  local_70 = local_4c * 0.0;
  local_60 = local_4c * 1.0;
  local_50 = local_4c * 0.0;
  local_6c = local_4c * 0.0;
  local_5c = local_4c * 0.0;
  local_4c = local_4c * 1.0;
  FUN_00371fac(&local_74,param_2 + 0x2fc);
  iVar3 = FUN_003695f8();
  iVar4 = *(int *)(*(int *)(param_1 + 0x1cc) + 0xc);
  if (iVar3 == 0) {
    *(undefined4 *)(iVar4 + 0xc) = uVar1;
    *(undefined4 *)(*(int *)(param_1 + 0x43c) + 0xc) = uVar1;
  }
  else {
    *(float *)(iVar4 + 0xc) = fVar7;
    *(float *)(*(int *)(param_1 + 0x43c) + 0xc) = fVar7;
  }
  FUN_00373bec(*(undefined4 *)(param_1 + 0x43c));
  *(undefined1 *)(*(int *)(param_1 + 0x434) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x434),&local_74);
  FUN_00372170(*(undefined4 *)(param_1 + 0x434),0);
  if (*(char *)(param_1 + 0x45f) != '\0') {
    bVar2 = *(char *)(param_1 + 0x45f) - 1;
    *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
    *(byte *)(param_1 + 0x45f) = bVar2;
    if ((bVar2 & 5) == 0) {
      if (bVar2 != 0) {
        fVar7 = (float)VectorUnsignedToFloat((uint)bVar2,(byte)(in_fpscr >> 0x15) & 3);
        iVar6 = (int)(DAT_001ae2dc + fVar7 * DAT_001ae2d4 * DAT_001ae2d8);
      }
      pfVar5 = (float *)(DAT_001ae2e0 + (iVar6 >> 2) * 0xc);
      local_34 = *(float *)(param_1 + 0x28) + *pfVar5;
      local_30 = *(float *)(param_1 + 0x2c) + pfVar5[1];
      local_2c = *(float *)(param_1 + 0x30) + pfVar5[2];
      FUN_0035e710(DAT_001ae30c,param_2,param_1,&local_34,0x96,0x96,0x96,0xfa,0xeb,0xf5,0xff);
    }
  }
  return;
}
