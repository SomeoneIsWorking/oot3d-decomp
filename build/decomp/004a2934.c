// OoT3D decomp @ 004a2934  name=FUN_004a2934  size=1812

undefined4
FUN_004a2934(float param_1,int *param_2,int param_3,float *param_4,float *param_5_00,float *param_5,
            ushort **param_6,int *param_7,int param_8)

{
  ushort uVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined4 *puVar11;
  ushort *puVar12;
  short *psVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_9c;
  float fStack_98;
  float local_94;
  int local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  int *local_68;
  
  fVar5 = DAT_004a2d30;
  fVar4 = DAT_004a2d2c;
  iVar14 = 0;
  local_88 = 0;
  local_84 = *param_5;
  local_80 = param_5[1];
  local_7c = param_5[2];
  local_68 = param_2 + 0x414;
  local_6c = DAT_004a2d28;
  local_70 = DAT_004a2d28 + 3;
  local_74 = DAT_004a2d28 + -0x12;
  local_78 = DAT_004a2d28 + -0xf;
  do {
    if (((((*(ushort *)((int)param_2 + iVar14 * 2 + 0x156c) & 1) != 0) &&
         (param_2[iVar14 * 0x1b + 0x15] != param_8)) &&
        (fVar20 = (float)param_2[iVar14 * 0x1b + 0x2e],
        fVar20 == local_80 || fVar20 < local_80 != (NAN(fVar20) || NAN(local_80)))) &&
       (local_80 <= (float)param_2[iVar14 * 0x1b + 0x2f])) {
      fVar20 = (float)param_2[iVar14 * 0x1b + 0x2d] + param_1;
      param_2[iVar14 * 0x1b + 0x2d] = (int)fVar20;
      fVar20 = fVar20 * fVar20;
      fVar25 = ((float)param_2[iVar14 * 0x1b + 0x2a] - local_84) *
               ((float)param_2[iVar14 * 0x1b + 0x2a] - local_84) +
               ((float)param_2[iVar14 * 0x1b + 0x2c] - local_7c) *
               ((float)param_2[iVar14 * 0x1b + 0x2c] - local_7c);
      if ((fVar25 == fVar20 || fVar25 < fVar20 != (NAN(fVar25) || NAN(fVar20))) &&
         ((iVar7 = FUN_004ba280(local_84,local_80,param_2 + iVar14 * 0x1b + 0x2a), iVar7 != 0 ||
          (iVar7 = FUN_004ba2b4(local_80,local_7c,param_2 + iVar14 * 0x1b + 0x2a), iVar7 != 0)))) {
        piVar6 = local_68;
        param_2[iVar14 * 0x1b + 0x2d] = (int)((float)param_2[iVar14 * 0x1b + 0x2d] - param_1);
        puVar11 = DAT_004a2d34;
        local_90 = 0;
        if (*(short *)(param_2 + iVar14 * 0x1b + 0x18) != -1) {
          local_9c = local_84;
          fStack_98 = local_80;
          local_94 = local_7c;
          fVar20 = param_1 + fVar4;
          psVar13 = (short *)(local_68[0x162] +
                             (uint)*(ushort *)(param_2 + iVar14 * 0x1b + 0x18) * 4);
          while( true ) {
            puVar12 = (ushort *)(piVar6[0x160] + *psVar13 * 0x20);
            fVar25 = *(float *)(puVar12 + 10);
            fVar22 = *(float *)(puVar12 + 0xe);
            fVar17 = (float)FUN_00357b30(fVar25,*(undefined4 *)(puVar12 + 0xc),fVar22,
                                         *(undefined4 *)(puVar12 + 8),&local_9c);
            fVar18 = ABS(fVar17);
            pfVar2 = DAT_004a3060;
            uVar3 = DAT_004a3064;
            if ((fVar18 == fVar20 || fVar18 < fVar20 != (NAN(fVar18) || NAN(fVar20))) &&
               (((uint)puVar12[1] & param_3 << 0xd) == 0)) {
              fVar18 = fVar5 / SQRT(fVar25 * fVar25 + fVar22 * fVar22);
              fVar26 = ABS(fVar22) * fVar18;
              if ((int)fVar26 < DAT_004a2d38) {
                uVar1 = psVar13[1];
              }
              else {
                uVar8 = puVar12[1] & 0xffff1fff;
                iVar7 = piVar6[0x161];
                fVar19 = *(float *)(uVar8 * 0xc + 8 + iVar7);
                fVar23 = *(float *)((puVar12[2] & 0xffff1fff) * 0xc + 8 + iVar7);
                fVar21 = fVar19;
                if (NAN(fVar19) || NAN(fVar23)) {
                  fVar21 = fVar23;
                  fVar23 = fVar19;
                }
                fVar24 = *(float *)((uint)puVar12[3] * 0xc + 8 + iVar7);
                fVar19 = fVar24;
                if ((fVar23 == fVar24 || fVar23 < fVar24 != (NAN(fVar23) || NAN(fVar24))) &&
                   (fVar19 = fVar23, fVar21 < fVar24)) {
                  fVar21 = fVar24;
                }
                fVar21 = fVar21 + param_1;
                if ((local_94 < fVar19 - param_1) ||
                   (local_94 != fVar21 && local_94 < fVar21 == (NAN(local_94) || NAN(fVar21)))) {
                  uVar1 = psVar13[1];
                }
                else {
                  puVar9 = (undefined4 *)(iVar7 + uVar8 * 0xc);
                  uVar15 = puVar9[1];
                  uVar16 = puVar9[2];
                  *puVar11 = *puVar9;
                  puVar11[1] = uVar15;
                  puVar11[2] = uVar16;
                  puVar9 = (undefined4 *)(iVar7 + (puVar12[2] & 0xffff1fff) * 0xc);
                  uVar15 = puVar9[1];
                  uVar16 = puVar9[2];
                  *local_6c = *puVar9;
                  local_6c[1] = uVar15;
                  local_6c[2] = uVar16;
                  puVar9 = (undefined4 *)(iVar7 + (uint)puVar12[3] * 0xc);
                  uVar15 = puVar9[1];
                  uVar16 = puVar9[2];
                  *local_70 = *puVar9;
                  local_70[1] = uVar15;
                  local_70[2] = uVar16;
                  iVar7 = FUN_002be430(*(undefined4 *)(puVar12 + 10),*(undefined4 *)(puVar12 + 0xc),
                                       *(undefined4 *)(puVar12 + 0xe),*(undefined4 *)(puVar12 + 8),
                                       local_9c,local_80,DAT_004a2d34,puVar11 + 3,puVar11 + 6,
                                       &local_8c);
                  if (((iVar7 != 0) && (ABS(local_8c - local_94) <= param_1 / fVar26)) &&
                     ((int)((local_8c - local_94) * fVar22) <= DAT_004a2d3c)) {
                    fVar18 = (param_1 - fVar17) * fVar18;
                    local_9c = local_9c + fVar18 * fVar25;
                    local_94 = local_94 + fVar18 * fVar22;
                    if ((*param_6 == (ushort *)0x0) ||
                       ((*(uint *)(*(int *)(*param_2 + 0x20) + (uint)**param_6 * 8 + 4) & 0x8000000)
                        == 0)) {
                      *param_6 = puVar12;
                      *param_7 = iVar14;
                    }
                    local_90 = 1;
                  }
                  uVar1 = psVar13[1];
                  pfVar2 = DAT_004a3060;
                  uVar3 = DAT_004a3064;
                }
              }
            }
            else {
              uVar1 = psVar13[1];
            }
            DAT_004a3060 = pfVar2;
            DAT_004a3064 = uVar3;
            if (uVar1 == 0xffff) break;
            psVar13 = (short *)(piVar6[0x162] + (uint)uVar1 * 4);
          }
          psVar13 = (short *)(piVar6[0x162] + (uint)*(ushort *)(param_2 + iVar14 * 0x1b + 0x18) * 4)
          ;
          while( true ) {
            puVar12 = (ushort *)(piVar6[0x160] + *psVar13 * 0x20);
            fVar25 = *(float *)(puVar12 + 10);
            fVar22 = *(float *)(puVar12 + 0xe);
            fVar17 = (float)FUN_00357b30(fVar25,*(undefined4 *)(puVar12 + 0xc),fVar22,
                                         *(undefined4 *)(puVar12 + 8),&local_9c);
            fVar18 = ABS(fVar17);
            if ((fVar18 == fVar20 || fVar18 < fVar20 != (NAN(fVar18) || NAN(fVar20))) &&
               (((uint)puVar12[1] & param_3 << 0xd) == 0)) {
              fVar18 = fVar5 / SQRT(fVar25 * fVar25 + fVar22 * fVar22);
              fVar26 = ABS(fVar25) * fVar18;
              if ((int)fVar26 < DAT_004a2d38) {
                uVar1 = psVar13[1];
              }
              else {
                iVar7 = piVar6[0x161];
                pfVar10 = (float *)(iVar7 + (puVar12[1] & 0xffff1fff) * 0xc);
                fVar19 = *pfVar10;
                fVar23 = *(float *)(iVar7 + (puVar12[2] & 0xffff1fff) * 0xc);
                fVar21 = fVar19;
                if (NAN(fVar19) || NAN(fVar23)) {
                  fVar21 = fVar23;
                  fVar23 = fVar19;
                }
                fVar24 = *(float *)(iVar7 + (uint)puVar12[3] * 0xc);
                fVar19 = fVar24;
                if ((fVar23 == fVar24 || fVar23 < fVar24 != (NAN(fVar23) || NAN(fVar24))) &&
                   (fVar19 = fVar23, fVar21 < fVar24)) {
                  fVar21 = fVar24;
                }
                fVar21 = fVar21 + param_1;
                if ((local_9c < fVar19 - param_1) ||
                   (local_9c != fVar21 && local_9c < fVar21 == (NAN(local_9c) || NAN(fVar21)))) {
                  uVar1 = psVar13[1];
                }
                else {
                  fVar23 = pfVar10[1];
                  fVar21 = pfVar10[2];
                  *pfVar2 = *pfVar10;
                  pfVar2[1] = fVar23;
                  pfVar2[2] = fVar21;
                  puVar11 = (undefined4 *)(iVar7 + (puVar12[2] & 0xffff1fff) * 0xc);
                  uVar15 = puVar11[1];
                  uVar16 = puVar11[2];
                  *local_74 = *puVar11;
                  local_74[1] = uVar15;
                  local_74[2] = uVar16;
                  puVar11 = (undefined4 *)(iVar7 + (uint)puVar12[3] * 0xc);
                  uVar15 = puVar11[1];
                  uVar16 = puVar11[2];
                  *local_78 = *puVar11;
                  local_78[1] = uVar15;
                  local_78[2] = uVar16;
                  iVar7 = FUN_002be39c(*(undefined4 *)(puVar12 + 10),*(undefined4 *)(puVar12 + 0xc),
                                       *(undefined4 *)(puVar12 + 0xe),*(undefined4 *)(puVar12 + 8),
                                       local_80,local_94,DAT_004a3060,pfVar2 + 3,pfVar2 + 6,
                                       &local_8c);
                  if (((iVar7 != 0) && (ABS(local_8c - local_9c) <= param_1 / fVar26)) &&
                     ((int)((local_8c - local_9c) * fVar25) <= DAT_004a2d3c)) {
                    fVar18 = (param_1 - fVar17) * fVar18;
                    local_9c = local_9c + fVar18 * fVar25;
                    local_94 = local_94 + fVar18 * fVar22;
                    if ((*param_6 == (ushort *)0x0) ||
                       ((*(uint *)(*(int *)(*param_2 + 0x20) + (uint)**param_6 * 8 + 4) & 0x8000000)
                        == 0)) {
                      *param_6 = puVar12;
                      *param_7 = iVar14;
                    }
                    local_90 = 1;
                  }
                  uVar1 = psVar13[1];
                }
              }
            }
            else {
              uVar1 = psVar13[1];
            }
            if (uVar1 == uVar3) break;
            psVar13 = (short *)(piVar6[0x162] + (uint)uVar1 * 4);
          }
          *param_4 = local_9c;
          *param_5_00 = local_94;
        }
        if (local_90 != 0) {
          local_84 = *param_4;
          local_7c = *param_5_00;
          local_88 = 1;
        }
      }
      else {
        param_2[iVar14 * 0x1b + 0x2d] = (int)((float)param_2[iVar14 * 0x1b + 0x2d] - param_1);
      }
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0x32);
  return local_88;
}

