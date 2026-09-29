// OoT3D decomp @ 002fe0f0  name=FUN_002fe0f0  size=1760

void FUN_002fe0f0(int param_1,undefined4 *param_2,uint *param_3,uint param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  uint *puVar18;
  undefined4 uVar19;
  uint *puVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  bool bVar26;
  bool bVar27;
  uint in_fpscr;
  float fVar28;
  float fVar29;
  double dVar30;
  undefined4 extraout_s6;
  undefined4 extraout_s6_00;
  undefined4 extraout_s7;
  undefined4 extraout_s7_00;
  longlong lVar31;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  undefined1 auStack_130 [8];
  uint local_128;
  short local_124 [96];
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 *local_50;

  uVar12 = 0x20;
  uVar4 = (uint)*(byte *)(param_1 + 0x784);
  if (uVar4 != 0) {
    software_interrupt(0x28);
    uVar5 = uVar4 - *(uint *)(DAT_002fe658 + 8);
    uVar4 = (int)param_2 -
            (*(int *)(DAT_002fe658 + 0xc) + (uint)(uVar4 < *(uint *)(DAT_002fe658 + 8)));
    lVar31 = (ulonglong)uVar5 * 3 +
             CONCAT44(((int)uVar4 >> 0x1f) * DAT_002fe65c +
                      (int)((ulonglong)DAT_002fe65c * (ulonglong)uVar4 >> 0x20),
                      (int)((ulonglong)DAT_002fe65c * (ulonglong)uVar4)) +
             CONCAT44(uVar4 * 3,(int)((ulonglong)DAT_002fe65c * (ulonglong)uVar5 >> 0x20));
    lVar31 = FUN_00332754((int)lVar31,(int)((ulonglong)lVar31 >> 0x20),DAT_002fe660,0);
    uVar4 = (uint)((ulonglong)lVar31 >> 0x20);
    iVar6 = FUN_00332754((int)lVar31,uVar4,100,0);
    uVar5 = iVar6 + 1;
    if (lVar31 >= 0) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0 || (lVar31 < 0 || (int)uVar5 < 0)) {
      *param_3 = 0;
      return;
    }
    if ((int)uVar5 < 0x20) {
      uVar12 = uVar5;
    }
    *(undefined1 *)(param_1 + 0x784) = 0;
  }
  puVar18 = (uint *)(param_1 + 0x14c4);
  puVar20 = (uint *)(param_1 + 0x14c8);
  puVar16 = *(uint **)(*(int *)(param_1 + 0x14c0) + 8);
  if (0x1f < (int)*puVar18) {
    *puVar18 = (int)*puVar18 % 0x20;
  }
  uVar5 = puVar16[4];
  uVar4 = uVar5;
  if ((int)uVar5 >= 0) {
    uVar4 = uVar12;
  }
  if (uVar4 == 0 || ((int)uVar5 < 0 || (int)uVar12 < 0)) {
    local_128 = 0;
    goto LAB_002fe330;
  }
  uVar4 = puVar16[3];
  if (*(int *)(param_1 + 0x14cc) < 0) {
    if ((int)uVar4 < 0) {
      uVar4 = puVar16[4] + 1;
      goto LAB_002fe2a8;
    }
LAB_002fe23c:
    uVar4 = 0x20;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x14cc);
    if ((int)(iVar6 - (uVar4 + (*puVar20 < puVar16[2]))) < 0 !=
        (SBORROW4(iVar6,uVar4) != SBORROW4(iVar6 - uVar4,(uint)(*puVar20 < puVar16[2]))))
    goto LAB_002fe23c;
    uVar4 = puVar16[1];
    iVar6 = *(int *)(param_1 + 0x14cc);
    if ((int)(iVar6 - (uVar4 + (*puVar20 < *puVar16))) < 0 ==
        (SBORROW4(iVar6,uVar4) != SBORROW4(iVar6 - uVar4,(uint)(*puVar20 < *puVar16)))) {
      uVar4 = puVar16[4] - *puVar18;
    }
    else {
      if ((int)puVar16[3] < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = 0x1f - *puVar18;
      }
      uVar4 = iVar6 + puVar16[4] + 1;
      if (0x20 < (int)uVar4) goto LAB_002fe23c;
    }
  }
