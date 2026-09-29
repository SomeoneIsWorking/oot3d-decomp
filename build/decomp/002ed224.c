// OoT3D decomp @ 002ed224  name=FUN_002ed224  size=1656

/* WARNING: Type propagation algorithm not settling */

void FUN_002ed224(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  float *pfVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  uint in_fpscr;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_8b0;
  float local_8ac;
  int local_8a8;
  int local_8a4;
  float local_8a0 [80];
  undefined1 local_760 [40];
  float local_738 [211];
  float fStack_3ec;
  undefined1 local_3e8 [40];
  float local_3c0 [212];
  int local_70;
  int local_6c;

  fVar11 = DAT_002ed588;
  uVar10 = DAT_002ed584;
  fVar9 = DAT_002ed580;
  fVar8 = DAT_002ed57c;
  fVar7 = DAT_002ed578;
  fVar6 = DAT_002ed574;
  fVar5 = DAT_002ed570;
  fVar4 = DAT_002ed56c;
  fVar3 = DAT_002ed568;
  fVar2 = DAT_002ed564;
  fVar1 = DAT_002ed560;
  iVar18 = 0;
  iVar16 = 0;
  iVar20 = 0;
  do {
    iVar13 = FUN_002eee84(iVar20);
    fVar12 = DAT_002ed5b0;
    fVar31 = DAT_002ed5ac;
    fVar29 = DAT_002ed598;
    iVar14 = (int)*(short *)(iVar13 + 0x44);
    if (iVar14 < 0x30) {
      iVar14 = 0x30;
    }
    local_8a4 = (int)((int)*(short *)(iVar13 + 0x42) +
                     ((uint)((int)*(short *)(iVar13 + 0x42) >> 0x1f) >> 0x1c)) >> 4;
    local_8a8 = (int)(iVar14 + ((uint)(iVar14 >> 0x1f) >> 0x1c)) >> 4;
    fVar33 = fVar2;
    if ((*(int *)(DAT_002ed58c + iVar20 * 4) != 0) &&
       (*(int *)(DAT_002ed590 + 0x10) == 3 || *(int *)(DAT_002ed590 + 0x10) == 0xe)) {
      fVar33 = DAT_002ed594;
    }
    pfVar21 = (float *)(DAT_002ed5a0 + iVar20 * 4);
    fVar28 = *pfVar21;
    local_3c0[iVar18 + -10] = DAT_002ed59c + fVar28;
    pfVar22 = (float *)(DAT_002ed5a4 + iVar20 * 4);
    fVar30 = *pfVar22;
    fVar32 = (DAT_002ed594 - fVar33) + fVar30;
    local_3c0[iVar18 + -9] = fVar32;
    local_3c0[iVar18 + -8] = fVar3 + fVar28;
    local_3c0[iVar18 + -7] = fVar32;
    local_3c0[iVar18 + -6] = DAT_002ed5a8 + fVar28;
    local_3c0[iVar18 + -5] = fVar32;
    local_3c0[iVar18 + -4] = DAT_002ed5ac + fVar28;
    local_3c0[iVar18 + -3] = (fVar2 - fVar33) + fVar30;
    local_738[iVar16 + -10] = fVar4;
    local_738[iVar16 + -9] = fVar2;
    local_738[iVar16 + -8] = fVar5;
    local_738[iVar16 + -7] = fVar2;
    local_738[iVar16 + -6] = fVar4;
    local_738[iVar16 + -5] = fVar2;
    local_738[iVar16 + -4] = fVar6;
    local_738[iVar16 + -3] = DAT_002ed5b0;
    local_3c0[iVar18 + -2] = fVar7 + fVar28;
    iVar19 = iVar18 + 10;
    local_3c0[iVar18 + -1] = (fVar8 - fVar33) + fVar30;
    local_738[iVar16 + -2] = fVar9;
    iVar17 = iVar16 + 10;
    local_738[iVar16 + -1] = fVar9;
    iVar26 = *(int *)(DAT_002ed5b4 + iVar20 * 4);
    iVar16 = 0;
    iVar23 = 0;
    iVar18 = 0;
    local_6c = iVar14 % 0x10 + ((uint)(iVar14 % 0x10 >> 0x1f) >> 0x1e);
    do {
      if (iVar26 == 0) {
        local_3c0[iVar19 + -10] = DAT_002ed5ac;
        local_3c0[iVar19 + -9] = DAT_002ed5ac;
        local_738[iVar17 + -10] = DAT_002ed5ac;
        local_738[iVar17 + -9] = DAT_002ed5ac;
        local_8a0[iVar18 * 2 + 0x28] = DAT_002ed5ac;
        *(float *)(local_760 + iVar18 * 8 + -0x9c) = DAT_002ed5ac;
        local_8a0[iVar18 * 2] = DAT_002ed5ac;
        local_8a0[iVar18 * 2 + 1] = DAT_002ed5ac;
      }
      else {
        iVar14 = iVar16 + 0xb8;
        iVar25 = iVar23 + 0x36;
        iVar16 = iVar16 + 0xb;
        if (iVar18 == 9) {
          iVar16 = 0;
        }
        fVar32 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
        if (iVar18 == 9) {
          iVar23 = 10;
        }
        local_3c0[iVar19 + -10] = (fVar32 - fVar1) + fVar28;
        fVar32 = (float)VectorSignedToFloat(iVar25,(byte)(in_fpscr >> 0x15) & 3);
        local_3c0[iVar19 + -9] = (fVar32 - fVar33) + fVar30;
        if (iVar18 < (int)((int)*(short *)(iVar13 + 0x42) +
                          ((uint)((int)*(short *)(iVar13 + 0x42) >> 0x1f) >> 0x1c)) >> 4) {
          local_738[iVar17 + -10] = fVar11;
          local_738[iVar17 + -9] = fVar11;
        }
        else {
          local_738[iVar17 + -10] = DAT_002ed5ac;
          local_738[iVar17 + -9] = DAT_002ed5ac;
        }
        iVar14 = 4;
        if (iVar18 < local_8a4) {
          if (iVar18 != local_8a8 && local_8a8 <= iVar18) {
            iVar14 = 0;
          }
          if ((iVar18 <= local_8a8) && (iVar18 == local_8a8)) {
            iVar14 = local_6c >> 2;
          }
        }
        fVar32 = (float)VectorSignedToFloat((4 - iVar14) * 0xc,(byte)(in_fpscr >> 0x15) & 3);
        local_8a0[iVar18 * 2 + 0x28] = fVar32;
        bVar27 = *(char *)(iVar13 + 0x51) == '\0';
        if (bVar27) {
          *(float *)(local_760 + iVar18 * 8 + -0x9c) = DAT_002ed5b0;
        }
        if (!bVar27) {
          *(undefined4 *)(local_760 + iVar18 * 8 + -0x9c) = uVar10;
        }
        local_8a0[iVar18 * 2] = fVar11;
        local_8a0[iVar18 * 2 + 1] = fVar11;
      }
      iVar17 = iVar17 + 2;
      iVar19 = iVar19 + 2;
      iVar18 = iVar18 + 1;
    } while (iVar18 < 0x14);
    local_70 = iVar20 * 0x25;
    FUN_002fc40c(*(undefined4 *)(DAT_002ed590 + 0x30),local_8a0 + 0x28,local_8a0,0x14,local_70 + 0xb
                );
    iVar14 = DAT_002ed590;
    iVar23 = 0;
    iVar25 = *(int *)(DAT_002ed5b4 + iVar20 * 4);
    iVar26 = 9;
    puVar15 = DAT_002ed8f4;
    do {
      iVar18 = iVar19;
      iVar16 = iVar17;
      if (iVar25 == 0) {
        local_3c0[iVar18 + -10] = fVar31;
        local_3c0[iVar18 + -9] = fVar31;
        local_738[iVar16 + -10] = fVar31;
        local_738[iVar16 + -9] = fVar31;
      }
      else {
        fVar28 = (float)VectorSignedToFloat(iVar23 * 0xe + 0x20,(byte)(in_fpscr >> 0x15) & 3);
        local_3c0[iVar18 + -10] = (fVar28 - fVar1) + *pfVar21;
        local_3c0[iVar18 + -9] = (DAT_002ed8f8 - fVar33) + *pfVar22;
        if (iVar23 < 3) {
          uVar24 = *puVar15;
        }
        else {
          uVar24 = puVar15[-0x15];
        }
        if ((*(uint *)(iVar13 + 0xbc) & uVar24) == 0) {
          local_738[iVar16 + -10] = fVar31;
          local_738[iVar16 + -9] = fVar31;
        }
        else {
          local_738[iVar16 + -10] = fVar29;
          local_738[iVar16 + -9] = fVar29;
        }
      }
      iVar26 = iVar26 + -1;
      puVar15 = puVar15 + 1;
      iVar23 = iVar23 + 1;
      iVar17 = iVar16 + 2;
      iVar19 = iVar18 + 2;
    } while (iVar26 != 0);
    local_8b0 = fVar31;
    local_8ac = fVar31;
    if (*(int *)(DAT_002ed58c + iVar20 * 4) == 0) {
      pfVar21 = &fStack_3ec + iVar18 + 2;
      pfVar22 = local_8a0 + iVar16 + 0x51;
      iVar13 = 3;
      do {
        pfVar21[1] = fVar31;
        pfVar22[1] = fVar31;
        pfVar21 = pfVar21 + 2;
        pfVar22 = pfVar22 + 2;
        *pfVar21 = fVar31;
        iVar13 = iVar13 + -1;
        *pfVar22 = fVar31;
      } while (iVar13 != 0);
    }
    else {
      if (*(int *)(DAT_002ed590 + 0x10) == 3 || *(int *)(DAT_002ed590 + 0x10) == 0xe) {
        local_8ac = DAT_002ed8fc;
      }
      fVar29 = *pfVar21;
      local_3c0[iVar18 + -8] = fVar29;
      fVar31 = *pfVar22;
      local_3c0[iVar18 + -7] = fVar31;
      local_3c0[iVar18 + -6] = fVar29 + fVar1;
      local_3c0[iVar18 + -5] = fVar31;
      local_3c0[iVar18 + -4] = fVar29 + DAT_002ed900;
      local_3c0[iVar18 + -3] = fVar31;
      local_738[iVar16 + -8] = fVar1;
      local_738[iVar16 + -7] = fVar12;
      local_738[iVar16 + -6] = DAT_002ed904;
      local_738[iVar16 + -5] = fVar12;
      local_738[iVar16 + -4] = fVar1;
      local_738[iVar16 + -3] = fVar12;
    }
    iVar18 = iVar18 + 8;
    iVar16 = iVar16 + 8;
    FUN_002f9430(*(undefined4 *)(DAT_002ed590 + 0x30),&local_8b0,1,local_70 + 0x28);
    FUN_002f9430(*(undefined4 *)(iVar14 + 0x30),&local_8b0,1,local_70 + 0x29);
    FUN_002f9430(*(undefined4 *)(iVar14 + 0x30),&local_8b0,1,local_70 + 0x2a);
    iVar20 = iVar20 + 1;
  } while (iVar20 < 3);
  FUN_002fc534(*(undefined4 *)(iVar14 + 0x30),local_3e8,local_760,0x6f,6);
  return;
}
