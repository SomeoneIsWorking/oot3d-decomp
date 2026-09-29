// OoT3D decomp @ 003d1040  name=FUN_003d1040  size=6096

void FUN_003d1040(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ushort uVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float *pfVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  short sVar18;
  float *pfVar19;
  int iVar20;
  uint *puVar21;
  bool bVar22;
  bool bVar23;
  uint in_fpscr;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float local_d8;
  float *pfStack_d4;
  float local_d0;
  undefined1 auStack_cc [48];
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float *local_68;

  uVar41 = DAT_003d1368;
  iVar17 = DAT_003d1364;
  fVar31 = DAT_003d1360;
  puVar21 = (uint *)(param_2 + 0x14);
  iVar20 = *(int *)(DAT_003d135c + param_2);
  local_78 = DAT_003d1360;
  local_74 = DAT_003d1360;
  local_70 = DAT_003d1360;
  *(short *)(DAT_003d1364 + 0x32) = *(short *)(DAT_003d1364 + 0x32) + 1;
  if (*(short *)(iVar17 + 0x34) != 0) {
    *(short *)(iVar17 + 0x34) = *(short *)(iVar17 + 0x34) + -1;
  }
  if (*(short *)(iVar17 + 0x36) != 0) {
    *(short *)(iVar17 + 0x36) = *(short *)(iVar17 + 0x36) + -1;
  }
  if (*(short *)(iVar17 + 0x38) != 0) {
    *(short *)(iVar17 + 0x38) = *(short *)(iVar17 + 0x38) + -1;
  }
  if (*(short *)(iVar17 + 0x3c) != 0) {
    *(short *)(iVar17 + 0x3c) = *(short *)(iVar17 + 0x3c) + -1;
  }
  if (*(short *)(iVar17 + 0x40) != 0) {
    *(short *)(iVar17 + 0x40) = *(short *)(iVar17 + 0x40) + -1;
  }
  if (*(char *)(iVar17 + 7) != '\0') {
    *(char *)(iVar17 + 7) = *(char *)(iVar17 + 7) + -1;
  }
  if (*(short *)(iVar17 + 0x2c) != 0) {
    *(short *)(iVar17 + 0x2c) = *(short *)(iVar17 + 0x2c) + -1;
  }
  if (*(char *)(iVar17 + 0x17) != '\0') {
    *(char *)(iVar17 + 0x17) = *(char *)(iVar17 + 0x17) + -1;
  }
  iVar17 = DAT_003d1364;
  if (*(short *)(DAT_003d1364 + 0x30) == 1) {
    *(undefined2 *)(DAT_003d1364 + 0x30) = 2;
    iVar9 = DAT_003d136c;
    *(undefined2 *)(iVar17 + 0x28) = 0;
    *(undefined1 *)(iVar17 + 0x13) = 0;
    *(undefined1 *)(iVar17 + 0x16) = 0;
    if (*(char *)(iVar17 + 0xd) == '\x01') {
      uVar24 = *(uint *)(iVar9 + 0xed8) & 0x400;
    }
    else {
      uVar24 = *(uint *)(iVar9 + 0xed8) & 0x800;
    }
    if (uVar24 != 0) {
      uVar26 = FUN_00371e50(DAT_003d1370);
      uVar26 = VectorFloatToUnsigned(uVar26,3);
      *(char *)(iVar17 + 1) = (char)uVar26 + '\x01';
    }
    uVar26 = DAT_003d1374;
    *(undefined4 *)(iVar17 + 0xf4) = uVar41;
    *(undefined4 *)(iVar17 + 0xf0) = uVar26;
    *(undefined2 *)(iVar17 + 0x40) = 0;
    *(undefined1 *)(iVar17 + 0x17) = 0;
    *(undefined1 *)(iVar17 + 0x19) = 0;
    *(undefined2 *)(iVar17 + 0x38) = 0;
    *(undefined2 *)(iVar17 + 0x36) = 0;
    *(undefined2 *)(iVar17 + 0x34) = 0;
    *(undefined2 *)(iVar17 + 0x32) = 0;
    *(undefined1 *)(iVar17 + 0x16) = 0;
    *(undefined2 *)(iVar17 + 0x1e) = 0;
    *(float *)(iVar17 + 0xd4) = fVar31;
    *(float *)(iVar17 + 0xfc) = fVar31;
    *(float *)(iVar17 + 0xd0) = fVar31;
    pfVar10 = DAT_003d1378;
    iVar17 = 200;
    *DAT_003d1378 = local_78;
    pfVar10[1] = local_74;
    pfVar10[2] = local_70;
    pfVar8 = pfVar10 + 9;
    pfVar19 = pfVar10 + 0x261;
    pfVar10 = pfVar10 + 0x4b9;
    do {
      iVar17 = iVar17 + -1;
      *pfVar8 = local_78;
      pfVar8[1] = local_74;
      pfVar8[2] = local_70;
      *pfVar19 = local_78;
      pfVar19[1] = local_74;
      pfVar19[2] = local_70;
      *pfVar10 = local_78;
      pfVar10[1] = local_74;
      pfVar10[2] = local_70;
      pfVar8 = pfVar8 + 3;
      pfVar19 = pfVar19 + 3;
      pfVar10 = pfVar10 + 3;
    } while (iVar17 != 0);
  }
  fVar36 = DAT_003d1380;
  if (*(short *)(DAT_003d1364 + 0x1e) == 0) {
    FUN_00373500(DAT_003d1384,DAT_003d1380,DAT_003d137c,DAT_003d1364 + 0xd4);
  }
  else {
    FUN_00373500(DAT_003d1388,DAT_003d1380,DAT_003d137c,DAT_003d138c);
  }
  pfVar8 = DAT_003d29c4;
  iVar11 = DAT_003d29c0;
  pfVar10 = DAT_003d180c;
  iVar9 = DAT_003d13b0;
  fVar12 = DAT_003d13ac;
  fVar3 = DAT_003d13a8;
  fVar34 = DAT_003d13a4;
  fVar27 = DAT_003d13a0;
  fVar16 = DAT_003d139c;
  fVar39 = DAT_003d1398;
  fVar43 = DAT_003d1394;
  fVar32 = DAT_003d1390;
  uVar26 = DAT_003d1374;
  iVar17 = DAT_003d1364;
  local_68 = (float *)(param_1 + 0x108);
  pfVar19 = (float *)(param_1 + 0x28);
  switch(*(undefined2 *)(DAT_003d1364 + 0x1e)) {
  case 0:
    iVar11 = DAT_003d1364 + 0xf0;
    *(undefined2 *)(DAT_003d1364 + 0x42) = 0;
    FUN_00373500(uVar26,fVar36,fVar36,iVar11);
    pfVar10 = DAT_003d17d4;
    iVar11 = DAT_003d13b8;
    if ((*(uint *)(DAT_003d13b4 + iVar20) & 0x8000000) == 0) {
      if (*(short *)(iVar17 + 0x38) != 0) {
        *DAT_003d17d4 = *(float *)(iVar9 + 0xaa8) + fVar16;
        pfVar10[1] = *(float *)(iVar9 + 0xaac);
        if (((*(uint *)(iVar17 + 0x98) & 1) == 0) &&
           (iVar9 = FUN_003679b4(DAT_003d17d8), iVar9 != 0)) {
          fVar36 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003d13bc + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(iVar17 + 0x24) = (short)(int)(DAT_003d17dc / fVar36 + fVar39) + 2;
        }
        puVar5 = DAT_003d17e0;
        if (*(short *)(iVar17 + 0x38) != *(short *)(iVar17 + 0x24)) {
          return;
        }
        *(undefined2 *)(iVar17 + 0x1e) = 1;
        fVar36 = DAT_003d17e4;
        puVar5[-0x15] = *puVar5;
        puVar5[-0x14] = puVar5[1];
        puVar5[-0x13] = puVar5[2];
        fVar32 = (float)VectorSignedToFloat((int)*(short *)(iVar20 + 0xbe),
                                            (byte)(in_fpscr >> 0x15) & 3);
        FUN_003735e8(fVar32 * fVar36 * fVar16,auStack_cc,0);
        local_9c = fVar31;
        local_98 = fVar31;
        local_94 = (float)DAT_003d17e8;
        FUN_003735ac(DAT_003d17ec,auStack_cc,&local_9c);
        pfVar10 = DAT_003d17ec;
        DAT_003d17ec[1] = fVar43;
        pfVar10[5] = fVar31;
        pfVar10[3] = fVar31;
        pfVar10[4] = DAT_003d17f0;
        piVar4 = DAT_003d13bc;
        *(float *)(iVar17 + 0xf4) = fVar31;
        uVar41 = DAT_003d17f4;
        fVar31 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(iVar17 + 0x36) = (short)(int)(fVar43 / fVar31 + fVar39);
        *(float *)(iVar17 + 0xe0) = fVar39;
        uVar26 = FUN_00371e50(uVar41);
        local_d8 = DAT_003d1804;
        pfStack_d4 = DAT_003d1800;
        uVar41 = DAT_003d17f8;
        uVar26 = VectorFloatToUnsigned(uVar26,3);
        *(char *)(iVar17 + 0x18) = (char)uVar26;
        iVar17 = DAT_003d17fc + -0x48;
        *(undefined4 *)(DAT_003d17fc + 4) = uVar41;
        FUN_0037547c(DAT_003d1808,iVar17,4,local_d8);
        return;
      }
    }
    else {
      *(undefined2 *)(iVar17 + 0x38) = 0;
      *(undefined2 *)(iVar11 + iVar20) = 0;
    }
    sVar18 = *(short *)(iVar17 + 0x34);
    bVar22 = sVar18 == 0;
    if (bVar22) {
      sVar18 = *(short *)(DAT_003d13b8 + iVar20);
    }
    if (bVar22 && sVar18 == 1) {
      fVar31 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003d13bc + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(iVar17 + 0x38) = (short)(int)(DAT_003d13c0 / fVar31 + fVar39);
      FUN_003725e0(param_2);
    }
    break;
  case 1:
    pfVar8 = DAT_003d180c + 9;
    fVar27 = *pfVar8;
    iVar20 = (int)*(short *)(*DAT_003d13bc + 0x110);
    fVar30 = DAT_003d180c[1];
    pfVar14 = DAT_003d180c + 0xc;
    fVar29 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
    fVar40 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
    fVar40 = fVar40 * DAT_003d13a4;
    *DAT_003d180c = *DAT_003d180c + fVar27 * fVar29 * DAT_003d13a4;
    fVar37 = pfVar10[10];
    fVar45 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
    pfVar10[1] = fVar30 + fVar37 * fVar40;
    fVar29 = pfVar10[0xb];
    fVar40 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
    pfVar10[2] = pfVar10[2] + fVar29 * fVar45 * fVar34;
    fVar45 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
    fVar27 = fVar27 + *pfVar14 * fVar40 * fVar34;
    fVar40 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar8 = fVar27;
    pfVar10[10] = fVar37 + pfVar10[0xd] * fVar45 * fVar34;
    fVar29 = fVar29 + pfVar10[0xe] * fVar40 * fVar34;
    pfVar10[0xb] = fVar29;
    cVar1 = *(char *)(iVar17 + 5);
    if ((*puVar21 & 1) != 0 || cVar1 != '\0') {
      fVar37 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
      fVar40 = (float)VectorSignedToFloat(iVar20,(byte)(in_fpscr >> 0x15) & 3);
      fVar40 = fVar40 * DAT_003d1810;
      pfVar10[9] = fVar27 * (fVar36 - fVar37 * DAT_003d1810 * fVar34);
      pfVar10[0xb] = fVar29 * (fVar36 - fVar40 * fVar34);
      if (cVar1 == '\0') {
        local_d8 = DAT_003d1804;
        pfStack_d4 = DAT_003d1800;
        FUN_0037547c(DAT_003d1814,0,4,DAT_003d1804);
      }
    }
    pfVar8 = DAT_003d180c;
    pfVar10 = DAT_003d17d4;
    fVar37 = *DAT_003d180c - DAT_003d180c[0x15];
    fVar27 = DAT_003d180c[1];
    fVar34 = DAT_003d180c[0x16];
    fVar29 = DAT_003d180c[2] - DAT_003d180c[0x17];
    if (*(short *)(iVar17 + 0x36) == 0) {
      *DAT_003d17d4 = fVar31;
      fVar40 = (float)FUN_003675f8(fVar29,fVar37);
      pfVar10[1] = fVar40 + fVar16;
    }
    else {
      DAT_003d180c[6] = *(float *)(iVar9 + 0xaa8) + fVar16;
      pfVar8[7] = *(float *)(iVar9 + 0xaac);
    }
    uVar26 = DAT_003d1830;
    uVar41 = DAT_003d182c;
    fVar16 = DAT_003d1828;
    pfVar10 = DAT_003d180c;
    fVar27 = SQRT(fVar37 * fVar37 + (fVar27 - fVar34) * (fVar27 - fVar34) + fVar29 * fVar29);
    if (DAT_003d1818 < (int)fVar27) {
      fVar27 = DAT_003d181c;
    }
    *(float *)(iVar17 + 0xf0) = DAT_003d1820 - fVar27 * DAT_003d1820 * DAT_003d1824;
    pfVar14 = DAT_003d180c;
    pfVar8 = DAT_003d17ec;
    fVar27 = *pfVar10;
    fVar34 = pfVar10[2];
    fVar29 = fVar27 * fVar27 + fVar34 * fVar34;
    if ((int)fVar16 < (int)fVar29) {
      fVar16 = DAT_003d180c[1];
      if ((DAT_003d1834 < (int)fVar16) || ((int)fVar27 < DAT_003d1834 + -0x800000)) {
LAB_003d17b0:
        if ((int)fVar29 < DAT_003d1844) {
          local_d8 = *pfVar19;
          pfStack_d4 = *(float **)(param_1 + 0x2c);
          local_d0 = *(float *)(param_1 + 0x30);
          fVar16 = DAT_003d180c[1];
          fVar27 = DAT_003d180c[2];
          *pfVar19 = *DAT_003d180c;
          *(float *)(param_1 + 0x2c) = fVar16;
          *(float *)(param_1 + 0x30) = fVar27;
          fVar16 = *(float *)(param_1 + 0x2c);
          fVar27 = *(float *)(param_1 + 0x30);
          *local_68 = *pfVar19;
          local_68[1] = fVar16;
          local_68[2] = fVar27;
          FUN_00376340(fVar43,fVar3,fVar3,param_2,param_1,0x43);
          *pfVar19 = local_d8;
          *(float **)(param_1 + 0x2c) = pfStack_d4;
          *(float *)(param_1 + 0x30) = local_d0;
          uVar7 = *(ushort *)(param_1 + 0x90);
          bVar22 = (uVar7 & 0x10) != 0;
          pfVar10 = pfStack_d4;
          if (bVar22) {
            pfVar10 = DAT_003d17ec;
          }
          if (bVar22) {
            pfVar10[1] = fVar32;
          }
          pfVar10 = DAT_003d17ec;
          if ((uVar7 & 8) != 0) {
            fVar32 = DAT_003d17ec[1];
            uVar24 = in_fpscr & 0xfffffff | (uint)(fVar32 < fVar31) << 0x1f |
                     (uint)(fVar32 == fVar31) << 0x1e;
            in_fpscr = uVar24 | (uint)(NAN(fVar32) || NAN(fVar31)) << 0x1c;
            bVar2 = (byte)(uVar24 >> 0x18);
            if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
              fVar32 = fVar31;
            }
            DAT_003d17ec[1] = fVar32;
            pfVar10[2] = fVar31;
            *pfVar10 = fVar31;
          }
        }
        else {
          DAT_003d17ec[2] = fVar31;
          *pfVar8 = fVar31;
        }
      }
      else {
        fVar12 = (float)(DAT_003d1834 + 0x140000);
        bVar23 = SBORROW4((int)fVar27,(int)fVar12);
        iVar20 = (int)fVar27 - (int)fVar12;
        bVar22 = fVar27 == fVar12;
        if ((int)fVar27 <= (int)fVar12) {
          bVar23 = SBORROW4((int)fVar34,(int)DAT_003d1838);
          iVar20 = (int)fVar34 - (int)DAT_003d1838;
          bVar22 = fVar34 == DAT_003d1838;
        }
        if (!bVar22 && iVar20 < 0 == bVar23) goto LAB_003d17b0;
        bVar22 = SBORROW4((int)fVar34,DAT_003d183c);
        iVar20 = (int)fVar34 - DAT_003d183c;
        if (DAT_003d183c <= (int)fVar34) {
          bVar22 = SBORROW4((int)fVar16,DAT_003d1840);
          iVar20 = (int)fVar16 - DAT_003d1840;
        }
        if (iVar20 < 0 != bVar22) goto LAB_003d17b0;
        if ((((((int)fVar27 + 0xbd240000U < 0x3a0001) && ((int)fVar34 <= DAT_003d1c38 + 0x1e0000))
             && (DAT_003d1c38 <= (int)fVar34)) ||
            ((((int)fVar27 + 0xbd240000U < 0x760001 && ((int)fVar34 <= DAT_003d1c3c)) &&
             (DAT_003d1c38 <= (int)fVar34)))) && ((int)fVar16 <= DAT_003d1c40)) {
          *(undefined2 *)(iVar17 + 0x1e) = 3;
          *(float *)(iVar17 + 0xfc) = fVar31;
        }
      }
      fVar32 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28)
                                                         + 2),(byte)(in_fpscr >> 0x15) & 3);
      fVar32 = fVar32 + (SQRT(fVar29) - DAT_003d1c44) * DAT_003d1c48;
      if (fVar31 < fVar32) {
        fVar32 = fVar31;
      }
      if (fVar32 < pfVar14[1]) {
        FUN_00373500(fVar31,fVar36,uVar41,DAT_003d1c50);
        local_d8 = DAT_003d1804;
        pfStack_d4 = DAT_003d1800;
        FUN_0037547c(uVar26,DAT_003d180c,4,DAT_003d1804);
        goto LAB_003d1ca8;
      }
      pfVar14[1] = fVar32;
      pfVar10 = DAT_003d180c;
      local_d8 = DAT_003d1804;
      pfStack_d4 = DAT_003d1800;
      pfVar8 = DAT_003d17ec;
      DAT_003d17ec[2] = fVar31;
      pfVar8[1] = fVar31;
      *pfVar8 = fVar31;
      *(undefined2 *)(iVar17 + 0x1e) = 3;
      *(float *)(iVar17 + 0xfc) = fVar31;
      uVar26 = DAT_003d1c4c;
    }
    else {
      iVar20 = *(int *)(*(int *)(param_2 + 0xa98) + 0x28);
      fVar32 = (float)VectorSignedToFloat((int)*(short *)(iVar20 + 2),(byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = in_fpscr & 0xfffffff;
      uVar24 = in_fpscr | (uint)(DAT_003d180c[1] == fVar32) << 0x1e |
               (uint)(fVar32 <= DAT_003d180c[1]) << 0x1d;
      bVar2 = (byte)(uVar24 >> 0x18);
      if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
        pfVar10 = DAT_003d180c + 9;
        *(undefined2 *)(iVar17 + 0x1e) = 2;
        *(float *)(iVar17 + 0xfc) = fVar31;
        pfVar14[0xb] = fVar31;
        *pfVar10 = fVar31;
        if (*(char *)(iVar17 + 0x16) == '\x02') {
          uVar33 = 0;
        }
        else {
          fVar43 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003d13bc + 0x110),
                                              (byte)(uVar24 >> 0x15) & 3);
          uVar33 = (undefined1)(int)(fVar3 / fVar43 + fVar39);
        }
        uVar24 = in_fpscr | (uint)(fVar30 < fVar32) << 0x1f | (uint)(fVar30 == fVar32) << 0x1e;
        uVar25 = uVar24 | (uint)(NAN(fVar30) || NAN(fVar32)) << 0x1c;
        *(undefined1 *)(iVar17 + 0x15) = uVar33;
        pfVar10 = DAT_003d180c;
        local_d8 = DAT_003d1804;
        pfStack_d4 = DAT_003d1800;
        bVar2 = (byte)(uVar24 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar25 >> 0x1c) & 1)) {
          fVar43 = (float)VectorSignedToFloat((int)*(short *)(iVar20 + 2),(byte)(uVar25 >> 0x15) & 3
                                             );
          in_fpscr = in_fpscr | (uint)(fVar43 == fVar32) << 0x1e;
          if (SUB41(in_fpscr >> 0x1e,0)) {
            fVar32 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003d13bc + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(char *)(iVar17 + 0x17) = (char)(int)(fVar3 / fVar32 + fVar39);
            FUN_0037547c(DAT_003d1c54,pfVar10,4,local_d8);
            uVar26 = DAT_003d1c64;
            fVar32 = DAT_003d1c60;
            uVar41 = DAT_003d1c5c;
            *(float *)(DAT_003d1c58 + 4) = fVar31;
            uVar6 = DAT_003d1c6c;
            fVar31 = DAT_003d1c68;
            pfVar14[10] = pfVar14[10] * fVar12;
            sVar18 = 0;
            do {
              fVar43 = (float)FUN_00371e50(uVar6);
              uVar28 = FUN_00371e50(uVar41);
              local_90 = (float)FUN_003727f0();
              local_90 = local_90 * (fVar43 + fVar39);
              local_88 = (float)FUN_00372674(uVar28);
              local_88 = local_88 * (fVar43 + fVar39);
              local_8c = (float)FUN_00371e50(fVar32);
              local_8c = local_8c + fVar32;
              local_84 = *pfVar14 + local_90 * fVar32;
              local_80 = VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                     0x28) + 2),
                                             (byte)(in_fpscr >> 0x15) & 3);
              local_7c = pfVar14[2] + local_88 * fVar32;
              fVar43 = (float)FUN_00371e50(uVar26);
              FUN_00346ab4(fVar43 + fVar31,0,*(undefined4 *)(param_2 + 0x5c28),&local_84,&local_90);
              sVar18 = sVar18 + 1;
            } while (sVar18 < 0x32);
            local_84 = *pfVar14;
            local_7c = pfVar14[2];
            local_80 = VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28
                                                                   ) + 2),
                                           (byte)(in_fpscr >> 0x15) & 3);
            local_d8 = 1.26117e-43;
            FUN_00368b98(DAT_003d1c74,DAT_003d1c70,0,*(undefined4 *)(param_2 + 0x5c28),&local_84,
                         0x96);
          }
        }
        goto LAB_003d1ca8;
      }
      FUN_0036fc20(fVar36,uVar41,DAT_003d1c50);
      pfStack_d4 = DAT_003d1800;
      pfVar10 = DAT_003d180c;
      local_d8 = DAT_003d1804;
    }
    FUN_0037547c(uVar26,pfVar10,4,local_d8);
