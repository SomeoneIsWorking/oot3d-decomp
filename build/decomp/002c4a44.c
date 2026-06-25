// OoT3D decomp @ 002c4a44  name=FUN_002c4a44  size=1192

void FUN_002c4a44(float param_1,int *param_2,int param_3,undefined4 *param_4,float *param_5_00,
                 undefined4 param_5)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  fVar13 = DAT_002c4d80;
  if (*(short *)(*param_2 + *(int *)(*param_2 + 0x14) + 0x20 + param_3 * 2) < 0) {
    return;
  }
  local_74 = *param_4;
  uStack_70 = param_4[1];
  uStack_6c = param_4[2];
  local_68 = param_4[3];
  local_64 = param_4[4];
  fVar6 = (float)VectorSignedToFloat((int)param_1,(byte)(in_fpscr >> 0x15) & 3);
  local_60 = param_4[5];
  uStack_5c = param_4[6];
  uStack_58 = param_4[7];
  uStack_54 = param_4[8];
  local_98 = *param_4;
  uStack_94 = param_4[1];
  uStack_90 = param_4[2];
  local_8c = param_4[3];
  local_88 = param_4[4];
  fVar6 = param_1 - fVar6;
  local_84 = param_4[5];
  uStack_80 = param_4[6];
  uStack_7c = param_4[7];
  uStack_78 = param_4[8];
  fVar8 = (param_1 - fVar6) + DAT_002c4d80;
  FUN_00347550(param_1 - fVar6,param_2,param_3,&local_74,param_5);
  FUN_00347550(fVar8,param_2,param_3,&local_98,param_5);
  FUN_003332b4(local_68,local_64,local_60,&local_c8);
  FUN_003332b4(local_8c,local_88,local_84,&local_f8);
  fVar8 = local_c8 + local_b4 + local_a0;
  if (fVar8 == DAT_002c4d84 || fVar8 < DAT_002c4d84 != (NAN(fVar8) || NAN(DAT_002c4d84))) {
    if (local_b4 == local_c8 || local_b4 < local_c8 != (NAN(local_b4) || NAN(local_c8))) {
      if (local_a0 != local_c8 && local_a0 < local_c8 == (NAN(local_a0) || NAN(local_c8)))
      goto LAB_002c4c60;
      fVar1 = SQRT((local_c8 - (local_b4 + local_a0)) + fVar13);
      fVar8 = fVar1 * DAT_002c4d88;
      if (fVar1 != DAT_002c4d84) {
        fVar1 = DAT_002c4d88 / fVar1;
      }
      fVar9 = (local_a4 - local_b0) * fVar1;
      fVar10 = (local_c4 + local_b8) * fVar1;
      local_b8 = local_c0 + local_a8;
      goto LAB_002c4c58;
    }
    if (local_a0 == local_b4 || local_a0 < local_b4 != (NAN(local_a0) || NAN(local_b4))) {
      fVar8 = SQRT((local_b4 - (local_a0 + local_c8)) + fVar13);
      fVar10 = fVar8 * DAT_002c4d88;
      if (fVar8 != DAT_002c4d84) {
        fVar8 = DAT_002c4d88 / fVar8;
      }
      fVar9 = (local_c0 - local_a8) * fVar8;
      fVar1 = (local_b0 + local_a4) * fVar8;
      fVar8 = (local_b8 + local_c4) * fVar8;
    }
    else {
LAB_002c4c60:
      fVar10 = SQRT((local_a0 - (local_c8 + local_b4)) + fVar13);
      fVar1 = fVar10 * DAT_002c4d88;
      if (fVar10 != DAT_002c4d84) {
        fVar10 = DAT_002c4d88 / fVar10;
      }
      fVar9 = (local_b8 - local_c4) * fVar10;
      fVar8 = (local_a8 + local_c0) * fVar10;
      fVar10 = (local_a4 + local_b0) * fVar10;
    }
  }
  else {
    fVar9 = SQRT(fVar8 + fVar13) * DAT_002c4d88;
    fVar1 = DAT_002c4d88 / SQRT(fVar8 + fVar13);
    fVar8 = (local_a4 - local_b0) * fVar1;
    fVar10 = (local_c0 - local_a8) * fVar1;
    local_b8 = local_b8 - local_c4;
LAB_002c4c58:
    fVar1 = local_b8 * fVar1;
  }
  fVar7 = local_f8 + local_e4 + local_d0;
  if (fVar7 == DAT_002c4d84 || fVar7 < DAT_002c4d84 != (NAN(fVar7) || NAN(DAT_002c4d84))) {
    if (local_e4 == local_f8 || local_e4 < local_f8 != (NAN(local_e4) || NAN(local_f8))) {
      if (local_d0 == local_f8 || local_d0 < local_f8 != (NAN(local_d0) || NAN(local_f8))) {
        fVar2 = SQRT((local_f8 - (local_e4 + local_d0)) + fVar13);
        fVar7 = fVar2 * DAT_002c4d88;
        if (fVar2 != DAT_002c4d84) {
          fVar2 = DAT_002c4d88 / fVar2;
        }
        fVar11 = (local_d4 - local_e0) * fVar2;
        fVar12 = (local_f4 + local_e8) * fVar2;
        local_e8 = local_f0 + local_d8;
        goto LAB_002c4de8;
      }
    }
    else if (local_d0 == local_e4 || local_d0 < local_e4 != (NAN(local_d0) || NAN(local_e4))) {
      fVar7 = SQRT((local_e4 - (local_d0 + local_f8)) + fVar13);
      fVar12 = fVar7 * DAT_002c4d88;
      if (fVar7 != DAT_002c4d84) {
        fVar7 = DAT_002c4d88 / fVar7;
      }
      fVar11 = (local_f0 - local_d8) * fVar7;
      fVar2 = (local_e0 + local_d4) * fVar7;
      fVar7 = (local_e8 + local_f4) * fVar7;
      goto LAB_002c4e40;
    }
    fVar12 = SQRT((local_d0 - (local_f8 + local_e4)) + fVar13);
    fVar2 = fVar12 * DAT_002c4d88;
    if (fVar12 != DAT_002c4d84) {
      fVar12 = DAT_002c4d88 / fVar12;
    }
    fVar11 = (local_e8 - local_f4) * fVar12;
    fVar7 = (local_d8 + local_f0) * fVar12;
    fVar12 = (local_d4 + local_e0) * fVar12;
  }
  else {
    fVar11 = SQRT(fVar7 + fVar13) * DAT_002c4d88;
    fVar2 = DAT_002c4d88 / SQRT(fVar7 + fVar13);
    fVar7 = (local_d4 - local_e0) * fVar2;
    fVar12 = (local_f0 - local_d8) * fVar2;
    local_e8 = local_e8 - local_f4;
LAB_002c4de8:
    fVar2 = local_e8 * fVar2;
  }
LAB_002c4e40:
  fVar3 = fVar8 * fVar7 + fVar10 * fVar12 + fVar1 * fVar2 + fVar9 * fVar11;
  fVar4 = fVar13;
  if (fVar3 < DAT_002c4d84) {
    fVar3 = -fVar3;
    fVar4 = DAT_002c4ef8;
  }
  if (DAT_002c4efc < (int)fVar3) {
    fVar13 = fVar13 - fVar6;
  }
  else {
    fVar3 = (float)FUN_00333ed8();
    fVar5 = (float)FUN_003727f0();
    fVar13 = (float)FUN_003727f0((fVar13 - fVar6) * fVar3);
    fVar13 = fVar13 / fVar5;
    fVar6 = (float)FUN_003727f0(fVar6 * fVar3);
    fVar6 = fVar6 / fVar5;
  }
  fVar4 = fVar4 * fVar6;
  *param_5_00 = fVar8 * fVar13 + fVar4 * fVar7;
  param_5_00[1] = fVar10 * fVar13 + fVar4 * fVar12;
  param_5_00[2] = fVar1 * fVar13 + fVar4 * fVar2;
  param_5_00[3] = fVar9 * fVar13 + fVar4 * fVar11;
  return;
}