LAB_002fe2a8:
  local_128 = uVar12;
  if ((int)uVar4 < (int)uVar12) {
    local_128 = uVar4;
  }
  if (0x1f < (int)local_128) {
    local_128 = 0x1f;
  }
  uVar12 = puVar16[4];
  iVar6 = 0;
  if (0 < (int)local_128) {
    do {
      iVar9 = (int)((uVar12 - iVar6) + 0x20) % 0x20;
      local_124[iVar6 * 3] = *(short *)((int)puVar16 + iVar9 * 6 + 0x20);
      local_124[iVar6 * 3 + 1] = *(short *)((int)puVar16 + iVar9 * 6 + 0x22);
      iVar7 = iVar6 + 1;
      local_124[iVar6 * 3 + 2] = *(short *)((int)puVar16 + iVar9 * 6 + 0x24);
      iVar6 = iVar7;
    } while (iVar7 < (int)local_128);
  }
  uVar4 = puVar16[1];
  *puVar20 = *puVar16;
  *(uint *)(param_1 + 0x14cc) = uVar4;
  *puVar18 = uVar12;
LAB_002fe330:
  uVar10 = DAT_002fe664;
  puVar22 = (undefined4 *)(param_1 + 0x7e0);
  if ((int)local_128 < 1) {
    *param_3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x870) = DAT_002fe664;
    *(undefined4 *)(param_1 + 0x874) = uVar10;
    fVar3 = DAT_002fe678;
    dVar2 = DAT_002fe670;
    dVar1 = DAT_002fe668;
    local_50 = (undefined4 *)(param_1 + 0x820);
    local_54 = param_1 + 0x8a4;
    local_58 = param_1 + 0x7e4;
    local_5c = param_1 + 0x10b0;
    local_60 = param_1 + 0x8a8;
    local_64 = param_1 + 0x7e8;
    uVar12 = local_128;
    do {
      uVar12 = uVar12 - 1;
      uVar10 = *(undefined4 *)(param_1 + 0x7e4);
      uVar11 = *(undefined4 *)(param_1 + 0x7e8);
      *local_50 = *puVar22;
      local_50[1] = uVar10;
      local_50[2] = uVar11;
      *(uint *)(param_1 + 0x8ac) = *(int *)(param_1 + 0x8ac) + 1U & 0xff;
      dVar30 = (double)VectorSignedToFloat((int)local_124[uVar12 * 3],(byte)(in_fpscr >> 0x15) & 3);
      dVar30 = (dVar30 - (double)*(float *)(param_1 + 0x87c)) * *(double *)(param_1 + 0x888) *
               (double)*(float *)(param_1 + 0x14b0);
      uVar4 = in_fpscr & 0xfffffff | (uint)(dVar1 <= dVar30) << 0x1d;
      if (SUB41(uVar4 >> 0x1d,0)) {
        local_148 = VectorFloatToSigned(dVar30 + dVar2,3);
      }
      else {
        local_148 = VectorFloatToSigned(dVar30 - dVar2,3);
      }
      local_144 = param_1 + 0x8b0;
      FUN_002fa5ec(*(undefined4 *)(param_1 + 0x838),param_1,param_1 + 0x7e0,&local_134,
                   param_1 + 0x8a0);
      dVar30 = (double)VectorSignedToFloat((int)local_124[uVar12 * 3 + 1],(byte)(uVar4 >> 0x15) & 3)
      ;
      dVar30 = (dVar30 - (double)*(float *)(param_1 + 0x880)) * *(double *)(param_1 + 0x890) *
               (double)*(float *)(param_1 + 0x14b4);
      uVar4 = uVar4 & 0xfffffff |
              (uint)((double)CONCAT44(extraout_s7,extraout_s6) <= dVar30) << 0x1d;
      if (SUB41(uVar4 >> 0x1d,0)) {
        local_148 = VectorFloatToSigned(dVar30 + dVar2,3);
      }
      else {
        local_148 = VectorFloatToSigned(dVar30 - dVar2,3);
      }
      local_144 = param_1 + 0xcb0;
      FUN_002fa5ec(*(undefined4 *)(param_1 + 0x83c),param_1,local_58,&local_138,local_54);
      dVar30 = (double)VectorSignedToFloat((int)local_124[uVar12 * 3 + 2],(byte)(uVar4 >> 0x15) & 3)
      ;
      dVar30 = (dVar30 - (double)*(float *)(param_1 + 0x884)) * *(double *)(param_1 + 0x898) *
               (double)*(float *)(param_1 + 0x14b8);
      uVar4 = uVar4 & 0xfffffff |
              (uint)((double)CONCAT44(extraout_s7_00,extraout_s6_00) <= dVar30) << 0x1d;
      if (SUB41(uVar4 >> 0x1d,0)) {
        local_148 = VectorFloatToSigned(dVar30 + dVar2,3);
      }
      else {
        local_148 = VectorFloatToSigned(dVar30 - dVar2,3);
      }
      local_144 = local_5c;
      FUN_002fa5ec(*(undefined4 *)(param_1 + 0x840),param_1,local_64,&local_13c,local_60);
      if (*(char *)(param_1 + 0x857) != '\0') {
        bVar27 = false;
        if (*(int *)(param_1 + 0x14d0) == 0x3f800000) {
          uVar4 = uVar4 & 0xfffffff | (uint)(*(float *)(param_1 + 0x14d4) == fVar3) << 0x1e;
          bVar27 = SUB41(uVar4 >> 0x1e,0);
        }
        bVar26 = false;
        if (bVar27) {
          uVar4 = uVar4 & 0xfffffff | (uint)(*(float *)(param_1 + 0x14d8) == fVar3) << 0x1e;
          bVar26 = SUB41(uVar4 >> 0x1e,0);
        }
        if (bVar26) {
          uVar5 = uVar4 & 0xfffffff;
          uVar4 = uVar5 | (uint)(*(float *)(param_1 + 0x14dc) == fVar3) << 0x1e;
          bVar27 = false;
          if (SUB41(uVar4 >> 0x1e,0)) {
            uVar4 = uVar5 | (uint)(*(float *)(param_1 + 0x14e0) == fVar3) << 0x1e;
            bVar27 = SUB41(uVar4 >> 0x1e,0);
          }
          if (bVar27) {
            bVar27 = false;
            if (*(int *)(param_1 + 0x14e4) == 0x3f800000) {
              uVar4 = uVar4 & 0xfffffff | (uint)(*(float *)(param_1 + 0x14e8) == fVar3) << 0x1e;
              bVar27 = SUB41(uVar4 >> 0x1e,0);
            }
            bVar26 = false;
            if (bVar27) {
              uVar4 = uVar4 & 0xfffffff | (uint)(*(float *)(param_1 + 0x14ec) == fVar3) << 0x1e;
              bVar26 = SUB41(uVar4 >> 0x1e,0);
            }
            if (bVar26) {
              uVar5 = uVar4 & 0xfffffff;
              uVar4 = uVar5 | (uint)(*(float *)(param_1 + 0x14f0) == fVar3) << 0x1e;
              bVar27 = false;
              if (SUB41(uVar4 >> 0x1e,0)) {
                uVar4 = uVar5 | (uint)(*(float *)(param_1 + 0x14f4) == fVar3) << 0x1e;
                bVar27 = SUB41(uVar4 >> 0x1e,0);
              }
              if (bVar27) {
                bVar27 = false;
                if (*(int *)(param_1 + 0x14f8) == 0x3f800000) {
                  uVar4 = uVar4 & 0xfffffff | (uint)(*(float *)(param_1 + 0x14fc) == fVar3) << 0x1e;
                  bVar27 = SUB41(uVar4 >> 0x1e,0);
                }
                if (bVar27) goto LAB_002fe608;
              }
            }
          }
        }
        FUN_003735ac(param_1 + 0x7e0,(int *)(param_1 + 0x14d0),param_1 + 0x7e0);
      }
LAB_002fe608:
      *(float *)(param_1 + 0x82c) = *(float *)(param_1 + 0x7e0) - *(float *)(param_1 + 0x820);
      *(float *)(param_1 + 0x830) = *(float *)(param_1 + 0x7e4) - *(float *)(param_1 + 0x824);
      *(float *)(param_1 + 0x834) = *(float *)(param_1 + 0x7e8) - *(float *)(param_1 + 0x828);
      if (local_134 < local_138) {
        if (local_134 < local_13c) {
          local_13c = local_134;
        }
      }
      else if (local_138 < local_13c) {
        local_13c = local_138;
      }
      fVar28 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x860) + -1,(byte)(uVar4 >> 0x15) & 3);
      fVar29 = (float)VectorSignedToFloat(local_13c + -1,(byte)(uVar4 >> 0x15) & 3);
      in_fpscr = uVar4 & 0xfffffff | (uint)(fVar29 / fVar28 <= *(float *)(param_1 + 0x874)) << 0x1d;
      fVar28 = fVar29 / fVar28;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar28 = *(float *)(param_1 + 0x874);
      }
      *(float *)(param_1 + 0x874) = fVar28;
      fVar28 = *(float *)(param_1 + 0x848);
      *(float *)(param_1 + 0x7ec) =
           *(float *)(param_1 + 0x7ec) + fVar28 * *(float *)(param_1 + 0x7e0);
      *(float *)(param_1 + 0x7f0) =
           *(float *)(param_1 + 0x7f0) + fVar28 * *(float *)(param_1 + 0x7e4);
      *(float *)(param_1 + 0x7f4) =
           *(float *)(param_1 + 0x7f4) + fVar28 * *(float *)(param_1 + 0x7e8);
      FUN_00436354(param_1);
      if ((int)uVar12 < (int)param_4) {
        puVar8 = param_2 + uVar12 * 0xf;
        uVar10 = *(undefined4 *)(param_1 + 0x7e4);
        uVar11 = *(undefined4 *)(param_1 + 0x7e8);
        uVar13 = *(undefined4 *)(param_1 + 0x7ec);
        uVar14 = *(undefined4 *)(param_1 + 0x7f0);
        uVar15 = *(undefined4 *)(param_1 + 0x7f4);
        *puVar8 = *puVar22;
        puVar8[1] = uVar10;
        puVar8[2] = uVar11;
        puVar8[3] = uVar13;
        puVar8[4] = uVar14;
        puVar8[5] = uVar15;
        uVar10 = *(undefined4 *)(param_1 + 0x7fc);
        uVar11 = *(undefined4 *)(param_1 + 0x800);
        uVar13 = *(undefined4 *)(param_1 + 0x804);
        uVar14 = *(undefined4 *)(param_1 + 0x808);
        uVar15 = *(undefined4 *)(param_1 + 0x80c);
        puVar8[6] = *(undefined4 *)(param_1 + 0x7f8);
        puVar8[7] = uVar10;
        puVar8[8] = uVar11;
        puVar8[9] = uVar13;
        puVar8[10] = uVar14;
        puVar8[0xb] = uVar15;
        uVar10 = *(undefined4 *)(param_1 + 0x814);
        uVar11 = *(undefined4 *)(param_1 + 0x818);
        puVar8[0xc] = *(undefined4 *)(param_1 + 0x810);
        puVar8[0xd] = uVar10;
        puVar8[0xe] = uVar11;
      }
    } while (uVar12 != 0);
    if ((int)param_4 < (int)local_128) {
      *param_3 = param_4;
    }
    else {
      *param_3 = local_128;
    }
    if ((*(char *)(param_1 + 0x856) == '\0') ||
       (iVar6 = FUN_00301498(*(undefined4 *)(param_1 + 0x81c),auStack_130), iVar6 == 0)) {
      *(float *)(param_1 + 0x878) = fVar3;
      return;
    }
    FUN_00301418(*(undefined4 *)(param_1 + 0x81c),&local_13c,1,auStack_130);
    local_148 = local_13c;
    local_140 = local_134;
    uVar10 = FUN_004367dc(param_1,param_1 + 0x7f8,&local_148);
    *(undefined4 *)(param_1 + 0x878) = uVar10;
  }
  if (0 < (int)param_4) {
    uVar10 = *(undefined4 *)(param_1 + 0x7e4);
    uVar11 = *(undefined4 *)(param_1 + 0x7e8);
    uVar13 = *(undefined4 *)(param_1 + 0x7ec);
    uVar14 = *(undefined4 *)(param_1 + 0x7f0);
    uVar15 = *(undefined4 *)(param_1 + 0x7f4);
    uVar17 = *(undefined4 *)(param_1 + 0x7f8);
    uVar19 = *(undefined4 *)(param_1 + 0x7fc);
    uVar21 = *(undefined4 *)(param_1 + 0x800);
    uVar23 = *(undefined4 *)(param_1 + 0x804);
    uVar24 = *(undefined4 *)(param_1 + 0x808);
    uVar25 = *(undefined4 *)(param_1 + 0x80c);
    *param_2 = *puVar22;
    param_2[1] = uVar10;
    param_2[2] = uVar11;
    param_2[3] = uVar13;
    param_2[4] = uVar14;
    param_2[5] = uVar15;
    param_2[6] = uVar17;
    param_2[7] = uVar19;
    param_2[8] = uVar21;
    param_2[9] = uVar23;
    param_2[10] = uVar24;
    param_2[0xb] = uVar25;
    uVar10 = *(undefined4 *)(param_1 + 0x814);
    uVar11 = *(undefined4 *)(param_1 + 0x818);
    param_2[0xc] = *(undefined4 *)(param_1 + 0x810);
    param_2[0xd] = uVar10;
    param_2[0xe] = uVar11;
  }
  return;
}
