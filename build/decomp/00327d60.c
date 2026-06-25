// OoT3D decomp @ 00327d60  name=FUN_00327d60  size=1492

int FUN_00327d60(float param_1,float param_2,int param_3,undefined4 param_4,float *param_5_00,
                float *param_6_00,float *param_5,int *param_6,int *param_7,short *param_8,
                uint param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  uint in_fpscr;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float fStack_74;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float fStack_58;
  int local_54;
  int local_50;
  
  iVar5 = 0;
  *param_7 = 0x32;
  *param_6 = 0;
  fVar15 = DAT_0032817c;
  fVar4 = param_6_00[1];
  fVar6 = param_6_00[2];
  local_50 = *(int *)(param_3 + 0x40);
  *param_5_00 = *param_6_00;
  param_5_00[1] = fVar4;
  param_5_00[2] = fVar6;
  fVar4 = DAT_00328180;
  fVar12 = *param_6_00 - *param_5;
  fVar6 = param_6_00[2] - param_5[2];
  uVar10 = in_fpscr & 0xfffffff | (uint)(fVar12 == DAT_00328178) << 0x1e;
  bVar8 = SUB41(uVar10 >> 0x1e,0);
  if (bVar8) {
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar6 == DAT_00328178) << 0x1e;
    bVar8 = SUB41(uVar10 >> 0x1e,0);
  }
  if ((bVar8) || ((param_9 & 1) != 0)) goto LAB_00327ff8;
  fVar13 = param_2 + (param_6_00[1] - param_5[1]);
  if ((int)fVar13 < DAT_00328184) {
    iVar5 = FUN_00324758(DAT_00328180,param_3,param_4,0,param_5,param_6_00,&local_6c,&local_54,
                         &local_70,param_8,0x1b);
    if (iVar5 == 0) goto LAB_00327ff8;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 0xc),(byte)(uVar10 >> 0x15) & 3);
    if ((int)(fVar6 * fVar15) < 0x3f000001) {
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 10),(byte)(uVar10 >> 0x15) & 3)
      ;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 0xe),(byte)(uVar10 >> 0x15) & 3
                                         );
      *param_5_00 = local_6c + param_1 * fVar12 * fVar15;
      param_5_00[1] = local_68 + param_1 * fVar6 * fVar15;
      fVar6 = local_64 + param_1 * fVar13 * fVar15;
    }
    else {
      *param_5_00 = local_6c;
      if ((int)param_2 < 0x3f800001) {
        fVar6 = local_68 - param_2;
      }
      else {
        fVar6 = local_68 - fVar4;
      }
      param_5_00[1] = fVar6;
      fVar6 = local_64;
    }
    param_5_00[2] = fVar6;
  }
  else {
    fVar14 = param_1 * param_1;
    local_7c = *param_6_00;
    fStack_74 = param_6_00[2];
    fVar6 = fVar12 * fVar12 + fVar6 * fVar6;
    uVar1 = uVar10 & 0xfffffff | (uint)(fVar6 < fVar14) << 0x1f | (uint)(fVar6 == fVar14) << 0x1e;
    uVar10 = uVar1 | (uint)(NAN(fVar6) || NAN(fVar14)) << 0x1c;
    bVar9 = (byte)(uVar1 >> 0x18);
    bVar7 = bVar9 >> 7;
    bVar8 = (bool)(bVar9 >> 6 & 1);
    bVar9 = (byte)(uVar10 >> 0x1c) & 1;
    if (bVar8 || bVar7 != bVar9) {
      fVar13 = 3.503246e-44;
    }
    local_84 = param_6_00[1] + param_2;
    if (!bVar8 && bVar7 == bVar9) {
      fVar13 = 3.783506e-44;
    }
    local_88 = *param_5;
    fStack_80 = param_5[2];
    local_78 = local_84;
    iVar5 = FUN_00324758(DAT_00328180,param_3,param_4,0,&local_88,&local_7c,&local_6c,&local_54,
                         &local_70,param_8,fVar13);
    if (iVar5 == 0) goto LAB_00327ff8;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 10),(byte)(uVar10 >> 0x15) & 3);
    fVar6 = fVar6 * fVar15;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 0xe),(byte)(uVar10 >> 0x15) & 3);
    fVar12 = fVar12 * fVar15;
    fVar13 = SQRT(fVar6 * fVar6 + fVar12 * fVar12);
    if ((int)ABS(fVar13) < DAT_00328188) goto LAB_00327ff8;
    iVar5 = 1;
    fVar13 = param_1 * (fVar4 / fVar13);
    *param_5_00 = local_6c + fVar13 * fVar6;
    param_5_00[2] = local_64 + fVar13 * fVar12;
  }
  *param_6 = local_54;
  *param_7 = local_70;
