// OoT3D decomp @ 00117e54  name=FUN_00117e54  size=2176

void FUN_00117e54(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  byte bVar3;
  float *pfVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  bool bVar22;
  uint in_fpscr;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4 [6];
  float local_9c [3];
  char local_90 [4];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;

  fVar11 = DAT_001182c0;
  fVar10 = DAT_001182bc;
  fVar9 = DAT_001182b8;
  fVar8 = DAT_001182b4;
  fVar7 = DAT_001182b0;
  fVar6 = DAT_001182ac;
  fVar27 = DAT_001182a8;
  fVar31 = DAT_001182a4;
  fVar26 = DAT_001182a0;
  fVar25 = DAT_0011829c;
  fVar30 = DAT_0011827c;
  pfVar4 = DAT_00118278;
  bVar2 = false;
  pfVar20 = DAT_00118278 + -0x1b0;
  pfVar21 = DAT_00118278 + 0x1b0;
  local_74 = 0;
  fVar23 = *(float *)(param_1 + 0x28);
  iVar18 = *(int *)(param_1 + 0x124);
  iVar16 = *(int *)(param_2 + 0x20ac);
  iVar12 = *(int *)(param_2 + 0x20b4);
  fVar32 = (*(float *)(iVar16 + 0x28) - fVar23) * DAT_0011827c;
  fVar24 = *(float *)(param_1 + 0x1c0);
  fVar33 = (*(float *)(iVar16 + 0x2c) - fVar24) * DAT_0011827c;
  fVar28 = *(float *)(param_1 + 0x30);
  fVar34 = (*(float *)(iVar16 + 0x30) - fVar28) * DAT_0011827c;
  if ((((int)ABS(fVar32) < DAT_00118280) && ((int)ABS(fVar33) < DAT_00118284)) &&
     ((int)ABS(fVar34) < DAT_00118280)) {
    local_74 = 1;
  }
  iVar16 = 1;
  local_9c[0] = (*(float *)(iVar18 + 0x28) - fVar23) * DAT_0011827c;
  local_b4[3] = ((*(float *)(iVar18 + 0x2c) - DAT_00118288) - fVar24) * DAT_0011827c;
  local_b4[0] = (*(float *)(iVar18 + 0x30) - fVar28) * DAT_0011827c;
  local_90[0] = '\x01';
  local_90[1] = 0;
  local_90[2] = 0;
  if ((*DAT_0011828c == 0x157) && (*(int *)(DAT_00118290 + 0x4e8) == 8)) {
    psVar13 = *(short **)(param_2 + 0x20bc);
    bVar2 = true;
    psVar14 = psVar13;
    if (psVar13 != (short *)0x0) {
      do {
        sVar1 = *psVar14;
        if (sVar1 != DAT_00118294) {
          psVar14 = *(short **)(psVar14 + 0x98);
        }
      } while (sVar1 != DAT_00118294 && psVar14 != (short *)0x0);
    }
    if (psVar13 != (short *)0x0) {
      do {
        sVar1 = *psVar13;
        if (sVar1 != DAT_00118298) {
          psVar13 = *(short **)(psVar13 + 0x98);
        }
      } while (sVar1 != DAT_00118298 && psVar13 != (short *)0x0);
    }
    local_9c[1] = (*(float *)(psVar14 + 0x14) - fVar23) * DAT_0011827c;
    local_b4[4] = (*(float *)(psVar14 + 0x16) - fVar24) * DAT_0011827c;
    local_b4[1] = (*(float *)(psVar14 + 0x18) - fVar28) * DAT_0011827c;
    local_90[1] = 1;
    local_9c[2] = (*(float *)(psVar13 + 0x14) - fVar23) * DAT_0011827c;
    local_b4[5] = (*(float *)(psVar13 + 0x16) - fVar24) * DAT_0011827c;
    local_b4[2] = (*(float *)(psVar13 + 0x18) - fVar28) * DAT_0011827c;
    local_90[2] = 1;
  }
  else if (iVar12 != 0) {
    do {
      fVar23 = (*(float *)(iVar12 + 0x28) - *(float *)(param_1 + 0x28)) * DAT_0011827c;
      local_b4[iVar16 + 6] = fVar23;
      fVar24 = (*(float *)(iVar12 + 0x2c) - *(float *)(param_1 + 0x1c0)) * DAT_0011827c;
      local_b4[iVar16 + 3] = fVar24;
      fVar28 = (*(float *)(iVar12 + 0x30) - *(float *)(param_1 + 0x30)) * DAT_0011827c;
      local_b4[iVar16] = fVar28;
      if ((int)ABS(fVar23) < DAT_00118280) {
        fVar24 = ABS(fVar24);
        bVar22 = SBORROW4((int)fVar24,DAT_00118284);
        iVar18 = (int)fVar24 - DAT_00118284;
        if ((int)fVar24 < DAT_00118284) {
          fVar28 = ABS(fVar28);
          bVar22 = SBORROW4((int)fVar28,DAT_00118280);
          iVar18 = (int)fVar28 - DAT_00118280;
        }
        if (iVar18 < 0 != bVar22) {
          if (*(short *)(iVar12 + 0x1c) == 1) {
            cVar17 = '#';
          }
          else {
            cVar17 = '\x01';
          }
          local_90[iVar16] = cVar17;
        }
      }
      iVar16 = (int)(short)((short)iVar16 + 1);
      do {
        iVar12 = *(int *)(iVar12 + 0x130);
        if (iVar12 == 0) goto LAB_0011810c;
      } while (2 < iVar16);
    } while( true );
  }
LAB_0011810c:
  local_70 = param_2 + 0x5000;
  iVar12 = 0;
  pfVar19 = DAT_00118278;
  do {
    if (local_74 == 0) {
      fVar23 = *(float *)(param_1 + 0x1c8) - fVar8;
      fVar24 = DAT_001182c4;
    }
    else {
      fVar24 = *pfVar19 - fVar32;
      fVar23 = pfVar19[2] - fVar34;
      fVar24 = SQRT(fVar24 * fVar24 + fVar23 * fVar23);
      fVar23 = (fVar25 - fVar24) * fVar26;
      fVar24 = fVar24 - fVar9;
      if (fVar23 < fVar11) {
        fVar23 = fVar11;
      }
      fVar23 = ((*(float *)(param_1 + 0x1c8) - *(float *)(param_1 + 0x1c8) * fVar23) - fVar8) +
               fVar33 * fVar23;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 <= fVar24) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar24 = fVar11;
      }
      fVar24 = fVar24 * DAT_001182c4 * fVar10;
      if (DAT_001182c8 < (int)fVar24) {
        fVar24 = DAT_001182c4;
      }
    }
    iVar16 = 0;
    do {
      if (local_90[iVar16] != '\0') {
        fVar28 = SQRT((*pfVar19 - local_b4[iVar16 + 6]) * (*pfVar19 - local_b4[iVar16 + 6]) +
                      (pfVar19[2] - local_b4[iVar16]) * (pfVar19[2] - local_b4[iVar16]));
        if ((iVar16 == 0) || (bVar2)) {
          fVar29 = (fVar31 - fVar28) * fVar27;
        }
        else {
          fVar29 = (fVar6 - fVar28) * fVar7;
        }
        fVar28 = fVar28 - fVar9;
        if (fVar29 < fVar11) {
          fVar29 = fVar11;
        }
        fVar29 = ((*(float *)(param_1 + 0x1c8) - *(float *)(param_1 + 0x1c8) * fVar29) - fVar8) +
                 local_b4[iVar16 + 3] * fVar29;
        if (fVar28 < fVar11) {
          fVar28 = fVar11;
        }
        fVar28 = fVar28 * DAT_001182c4 * fVar10;
        if (DAT_001182c8 < (int)fVar28) {
          fVar28 = DAT_001182c4;
        }
        uVar15 = in_fpscr & 0xfffffff | (uint)(fVar24 < fVar28) << 0x1f |
                 (uint)(fVar24 == fVar28) << 0x1e;
        in_fpscr = uVar15 | (uint)(NAN(fVar24) || NAN(fVar28)) << 0x1c;
        if (fVar29 < fVar23) {
          fVar23 = fVar29;
        }
        bVar3 = (byte)(uVar15 >> 0x18);
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar24 = fVar28;
        }
      }
      iVar16 = (int)(short)((short)iVar16 + 1);
    } while (iVar16 < 3);
    fVar28 = (float)FUN_002cfca0((int)(short)((short)*(undefined4 *)(local_70 + 0xbf4) * 4000 +
                                             (short)iVar12 * (short)DAT_00118728 * 0x10));
    fVar28 = fVar28 * fVar24;
    if (*(char *)(param_1 + 0x1cc) == '\0') {
      psVar14 = (short *)(DAT_0011872c + iVar12 * 6);
      fVar23 = (float)VectorSignedToFloat((int)(short)(int)(fVar23 + fVar28),
                                          (byte)(in_fpscr >> 0x15) & 3);
      pfVar19[1] = fVar23;
      sVar1 = (short)(int)(fVar28 * DAT_00118730);
      fVar23 = (float)VectorSignedToFloat((int)*psVar14 + (int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
      *pfVar19 = fVar23;
      fVar23 = (float)VectorSignedToFloat((int)psVar14[2] + (int)sVar1,(byte)(in_fpscr >> 0x15) & 3)
      ;
      pfVar19[2] = fVar23;
      fVar23 = (float)VectorSignedToFloat((int)*psVar14 + (int)(short)(int)fVar28,
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar20 = fVar23;
      fVar23 = (float)VectorSignedToFloat((int)psVar14[2] + (int)(short)(int)fVar28,
                                          (byte)(in_fpscr >> 0x15) & 3);
      pfVar20[2] = fVar23;
    }
    else {
      iVar16 = (int)(short)(int)(fVar23 + fVar28);
      iVar18 = (int)(short)(int)((pfVar20[1] - *(float *)(param_1 + 0x1c0)) * fVar30);
      if (iVar16 < iVar18) {
        iVar16 = iVar18;
      }
      fVar23 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x15) & 3);
      pfVar19[1] = fVar23;
    }
    fVar28 = DAT_00118740;
    fVar24 = DAT_00118738;
    fVar23 = DAT_00118734;
    piVar5 = DAT_0011828c;
    pfVar19 = pfVar19 + 3;
    iVar12 = (int)(short)((short)iVar12 + 1);
    pfVar20 = pfVar20 + 3;
  } while (iVar12 < 0x90);
  if (*(char *)(param_1 + 0x1cc) == '\0') {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x1c0);
    *(float *)(param_1 + 100) = fVar11;
    uVar15 = (uint)*(ushort *)(piVar5 + 3);
    if (0x7fff < uVar15) {
      uVar15 = DAT_0011873c - uVar15;
    }
    fVar30 = (float)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x1c4) = DAT_00118744 + fVar30 * fVar28;
    *(float *)(param_1 + 0x1c8) = fVar23;
  }
  else {
    FUN_00373500(*(float *)(param_1 + 0x1c0) - DAT_00118734,DAT_00118738,
                 *(undefined4 *)(param_1 + 100),param_1 + 0x2c);
    FUN_00373500(DAT_00118748,fVar24,DAT_00118730,param_1 + 100);
    FUN_00373500(fVar11,fVar24,DAT_0011874c,param_1 + 0x1c4);
    FUN_00373500(DAT_00118750,fVar24,DAT_001182c4,param_1 + 0x1c8);
  }
  iVar12 = DAT_00118758;
  local_80 = fVar11;
  local_7c = fVar11;
  local_78 = DAT_00118754;
  iVar16 = 0;
  pfVar20 = pfVar4;
  do {
    iVar18 = (int)((ulonglong)((longlong)iVar12 * (longlong)iVar16) >> 0x20);
    sVar1 = (short)iVar16;
    if (iVar16 + ((iVar18 >> 1) - (iVar18 >> 0x1f)) * -0xc == 0xb) {
      fVar30 = pfVar20[2];
      iVar18 = (int)(short)(sVar1 + -1);
      fVar25 = pfVar4[iVar18 * 3 + 2];
    }
    else {
      fVar25 = pfVar20[2];
      iVar18 = (int)(short)(sVar1 + 1);
      fVar30 = pfVar4[iVar18 * 3 + 2];
    }
    fVar31 = pfVar20[1];
    fVar26 = pfVar4[iVar18 * 3 + 1];
    fVar30 = (float)FUN_003675f8(fVar30 - fVar25,fVar26 - fVar31);
    if (iVar16 < 0x84) {
      fVar27 = *pfVar20;
      fVar25 = pfVar4[(short)(sVar1 + 0xc) * 3];
    }
    else {
      fVar25 = *pfVar20;
      fVar27 = pfVar4[(short)(sVar1 + -0xc) * 3];
    }
    fVar31 = (float)FUN_003675f8(fVar25 - fVar27,fVar26 - fVar31);
    fVar25 = fVar24;
    fVar26 = fVar11;
    if (fVar30 != fVar11) {
      fVar26 = (float)FUN_003727f0(fVar30);
      fVar25 = (float)FUN_00372674(fVar30);
    }
    local_cc = -fVar26;
    local_e0 = fVar11;
    local_dc = fVar11;
    local_d8 = fVar11;
    local_d4 = fVar11;
    local_c8 = fVar11;
    local_c4 = fVar11;
    local_b8 = fVar11;
    local_e4 = fVar24;
    local_d0 = fVar25;
    local_c0 = fVar26;
    local_bc = fVar25;
    if (fVar31 != fVar11) {
      fVar27 = (float)FUN_003727f0(fVar31);
      fVar31 = (float)FUN_00372674(fVar31);
      fVar30 = local_e0 * fVar27;
      local_e0 = local_e0 * fVar31 - local_e4 * fVar27;
      fVar25 = local_d0 * fVar27;
      local_d0 = local_d0 * fVar31 - local_d4 * fVar27;
      fVar26 = local_c0 * fVar27;
      local_c0 = local_c0 * fVar31 - local_c4 * fVar27;
      local_e4 = local_e4 * fVar31 + fVar30;
      local_d4 = local_d4 * fVar31 + fVar25;
      local_c4 = local_c4 * fVar31 + fVar26;
    }
    FUN_003735ac(&local_8c,&local_e4,&local_80);
    *pfVar21 = local_8c;
    iVar16 = (int)(short)(sVar1 + 1);
    pfVar21[1] = local_88;
    pfVar21[2] = local_84;
    pfVar20 = pfVar20 + 3;
    pfVar21 = pfVar21 + 3;
  } while (iVar16 < 0x90);
  FUN_0036759c(*(undefined4 *)(param_1 + 0x1e4),0x6c0,DAT_0011875c);
  FUN_0036759c(*(undefined4 *)(param_1 + 0x1dc),0x6c0,DAT_00118278);
  FUN_0036751c(*(undefined4 *)(param_1 + 0x1dc),0x6c0,DAT_00118760);
  return;
}