LAB_003d1ca8:
    pfVar10 = DAT_003d180c;
    *(float *)(iVar9 + 0x154) = *DAT_003d180c;
    *(float *)(iVar9 + 0x158) = pfVar10[1];
    *(float *)(iVar9 + 0x15c) = pfVar10[2];
    *(float *)(iVar17 + 0xec) = fVar36;
    *(float *)(iVar17 + 0xd8) = fVar39;
    return;
  case 2:
    fVar31 = DAT_003d180c[1];
    fVar32 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) +
                                                       2),(byte)(in_fpscr >> 0x15) & 3);
    uVar24 = in_fpscr & 0xfffffff | (uint)(fVar31 == fVar32) << 0x1e |
             (uint)(fVar32 <= fVar31) << 0x1d;
    bVar2 = (byte)(uVar24 >> 0x18);
    if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
      pfVar8 = DAT_003d180c + 10;
      fVar32 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003d13bc + 0x110),
                                          (byte)(uVar24 >> 0x15) & 3);
      DAT_003d180c[1] = fVar31 + DAT_003d180c[10] * fVar32 * DAT_003d13a4;
      FUN_0036fc20(fVar36,fVar36,pfVar8);
      if (*(char *)(DAT_003d1364 + 0x16) != '\x02') {
        uVar41 = VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2)
                                     ,(byte)(uVar24 >> 0x15) & 3);
        FUN_00373500(uVar41,fVar39,fVar36,pfVar10 + 1);
      }
    }
    FUN_00373500(DAT_003d1c50);
    if (*(char *)(DAT_003d1364 + 0x15) == '\0') {
      *(undefined2 *)(DAT_003d1364 + 0x1e) = 3;
    }
    else {
      *(char *)(DAT_003d1364 + 0x15) = *(char *)(DAT_003d1364 + 0x15) + -1;
    }
    return;
  case 3:
    *(undefined2 *)(DAT_003d1364 + 0x42) = 0;
    if ((*(char *)(iVar17 + 5) != '\0') &&
       ((int)(*DAT_003d180c * *DAT_003d180c + DAT_003d180c[2] * DAT_003d180c[2]) < DAT_003d211c)) {
      *(undefined1 *)(iVar17 + 6) = 1;
    }
    iVar17 = DAT_003d1364;
    if (-1 < *(short *)(iVar20 + 0x2248)) {
      *(undefined2 *)(iVar20 + 0x2248) = 2;
    }
    if (*(int *)(iVar17 + 0xe8) < DAT_003d2120) {
      fVar29 = (float)FUN_002cfca0((int)(short)(*(short *)(DAT_003d1364 + 0x32) *
                                               (short)DAT_003d2124));
      FUN_00373500(fVar29 * *(float *)(DAT_003d1364 + 0xd8) + DAT_003d2128,DAT_003d212c,
                   *(undefined4 *)(DAT_003d1364 + 0xdc),DAT_003d17d4);
      uVar26 = DAT_003d1c64;
      FUN_00373500(fVar39,fVar36,DAT_003d1c64,DAT_003d2130);
      FUN_0036fc20(fVar36,uVar26,DAT_003d2134);
    }
    else {
      *(float *)(DAT_003d1364 + 0xdc) = fVar31;
    }
    iVar11 = DAT_003d215c;
    fVar40 = DAT_003d2144;
    fVar37 = DAT_003d2140;
    fVar29 = DAT_003d213c;
    pfVar8 = DAT_003d180c;
    pfVar10 = DAT_003d17d4;
    iVar17 = DAT_003d1364;
    local_6c = 0x4000;
    iVar15 = (int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2);
    fVar38 = *DAT_003d180c;
    fVar35 = DAT_003d180c[2];
    fVar45 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x15) & 3);
    fVar30 = fVar38 * fVar38 + fVar35 * fVar35;
    if ((int)fVar30 < (int)DAT_003d1828) {
      fVar30 = DAT_003d180c[1];
      uVar24 = in_fpscr & 0xfffffff | (uint)(fVar30 == fVar45 + DAT_003d2144) << 0x1e |
               (uint)(fVar45 + DAT_003d2144 <= fVar30) << 0x1d;
      bVar2 = (byte)(uVar24 >> 0x18);
      if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
        fVar30 = *(float *)(DAT_003d1364 + 0xf0);
        if (DAT_003d2138 < (int)fVar30) {
          *DAT_003d17d4 = *(float *)(iVar9 + 0xaa8) + fVar16;
          piVar4 = DAT_003d13bc;
          *(float *)(iVar17 + 0xe4) = *(float *)(iVar9 + 0xaac) + fVar16;
          fVar35 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x110),
                                              (byte)(uVar24 >> 0x15) & 3);
          fVar30 = fVar30 + fVar35 * fVar27 * fVar34;