LAB_00327ff8:
  local_60 = *param_5_00;
  fStack_58 = param_5_00[2];
  local_5c = param_5_00[1] + param_2;
  iVar2 = FUN_004a2934(param_1,param_3,param_4,param_5_00,param_5_00 + 2,&local_60,param_6,param_7,
                       param_8);
  if (iVar2 != 0) {
    local_60 = *param_5_00;
    fStack_58 = param_5_00[2];
    iVar5 = 1;
    local_5c = param_5_00[1] + param_2;
  }
  fVar6 = *param_6_00;
  fVar12 = *(float *)(param_3 + 4) - DAT_0032818c;
  uVar10 = uVar10 & 0xfffffff;
  uVar1 = uVar10 | (uint)(fVar12 < fVar6) << 0x1f | (uint)(fVar12 == fVar6) << 0x1e;
  uVar11 = uVar1 | (uint)(NAN(fVar12) || NAN(fVar6)) << 0x1c;
  bVar9 = (byte)(uVar1 >> 0x18);
  if (((bool)(bVar9 >> 6 & 1) || bVar9 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) &&
     (uVar11 = uVar10 | (uint)(fVar6 <= *(float *)(param_3 + 0x10) + DAT_0032818c) << 0x1d,
     SUB41(uVar11 >> 0x1d,0))) {
    fVar6 = param_6_00[1];
    fVar12 = *(float *)(param_3 + 8) - DAT_0032818c;
    uVar1 = uVar10 | (uint)(fVar12 < fVar6) << 0x1f | (uint)(fVar12 == fVar6) << 0x1e;
    uVar11 = uVar1 | (uint)(NAN(fVar12) || NAN(fVar6)) << 0x1c;
    bVar9 = (byte)(uVar1 >> 0x18);
    if (((bool)(bVar9 >> 6 & 1) || bVar9 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) &&
       (uVar11 = uVar10 | (uint)(fVar6 <= *(float *)(param_3 + 0x14) + DAT_0032818c) << 0x1d,
       SUB41(uVar11 >> 0x1d,0))) {
      fVar6 = param_6_00[2];
      fVar12 = *(float *)(param_3 + 0xc) - DAT_0032818c;
      uVar1 = uVar10 | (uint)(fVar12 < fVar6) << 0x1f | (uint)(fVar12 == fVar6) << 0x1e;
      uVar11 = uVar1 | (uint)(NAN(fVar12) || NAN(fVar6)) << 0x1c;
      bVar9 = (byte)(uVar1 >> 0x18);
      if (((bool)(bVar9 >> 6 & 1) || bVar9 >> 7 != ((byte)(uVar11 >> 0x1c) & 1)) &&
         (uVar11 = uVar10 | (uint)(fVar6 <= *(float *)(param_3 + 0x18) + DAT_0032818c) << 0x1d,
         SUB41(uVar11 >> 0x1d,0))) {
        FUN_002bf5b0(param_3,param_5_00,&local_6c);
        iVar3 = FUN_004a209c(param_1,(int)local_64 * *(int *)(param_3 + 0x1c) *
                                     *(int *)(param_3 + 0x20) * 6 +
                                     (int)local_68 * *(int *)(param_3 + 0x1c) * 6 +
                                     local_50 + (int)local_6c * 6,param_3,param_4,param_5_00,
                             param_5_00 + 2,&local_60,param_6);
        if (iVar3 != 0) {
          iVar5 = 1;
          *param_7 = 0x32;
        }
      }
    }
  }
  if ((iVar2 == 0) && (*param_7 == 0x32)) {
    return iVar5;
  }
  iVar2 = FUN_00324758(fVar4,param_3,param_4,0,param_5,param_5_00,&local_6c,&local_54,&local_70,
                       param_8,9);
  if (iVar2 == 0) {
    if (param_8 == (short *)0x0) {
      return iVar5;
    }
    if (*param_8 != 0) {
      return iVar5;
    }
    local_88 = *param_5_00;
    fStack_80 = param_5_00[2];
    local_84 = param_5_00[1] + DAT_0032834c;
    local_7c = *param_5;
    fStack_74 = param_5[2];
    local_78 = param_5[1] + DAT_0032834c;
    iVar2 = FUN_00324758(fVar4,param_3,param_4,0,&local_7c,&local_88,&local_6c,&local_54,&local_70,
                         param_8,9);
    if (iVar2 == 0) {
      return iVar5;
    }
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 10),(byte)(uVar11 >> 0x15) & 3);
    fVar6 = fVar6 * fVar15;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 0xe),(byte)(uVar11 >> 0x15) & 3);
    fVar12 = fVar12 * fVar15;
    fVar15 = SQRT(fVar6 * fVar6 + fVar12 * fVar12);
    if ((int)ABS(fVar15) < DAT_00328188) {
      return iVar5;
    }
  }
  else {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 10),(byte)(uVar11 >> 0x15) & 3);
    fVar6 = fVar6 * fVar15;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 0xe),(byte)(uVar11 >> 0x15) & 3);
    fVar12 = fVar12 * fVar15;
    fVar15 = SQRT(fVar6 * fVar6 + fVar12 * fVar12);
    if ((int)ABS(fVar15) < DAT_00328188) {
      return iVar5;
    }
  }
  param_1 = param_1 * (fVar4 / fVar15);
  *param_5_00 = local_6c + param_1 * fVar6;
  param_5_00[2] = local_64 + param_1 * fVar12;
  *param_6 = local_54;
  *param_7 = local_70;
  return 1;
}

