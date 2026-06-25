// OoT3D decomp @ 00301a30  name=FUN_00301a30  size=1136

/* WARNING: Removing unreachable block (ram,0x00301c74) */
/* WARNING: Removing unreachable block (ram,0x00301c90) */

void FUN_00301a30(int *param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int *piVar8;
  float fVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined auStack_64 [24];
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  *(undefined *)((int)param_1 + 0x49) = 0;
  if ((*param_1 != 0) &&
     (iVar5 = FUN_0041b6c0(*param_1,auStack_64), fVar12 = DAT_00301d70, iVar5 != 0)) {
    local_94 = local_4c;
    local_90 = local_48;
    local_8c = local_44;
    local_88 = DAT_00301d70;
    local_84 = local_40;
    local_80 = local_3c;
    local_7c = local_38;
    local_78 = DAT_00301d70;
    local_74 = local_34;
    local_70 = local_30;
    local_6c = local_2c;
    local_68 = DAT_00301d70;
    fVar20 = local_44 * DAT_00301d74;
    fVar19 = local_4c * DAT_00301d70;
    fVar13 = DAT_00301d74 /
             SQRT(local_4c * local_4c + DAT_00301d70 * DAT_00301d70 + local_44 * local_44);
    fVar11 = (float)FUN_00333ed8(local_4c * fVar13 * DAT_00301d74 +
                                 DAT_00301d70 * fVar13 * DAT_00301d70 +
                                 local_44 * fVar13 * DAT_00301d70);
    iVar5 = DAT_00301d88;
    fVar13 = DAT_00301d84;
    fVar4 = DAT_00301d80;
    fVar3 = DAT_00301d7c;
    fVar11 = fVar11 * DAT_00301d78;
    fVar9 = (float)((uint)DAT_00301d7c | (int)DAT_00301d7c << 0xd);
    if (fVar20 - fVar19 < fVar12) {
      fVar11 = -fVar11;
    }
    if ((int)DAT_00301d7c < (int)fVar11) {
      fVar11 = fVar11 - DAT_00301d80;
    }
    else if ((uint)fVar9 < (uint)fVar11) {
      fVar11 = fVar11 + DAT_00301d80;
    }
    param_1[5] = (int)-fVar11;
    fVar13 = -fVar11 * fVar13;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 <= fVar13) << 0x1d;
    for (fVar13 = ABS(fVar13); fVar19 = fVar12, iVar5 <= (int)fVar13; fVar13 = fVar13 - DAT_00301d8c
        ) {
    }
    for (; iVar5 <= (int)fVar19; fVar19 = fVar19 - DAT_00301d8c) {
    }
    uVar14 = VectorFloatToUnsigned(fVar12,3);
    uVar15 = VectorFloatToUnsigned(fVar13,3);
    uVar16 = VectorFloatToUnsigned(fVar19,3);
    fVar20 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    fVar18 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    pfVar6 = (float *)(DAT_00301d90 + (uVar14 & 0xff) * 0x10);
    fVar11 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(uVar1 >> 0x15) & 3);
    fVar17 = *pfVar6 + (fVar12 - fVar20) * pfVar6[2];
    pfVar7 = (float *)(DAT_00301d90 + (uVar15 & 0xff) * 0x10);
    fVar20 = pfVar6[1] + (fVar12 - fVar20) * pfVar6[3];
    pfVar6 = (float *)(DAT_00301d90 + (uVar16 & 0xff) * 0x10);
    local_a4 = *pfVar7 + (fVar13 - fVar18) * pfVar7[2];
    local_b4 = pfVar7[1] + (fVar13 - fVar18) * pfVar7[3];
    fVar13 = *pfVar6 + (fVar19 - fVar11) * pfVar6[2];
    fVar19 = pfVar6[1] + (fVar19 - fVar11) * pfVar6[3];
    if (!SUB41(uVar1 >> 0x1d,0)) {
      local_a4 = -local_a4;
    }
    local_9c = fVar20 * local_b4;
    local_a0 = fVar17 * local_b4;
    local_c4 = fVar19 * local_b4;
    local_b4 = fVar13 * local_b4;
    local_c0 = fVar17 * fVar19 * local_a4 - fVar20 * fVar13;
    local_ac = fVar20 * fVar13 * local_a4 - fVar17 * fVar19;
    local_bc = fVar17 * fVar13 + fVar20 * fVar19 * local_a4;
    local_b0 = fVar20 * fVar19 + fVar17 * fVar13 * local_a4;
    local_a4 = -local_a4;
    local_b8 = 0;
    local_a8 = 0;
    local_98 = 0;
    FUN_0036c174(&local_c4,&local_94,&local_c4);
    fVar19 = (float)FUN_0033f114(local_a0,local_9c);
    fVar19 = fVar19 * DAT_00301d94;
    param_1[4] = (int)-fVar19;
    param_1[6] = (int)fVar12;
    fVar12 = -fVar19 - (float)param_1[10];
    fVar19 = (float)param_1[5] - (float)param_1[0xb];
    fVar13 = fVar12;
    if ((uint)fVar9 < (uint)fVar12) {
      iVar5 = 10;
      if ((uint)fVar9 < (uint)fVar12) {
        do {
          fVar13 = fVar13 + fVar4;
          iVar5 = iVar5 + -1;
          bVar10 = iVar5 == 0;
          if (!bVar10) {
            fVar12 = fVar13;
          }
        } while ((bVar10 || (uint)fVar9 <= (uint)fVar12) && (!bVar10 && fVar12 != fVar9));
      }
    }
    else if ((int)fVar3 < (int)fVar12) {
      iVar5 = 10;
      do {
        fVar13 = fVar13 - fVar4;
        iVar5 = iVar5 + -1;
        bVar10 = iVar5 != 0;
        iVar2 = iVar5;
        if (bVar10) {
          iVar2 = (int)fVar13 - (int)fVar3;
          fVar12 = fVar13;
        }
      } while ((bVar10 && fVar12 != fVar3) &&
               iVar2 < 0 == (bVar10 && SBORROW4((int)fVar12,(int)fVar3)));
    }
    param_1[7] = (int)(fVar13 + (float)param_1[10]);
    fVar12 = fVar19;
    if ((uint)fVar9 < (uint)fVar19) {
      iVar5 = 10;
      if ((uint)fVar9 < (uint)fVar19) {
        do {
          fVar12 = fVar12 + fVar4;
          iVar5 = iVar5 + -1;
          bVar10 = iVar5 == 0;
          if (!bVar10) {
            fVar19 = fVar12;
          }
        } while ((bVar10 || (uint)fVar9 <= (uint)fVar19) && (!bVar10 && fVar19 != fVar9));
      }
    }
    else if ((int)fVar3 < (int)fVar19) {
      iVar5 = 10;
      do {
        fVar12 = fVar12 - fVar4;
        iVar5 = iVar5 + -1;
        bVar10 = iVar5 != 0;
        iVar2 = iVar5;
        if (bVar10) {
          iVar2 = (int)fVar12 - (int)fVar3;
          fVar19 = fVar12;
        }
      } while ((bVar10 && fVar19 != fVar3) &&
               iVar2 < 0 == (bVar10 && SBORROW4((int)fVar19,(int)fVar3)));
    }
    param_1[8] = (int)(fVar12 + (float)param_1[0xb]);
    param_1[10] = param_1[7];
    param_1[0xb] = param_1[8];
    param_1[0xc] = param_1[9];
    param_1[1] = (int)((float)param_1[7] - (float)param_1[0xd]);
    param_1[2] = (int)((float)param_1[8] - (float)param_1[0xe]);
    param_1[3] = (int)((float)param_1[9] - (float)param_1[0xf]);
    if (*(char *)(param_1 + 0x12) != '\0') {
      piVar8 = param_1 + 4;
      param_1[0xd] = *piVar8;
      param_1[0xe] = param_1[5];
      param_1[0xf] = param_1[6];
      param_1[10] = *piVar8;
      param_1[0xb] = param_1[5];
      param_1[0xc] = param_1[6];
      param_1[7] = *piVar8;
      param_1[8] = param_1[5];
      param_1[9] = param_1[6];
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)((int)param_1 + 0x49) = 1;
      *(undefined *)((int)param_1 + 0x4a) = 1;
    }
  }
  return;
}

