// OoT3D decomp @ 0038e8e4  name=FUN_0038e8e4  size=560

void FUN_0038e8e4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined1 auStack_2c [16];

  fVar8 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x5a),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar8 * DAT_0038eb14;
  local_3c = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x14),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_38 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x52),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_34 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x15),(byte)(in_fpscr >> 0x15) & 3
                                       );
  uVar1 = 0xff;
  local_30 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x56),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_3c = local_3c * DAT_0038eb18;
  local_38 = local_38 * DAT_0038eb18;
  local_34 = local_34 * DAT_0038eb18;
  local_30 = local_30 * DAT_0038eb18;
  iVar4 = (int)*(short *)(param_3 + 0x18);
  if (iVar4 < 4) {
    uVar1 = iVar4 << 0x1e;
  }
  if (iVar4 < 4) {
    uVar1 = uVar1 >> 0x18;
  }
  FUN_00332fc0(param_1,auStack_2c,(int)*(short *)(param_3 + 0x12),
               (int)*(short *)((int)param_3 + 0x4a),(int)*(short *)(param_3 + 0x13),uVar1,
               (int)*(short *)(param_3 + 0x14),(int)*(short *)((int)param_3 + 0x52),
               (int)*(short *)(param_3 + 0x15));
  local_5c = DAT_0038eb28;
  local_7c = DAT_0038eb24;
  local_48 = *param_3;
  local_44 = param_3[1];
  local_40 = param_3[2];
  local_54 = fVar8 * DAT_0038eb1c;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x46),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar8 * DAT_0038eb20;
  local_84 = DAT_0038eb28;
  local_74 = DAT_0038eb24;
  local_50 = local_54;
  local_4c = local_54;
  if (fVar8 != DAT_0038eb24) {
    fVar7 = (float)FUN_003727f0(fVar8);
    local_84 = FUN_00372674(fVar8);
    local_74 = fVar7;
  }
  local_80 = -local_74;
  iVar4 = 0;
  local_78 = local_7c;
  local_6c = local_7c;
  local_68 = local_7c;
  local_64 = local_7c;
  local_60 = local_7c;
  local_58 = local_7c;
  local_70 = local_84;
  do {
    iVar2 = *(int *)(param_3[0x1a] + iVar4 * 4);
    if (*(int *)(iVar2 + 0x1fc) == 0) {
      FUN_003429c8(iVar2,1,&local_3c);
LAB_0038eaa8:
      iVar2 = FUN_00371f1c(*(undefined4 *)(param_3[0x1a] + iVar4 * 4),&local_48,&local_84,&local_54,
                           auStack_2c,0);
      if (iVar2 != 0) {
        return;
      }
    }
    else {
      pfVar3 = (float *)FUN_003306fc(iVar2,1);
      bVar5 = false;
      if (*pfVar3 == local_3c) {
        bVar5 = pfVar3[1] == local_38;
      }
      bVar6 = false;
      if (bVar5) {
        bVar6 = pfVar3[2] == local_34;
      }
      if (bVar6) goto LAB_0038eaa8;
    }
    iVar4 = iVar4 + 1;
    if (7 < iVar4) {
      FUN_00371f1c(*(undefined4 *)param_3[0x1a],&local_48,&local_84,&local_54,auStack_2c,0);
      return;
    }
  } while( true );
}