LAB_003d232c:
          *(float *)(iVar17 + 0xf0) = fVar30;
        }
      }
      else {
        fVar13 = DAT_003d1828;
        fVar42 = fVar31;
        if (*(short *)(DAT_003d1364 + 0x40) == 0) {
          fVar44 = (float)VectorSignedToFloat((int)*(float *)(param_2 + 0x3c),
                                              (byte)(uVar24 >> 0x15) & 3);
          fVar13 = DAT_003d2148;
          if ((int)DAT_003d2148 < (int)ABS(fVar44)) {
            fVar42 = (float)VectorSignedToFloat((int)*(float *)(param_2 + 0x3c) -
                                                (int)*(short *)(DAT_003d1364 + 0x20),
                                                (byte)(uVar24 >> 0x15) & 3);
            fVar42 = ABS(fVar42 * DAT_003d214c);
          }
          else {
            fVar44 = (float)VectorSignedToFloat((int)*(float *)(param_2 + 0x40),
                                                (byte)(uVar24 >> 0x15) & 3);
            if ((int)DAT_003d2148 < (int)ABS(fVar44)) {
              fVar42 = (float)VectorSignedToFloat((int)*(float *)(param_2 + 0x40) -
                                                  (int)*(short *)(DAT_003d1364 + 0x22),
                                                  (byte)(uVar24 >> 0x15) & 3);
              fVar42 = ABS(fVar42 * DAT_003d214c);
            }
          }
        }
        if (0x3f800000 < (int)fVar42) {
          fVar42 = fVar36;
        }
        if ((*(uint *)(param_2 + 0x18) & 2) != 0) {
          fVar42 = fVar39;
        }
        bVar22 = *(char *)(DAT_003d1364 + 5) != '\0';
        iVar15 = 0;
        if (bVar22) {
          fVar13 = fVar42;
          iVar15 = DAT_003d2150;
        }
        if (bVar22 && iVar15 < (int)fVar13) {
          fVar42 = DAT_003d212c;
        }
        if ((DAT_003d2154 < (int)fVar42) && (*(int *)(DAT_003d1364 + 0xe8) < DAT_003d2158)) {
          fVar30 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003d13bc + 0x110),
                                              (byte)(uVar24 >> 0x15) & 3);
          *(short *)(DAT_003d1364 + 0x40) = (short)(int)(fVar43 / fVar30 + fVar39);
          if (iVar11 < (int)fVar42) {
            *(undefined1 *)(iVar17 + 0x19) = 2;
          }
          else {
            *(undefined1 *)(iVar17 + 0x19) = 1;
          }
          local_9c = *(float *)(iVar20 + 0x28) - fVar38;
          local_94 = *(float *)(iVar20 + 0x30) - fVar35;
          local_98 = (float)FUN_003675f8(local_94,local_9c);
          uVar26 = DAT_003d2170;
          fVar30 = DAT_003d2160;
          pfVar10 = DAT_003d17d4;
          *(float *)(iVar17 + 0xe4) = local_98 + fVar42 * *(float *)(iVar17 + 0xec);
          *(float *)(iVar17 + 0xec) = -*(float *)(iVar17 + 0xec);
          *(float *)(iVar17 + 0xe8) = ABS(fVar42) * fVar29;
          *pfVar10 = fVar31;
          *(float *)(iVar17 + 0xd8) = fVar39;
          fVar38 = DAT_003d2168;
          fVar35 = DAT_003d2164;
          *(float *)(iVar17 + 0xf0) = *(float *)(iVar17 + 0xf0) + ABS(fVar42) * fVar30;
          FUN_0036ef10(DAT_003d216c + fVar42 * fVar35 * fVar38,pfVar10 + -6,uVar26);
          piVar4 = DAT_003d13bc;
          if (*(char *)(iVar17 + 0x16) == '\x02') {
            fVar42 = fVar42 * fVar37;
            DAT_003d1378[1] = fVar42;
            pfVar10 = DAT_003d180c;
            iVar17 = *piVar4;
            fVar30 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0x110),
                                                (byte)(uVar24 >> 0x15) & 3);
            *(float *)(iVar9 + 0x158) = *(float *)(iVar9 + 0x158) + fVar42 * fVar30 * fVar34;
            fVar30 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0x110),
                                                (byte)(uVar24 >> 0x15) & 3);
            pfVar10[1] = pfVar10[1] + fVar42 * fVar30 * fVar34;
          }
        }
        else if ((*(uint *)(param_2 + 0x14) & 1) != 0) {
          *(float *)(DAT_003d1364 + 0xe4) = *(float *)(iVar9 + 0xaac) + fVar16;
          *pfVar10 = fVar31;
          *(float *)(iVar17 + 0xd8) = fVar39;
          local_6c = 0x500;
          if (*(char *)(iVar17 + 0x16) == '\x02') {
            DAT_003d1378[1] = fVar12;
            iVar17 = *DAT_003d13bc;
            fVar35 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0x110),
                                                (byte)(uVar24 >> 0x15) & 3);
            *(float *)(iVar9 + 0x158) = *(float *)(iVar9 + 0x158) + fVar12 * fVar35 * fVar34;
            fVar35 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0x110),
                                                (byte)(uVar24 >> 0x15) & 3);
            pfVar8[1] = fVar30 + fVar12 * fVar35 * fVar34;
          }
        }
      }
    }
    else {
      fVar45 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x15) & 3);
      fVar45 = fVar45 + (SQRT(fVar30) - DAT_003d2610) * DAT_003d2614;
      if (fVar31 < fVar45) {
        fVar45 = fVar31;
      }
      uVar24 = in_fpscr & 0xfffffff | (uint)(DAT_003d180c[1] == fVar45) << 0x1e |
               (uint)(fVar45 <= DAT_003d180c[1]) << 0x1d;
      bVar2 = (byte)(uVar24 >> 0x18);
      if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
        if (DAT_003d2138 < (int)*(float *)(DAT_003d1364 + 0xf0)) {
          fVar30 = *(float *)(DAT_003d1364 + 0xf0) + fVar27;
          *DAT_003d17d4 = *(float *)(iVar9 + 0xaa8) + fVar16;
          *(float *)(iVar17 + 0xe4) = *(float *)(iVar9 + 0xaac) + fVar16;
          goto LAB_003d232c;
        }
      }
      else {
        DAT_003d180c[1] = fVar45;
        pfVar10 = DAT_003d17d4;
        iVar17 = DAT_003d1364;
        *(float *)(DAT_003d1364 + 0xe4) = *(float *)(iVar9 + 0xaac) + fVar16;
        *pfVar10 = fVar31;
        pfVar8 = DAT_003d180c;
        fVar30 = DAT_003d1804;
        pfVar10 = DAT_003d1800;
        local_6c = 0x500;
        if ((*(uint *)(param_2 + 0x18) & 2) != 0) {
          *(float *)(iVar17 + 0xf0) = *(float *)(iVar17 + 0xf0) + fVar29;
          local_d8 = fVar30;
          pfStack_d4 = pfVar10;
          FUN_0037547c(DAT_003d2618,pfVar8,4,fVar30);
        }
      }
    }
    FUN_0036fc20(fVar36,DAT_003d212c,DAT_003d261c);
    iVar17 = DAT_003d1364;
    FUN_00370084(DAT_003d1364 + 0x3e,
                 (int)(short)(int)(*(float *)(DAT_003d1364 + 0xe4) * DAT_003d2620 * DAT_003d2624),3,
                 local_6c);
    fVar30 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0x3e),(byte)(uVar24 >> 0x15) & 3);
    DAT_003d17d4[1] = fVar30 * DAT_003d2628 * fVar16;
    local_9c = fVar31;
    local_98 = fVar31;
    local_94 = *(float *)(iVar17 + 0xe8);
    FUN_003735e8(auStack_cc,0);
    if (*(char *)(iVar17 + 0x16) == '\x02') {
      FUN_003735ac(&local_d8,auStack_cc,&local_9c);
      fVar16 = DAT_003d2630;
      pfVar10 = DAT_003d262c;
      *DAT_003d262c = local_d8;
      pfVar10[2] = local_d0;
    }
    else {
      FUN_003735ac(DAT_003d262c,auStack_cc,&local_9c);
      fVar16 = fVar31;
    }
    *(float *)(iVar17 + 0xd0) = fVar31;
    pfVar10 = DAT_003d262c;
    if ((*(char *)(iVar17 + 0x16) == '\x01') && ((*puVar21 & 1) != 0)) {
      DAT_003d262c[1] = DAT_003d2634;
      if ((*(ushort *)(iVar17 + 0x32) & 1) == 0) {
        *(float *)(iVar17 + 0xd0) = fVar32;
      }
      else {
        *(float *)(iVar17 + 0xd0) = fVar39;
      }
    }
    else {
      iVar20 = (int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2);
      fVar39 = (float)VectorSignedToFloat(iVar20,(byte)(uVar24 >> 0x15) & 3);
      uVar24 = uVar24 & 0xfffffff | (uint)(fVar39 + fVar16 <= *(float *)(iVar9 + 0x158)) << 0x1d;
      if (!SUB41(uVar24 >> 0x1d,0)) {
        if (*(char *)(iVar17 + 0x16) == '\x02') {
          local_d8 = *pfVar19;
          pfStack_d4 = *(float **)(param_1 + 0x2c);
          local_d0 = *(float *)(param_1 + 0x30);
          fVar39 = DAT_003d180c[1];
          fVar16 = DAT_003d180c[2];
          *pfVar19 = *DAT_003d180c;
          *(float *)(param_1 + 0x2c) = fVar39;
          *(float *)(param_1 + 0x30) = fVar16;
          fVar39 = *(float *)(param_1 + 0x2c);
          fVar16 = *(float *)(param_1 + 0x30);
          *local_68 = *pfVar19;
          local_68[1] = fVar39;
          local_68[2] = fVar16;
          FUN_00376340(fVar43,fVar3,fVar3,param_2,param_1,0x44);
          *pfVar19 = local_d8;
          *(float **)(param_1 + 0x2c) = pfStack_d4;
          *(float *)(param_1 + 0x30) = local_d0;
          fVar43 = DAT_003d263c;
          pfVar8 = DAT_003d262c;
          fVar39 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003d2638 + 0x110),
                                              (byte)(uVar24 >> 0x15) & 3);
          fVar32 = DAT_003d262c[1] + fVar39 * fVar32 * fVar34;
          DAT_003d262c[1] = fVar32;
          pfVar10 = DAT_003d180c;
          if ((uint)fVar43 <= (uint)fVar32) {
            fVar32 = DAT_003d2640;
          }
          pfVar8[1] = fVar32;
          fVar32 = *(float *)(param_1 + 0x84) + fVar37;
          uVar24 = uVar24 & 0xfffffff | (uint)(fVar32 <= pfVar10[1]) << 0x1d;
          bVar22 = SUB41(uVar24 >> 0x1d,0);
          if (bVar22) {
            pfVar10 = (float *)0x1;
            *(undefined1 *)(iVar17 + 0x19) = 1;
          }
          if (!bVar22) {
            pfVar10[1] = fVar32;
            *(float *)(iVar9 + 0x158) = fVar32;
            pfVar8[1] = fVar31;
          }
        }
        else {
          fVar32 = (float)VectorSignedToFloat(iVar20,(byte)(uVar24 >> 0x15) & 3);
          fVar32 = ABS(*(float *)(iVar9 + 0x158) - fVar32) * fVar12;
          DAT_003d262c[1] = fVar32;
          if (0x3fc00000 < (int)fVar32) {
            fVar32 = DAT_003d2644;
          }
          pfVar10[1] = fVar32;
        }
      }
    }
    pfVar10 = DAT_003d262c;
    iVar11 = *DAT_003d2638;
    fVar32 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x110),(byte)(uVar24 >> 0x15) & 3);
    *(float *)(iVar9 + 0x154) = *(float *)(iVar9 + 0x154) + *DAT_003d262c * fVar32 * fVar34;
    fVar32 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x110),(byte)(uVar24 >> 0x15) & 3);
    fVar32 = *(float *)(iVar9 + 0x158) + pfVar10[1] * fVar32 * fVar34;
    *(float *)(iVar9 + 0x158) = fVar32;
    iVar20 = DAT_003d1c58;
    fVar43 = (float)VectorSignedToFloat((int)*(short *)(iVar11 + 0x110),(byte)(uVar24 >> 0x15) & 3);
    *(float *)(iVar9 + 0x15c) = *(float *)(iVar9 + 0x15c) + pfVar10[2] * fVar43 * fVar34;
    fVar45 = fVar45 + fVar29;
    uVar24 = uVar24 & 0xfffffff | (uint)(fVar32 < fVar45) << 0x1f | (uint)(fVar32 == fVar45) << 0x1e
    ;
    uVar25 = uVar24 | (uint)(NAN(fVar32) || NAN(fVar45)) << 0x1c;
    bVar2 = (byte)(uVar24 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar25 >> 0x1c) & 1)) {
      *(float *)(iVar9 + 0x158) = fVar32 - fVar37;
    }
    *(float *)(iVar20 + 4) = fVar31;
    *(float *)(iVar20 + -4) = fVar31;
    *(float *)(iVar20 + -8) = fVar31;
    *(float *)(iVar20 + -0xc) = fVar31;
    uVar26 = DAT_003d29a8;
    fVar31 = DAT_003d1804;
    pfVar10 = DAT_003d1800;
    if ((*puVar21 & 1) == 0) {
      FUN_00373500(fVar27,fVar36,fVar12,DAT_003d1c50);
    }
    else {
      if ((*puVar21 & 0x100) == 0) {
        *(float *)(iVar17 + 0xf0) = *(float *)(iVar17 + 0xf0) + *(float *)(iVar17 + 0xe0);
        local_d8 = fVar31;
        pfStack_d4 = pfVar10;
        FUN_0037547c(uVar26,0,4,fVar31);
        FUN_00373500(DAT_003d29a0,fVar36,fVar12,DAT_003d29a4);
      }
      else {
        *(float *)(iVar17 + 0xf0) = *(float *)(iVar17 + 0xf0) + DAT_003d2644;
        local_d8 = fVar31;
        pfStack_d4 = pfVar10;
        FUN_0037547c(DAT_003d1814,0,4,fVar31);
        FUN_00373500(DAT_003d29a0,fVar36,fVar27,DAT_003d29a4);
      }
      fVar31 = *(float *)(iVar9 + 0x158);
      fVar32 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28)
                                                         + 2),(byte)(uVar25 >> 0x15) & 3);
      fVar32 = fVar32 + fVar40;
      uVar24 = uVar25 & 0xfffffff | (uint)(fVar31 < fVar32) << 0x1f |
               (uint)(fVar31 == fVar32) << 0x1e;
      uVar25 = uVar24 | (uint)(NAN(fVar31) || NAN(fVar32)) << 0x1c;
      bVar2 = (byte)(uVar24 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar25 >> 0x1c) & 1)) {
        FUN_00373500(fVar36,fVar36,fVar12,DAT_003d1c50);
      }
      else {
        FUN_00373500(DAT_003d29ac,fVar36,fVar12,DAT_003d1c50);
      }
    }
    FUN_00373500(*(undefined4 *)(iVar9 + 0x154),fVar36,*(undefined4 *)(iVar17 + 0xfc),DAT_003d180c);
    pfVar10 = DAT_003d180c;
    FUN_00373500(*(undefined4 *)(iVar9 + 0x158),fVar36,*(undefined4 *)(iVar17 + 0xfc),
                 DAT_003d180c + 1);
    FUN_00373500(*(undefined4 *)(iVar9 + 0x15c),fVar36,*(undefined4 *)(iVar17 + 0xfc),pfVar10 + 2);
    if (0x3f800000 < *(int *)(iVar17 + 0xe8)) {
      FUN_00373500(DAT_003d29a0,fVar36,fVar36,DAT_003d29a4);
    }
    FUN_00373500(DAT_003d29a0,fVar36,DAT_003d29b0,DAT_003d29a4);
    if (DAT_003d29b4 <= *(int *)(iVar17 + 0xf0)) {
      *(undefined4 *)(iVar17 + 0xf0) = DAT_003d29b8;
      *(undefined2 *)(iVar17 + 0x1e) = 0;
      *(undefined4 *)(iVar17 + 0xf4) = uVar41;
      *(undefined1 *)(iVar17 + 9) = 3;
    }
    fVar31 = pfVar10[1];
    iVar20 = (int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2);
    fVar36 = (float)VectorSignedToFloat(iVar20,(byte)(uVar25 >> 0x15) & 3);
    uVar24 = uVar25 & 0xfffffff | (uint)(fVar31 == fVar36 + fVar40) << 0x1e |
             (uint)(fVar36 + fVar40 <= fVar31) << 0x1d;
    bVar2 = (byte)(uVar24 >> 0x18);
    if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
      fVar36 = (float)VectorSignedToFloat(iVar20,(byte)(uVar24 >> 0x15) & 3);
      uVar24 = uVar25 & 0xfffffff | (uint)(fVar31 < fVar36 - fVar40) << 0x1f;
      if (SUB41(uVar24 >> 0x1f,0) == (NAN(fVar31) || NAN(fVar36 - fVar40))) {
        uVar7 = 0x3f;
        if (((*puVar21 & 1) != 0) || (0x3f800000 < *(int *)(iVar17 + 0xe8))) {
          uVar7 = 1;
        }
        if ((uVar7 & *(ushort *)(iVar17 + 0x32)) == 0) {
          local_84 = *pfVar10;
          local_7c = pfVar10[2];
          local_80 = VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28)
                                                        + 2),(byte)(uVar24 >> 0x15) & 3);
          local_d8 = 1.26117e-43;
          FUN_00368b98(fVar3,DAT_003d29bc,0,*(undefined4 *)(param_2 + 0x5c28),&local_84,0x96);
          return;
        }
      }
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x1af) != '\0') {
      *(char *)(param_1 + 0x1af) = *(char *)(param_1 + 0x1af) + -1;
      *(float *)(DAT_003d29c0 + 0xf0) =
           *(float *)(DAT_003d29c0 + 0xf0) + *(float *)(DAT_003d29c0 + 0xe0);
    }
    fVar32 = DAT_003d29d0;
    pfVar10 = DAT_003d29cc;
    if ((*puVar21 & 1) != 0) {
      fVar16 = fVar36;
      if ((int)(*DAT_003d29c4 * *DAT_003d29c4 + DAT_003d29c4[2] * DAT_003d29c4[2]) <= DAT_003d29c8)
      {
        fVar16 = *(float *)(DAT_003d29c0 + 0xe0);
      }
      *(float *)(DAT_003d29c0 + 0xf0) = *(float *)(DAT_003d29c0 + 0xf0) + fVar16;
      local_d8 = fVar32;
      pfStack_d4 = pfVar10;
      FUN_0037547c(DAT_003d29a8,0,4,fVar32);
    }
    if ((*(ushort *)(DAT_003d29c0 + 0x32) & 0x1f) == 0) {
      cVar1 = *(char *)(DAT_003d29c0 + 0x1a);
      bVar22 = cVar1 == '\0';
      if (bVar22) {
        cVar1 = *(char *)(DAT_003d29c0 + 0x16);
      }
      if (!bVar22 || cVar1 != '\x02') {
        fVar32 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003d2638 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(char *)(DAT_003d29c0 + 7) = (char)(int)(fVar43 / fVar32 + fVar39);
      }
    }
    FUN_00373500(fVar31,fVar36,fVar12,DAT_003d1c50);
    return;
  case 5:
    *(undefined4 *)(DAT_003d29c0 + 0xf8) = DAT_003d2a0c;
    *(float *)(iVar9 + 0x154) = *pfVar8;
    *(float *)(iVar9 + 0x158) = pfVar8[1];
    *(float *)(iVar9 + 0x15c) = pfVar8[2];
    *(float *)(iVar11 + 0xf4) = fVar27;
    return;
  }
  return;
}
