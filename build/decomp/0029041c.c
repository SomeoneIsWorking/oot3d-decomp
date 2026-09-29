// OoT3D decomp @ 0029041c  name=FUN_0029041c  size=868

void FUN_0029041c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
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
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;

  fVar1 = DAT_00290760;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x56),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar10 = fVar10 * DAT_00290750 * DAT_00290754;
  local_34 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x13),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_28 = DAT_0029075c;
  local_30 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x4e),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_34 = local_34 * DAT_00290758;
  local_2c = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x14),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_30 = local_30 * DAT_00290758;
  local_2c = local_2c * DAT_00290758;
  if (*(short *)(param_3 + 0x18) < 4) {
    fVar8 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x52) *
                                       (int)*(short *)(param_3 + 0x18),(byte)(in_fpscr >> 0x15) & 3)
    ;
    uVar9 = VectorFloatToUnsigned(fVar8 * DAT_00290760,3);
    uVar2 = (ushort)uVar9 & 0xff;
  }
  else {
    uVar2 = *(ushort *)((int)param_3 + 0x52);
  }
  *(ushort *)((int)param_3 + 0x4a) = uVar2;
  if ((*(ushort *)((int)param_3 + 0x5a) & 1) == 0) {
    FUN_00332fc0(param_1,&local_24,(int)*(short *)(param_3 + 0x11),
                 (int)*(short *)((int)param_3 + 0x46),(int)*(short *)(param_3 + 0x12),
                 (int)*(short *)((int)param_3 + 0x4a),(int)*(short *)(param_3 + 0x13),
                 (int)*(short *)((int)param_3 + 0x4e),(int)*(short *)(param_3 + 0x14));
  }
  else {
    FUN_0035619c(param_1,&local_24,&local_34,(int)*(short *)(param_3 + 0x11),
                 (int)*(short *)((int)param_3 + 0x46),(int)*(short *)(param_3 + 0x12),
                 (int)*(short *)((int)param_3 + 0x4a),(int)*(short *)(param_3 + 0x13),
                 (int)*(short *)((int)param_3 + 0x4e),(int)*(short *)(param_3 + 0x14));
  }
  if ((*(ushort *)((int)param_3 + 0x5a) & 0x10) != 0) {
    local_24 = local_24 * DAT_00290764;
    local_20 = local_20 * DAT_00290764;
    local_1c = local_1c * DAT_00290764;
    local_34 = local_34 * DAT_00290764;
    local_30 = local_30 * DAT_00290764;
    local_2c = local_2c * DAT_00290764;
    local_28 = local_28 * DAT_00290764;
    if (0x3f800000 < (int)local_24) {
      local_24 = DAT_00290768;
    }
    if (0x3f800000 < (int)local_20) {
      local_20 = DAT_00290768;
    }
    if (0x3f800000 < (int)local_1c) {
      local_1c = DAT_00290768;
    }
    if (0x3f800000 < (int)local_34) {
      local_34 = DAT_00290768;
    }
    if (0x3f800000 < (int)local_30) {
      local_30 = DAT_00290768;
    }
    if (0x3f800000 < (int)local_2c) {
      local_2c = DAT_00290768;
    }
  }
  iVar3 = (int)*(short *)(param_3 + 0x15);
  local_3c = (float)VectorSignedToFloat(iVar3 % 4,(byte)(in_fpscr >> 0x15) & 3);
  local_38 = (float)VectorSignedToFloat((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2,
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_3c = local_3c * fVar1;
  local_38 = local_38 * DAT_0029076c;
  local_48 = *param_3;
  local_44 = param_3[1];
  local_40 = param_3[2];
  local_54 = fVar10;
  local_50 = fVar10;
  local_4c = fVar10;
  if (param_3[9] == DAT_00290770) {
    FUN_00371f1c(*(undefined4 *)(param_3[0x1a] + 0x10),&local_48,0,&local_54,&local_24,&local_3c);
    return;
  }
  iVar3 = 0;
  do {
    iVar4 = *(int *)(param_3[0x1a] + iVar3 * 4);
    if (*(int *)(iVar4 + 0x1fc) == 0) {
      FUN_003429c8(iVar4,0,&local_34);
LAB_002906e4:
      iVar4 = FUN_00371f1c(*(undefined4 *)(param_3[0x1a] + iVar3 * 4),&local_48,0,&local_54,
                           &local_24,&local_3c);
      if (iVar4 != 0) {
        return;
      }
    }
    else {
      pfVar5 = (float *)FUN_003306fc(iVar4,0);
      bVar6 = false;
      if (*pfVar5 == local_34) {
        bVar6 = pfVar5[1] == local_30;
      }
      bVar7 = false;
      if (bVar6) {
        bVar7 = pfVar5[2] == local_2c;
      }
      if (bVar7) goto LAB_002906e4;
    }
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      FUN_00371f1c(*(undefined4 *)param_3[0x1a],&local_48,0,&local_54,&local_24,&local_3c);
      return;
    }
  } while( true );
}
