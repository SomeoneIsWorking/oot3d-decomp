// OoT3D decomp @ 003fc2f8  name=FUN_003fc2f8  size=2044

/* WARNING: Removing unreachable block (ram,0x003fc55c) */
/* WARNING: Removing unreachable block (ram,0x003fc578) */

void FUN_003fc2f8(int param_1,undefined4 param_2,undefined4 *param_3,float *param_4)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 extraout_r1;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float *pfVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  float *pfVar20;
  undefined4 uVar21;
  float *pfVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  bool bVar27;
  uint in_fpscr;
  float fVar28;
  float fVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_104 [12];
  float local_f8;
  float local_e8;
  float local_d8;
  undefined4 local_d4 [12];
  float local_a4 [12];
  float *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  float local_68;
  float local_64;
  undefined1 *local_60;
  float *local_5c;
  float *local_58;
  float *local_54;
  int local_50;
  int local_4c;
  float *local_48;
  
  fVar2 = DAT_003fc6d4;
  fVar29 = DAT_003fc6d0;
  if (((*DAT_003fc6cc & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_003fc6cc), pfVar4 = DAT_003fc6d8, iVar3 != 0)) {
    *DAT_003fc6d8 = fVar29;
    pfVar4[1] = fVar2;
    pfVar4[2] = fVar2;
    pfVar4[3] = fVar2;
    pfVar4[4] = fVar2;
    pfVar4[5] = fVar29;
    pfVar4[6] = fVar2;
    pfVar4[7] = fVar2;
    pfVar4[8] = fVar2;
    pfVar4[9] = fVar2;
    pfVar4[10] = fVar29;
    pfVar4[0xb] = fVar2;
  }
  FUN_00372224(param_1 + 0x84,DAT_003fc6d8);
  FUN_003f95c8(param_1);
  *(float *)(param_1 + 0xe4) = fVar29;
  FUN_00333294(param_1,0);
  if (*(int *)(param_1 + 0x1fc) != 0) {
    if ((*(uint *)(param_1 + 0x178) & 1) == 0) {
      iVar3 = *(int *)(**(int **)(param_1 + 4) + 0x18);
      if (iVar3 == 0) {
        uVar8 = param_3[1];
        uVar10 = param_3[2];
        uVar11 = param_3[3];
        uVar12 = param_3[4];
        uVar16 = param_3[5];
        uVar19 = param_3[6];
        uVar21 = param_3[7];
        uVar23 = param_3[8];
        uVar24 = param_3[9];
        uVar25 = param_3[10];
        uVar26 = param_3[0xb];
        *(undefined4 *)(param_1 + 0x84) = *param_3;
        *(undefined4 *)(param_1 + 0x88) = uVar8;
        *(undefined4 *)(param_1 + 0x8c) = uVar10;
        *(undefined4 *)(param_1 + 0x90) = uVar11;
        *(undefined4 *)(param_1 + 0x94) = uVar12;
        *(undefined4 *)(param_1 + 0x98) = uVar16;
        *(undefined4 *)(param_1 + 0x9c) = uVar19;
        *(undefined4 *)(param_1 + 0xa0) = uVar21;
        *(undefined4 *)(param_1 + 0xa4) = uVar23;
        *(undefined4 *)(param_1 + 0xa8) = uVar24;
        *(undefined4 *)(param_1 + 0xac) = uVar25;
        *(undefined4 *)(param_1 + 0xb0) = uVar26;
      }
      else if (iVar3 == 1) {
        fVar28 = (float)FUN_0033f114(*(float *)(param_1 + 0x3c) - *param_4,
                                     param_4[2] - *(float *)(param_1 + 0x44));
        fVar28 = -(fVar28 * DAT_003fc6dc) * DAT_003fc6e0 * DAT_003fc6e4;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 <= fVar28) << 0x1d;
        for (fVar28 = ABS(fVar28); fVar38 = fVar2, DAT_003fc6e8 <= (int)fVar28;
            fVar28 = fVar28 - DAT_003fc6ec) {
        }
        for (; DAT_003fc6e8 <= (int)fVar38; fVar38 = fVar38 - DAT_003fc6ec) {
        }
        uVar30 = VectorFloatToUnsigned(fVar2,3);
        uVar31 = VectorFloatToUnsigned(fVar28,3);
        uVar32 = VectorFloatToUnsigned(fVar38,3);
        fVar34 = (float)VectorUnsignedToFloat(uVar31 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        fVar33 = (float)VectorUnsignedToFloat(uVar30 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        pfVar4 = (float *)(DAT_003fc6f0 + (uVar30 & 0xff) * 0x10);
        fVar36 = (float)VectorUnsignedToFloat(uVar32 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        pfVar5 = (float *)(DAT_003fc6f0 + (uVar31 & 0xff) * 0x10);
        fVar35 = *pfVar4 + (fVar2 - fVar33) * pfVar4[2];
        fVar37 = pfVar4[1] + (fVar2 - fVar33) * pfVar4[3];
        pfVar4 = (float *)(DAT_003fc6f0 + (uVar32 & 0xff) * 0x10);
        fVar33 = *pfVar5 + (fVar28 - fVar34) * pfVar5[2];
        fVar34 = pfVar5[1] + (fVar28 - fVar34) * pfVar5[3];
        fVar28 = *pfVar4 + (fVar38 - fVar36) * pfVar4[2];
        fVar38 = pfVar4[1] + (fVar38 - fVar36) * pfVar4[3];
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          fVar33 = -fVar33;
        }
        *(float *)(param_1 + 0x84) = fVar38 * fVar34;
        *(float *)(param_1 + 0x94) = fVar28 * fVar34;
        *(float *)(param_1 + 0xa8) = fVar35 * fVar34;
        *(float *)(param_1 + 0xac) = fVar37 * fVar34;
        *(float *)(param_1 + 0x88) = fVar35 * fVar38 * fVar33 - fVar37 * fVar28;
        *(float *)(param_1 + 0x9c) = fVar37 * fVar28 * fVar33 - fVar35 * fVar38;
        *(float *)(param_1 + 0x8c) = fVar35 * fVar28 + fVar37 * fVar38 * fVar33;
        *(float *)(param_1 + 0x98) = fVar37 * fVar38 + fVar35 * fVar28 * fVar33;
        *(float *)(param_1 + 0xa4) = -fVar33;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined4 *)(param_1 + 0xa0) = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
    }
    pfVar4 = DAT_003fc6f4;
    pfVar20 = DAT_003fc6f4 + 0x100;
    local_50 = 0;
    pfVar13 = *(float **)(param_1 + 0x1e4);
    iVar3 = *(int *)(param_1 + 0x1e8);
    pfVar22 = *(float **)(param_1 + 0x1ec);
    *(float *)(param_1 + 0x280) = fVar2;
    *(float *)(param_1 + 0x284) = fVar2;
    *(float *)(param_1 + 0x288) = fVar2;
    fVar38 = 0.0;
    pfVar5 = pfVar4;
    fVar28 = fVar2;
    local_58 = pfVar20;
    if (0 < *(int *)(param_1 + 0x1fc)) {
      do {
        fVar33 = *pfVar22;
        pfVar20[1] = 0.0;
        *pfVar20 = fVar33;
        pfVar20[2] = 0.0;
        pfVar20[3] = 0.0;
        pfVar20[4] = 0.0;
        fVar33 = pfVar22[1];
        pfVar20[6] = 0.0;
        pfVar20[5] = fVar33;
        pfVar20[7] = 0.0;
        pfVar20[8] = 0.0;
        pfVar20[9] = 0.0;
        pfVar20[10] = pfVar22[2];
        pfVar20[0xb] = 0.0;
        FUN_0036c174(pfVar20,iVar3,pfVar20);
        FUN_0036c174(pfVar20,param_1 + 0x84,pfVar20);
        FUN_0032c78c(pfVar20,pfVar13,pfVar20);
        local_a4[3] = *pfVar20;
        local_a4[4] = pfVar20[1];
        local_a4[5] = pfVar20[2];
        local_a4[6] = pfVar20[3];
        local_a4[7] = pfVar20[4];
        local_a4[8] = pfVar20[5];
        local_a4[9] = pfVar20[6];
        local_a4[10] = pfVar20[7];
        local_a4[0xb] = pfVar20[8];
        local_74 = (float *)pfVar20[9];
        local_70 = (undefined4 *)pfVar20[10];
        local_6c = (undefined4 *)pfVar20[0xb];
        FUN_0036c174(local_a4 + 3,param_2,local_a4 + 3);
        *pfVar5 = (float)local_6c;
        in_fpscr = in_fpscr & 0xfffffff | (uint)((float)local_6c == fVar2) << 0x1e |
                   (uint)(fVar2 <= (float)local_6c) << 0x1d;
        pfVar5[1] = fVar38;
        bVar1 = (byte)(in_fpscr >> 0x18);
        if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) ||
           ((*(uint *)(param_1 + 0x178) & 4) != 0)) {
          fVar28 = (float)local_6c + fVar28;
          pfVar5 = pfVar5 + 2;
          *(float *)(param_1 + 0x280) = *(float *)(param_1 + 0x280) + *pfVar13;
          *(float *)(param_1 + 0x284) = *(float *)(param_1 + 0x284) + pfVar13[1];
          local_50 = local_50 + 1;
          *(float *)(param_1 + 0x288) = *(float *)(param_1 + 0x288) + pfVar13[2];
        }
        fVar38 = (float)((int)fVar38 + 1);
        pfVar20 = pfVar20 + 0xc;
        pfVar13 = pfVar13 + 3;
        pfVar22 = pfVar22 + 3;
        iVar3 = iVar3 + 0x30;
      } while ((int)fVar38 < *(int *)(param_1 + 0x1fc));
      if (local_50 != 0) {
        fVar38 = (float)VectorSignedToFloat(local_50,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0xe4) = fVar28 / fVar38;
        fVar28 = (float)VectorSignedToFloat(local_50,(byte)(in_fpscr >> 0x15) & 3);
        fVar29 = fVar29 / fVar28;
        *(float *)(param_1 + 0x280) = *(float *)(param_1 + 0x280) * fVar29;
        *(float *)(param_1 + 0x284) = *(float *)(param_1 + 0x284) * fVar29;
        *(float *)(param_1 + 0x288) = *(float *)(param_1 + 0x288) * fVar29;
        if (*(short *)(**(int **)(param_1 + 4) + 0x20) == 1) {
          iVar3 = 0;
          if (0 < local_50 + -1) {
            do {
              pfVar5 = pfVar4 + iVar3 * 2;
              fVar29 = *pfVar5;
              iVar14 = iVar3;
              if (0 < (local_50 - iVar3) + -1) {
                iVar6 = 0;
                iVar9 = (local_50 - iVar3) + -1;
                pfVar20 = pfVar5;
                do {
                  pfVar20 = pfVar20 + 2;
                  if (*pfVar20 < fVar29) {
                    iVar14 = iVar3 + iVar6 + 1;
                    fVar29 = *pfVar20;
                  }
                  iVar9 = iVar9 + -1;
                  iVar6 = iVar6 + 1;
                } while (iVar9 != 0);
              }
              if (iVar3 != iVar14) {
                pfVar20 = pfVar4 + iVar14 * 2;
                fVar29 = *pfVar20;
                fVar28 = pfVar20[1];
                fVar38 = pfVar5[1];
                *pfVar20 = *pfVar5;
                pfVar20[1] = fVar38;
                *pfVar5 = fVar29;
                pfVar5[1] = fVar28;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < local_50 + -1);
          }
        }
        puVar15 = (undefined4 *)0x0;
        puVar17 = (undefined4 *)0x0;
        pfVar20 = (float *)0x0;
        local_6c = (undefined4 *)0x0;
        local_70 = (undefined4 *)0x0;
        local_74 = (float *)0x0;
        pfVar5 = (float *)FUN_00333270(*(undefined4 *)(param_1 + 4));
        uVar30 = *(uint *)(**(int **)(param_1 + 4) + 0x1c);
        bVar27 = (uVar30 & 0x80) == 0;
        if (bVar27) {
          uVar30 = *(uint *)(param_1 + 0x178);
        }
        if (bVar27 && (uVar30 & 0x20000) == 0) {
          puVar15 = (undefined4 *)FUN_00408c80();
          local_6c = puVar15;
        }
        if ((*(int *)(param_1 + 0x1f0) != 0) && ((*(uint *)(param_1 + 0x178) & 0x40000) == 0)) {
          puVar17 = (undefined4 *)FUN_003331ec(*(undefined4 *)(param_1 + 4));
          local_70 = puVar17;
        }
        if ((*(int *)(param_1 + 500) != 0) && ((*(uint *)(param_1 + 0x178) & 0x80000) == 0)) {
          pfVar20 = (float *)FUN_00333070(*(undefined4 *)(param_1 + 4));
          local_74 = pfVar20;
        }
        local_4c = 0;
        local_54 = pfVar4;
        if (0 < local_50) {
          do {
            pfVar4 = local_a4;
            iVar3 = param_1 + 0x200;
            fVar29 = local_54[1];
            iVar14 = 0;
            local_5c = local_58 + (int)fVar29 * 0xc;
            local_48 = local_5c;
            do {
              FUN_003735ac(pfVar4,local_5c,iVar3);
              iVar14 = iVar14 + 1;
              iVar3 = iVar3 + 0xc;
              pfVar4 = pfVar4 + 3;
            } while (iVar14 < 4);
            if (local_6c != (undefined4 *)0x0) {
              FUN_00372224(auStack_104,local_48);
              local_d8 = fVar2;
              local_60 = auStack_104;
              puVar18 = local_d4;
              iVar3 = param_1 + 0x230;
              local_e8 = fVar2;
              local_f8 = fVar2;
              iVar14 = 0;
              do {
                FUN_003735ac(puVar18,local_60,iVar3);
                iVar14 = iVar14 + 1;
                iVar3 = iVar3 + 0xc;
                puVar18 = puVar18 + 3;
              } while (iVar14 < 4);
            }
            iVar3 = 0;
            puVar18 = puVar17;
            do {
              fVar28 = local_a4[iVar3 * 3 + 1];
              fVar38 = local_a4[iVar3 * 3 + 2];
              *pfVar5 = local_a4[iVar3 * 3];
              pfVar5[1] = fVar28;
              pfVar5[2] = fVar38;
              pfVar5 = pfVar5 + 3;
              if (local_6c != (undefined4 *)0x0) {
                uVar8 = local_d4[iVar3 * 3 + 1];
                uVar10 = local_d4[iVar3 * 3 + 2];
                *puVar15 = local_d4[iVar3 * 3];
                puVar15[1] = uVar8;
                puVar15[2] = uVar10;
                puVar15 = puVar15 + 3;
              }
              puVar17 = puVar18;
              if (local_70 != (undefined4 *)0x0) {
                puVar17 = puVar18 + 4;
                puVar7 = (undefined4 *)
                         (*(int *)(param_1 + 0x1f0) + (iVar3 + (int)fVar29 * 4) * 0x10);
                uVar8 = puVar7[1];
                uVar10 = puVar7[2];
                uVar11 = puVar7[3];
                *puVar18 = *puVar7;
                puVar18[1] = uVar8;
                puVar18[2] = uVar10;
                puVar18[3] = uVar11;
              }
              if (local_74 != (float *)0x0) {
                iVar14 = param_1 + iVar3 * 8;
                pfVar4 = (float *)(*(int *)(param_1 + 500) + (int)fVar29 * 8);
                local_68 = *(float *)(iVar14 + 0x260) + *pfVar4;
                local_64 = *(float *)(iVar14 + 0x264) + pfVar4[1];
                *pfVar20 = local_68;
                pfVar20[1] = local_64;
                pfVar20 = pfVar20 + 2;
              }
              iVar3 = iVar3 + 1;
              puVar18 = puVar17;
            } while (iVar3 < 4);
            local_4c = local_4c + 1;
            local_54 = local_54 + 2;
          } while (local_4c < local_50);
        }
        FUN_00333294(param_1,local_50 * 6);
        *(undefined4 *)(param_1 + 0x1fc) = 0;
        iVar3 = *(int *)(param_1 + 4);
        FUN_00368d94(*(int *)(iVar3 + 0x124) + 1,*(undefined4 *)(iVar3 + 0x128));
        *(undefined4 *)(iVar3 + 0x124) = extraout_r1;
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x1fc) = 0;
  }
  return;
}

