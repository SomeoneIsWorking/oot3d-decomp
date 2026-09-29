// OoT3D decomp @ 001f9acc  name=FUN_001f9acc  size=14604

void FUN_001f9acc(int param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined2 uVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  short sVar18;
  int iVar19;
  int extraout_r1;
  float fVar20;
  float *pfVar21;
  ushort uVar22;
  float fVar23;
  undefined1 *puVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint *puVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  uint in_fpscr;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  short *local_d8;
  undefined1 auStack_d4 [48];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  int local_70;

  fVar42 = DAT_001f9ebc;
  local_74 = 10;
  local_70 = param_2 + 0x2000;
  iVar25 = *(int *)(param_2 + 0x20ac);
  *(undefined4 *)(param_1 + 0xfc) = DAT_001f9eb4;
  fVar36 = DAT_001f9ecc;
  *(undefined4 *)(param_1 + 0x100) = DAT_001f9eb8;
  iVar15 = DAT_001f9ec8;
  puVar28 = (uint *)(param_2 + 0x14);
  fVar23 = DAT_001f9ec0;
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    fVar23 = DAT_001f9ec4;
  }
  fVar42 = fVar42 + *(float *)(iVar25 + 0x6c) * fVar23;
  if ((*(short *)(DAT_001f9ec8 + 0x34) == 0 && *(short *)(DAT_001f9ec8 + 0x44) == 0) &&
     ((*(int *)(iVar25 + 0x30) <= DAT_001f9ed0 || (*(short *)(param_1 + 0x1b0) == 100)))) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    if (*(short *)(iVar15 + 0x1e) != 0) {
      if (*(short *)(iVar15 + 0x36) == 0) {
        fVar23 = DAT_001f9ed4[1];
        fVar35 = DAT_001f9ed4[2];
        *(float *)(param_1 + 0x3c) = *DAT_001f9ed4;
        *(float *)(param_1 + 0x40) = fVar23;
        *(float *)(param_1 + 0x44) = fVar35;
      }
      else if (*(short *)(iVar15 + 0x36) == 1) {
        *(undefined1 *)(iVar15 + 9) = 1;
        *(float *)(iVar15 + 0x10c) = fVar36;
        *(undefined1 *)(iVar15 + 0x14) = 2;
      }
    }
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  *(short *)(param_1 + 0x1b4) = *(short *)(param_1 + 0x1b4) + 1;
  iVar15 = 0;
  do {
    iVar19 = param_1 + iVar15 * 2;
    sVar18 = *(short *)(iVar19 + 0x1d2);
    iVar15 = (int)(short)((short)iVar15 + 1);
    if (sVar18 != 0) {
      *(short *)(iVar19 + 0x1d2) = sVar18 + -1;
    }
    fVar23 = DAT_001f9edc;
    uVar26 = DAT_001f9ed8;
  } while (iVar15 < 4);
  if (*(short *)(param_1 + 0x1fc) != 0) {
    *(short *)(param_1 + 0x1fc) = *(short *)(param_1 + 0x1fc) + -1;
  }
  if (*(short *)(param_1 + 0x1fa) != 0) {
    *(short *)(param_1 + 0x1fa) = *(short *)(param_1 + 0x1fa) + -1;
  }
  if (*(short *)(param_1 + 0x1f8) != 0) {
    *(short *)(param_1 + 0x1f8) = *(short *)(param_1 + 0x1f8) + -1;
  }
  if (*(char *)(param_1 + 0x1a9) != '\0') {
    *(char *)(param_1 + 0x1a9) = *(char *)(param_1 + 0x1a9) + -1;
  }
  FUN_00373500(*(undefined4 *)(param_1 + 0x1e8),fVar23,uVar26,param_1 + 0x1f0);
  fVar20 = DAT_001f9ee4;
  fVar35 = DAT_001f9ee0;
  if (*(short *)(param_1 + 0x1b0) == 6) {
    FUN_00373500(*(undefined4 *)(param_1 + 0x1ec),DAT_001f9ed8,DAT_001f9ee8,param_1 + 500);
  }
  else {
    fVar38 = *(float *)(param_1 + 0x2c);
    fVar40 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) +
                                                       2),(byte)(in_fpscr >> 0x15) & 3);
    uVar16 = in_fpscr & 0xfffffff | (uint)(fVar38 < fVar40) << 0x1f |
             (uint)(fVar38 == fVar40) << 0x1e;
    in_fpscr = uVar16 | (uint)(NAN(fVar38) || NAN(fVar40)) << 0x1c;
    bVar5 = (byte)(uVar16 >> 0x18);
    fVar40 = fVar23;
    fVar38 = fVar23;
    if (!(bool)(bVar5 >> 6 & 1) && bVar5 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar40 = DAT_001f9eec;
      fVar38 = DAT_001f9ee4;
    }
    FUN_00373500(*(float *)(param_1 + 0x1ec) * fVar40,fVar23,fVar38 * DAT_001f9ee0,param_1 + 500);
  }
  FUN_00370084(param_1 + 0x1c8,0,5,500);
  fVar40 = DAT_001f9ef8;
  piVar6 = DAT_001f9ef4;
  fVar38 = DAT_001f9ef0;
  if (*(char *)(param_1 + 0x1a8) == '\0') {
    FUN_0037572c(*(float *)(param_1 + 0x204) * DAT_001f9efc,param_1);
    fVar39 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x1e4) =
         *(float *)(param_1 + 0x1e4) + *(float *)(param_1 + 0x1f0) * fVar39 * DAT_001f9f00;
    fVar33 = (float)FUN_00372674();
    fVar39 = DAT_001f9f04;
    *(short *)(param_1 + 0x1c4) =
         *(short *)(param_1 + 0x1c6) + (short)(int)(fVar33 * *(float *)(param_1 + 500));
    fVar39 = (float)FUN_00372674(*(float *)(param_1 + 0x1e4) + fVar39);
    *(short *)(param_1 + 0x1ce) =
         *(short *)(param_1 + 0x1c6) +
         (short)(int)(fVar39 * DAT_001f9f08 * *(float *)(param_1 + 500));
  }
  else {
    FUN_0037572c(*(float *)(param_1 + 0x204) * DAT_001f9f0c,param_1);
    fVar33 = DAT_001f9f18;
    fVar39 = DAT_001f9f14;
    fVar34 = *(float *)(param_1 + 0x5c) * DAT_001f9f10;
    iVar15 = 0;
    *(float *)(param_1 + 0x54) = fVar34;
    *(float *)(param_1 + 0x58) = fVar34;
    fVar34 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x1e4) =
         *(float *)(param_1 + 0x1e4) + *(float *)(param_1 + 0x1f0) * fVar34 * fVar39;
    do {
      fVar39 = (float)VectorSignedToFloat(iVar15,(byte)(in_fpscr >> 0x15) & 3);
      fVar39 = (float)FUN_00372674(*(float *)(param_1 + 0x1e4) + fVar39 * fVar33);
      *(short *)(param_1 + iVar15 * 2 + 0x224) =
           *(short *)(param_1 + 0x1c6) + (short)(int)(fVar39 * fVar40 * *(float *)(param_1 + 500));
      iVar15 = (int)(short)((short)iVar15 + 1);
    } while (iVar15 < 3);
    fVar39 = (float)FUN_00372674(*(float *)(param_1 + 0x1e4) + DAT_001f9f1c);
    *(short *)(param_1 + 0x1c4) = (short)(int)(fVar39 * *(float *)(param_1 + 500) * fVar38);
  }
  fVar33 = *(float *)(param_1 + 0x20c) - *(float *)(param_1 + 0x28);
  fVar41 = *(float *)(param_1 + 0x210) - *(float *)(param_1 + 0x2c);
  fVar39 = *(float *)(param_1 + 0x214) - *(float *)(param_1 + 0x30);
  local_94 = FUN_003758b0(fVar39,fVar33);
  fVar43 = fVar33 * fVar33 + fVar39 * fVar39;
  local_90 = FUN_003758b0(SQRT(fVar43),fVar41);
  iVar17 = DAT_001fd194;
  uVar12 = DAT_001fd190;
  uVar11 = DAT_001fbed0;
  pfVar21 = DAT_001fb534;
  iVar19 = DAT_001fb528;
  uVar37 = DAT_001faaf4;
  uVar27 = DAT_001fa2a8;
  fVar44 = DAT_001fa2a4;
  fVar9 = DAT_001fa2a0;
  fVar8 = DAT_001fa29c;
  fVar39 = DAT_001fa298;
  fVar7 = DAT_001fa294;
  fVar34 = DAT_001fa290;
  uVar26 = DAT_001fa28c;
  fVar33 = DAT_001fa288;
  iVar15 = DAT_001f9ec8;
  bVar29 = *(short *)(param_1 + 0x1f8) != 0;
  sVar18 = 0;
  if (bVar29) {
    sVar18 = *(short *)(param_1 + 0x1b0);
  }
  fVar41 = SQRT(fVar43 + fVar41 * fVar41);
  if (((bVar29 && sVar18 != 2) && sVar18 != 3) && sVar18 != 4) {
    if (((int)*(short *)(param_1 + 0x1b4) & 0x40U) == 0) {
      sVar18 = (short)local_94 + -0x4000;
    }
    else {
      sVar18 = (short)local_94 + 0x4000;
    }
    local_94 = (int)sVar18;
    if (((int)*(short *)(param_1 + 0x1b4) + 0x20U & 0x40) == 0) {
      sVar18 = (short)local_90 + -0x2000;
    }
    else {
      sVar18 = (short)local_90 + 0x2000;
    }
    local_90 = (int)sVar18;
  }
  uVar16 = (uint)*(short *)(param_1 + 0x1b0);
  if (uVar16 == 3) {
    fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(char *)(param_1 + 0x1a9) = (char)(int)(DAT_001fb524 / fVar42 + DAT_001fa2a0);
    local_74 = 2;
    local_80 = DAT_001fb52c;
    if ((((int)*(float *)(iVar25 + 0x28) ^ (uint)*(byte *)(iVar19 + 0x18)) & 1) != 0) {
      local_80 = DAT_001fb1a0;
    }
    local_7c = fVar36;
    local_78 = DAT_001fb1a0;
    FUN_003735e8(*(undefined4 *)(DAT_001fb530 + 4),auStack_d4,0);
    FUN_003735ac(&local_8c,auStack_d4,&local_80);
    pfVar21 = DAT_001fb534;
    *(float *)(param_1 + 0x20c) = *DAT_001fb534 + local_8c;
    fVar42 = DAT_001fb53c;
    *(float *)(param_1 + 0x214) = pfVar21[2] + local_84;
    *(float *)(param_1 + 0x210) = pfVar21[1] - fVar44;
    *(undefined4 *)(param_1 + 0x208) = DAT_001fb538;
    FUN_00373500(*(float *)(param_1 + 0x1e0) * fVar42,fVar23,fVar23,param_1 + 0x6c);
    if (*(short *)(iVar19 + 0x1e) == 3) {
      fVar42 = pfVar21[1];
      fVar33 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28)
                                                         + 2),(byte)(in_fpscr >> 0x15) & 3);
      fVar33 = fVar33 + fVar39;
      uVar16 = in_fpscr & 0xfffffff | (uint)(fVar42 < fVar33) << 0x1f |
               (uint)(fVar42 == fVar33) << 0x1e;
      in_fpscr = uVar16 | (uint)(NAN(fVar42) || NAN(fVar33)) << 0x1c;
      bVar5 = (byte)(uVar16 >> 0x18);
      if (((bool)(bVar5 >> 6 & 1) || bVar5 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
         ((int)SQRT(*pfVar21 * *pfVar21 + pfVar21[2] * pfVar21[2]) <= DAT_001fb518)) {
        if ((*(short *)(param_1 + 0x1d2) == 0) || ((int)fVar41 < DAT_001fb864)) {
          *(undefined2 *)(param_1 + 0x1b0) = 4;
          uVar26 = DAT_001fb868;
          fVar42 = pfVar21[1];
          fVar33 = pfVar21[2];
          *(float *)(param_1 + 0x20c) = *pfVar21;
          *(float *)(param_1 + 0x210) = fVar42;
          *(float *)(param_1 + 0x214) = fVar33;
          *(undefined4 *)(param_1 + 0x208) = uVar26;
          *(float *)(param_1 + 0x1e8) = fVar38;
          *(float *)(param_1 + 0x1ec) = fVar8;
          fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(param_1 + 0x1d2) = (short)(int)(fVar34 / fVar42 + fVar9);
        }
        goto LAB_001fd218;
      }
    }
    goto LAB_001fb4f8;
  }
  if ((int)uVar16 < 4) {
    if (uVar16 == 0xffffffff) {
      FUN_00370084(param_1 + 0x1be,0,0x14,0x20);
      uVar27 = DAT_001fae58;
      uVar26 = DAT_001fae34;
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(*(float *)(param_1 + 0x98) == fVar42 * fVar33) << 0x1e |
                 (uint)(fVar42 * fVar33 <= *(float *)(param_1 + 0x98)) << 0x1d;
      bVar5 = (byte)(in_fpscr >> 0x18);
      bVar29 = (bool)(bVar5 >> 6);
      if ((bool)(bVar5 >> 5 & 1)) {
        bVar29 = *(short *)(param_1 + 0x1d4) == 0;
      }
      if (bVar29) {
        if (DAT_001fae3c < (int)fVar41) {
          *(undefined4 *)(param_1 + 0x1e8) = DAT_001fae48;
          *(undefined4 *)(param_1 + 0x1ec) = DAT_001fae4c;
          FUN_00373500(fVar23,fVar23,uVar26,param_1 + 0x6c);
          FUN_00373500(DAT_001fae54,fVar23,DAT_001fae50,param_1 + 0x208);
        }
        else {
          *(undefined4 *)(param_1 + 0x1e8) = DAT_001faaf0;
          *(float *)(param_1 + 0x1ec) = fVar35;
          FUN_0036fc20(fVar23,uVar27,param_1 + 0x6c);
          FUN_00373500(fVar36,fVar23,DAT_001faae4,param_1 + 0x208);
        }
      }
      else {
        FUN_00373500(fVar20,fVar23,DAT_001fae28,param_1 + 0x6c);
        uVar26 = DAT_001fae30;
        *(float *)(param_1 + 0x1e8) = fVar23;
        *(undefined4 *)(param_1 + 0x1ec) = uVar26;
        uVar27 = DAT_001faae8;
        uVar26 = DAT_001faae4;
        fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x1d2) = (short)(int)(fVar34 / fVar42 + fVar9);
        FUN_00373500(uVar27,fVar23,uVar26,param_1 + 0x208);
        fVar42 = DAT_001faafc;
        if ((*(uint *)(DAT_001fae40 + param_2) & 0x1f) == 0) {
          uVar26 = FUN_003738a8(DAT_001faafc);
          *(undefined4 *)(param_1 + 0x20c) = uVar26;
          uVar26 = FUN_003738a8(fVar42);
          *(undefined4 *)(param_1 + 0x214) = uVar26;
          *(undefined4 *)(param_1 + 0x210) = DAT_001fae44;
        }
      }
      uVar16 = (uint)*(short *)(param_1 + 0x1fc);
      if (uVar16 == 0) {
        *(undefined2 *)(param_1 + 0x1b0) = 10;
        *(undefined2 *)(param_1 + 0x1b2) = 10;
      }
      else if (((uVar16 & 0x7ff) == 0) &&
              (fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                   (byte)(in_fpscr >> 0x15) & 3),
              (int)uVar16 < (int)(DAT_001fae5c / fVar42 + fVar9))) {
        *(undefined2 *)(param_1 + 0x1b0) = 0xfffe;
        *(undefined2 *)(param_1 + 0xbc) = 0;
        *(undefined2 *)(param_1 + 0x34) = 0;
        uVar26 = DAT_001fae60;
        fVar42 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                    0x28) + 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x210) = fVar42 + fVar44;
        uVar27 = FUN_00371e50(uVar26);
        *(undefined4 *)(param_1 + 0x20c) = uVar27;
        uVar26 = FUN_00371e50(uVar26);
        *(undefined4 *)(param_1 + 0x214) = uVar26;
      }
LAB_001fac24:
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    }
    else if (uVar16 < 0x80000000) {
      if (uVar16 == 0) {
        FUN_00373500(fVar23,fVar23,DAT_001faaf4,param_1 + 0x6c);
        FUN_00373500(fVar36,fVar23,DAT_001faae4,param_1 + 0x208);
        uVar27 = DAT_001fab00;
        if (*(short *)(param_1 + 0x1d2) == 0) {
          if (*(short *)(param_1 + 0x1fc) == 0) {
            *(undefined2 *)(param_1 + 0x1b2) = 10;
            *(undefined2 *)(param_1 + 0x1b0) = 10;
          }
          else {
            *(undefined2 *)(param_1 + 0x1b0) = 1;
            fVar42 = (float)FUN_00371e50(uVar27);
            uVar27 = DAT_001fa730;
            fVar42 = (float)VectorSignedToFloat((short)(int)fVar42 + 10,(byte)(in_fpscr >> 0x15) & 3
                                               );
            fVar38 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(param_1 + 0x1d2) = (short)(int)((fVar42 * fVar20) / fVar38 + fVar9);
            uVar37 = FUN_003738a8(uVar27);
            fVar42 = DAT_001fa734;
            *(undefined4 *)(param_1 + 0x20c) = uVar37;
            fVar38 = (float)FUN_00371e50(fVar42);
            fVar33 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                        0x28) + 2),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(float *)(param_1 + 0x210) = (fVar33 - fVar42) - fVar38;
            uVar27 = FUN_003738a8(uVar27);
            *(undefined4 *)(param_1 + 0x214) = uVar27;
            *(float *)(param_1 + 0x1e8) = fVar23;
            *(undefined4 *)(param_1 + 0x1ec) = uVar26;
          }
        }
        if (*(char *)(DAT_001f9ec8 + 0x16) != '\x02') goto LAB_001fac24;
LAB_001fac0c:
        FUN_00339890(param_1,puVar28);
      }
      else if (uVar16 == 1) {
        if (*(char *)(param_1 + 0x1a8) != '\x01') {
          FUN_00373500(DAT_001faae8,fVar23,DAT_001faae4,param_1 + 0x208);
          uVar37 = DAT_001fae38;
          uVar27 = DAT_001fae34;
          in_fpscr = in_fpscr & 0xfffffff |
                     (uint)(*(float *)(param_1 + 0x98) == fVar42 * fVar33) << 0x1e |
                     (uint)(fVar42 * fVar33 <= *(float *)(param_1 + 0x98)) << 0x1d;
          bVar5 = (byte)(in_fpscr >> 0x18);
          bVar29 = (bool)(bVar5 >> 6);
          if ((bool)(bVar5 >> 5 & 1)) {
            bVar29 = *(short *)(param_1 + 0x1d4) == 0;
          }
          if (bVar29) {
            *(float *)(param_1 + 0x1e8) = fVar23;
            *(undefined4 *)(param_1 + 0x1ec) = uVar26;
            FUN_00373500(uVar37,fVar23,uVar27,param_1 + 0x6c);
          }
          else {
            FUN_00373500(DAT_001fae24,fVar23,DAT_001fae20,param_1 + 0x208);
            FUN_00373500(DAT_001fae2c,fVar23,DAT_001fae28,param_1 + 0x6c);
            uVar26 = DAT_001fae30;
            *(float *)(param_1 + 0x1e8) = fVar38;
            *(undefined4 *)(param_1 + 0x1ec) = uVar26;
            fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(param_1 + 0x1d2) = (short)(int)(fVar34 / fVar42 + fVar9);
          }
          if ((*(short *)(param_1 + 0x1d2) == 0) || ((int)fVar41 < DAT_001fae3c)) {
            *(undefined2 *)(param_1 + 0x1b0) = 0;
            fVar42 = (float)FUN_00371e50(DAT_001fab00);
            *(short *)(param_1 + 0x1d2) = (short)(int)fVar42 + 3;
            *(float *)(param_1 + 0x1e8) = fVar23;
            *(float *)(param_1 + 0x1ec) = fVar35;
          }
          if (*(char *)(DAT_001f9ec8 + 0x16) == '\x02') goto LAB_001fac0c;
          goto LAB_001fac24;
        }
        *(undefined2 *)(param_1 + 0x1b0) = 0xffff;
        fVar42 = DAT_001fab04;
        iVar15 = *piVar6;
        fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x1fc) = (short)(int)(DAT_001fab04 / fVar38 + fVar9);
        uVar26 = DAT_001fab08;
        fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x1fa) = (short)(int)(fVar42 / fVar38 + fVar9);
        *(float *)(param_1 + 0x20c) = fVar36;
        *(undefined4 *)(param_1 + 0x210) = uVar26;
        *(float *)(param_1 + 0x214) = fVar36;
      }
      else if (uVar16 == 2) {
        local_80 = DAT_001fa2bc;
        if (((*(ushort *)(param_1 + 0x1c) ^ (ushort)*(byte *)(DAT_001f9ec8 + 0x18)) & 1) != 0) {
          local_80 = DAT_001fa2a4;
        }
        local_7c = fVar36;
        local_78 = fVar36;
        FUN_003735e8(*(undefined4 *)(DAT_001fa2c0 + 4),auStack_d4,0);
        FUN_003735ac(&local_8c,auStack_d4,&local_80);
        pfVar21 = DAT_001f9ed4;
        *(float *)(param_1 + 0x20c) = *DAT_001f9ed4 + local_8c;
        *(float *)(param_1 + 0x214) = pfVar21[2] + local_84;
        uVar16 = (uint)*(byte *)(iVar15 + 0x16);
        if (uVar16 == 2) {
          *(float *)(param_1 + 0x210) = pfVar21[1];
        }
        else {
          if (*(char *)(param_1 + 0x1a8) == '\0') {
            fVar39 = DAT_001fa2c4;
          }
          *(float *)(param_1 + 0x210) = pfVar21[1] - fVar39;
        }
        fVar38 = *(float *)(param_1 + 0x210);
        fVar42 = *(float *)(param_1 + 0x84);
        uVar32 = in_fpscr & 0xfffffff | (uint)(fVar38 == fVar42) << 0x1e |
                 (uint)(fVar42 <= fVar38) << 0x1d;
        bVar5 = (byte)(uVar32 >> 0x18);
        if (!(bool)(bVar5 >> 5 & 1) || (bool)(bVar5 >> 6)) {
          fVar42 = fVar42 + fVar20;
          *(float *)(param_1 + 0x210) = fVar42;
        }
        bVar31 = SBORROW4(uVar16,2);
        bVar29 = (int)(uVar16 - 2) < 0;
        bVar30 = uVar16 == 2;
        if (!bVar30) {
          fVar38 = *(float *)(param_1 + 0x2c);
          fVar42 = *(float *)(param_1 + 0x210);
          uVar32 = in_fpscr & 0xfffffff | (uint)(fVar38 < fVar42) << 0x1f |
                   (uint)(fVar38 == fVar42) << 0x1e | (uint)(NAN(fVar38) || NAN(fVar42)) << 0x1c;
          bVar5 = (byte)(uVar32 >> 0x18);
          bVar29 = (bool)(bVar5 >> 7);
          bVar30 = (bool)(bVar5 >> 6 & 1);
          bVar31 = (bool)(bVar5 >> 4 & 1);
        }
        if (!bVar30 && bVar29 == bVar31) {
          FUN_00373500(fVar42,DAT_001fa2b8,(fVar38 - fVar42) * DAT_001fa2b8,param_1 + 0x2c);
        }
        FUN_00373500(DAT_001fa2cc,fVar23,DAT_001fa2c8,param_1 + 0x208);
        if ((*(uint *)(param_2 + 0x18) & 1) != 0) {
          *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x200) + DAT_001fa2d0;
        }
        if (*(char *)(iVar15 + 0x19) != '\0') {
          fVar42 = DAT_001fa2d4;
          if (*(char *)(iVar15 + 0x19) == '\x01') {
            fVar42 = DAT_001fa2d8;
          }
          *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x200) + fVar42;
          *(undefined1 *)(iVar15 + 0x19) = 0;
        }
        if ((*(uint *)(param_2 + 0x18) & 2) != 0) {
          *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x200) + DAT_001fa2dc;
        }
        fVar42 = DAT_001fa2b4 + *(float *)(param_1 + 0x204) * fVar9;
        uVar16 = uVar32 & 0xfffffff | (uint)(fVar42 < fVar41) << 0x1f |
                 (uint)(fVar42 == fVar41) << 0x1e;
        uVar32 = uVar16 | (uint)(NAN(fVar42) || NAN(fVar41)) << 0x1c;
        bVar5 = (byte)(uVar16 >> 0x18);
        if ((bool)(bVar5 >> 6 & 1) || bVar5 >> 7 != ((byte)(uVar32 >> 0x1c) & 1)) {
          if (*(short *)(param_1 + 0x1b6) != 0) {
            *(float *)(param_1 + 0x208) = fVar36;
            fVar42 = DAT_001fb1ac;
            *(float *)(param_1 + 0x1e8) = fVar23;
            *(float *)(param_1 + 0x1ec) = fVar42;
          }
          FUN_00373500(fVar20,fVar23,DAT_001fb1b0,param_1 + 0x6c);
          *(undefined2 *)(param_1 + 0x1b6) = 0;
        }
        else {
          if (*(short *)(param_1 + 0x1b6) == 0) {
            *(float *)(param_1 + 0x1e8) = fVar23;
            *(float *)(param_1 + 0x1ec) = fVar35;
            fVar42 = (float)FUN_00371e50(fVar44);
            fVar42 = (float)VectorSignedToFloat((short)(int)fVar42 + 2,(byte)(uVar32 >> 0x15) & 3);
            fVar36 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                (byte)(uVar32 >> 0x15) & 3);
            *(short *)(param_1 + 0x1d2) = (short)(int)((fVar42 * fVar20) / fVar36 + fVar9);
          }
          FUN_00373500(DAT_001fa2e0,fVar23,DAT_001fa2b8,param_1 + 0x6c);
          *(undefined2 *)(param_1 + 0x1b6) = 1;
        }
        if (((DAT_001fb1c4 < *(ushort *)(DAT_001fa72c + 0xc) - 0xb555) &&
            (DAT_001fb1c4 < *(ushort *)(DAT_001fa72c + 0xc) - 0x3555)) &&
           (*(char *)(iVar15 + 0xe) == '\0')) {
          VectorFloatToUnsigned(*(undefined4 *)(iVar15 + 0x48),3);
        }
        if (*(short *)(param_1 + 0x1d2) != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_003759d0(DAT_001fb1cc);
        }
                    /* WARNING: Subroutine does not return */
        FUN_003759d0(DAT_001fb1cc);
      }
    }
    else if (uVar16 == 0xffffffe7) {
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(*(float *)(param_1 + 0x98) == fVar42 * DAT_001fa288) << 0x1e |
                 (uint)(fVar42 * DAT_001fa288 <= *(float *)(param_1 + 0x98)) << 0x1d;
      bVar5 = (byte)(in_fpscr >> 0x18);
      bVar29 = (bool)(bVar5 >> 6);
      if ((bool)(bVar5 >> 5 & 1)) {
        bVar29 = *(short *)(param_1 + 0x1d4) == 0;
      }
      if (bVar29) {
        FUN_00370084(param_1 + 0x1be,0x1000,0x14,0x6a);
        uVar26 = DAT_001fb194;
        if (DAT_001faaec < (int)fVar41) {
          *(undefined4 *)(param_1 + 0x1e8) = DAT_001fb1a4;
          *(undefined4 *)(param_1 + 0x1ec) = DAT_001fb1a8;
          FUN_00373500(fVar9,fVar23,uVar26,param_1 + 0x6c);
          FUN_00373500(DAT_001fae54,fVar23,DAT_001fae50,param_1 + 0x208);
        }
        else {
          *(undefined2 *)(param_1 + 0x1b0) = 0xffff;
        }
      }
      else {
LAB_001fafa8:
        *(undefined2 *)(param_1 + 0x1b0) = 0xffff;
        *(undefined4 *)(param_1 + 0x210) = DAT_001fae44;
      }
    }
    else if (uVar16 == 0xfffffffd) {
      fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_1 + 0x1a9) = (char)(int)(DAT_001fa294 / fVar42 + DAT_001fa2a0);
      fVar42 = pfVar21[1];
      fVar33 = pfVar21[2];
      *(float *)(param_1 + 0x20c) = *pfVar21;
      *(float *)(param_1 + 0x210) = fVar42;
      *(float *)(param_1 + 0x214) = fVar33;
      FUN_00373500(fVar40,fVar23,fVar23,param_1 + 0x6c);
      iVar15 = DAT_001fb528;
      if ((*(short *)(DAT_001fb528 + 0x1e) == 3) && (*(short *)(param_1 + 0x1d2) != 0)) {
        fVar42 = pfVar21[1];
        iVar25 = (int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2);
        fVar33 = (float)VectorSignedToFloat(iVar25,(byte)(in_fpscr >> 0x15) & 3);
        fVar33 = fVar33 + fVar39;
        uVar16 = in_fpscr & 0xfffffff;
        uVar32 = uVar16 | (uint)(fVar42 < fVar33) << 0x1f | (uint)(fVar42 == fVar33) << 0x1e;
        in_fpscr = uVar32 | (uint)(NAN(fVar42) || NAN(fVar33)) << 0x1c;
        bVar5 = (byte)(uVar32 >> 0x18);
        if (((bool)(bVar5 >> 6 & 1) || bVar5 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
           ((int)SQRT(*pfVar21 * *pfVar21 + pfVar21[2] * pfVar21[2]) <= DAT_001fb518)) {
          if ((int)fVar41 < DAT_001fb518 + -0x3280000) {
            fVar33 = (float)VectorSignedToFloat(iVar25,(byte)(in_fpscr >> 0x15) & 3);
            fVar33 = fVar33 - fVar44;
            uVar16 = uVar16 | (uint)(fVar42 < fVar33) << 0x1f | (uint)(fVar42 == fVar33) << 0x1e;
            in_fpscr = uVar16 | (uint)(NAN(fVar42) || NAN(fVar33)) << 0x1c;
            bVar5 = (byte)(uVar16 >> 0x18);
            if (!(bool)(bVar5 >> 6 & 1) && bVar5 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
              FUN_00375bcc(param_1,DAT_001fbeb8);
              local_ec = DAT_001fbebc;
              FUN_0037547c(uVar27,0,4,DAT_001fbec0,DAT_001fbec0);
            }
            FUN_00339660(param_1,param_2,0);
            *(undefined2 *)(param_1 + 0x1b0) = 5;
            *(float *)(param_1 + 0x1e8) = fVar38;
            *(float *)(param_1 + 0x1ec) = fVar8;
            fVar42 = DAT_001fb874;
            iVar25 = *piVar6;
            fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar25 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(param_1 + 0x1d4) = (short)(int)(DAT_001fb870 / fVar38 + fVar9);
            *(undefined2 *)(param_1 + 0x1d2) = 0;
            *(undefined2 *)(param_1 + 0x1d6) = 0;
            fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar25 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(param_1 + 0x1d8) = (short)(int)(fVar42 / fVar38 + fVar9);
            *(undefined2 *)(iVar15 + 0x1e) = 4;
            *(int *)(iVar15 + 0xcc) = param_1;
            fVar42 = DAT_001fbec8;
            if (*(char *)(iVar15 + 0x16) == '\x02') {
              fVar42 = (float)VectorSignedToFloat((int)*(short *)(iVar25 + 0x110),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              *(short *)(iVar15 + 0x3c) = (short)(int)(DAT_001fbec4 / fVar42 + fVar9);
              uVar13 = 100;
            }
            else {
              sVar18 = *(short *)(iVar25 + 0x110);
              fVar38 = (float)VectorSignedToFloat((int)sVar18,(byte)(in_fpscr >> 0x15) & 3);
              *(short *)(iVar15 + 0x3c) = (short)(int)(DAT_001fbec4 / fVar38 + fVar9);
              fVar38 = (float)VectorSignedToFloat((int)sVar18,(byte)(in_fpscr >> 0x15) & 3);
              uVar13 = (undefined2)(int)(fVar42 / fVar38 + fVar9);
            }
            *(undefined2 *)(iVar15 + 0x2c) = uVar13;
            *(undefined1 *)(iVar15 + 0x1a) = 0;
            *(undefined2 *)(iVar15 + 0x3a) = 100;
            *(undefined2 *)(iVar15 + 0x26) = 0;
          }
          goto LAB_001fd218;
        }
      }
LAB_001fb4f8:
      *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_1 + 0x1b2);
      *(undefined2 *)(param_1 + 0x1d2) = 0;
      *(float *)(param_1 + 0x1e8) = fVar23;
      *(undefined4 *)(param_1 + 0x1ec) = uVar26;
    }
    else if (uVar16 == 0xfffffffe) {
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(*(float *)(param_1 + 0x98) == fVar42 * DAT_001fa288) << 0x1e |
                 (uint)(fVar42 * DAT_001fa288 <= *(float *)(param_1 + 0x98)) << 0x1d;
      bVar5 = (byte)(in_fpscr >> 0x18);
      bVar29 = (bool)(bVar5 >> 6);
      if ((bool)(bVar5 >> 5 & 1)) {
        bVar29 = *(short *)(param_1 + 0x1d4) == 0;
      }
      if (!bVar29) goto LAB_001fafa8;
      *(undefined4 *)(param_1 + 0x1e8) = DAT_001fa2ac;
      *(undefined4 *)(param_1 + 0x1ec) = DAT_001fa2b0;
      FUN_00370084(param_1 + 0x1be,0xfffff000,0x14);
      fVar42 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28)
                                                         + 2),(byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(fVar42 - DAT_001fa2b4 <= *(float *)(param_1 + 0x2c)) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        FUN_00373500(fVar9,fVar23,DAT_001fa2b8,param_1 + 0x6c);
LAB_001faf6c:
        FUN_00373500(DAT_001fae54,fVar23,DAT_001fae50,param_1 + 0x208);
        goto LAB_001fac24;
      }
      FUN_0036fc20(fVar23,DAT_001fb194,param_1 + 0x6c);
      uVar26 = DAT_001fb198;
      uVar16 = in_fpscr & 0xfffffff;
      in_fpscr = uVar16 | (uint)(*(float *)(param_1 + 0x6c) == fVar36) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar42 = *(float *)(param_1 + 0x2c);
        fVar38 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                    0x28) + 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar38 = fVar38 - fVar39;
        uVar16 = uVar16 | (uint)(fVar42 < fVar38) << 0x1f | (uint)(fVar42 == fVar38) << 0x1e;
        in_fpscr = uVar16 | (uint)(NAN(fVar42) || NAN(fVar38)) << 0x1c;
        bVar5 = (byte)(uVar16 >> 0x18);
        if ((bool)(bVar5 >> 6 & 1) || bVar5 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
        goto LAB_001faf6c;
      }
      uVar37 = FUN_00371e50(DAT_001fb198);
      *(undefined4 *)(param_1 + 0x20c) = uVar37;
      uVar37 = FUN_00371e50(uVar26);
      *(undefined4 *)(param_1 + 0x214) = uVar37;
      *(float *)(param_1 + 0x210) = *(float *)(param_1 + 0x84) + fVar44;
      *(undefined2 *)(param_1 + 0x1b0) = 0xffe7;
      *(float *)(param_1 + 0x208) = fVar36;
      local_e0 = *(float *)(param_1 + 0x218);
      local_d8 = *(short **)(param_1 + 0x220);
      local_dc = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                    0x28) + 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
      FUN_00368b98(fVar44,uVar26,param_1 + 0xec,*(undefined4 *)(param_2 + 0x5c28),&local_e0,0x96,
                   0x5a);
      FUN_00368b98(DAT_001fb1a0,DAT_001fb19c,param_1 + 0xec,*(undefined4 *)(param_2 + 0x5c28),
                   &local_e0,0x96,0x5a);
      FUN_00375bcc(param_1,uVar27);
    }
  }
  else if (uVar16 == 7) {
    fVar38 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(char *)(param_1 + 0x1a9) = (char)(int)(DAT_001fa294 / fVar38 + DAT_001fa2a0);
    local_74 = 5;
    *(undefined4 *)(param_1 + 0x208) = uVar12;
    iVar15 = (int)*(short *)(param_1 + 0x1c);
    if (iVar15 < 0x68) {
      iVar17 = iVar17 + iVar15 * 0x48;
      uVar26 = *(undefined4 *)(iVar17 + -0x1c18);
      uVar27 = *(undefined4 *)(iVar17 + -0x1c14);
      *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(iVar17 + -0x1c1c);
      *(undefined4 *)(param_1 + 0x210) = uVar26;
      *(undefined4 *)(param_1 + 0x214) = uVar27;
      *(float *)(DAT_001fc710 + 0x78) = fVar23;
    }
    else {
      iVar17 = iVar17 + iVar15 * 0x48;
      if (iVar15 < 0x6c) {
        uVar26 = *(undefined4 *)(iVar17 + -0x1798);
        uVar27 = *(undefined4 *)(iVar17 + -0x1794);
        *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(iVar17 + -0x179c);
        *(undefined4 *)(param_1 + 0x210) = uVar26;
        *(undefined4 *)(param_1 + 0x214) = uVar27;
        *(float *)(DAT_001fc710 + 0x78) = fVar40;
      }
      else {
        uVar26 = *(undefined4 *)(iVar17 + -0x1318);
        uVar27 = *(undefined4 *)(iVar17 + -0x1314);
        *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(iVar17 + -0x131c);
        *(undefined4 *)(param_1 + 0x210) = uVar26;
        *(undefined4 *)(param_1 + 0x214) = uVar27;
        *(float *)(DAT_001fc710 + 0x78) = fVar20;
      }
    }
    FUN_00373500(fVar39,fVar23,fVar23,param_1 + 0x6c);
    if ((((int)fVar41 < DAT_001fd198) &&
        (FUN_00370084(param_1 + 0x1c8,20000,2), *(short *)(param_1 + 0x1d6) == 0)) &&
       (iVar15 = FUN_00339660(param_1,param_2,0), iVar15 != 0)) {
      uVar26 = FUN_00371e50(DAT_001fd19c);
      uVar16 = VectorFloatToUnsigned(uVar26,3);
      FUN_00339600(param_1,uVar16 & 0xff);
      fVar38 = (float)FUN_00371e50(DAT_001fd1a0);
      fVar38 = (float)VectorSignedToFloat((short)(int)fVar38 + 0x14,(byte)(in_fpscr >> 0x15) & 3);
      fVar33 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1d6) = (short)(int)((fVar38 * fVar20) / fVar33 + fVar9);
    }
    if (*(short *)(param_1 + 0x1d8) == 0) {
      *(undefined2 *)(param_1 + 0x1b0) = 10;
      *(undefined2 *)(param_1 + 0x1b2) = 10;
    }
    else {
      FUN_00339890(param_1,puVar28);
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(fVar42 * DAT_001fd1a4 <= *(float *)(param_1 + 0x98)) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        *(undefined2 *)(param_1 + 0x1b0) = 0;
        fVar42 = DAT_001fd1a8;
        *(undefined2 *)(param_1 + 0x1b2) = 0;
        fVar38 = DAT_001fd554;
        iVar15 = *piVar6;
        fVar33 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x1fc) = (short)(int)(fVar42 / fVar33 + fVar9);
        fVar42 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x1fa) = (short)(int)(fVar38 / fVar42 + fVar9);
        fVar42 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x1d4) = (short)(int)(fVar7 / fVar42 + fVar9);
      }
    }
  }
  else if ((int)uVar16 < 8) {
    if (uVar16 == 4) {
      FUN_00373500(DAT_001fb868,fVar23,DAT_001fb538,param_1 + 0x208);
      FUN_00370084(param_1 + 0x1c8,DAT_001fb86c << 2,4);
      pfVar21 = DAT_001fb534;
      fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(param_1 + 0x1a9) = (char)(int)(fVar7 / fVar42 + fVar9);
      local_74 = 2;
      fVar42 = pfVar21[1];
      fVar33 = pfVar21[2];
      *(float *)(param_1 + 0x20c) = *pfVar21;
      *(float *)(param_1 + 0x210) = fVar42;
      *(float *)(param_1 + 0x214) = fVar33;
      FUN_00373500(*(undefined4 *)(param_1 + 0x1e0),fVar23,fVar23,param_1 + 0x6c);
      iVar15 = DAT_001fb528;
      if ((*(short *)(DAT_001fb528 + 0x1e) == 3) && (*(short *)(param_1 + 0x1d2) != 0)) {
        fVar42 = pfVar21[1];
        fVar33 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                    0x28) + 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar33 = fVar33 + fVar39;
        uVar16 = in_fpscr & 0xfffffff | (uint)(fVar42 < fVar33) << 0x1f |
                 (uint)(fVar42 == fVar33) << 0x1e;
        in_fpscr = uVar16 | (uint)(NAN(fVar42) || NAN(fVar33)) << 0x1c;
        bVar5 = (byte)(uVar16 >> 0x18);
        if (((bool)(bVar5 >> 6 & 1) || bVar5 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
           ((int)SQRT(*pfVar21 * *pfVar21 + pfVar21[2] * pfVar21[2]) <= DAT_001fb518)) {
          if ((int)fVar41 < DAT_001fb518 + -0x3280000) {
            iVar25 = FUN_00339660(param_1,param_2,0);
            if (iVar25 != 0) {
              FUN_00339600(param_1,0);
            }
            *(undefined2 *)(param_1 + 0x1b0) = 5;
            *(float *)(param_1 + 0x1e8) = fVar38;
            *(float *)(param_1 + 0x1ec) = fVar8;
            fVar42 = DAT_001fb874;
            iVar25 = *piVar6;
            fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar25 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(param_1 + 0x1d4) = (short)(int)(DAT_001fb870 / fVar38 + fVar9);
            *(undefined2 *)(param_1 + 0x1d2) = 0;
            *(undefined2 *)(param_1 + 0x1d6) = 0;
            uVar26 = DAT_001fb878;
            fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar25 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(param_1 + 0x1d8) = (short)(int)(fVar42 / fVar38 + fVar9);
            *(undefined2 *)(iVar15 + 0x1e) = 4;
            *(int *)(iVar15 + 0xcc) = param_1;
            fVar42 = (float)FUN_00371e50(uVar26);
            iVar25 = DAT_001fb880;
            *(float *)(DAT_001fb87c + 4) = fVar35 - fVar42;
            iVar19 = *(int *)(param_1 + 0x204);
            if (*(char *)(iVar15 + 0x16) == '\x02') {
              if (iVar25 < iVar19) {
                fVar42 = (float)FUN_00371e50(DAT_001fb884);
                iVar25 = (int)(short)((short)(int)fVar42 + 10);
              }
              else if (DAT_001fb1b4 < iVar19) {
                fVar42 = (float)FUN_00371e50(DAT_001fb888);
                iVar25 = (int)(short)((short)(int)fVar42 + 0x14);
              }
              else if (DAT_001fae3c < iVar19) {
                fVar42 = (float)FUN_00371e50(DAT_001fb888);
                iVar25 = (int)(short)((short)(int)fVar42 + 0x1e);
              }
              else {
                fVar42 = (float)FUN_00371e50(DAT_001fb88c);
                iVar25 = (int)(short)((short)(int)fVar42 + 0x28);
              }
            }
            else if (iVar25 < iVar19) {
              fVar42 = (float)FUN_00371e50(fVar39);
              iVar25 = (int)(short)((short)(int)fVar42 + 10);
            }
            else if (DAT_001fb1b4 < iVar19) {
              fVar42 = (float)FUN_00371e50(fVar39);
              iVar25 = (int)(short)((short)(int)fVar42 + 0xf);
            }
            else if (DAT_001fae3c < iVar19) {
              fVar42 = (float)FUN_00371e50(fVar39);
              iVar25 = (int)(short)((short)(int)fVar42 + 0x11);
            }
            else {
              fVar42 = (float)FUN_00371e50(fVar39);
              iVar25 = (int)(short)((short)(int)fVar42 + 0x19);
            }
            fVar42 = (float)VectorSignedToFloat(iVar25,(byte)(in_fpscr >> 0x15) & 3);
            fVar38 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar33 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(iVar15 + 0x3c) = (short)(int)((fVar42 * fVar20) / fVar38 + fVar9);
            fVar42 = (float)VectorSignedToFloat(iVar25,(byte)(in_fpscr >> 0x15) & 3);
            *(short *)(iVar15 + 0x2c) = (short)(int)((fVar42 * fVar20) / fVar33 + fVar9);
            *(undefined1 *)(iVar15 + 0x1a) = 0;
            *(undefined2 *)(iVar15 + 0x3a) = 100;
            *(undefined2 *)(iVar15 + 0x26) = 0;
          }
          goto LAB_001fd218;
        }
      }
      goto LAB_001fb4f8;
    }
    if (uVar16 == 5) {
      *(undefined4 *)(param_1 + 0xfc) = DAT_001fbecc;
      *(undefined4 *)(param_1 + 0x100) = uVar11;
      iVar15 = DAT_001fbed4;
      *(short *)(iVar19 + 0x26) = *(short *)(iVar19 + 0x26) + 1;
      FUN_00370084(param_1 + 0x1c8,&DAT_00001f40 + iVar15,4);
      *(int *)(iVar19 + 0xcc) = param_1;
      FUN_00370084(iVar25 + 0xbe,(int)(short)(*(short *)(param_1 + 0x92) + -0x8000),5,0x500);
      if (((*(char *)(iVar19 + 0x1a) == '\0') && (*(short *)(iVar19 + 0x42) < 0x14)) &&
         ((*(ushort *)(iVar19 + 0x32) & 3) == 0)) {
        *(short *)(iVar19 + 0x42) = *(short *)(iVar19 + 0x42) + 1;
      }
      iVar15 = DAT_001fb528;
      if (((*(short *)(DAT_001fb528 + 0x3c) != 0) && (*(char *)(iVar19 + 0x1a) == '\0')) &&
         ((((int)*(float *)(param_2 + 0x40) < -0x32 && (-0x28 < *(short *)(DAT_001fb528 + 0x22))) ||
          ((*(uint *)(param_2 + 0x18) & 1) != 0)))) {
        if ((int)*(float *)(param_2 + 0x40) < -0x32) {
          fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar42 = ((DAT_001fb88c - (*(float *)(param_1 + 0x204) - DAT_001fb888) * DAT_001fbed8) *
                   fVar20) / fVar42;
          uVar16 = in_fpscr & 0xfffffff | (uint)(fVar42 < fVar36) << 0x1f |
                   (uint)(fVar42 == fVar36) << 0x1e;
          in_fpscr = uVar16 | (uint)(NAN(fVar42) || NAN(fVar36)) << 0x1c;
          bVar5 = (byte)(uVar16 >> 0x18);
          if (!(bool)(bVar5 >> 6 & 1) && bVar5 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            uVar27 = VectorFloatToUnsigned(fVar42,3);
            *(char *)(param_1 + 0x1aa) = (char)uVar27;
            *(short *)(param_1 + 0x1ac) = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
            *(undefined1 *)(param_1 + 0x1ae) = 1;
          }
        }
        *(undefined4 *)(param_1 + 0x1f0) = DAT_001fbedc;
        *(undefined4 *)(param_1 + 500) = DAT_001fbee0;
        *(undefined1 *)(iVar15 + 0x1a) = 1;
        FUN_0036ec40(0,DAT_001fbee4);
        *(undefined2 *)(iVar15 + 0x2e) = 0;
        fVar42 = DAT_001fbee8;
        uVar27 = DAT_001fbec0;
        local_ec = DAT_001fbebc;
        sVar18 = *(short *)(*piVar6 + 0x110);
        fVar38 = (float)VectorSignedToFloat((int)sVar18,(byte)(in_fpscr >> 0x15) & 3);
        *(short *)(iVar15 + 0x2c) = (short)(int)(DAT_001fbec8 / fVar38 + fVar9);
        fVar38 = (float)VectorSignedToFloat((int)sVar18,(byte)(in_fpscr >> 0x15) & 3);
        *(char *)(iVar15 + 0x1b) = (char)(int)(fVar42 / fVar38 + fVar9);
        FUN_0037547c(DAT_001fbeec,0,4,uVar27,uVar27);
      }
      uVar37 = DAT_001fc31c;
      uVar27 = DAT_001fc310;
      fVar41 = DAT_001fbf00;
      fVar33 = DAT_001fbefc;
      fVar42 = DAT_001fbef8;
      fVar38 = DAT_001fbef4;
      iVar15 = DAT_001fb528;
      fVar43 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28)
                                                         + 2),(byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar43 <= *(float *)(param_1 + 0x2c)) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar43 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_001fbec4 / fVar43 + fVar9) < (int)*(short *)(param_1 + 0x1d4)) {
          uVar22 = 7;
        }
        else {
          uVar22 = 0xf;
        }
        if ((*(ushort *)(param_1 + 0x1b4) & uVar22) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        fVar43 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_001fbec4 / fVar43 + fVar9) < (int)*(short *)(param_1 + 0x1d4)) {
          if (*(short *)(param_1 + 0x1d2) == 0) {
            local_80 = fVar36;
            local_7c = fVar36;
            local_78 = (float)uVar11;
            uVar22 = 0;
            do {
              fVar42 = (float)FUN_003738a8(DAT_001fbf04);
              fVar36 = (float)VectorSignedToFloat(*(short *)(param_1 + 0x92) + 0x8000,
                                                  (byte)(in_fpscr >> 0x15) & 3);
              FUN_003735e8(fVar42 + fVar36 * fVar33 * fVar41,auStack_d4,0);
              FUN_003735ac(&local_8c,auStack_d4,&local_80);
              fVar36 = *(float *)(param_1 + 0x28) + local_8c;
              *(float *)(param_1 + 0x20c) = fVar36;
              iVar15 = DAT_001fc300;
              fVar42 = *(float *)(param_1 + 0x30) + local_84;
              *(float *)(param_1 + 0x214) = fVar42;
              if ((int)(fVar36 * fVar36 + fVar42 * fVar42) < iVar15) break;
              uVar22 = uVar22 + 1;
            } while (uVar22 < 100);
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          if (*(short *)(param_1 + 0x1d6) == 0) {
            cVar3 = *(char *)(DAT_001fb528 + 0x1a);
            bVar29 = cVar3 != '\0';
            if (!bVar29) {
              cVar3 = *(char *)(DAT_001fb528 + 0x16);
            }
            if (bVar29 || cVar3 != '\x02') {
              *(undefined4 *)(param_1 + 0x1e8) = DAT_001fc320;
              *(float *)(param_1 + 0x1ec) = fVar8;
              FUN_00373500(fVar39,fVar23,fVar9,param_1 + 0x6c);
            }
            else {
              *(float *)(param_1 + 0x1e8) = fVar23;
              *(undefined4 *)(param_1 + 0x1ec) = uVar26;
              FUN_00373500(fVar20,fVar23,uVar37,param_1 + 0x6c);
            }
            if (*(char *)(param_1 + 0x1a8) == '\0') {
              fVar42 = fVar38;
            }
            *(float *)(iVar15 + 0xe0) = fVar23 - *(float *)(param_1 + 0x204) * fVar42;
          }
          else {
            *(float *)(DAT_001fb528 + 0xe0) = fVar36;
            *(undefined4 *)(param_1 + 0x1e8) = uVar27;
            *(float *)(param_1 + 0x1ec) = DAT_001fc314;
            FUN_00373500(DAT_001fc318,fVar23,fVar23,param_1 + 0x6c);
            FUN_00370084(param_1 + 0x1c8,20000,2);
          }
        }
        else {
          if (((((int)*(short *)(param_1 + 0x1d4) & 0xfU) == 0) && ((*puVar28 & 1) != 0)) &&
             ((*(int *)(param_1 + 0x204) < DAT_001fb1b4 ||
              (fVar33 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                   (byte)(in_fpscr >> 0x15) & 3),
              (int)(DAT_001fc314 / fVar33 + fVar9) <= (int)*(short *)(DAT_001fb528 + 0x26))))) {
            fVar33 = (float)FUN_00371e50(DAT_001fbee8);
            fVar33 = (float)VectorSignedToFloat((short)(int)fVar33 + 0xf,
                                                (byte)(in_fpscr >> 0x15) & 3);
            fVar41 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(char *)(param_1 + 0x1aa) = (char)(int)((fVar33 * fVar20) / fVar41 + fVar9);
            *(short *)(param_1 + 0x1ac) = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
          }
          uVar27 = DAT_001fc324;
          *(float *)(param_1 + 0x1e8) = fVar23;
          *(undefined4 *)(param_1 + 0x1ec) = uVar27;
          if (*(char *)(param_1 + 0x1a8) == '\0') {
            fVar42 = fVar38;
          }
          *(float *)(DAT_001fb528 + 0xe0) = DAT_001fc328 - *(float *)(param_1 + 0x204) * fVar42;
          FUN_00373500(fVar40,fVar23,fVar9,param_1 + 0x6c);
          if (*(short *)(param_1 + 0x1d4) == 0) {
            *(undefined1 *)(param_1 + 0x1aa) = 0;
            fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            if ((int)*(short *)(DAT_001fb528 + 0x26) < (int)(DAT_001fc314 / fVar42 + fVar9)) {
              fVar42 = (float)FUN_00371e50(DAT_001fc32c);
              fVar42 = (float)VectorSignedToFloat((short)(int)fVar42 + 0x32,
                                                  (byte)(in_fpscr >> 0x15) & 3);
              fVar38 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              *(short *)(param_1 + 0x1d4) = (short)(int)((fVar42 * fVar20) / fVar38 + fVar9);
            }
            else {
              fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                  (byte)(in_fpscr >> 0x15) & 3);
              if ((int)*(short *)(DAT_001fb528 + 0x26) < (int)(DAT_001fc6d8 / fVar42 + fVar9)) {
                fVar42 = (float)FUN_00371e50(DAT_001fc6dc);
                fVar42 = (float)VectorSignedToFloat((short)(int)fVar42 + 0x1e,
                                                    (byte)(in_fpscr >> 0x15) & 3);
                fVar38 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                    (byte)(in_fpscr >> 0x15) & 3);
                *(short *)(param_1 + 0x1d4) = (short)(int)((fVar42 * fVar20) / fVar38 + fVar9);
              }
              else {
                fVar42 = (float)FUN_00371e50(fVar44);
                fVar42 = (float)VectorSignedToFloat((short)(int)fVar42 + 0x19,
                                                    (byte)(in_fpscr >> 0x15) & 3);
                fVar38 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                    (byte)(in_fpscr >> 0x15) & 3);
                *(short *)(param_1 + 0x1d4) = (short)(int)((fVar42 * fVar20) / fVar38 + fVar9);
              }
            }
          }
        }
      }
      if (*(char *)(DAT_001fb528 + 0xc) != '\0') {
        *(float *)(DAT_001fb528 + 0xe0) = fVar36;
      }
      fVar42 = DAT_001fc6f0;
      cVar3 = *(char *)(DAT_001fb528 + 0x1a);
      bVar29 = cVar3 == '\0';
      if (bVar29) {
        cVar3 = *(char *)(DAT_001fb528 + 0x16);
      }
      if (!bVar29 || cVar3 != '\x02') {
        if (*(int *)(param_1 + 0x6c) < DAT_001fc6e0) {
          local_8c = DAT_001fc6e4;
          if ((*(ushort *)(DAT_001fb528 + 0x32) & 8) != 0) {
            local_8c = DAT_001fc6e8;
          }
        }
        else {
          local_8c = DAT_001fc714;
          if ((*(ushort *)(DAT_001fb528 + 0x32) & 4) != 0) {
            local_8c = DAT_001fc718;
          }
        }
        FUN_00373500(DAT_001fc6f4,DAT_001fc6f0,DAT_001fc6ec,DAT_001fc6f8);
        FUN_00373500(local_8c,DAT_001fc6fc,fVar42,DAT_001fc700);
      }
      iVar15 = DAT_001fc708;
      pfVar21 = DAT_001fc704;
      fVar42 = *(float *)(param_1 + 0x21c);
      fVar38 = *(float *)(param_1 + 0x220);
      *DAT_001fc704 = *(float *)(param_1 + 0x218);
      pfVar21[1] = fVar42;
      pfVar21[2] = fVar38;
      fVar42 = DAT_001fc70c;
      uVar27 = DAT_001fc31c;
      local_80 = *pfVar21 - pfVar21[-3];
      local_7c = pfVar21[1] - pfVar21[-2];
      local_78 = pfVar21[2] - pfVar21[-1];
      if (iVar15 < (int)(local_80 * local_80 + local_7c * local_7c + local_78 * local_78)) {
        FUN_00373500(pfVar21[-3],DAT_001fc31c,*(float *)(param_1 + 0x6c) * fVar20,param_1 + 0x28);
        FUN_00373500(pfVar21[-2],uVar27,*(float *)(param_1 + 0x6c) * fVar42 * fVar44 * DAT_001fc6f0,
                     param_1 + 0x2c);
        FUN_00373500(pfVar21[-1],uVar27,*(float *)(param_1 + 0x6c) * fVar20,param_1 + 0x30);
      }
      if (((*puVar28 & 1) == 0) && (-0x1f < (int)*(float *)(param_2 + 0x40))) {
        if (*(short *)(DAT_001fc710 + 0x3a) != 0) {
          sVar18 = *(short *)(DAT_001fc710 + 0x3a) + -1;
LAB_001fc588:
          *(short *)(DAT_001fc710 + 0x3a) = sVar18;
        }
      }
      else if (*(short *)(DAT_001fc710 + 0x3a) < 100) {
        sVar18 = *(short *)(DAT_001fc710 + 0x3a) + 1;
        goto LAB_001fc588;
      }
      iVar15 = DAT_001fc710;
      if ((2 < *(short *)(DAT_001fc710 + 0x1e)) &&
         ((*(char *)(DAT_001fc710 + 0xc) == '\0' ||
          (fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                               (byte)(in_fpscr >> 0x15) & 3),
          (int)*(short *)(DAT_001fc710 + 0x26) <= (int)(fVar7 / fVar42 + fVar9))))) {
        fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((int)*(short *)(DAT_001fc710 + 0x26) < (int)(DAT_001fc71c / fVar42 + fVar9)) {
          bVar29 = *(short *)(DAT_001fc710 + 0x3c) != 0 || *(char *)(DAT_001fc710 + 0x1a) != '\0';
          sVar18 = 0;
          if (bVar29) {
            sVar18 = *(short *)(DAT_001fc710 + 0x3a);
          }
          if (bVar29 && sVar18 != 0) {
            fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            FUN_00368d94((int)*(short *)(DAT_001fc710 + 0x32),(int)(DAT_001fc720 / fVar42 + fVar9));
            if (extraout_r1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_003759d0();
            }
            if (DAT_001fcb58 <= *(int *)(param_1 + 0x98)) goto LAB_001fd218;
            *(undefined2 *)(param_1 + 0x1b0) = 6;
            iVar19 = DAT_001fcb60;
            fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(param_1 + 0x1d2) = (short)(int)(DAT_001fcb5c / fVar42 + fVar9);
            *(undefined2 *)(iVar19 + iVar25) = 3;
            *(short *)(iVar15 + 0x28) = *(short *)(iVar15 + 0x28) + 1;
            FUN_00367494(param_2,param_2 + 0x2298);
            uVar27 = DAT_001fcb64;
            *(undefined1 *)(iVar15 + 9) = 100;
            *(undefined4 *)(iVar15 + 0x104) = uVar27;
            *(undefined2 *)(iVar15 + 0x1e) = 5;
            *(float *)(param_1 + 0x1e8) = fVar23;
            *(float *)(param_1 + 0x1ec) = fVar35;
            *(float *)(param_1 + 500) = fVar8;
            fVar42 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                        0x28) + 2),
                                                (byte)(in_fpscr >> 0x15) & 3);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x2c) == fVar42) << 0x1e |
                       (uint)(fVar42 <= *(float *)(param_1 + 0x2c)) << 0x1d;
            bVar5 = (byte)(in_fpscr >> 0x18);
            if (!(bool)(bVar5 >> 5 & 1) || (bool)(bVar5 >> 6)) {
              FUN_00339600(param_1,1);
              FUN_00339660(param_1,param_2,1);
            }
            goto LAB_001fc8f8;
          }
        }
      }
      fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(DAT_001fc710 + 3) = (char)(int)(fVar34 / fVar42 + fVar9);
      if (*(short *)(iVar15 + 0x3c) == 0 && *(char *)(iVar15 + 0x1a) == '\0') {
        *(short *)(iVar15 + 0x2a) = (short)DAT_001fc728;
        if (*(char *)(iVar15 + 0xd) == '\x01') {
          uVar16 = *(uint *)(DAT_001fc72c + 0xed8) & 0x400;
        }
        else {
          uVar16 = *(uint *)(DAT_001fc72c + 0xed8) & 0x800;
        }
        if (uVar16 != 0) {
          *(undefined1 *)(iVar15 + 3) = 0;
        }
      }
      else {
        *(short *)(iVar15 + 0x2a) = (short)DAT_001fcb48;
        FUN_003655d0(0,10);
        fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(iVar15 + 0x2e) = (short)(int)(fVar7 / fVar42 + fVar9);
      }
      *(undefined2 *)(param_1 + 0x1b2) = 0;
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      fVar42 = DAT_001fcb50;
      iVar25 = *piVar6;
      fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar25 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1fc) = (short)(int)(DAT_001fcb4c / fVar38 + fVar9);
      fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar25 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1fa) = (short)(int)(fVar42 / fVar38 + fVar9);
      uVar26 = DAT_001fcb54;
      fVar42 = (float)VectorSignedToFloat((int)*(short *)(iVar25 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1d4) = (short)(int)(fVar7 / fVar42 + fVar9);
      *(undefined2 *)(param_1 + 0x1d2) = 0;
      *(float *)(param_1 + 0x1e8) = fVar23;
      *(undefined4 *)(param_1 + 0x1ec) = uVar26;
      if (*(short *)(iVar15 + 0x1e) == 4) {
        *(undefined2 *)(iVar15 + 0x1e) = 3;
      }
      *(float *)(iVar15 + 0xe0) = fVar9;
      *(undefined1 *)(param_1 + 0x1aa) = 0;
      goto LAB_001fd218;
    }
    if (uVar16 != 6) goto LAB_001fd218;
LAB_001fc8f8:
    FUN_00370084(param_1 + 0x1c8,DAT_001fcb68,2,4000);
    FUN_00373500(DAT_001fcb74,DAT_001fcb70,DAT_001fcb6c,DAT_001fcb78);
    iVar15 = DAT_001fc710;
    local_80 = *(float *)(DAT_001fc710 + 0x104);
    local_78 = (float)DAT_001fcb7c;
    local_7c = fVar44;
    if (*(char *)(DAT_001fc710 + 0xd) != '\x01') {
      local_7c = DAT_001fcb80;
      local_78 = (float)DAT_001fcb84;
    }
    fVar42 = (float)VectorSignedToFloat((int)*(short *)(iVar25 + 0xbe),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_003735e8(fVar42 * DAT_001fcb88 * DAT_001fcb8c,auStack_d4,0);
    FUN_003735ac(DAT_001fcb90,auStack_d4,&local_80);
    pfVar21 = DAT_001fcb90;
    *DAT_001fcb90 = *DAT_001fcb90 + *(float *)(iVar25 + 0x28);
    pfVar21[1] = pfVar21[1] + *(float *)(iVar25 + 0x2c);
    pfVar21[2] = pfVar21[2] + *(float *)(iVar25 + 0x30);
    fVar42 = *(float *)(iVar25 + 0x2c);
    fVar38 = *(float *)(iVar25 + 0x30);
    pfVar21[3] = *(float *)(iVar25 + 0x28);
    pfVar21[4] = fVar42;
    pfVar21[5] = fVar38;
    fVar42 = DAT_001fcb94;
    if (*(char *)(iVar15 + 0xd) != '\x01') {
      fVar42 = DAT_001fcb98;
    }
    pfVar21[4] = pfVar21[4] + fVar42;
    fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_001fcb9c / fVar42 + fVar9) == (int)*(short *)(param_1 + 0x1d2)) {
      FUN_0036ec40(0,DAT_001fcba0);
      fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(char *)(iVar15 + 3) = (char)(int)(DAT_001fcba4 / fVar42 + fVar9);
      uVar16 = VectorFloatToUnsigned(*(undefined4 *)(param_1 + 0x204),3);
      if (*(char *)(param_1 + 0x1a8) == '\0') {
        FUN_0034051c(uVar16 & 0xffff);
        if (*(int *)(param_1 + 0x204) < DAT_001fcba8) {
          if (*(int *)(param_1 + 0x204) < DAT_001fcb58) {
            uVar13 = (undefined2)DAT_001fd174;
          }
          else {
            uVar13 = (undefined2)DAT_001fd178;
          }
        }
        else {
          uVar13 = (undefined2)DAT_001fcbac;
        }
      }
      else {
        fVar42 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
        uVar16 = VectorFloatToUnsigned(fVar42 * fVar40,3);
        FUN_0034051c(uVar16 & 0xffff);
        uVar13 = (undefined2)DAT_001fd17c;
      }
      *(undefined2 *)(iVar15 + 0x2a) = uVar13;
      *(undefined1 *)(param_1 + 0x22d) = 0;
    }
    *(undefined2 *)(param_1 + 0x1b8) = 0xc000;
    local_80 = DAT_001fcbb0;
    *(short *)(param_1 + 0xbe) = *(short *)(iVar25 + 0xbe) + 0x5000;
    *(undefined2 *)(param_1 + 0x1c6) = 0;
    *(undefined2 *)(param_1 + 0x1bc) = 0;
    *(undefined2 *)(param_1 + 0x1ba) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    local_7c = DAT_001fcbb4;
    local_78 = fVar39;
    FUN_003735ac(&local_8c,auStack_d4,&local_80);
    uVar27 = DAT_001fcbb8;
    FUN_00373500(*(float *)(iVar25 + 0x23e8) + local_8c,fVar23,DAT_001fcbb8,param_1 + 0x28);
    FUN_00373500(*(float *)(iVar25 + 0x23ec) + local_88,fVar23,uVar27,param_1 + 0x2c);
    FUN_00373500(*(float *)(iVar25 + 0x23f0) + local_84,fVar23,uVar27,param_1 + 0x30);
    *(undefined4 *)(iVar15 + 0xf0) = DAT_001fcbbc;
    fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(fVar7 / fVar42 + fVar9) < (int)*(short *)(param_1 + 0x1d2)) {
LAB_001fce28:
      if (*(short *)(iVar15 + 0x1e) != 0) goto LAB_001fd218;
    }
    else {
      if (*(char *)(param_1 + 0x22d) == '\0') {
        iVar25 = FUN_003769d8(param_2 + 0x28a0);
        if (((iVar25 == 4) || (iVar25 = FUN_003769d8(param_2 + 0x28a0), iVar25 == 0)) &&
           (iVar25 = FUN_00346964(param_2), iVar25 != 0)) {
          FUN_003725e0(param_2);
          iVar25 = FUN_00369f3c(param_2);
          if (iVar25 == 0) {
            fVar42 = *(float *)(iVar15 + 0x54);
            in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar42 == fVar36) << 0x1e;
            if (SUB41(in_fpscr >> 0x1e,0)) {
              *(undefined4 *)(iVar15 + 0x54) = *(undefined4 *)(param_1 + 0x204);
              *(undefined1 *)(iVar15 + 0x10) = *(undefined1 *)(param_1 + 0x1a8);
              *(undefined1 *)(iVar15 + 0x12) = *(undefined1 *)(iVar15 + 0x16);
              FUN_00374428(param_1);
            }
            else {
              cVar3 = *(char *)(param_1 + 0x1a8);
              cVar4 = *(char *)(iVar15 + 0x10);
              if ((cVar3 == '\0' && cVar4 == '\0') &&
                 ((short)(int)*(float *)(param_1 + 0x204) < (short)(int)fVar42)) {
                *(undefined1 *)(param_1 + 0x22d) = 1;
                uVar27 = DAT_001fd184;
                fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                                    (byte)(in_fpscr >> 0x15) & 3);
                *(short *)(param_1 + 0x1d2) = (short)(int)(DAT_001fd180 / fVar42 + fVar9);
                FUN_00367c7c(param_2,uVar27,0);
              }
              else {
                *(undefined4 *)(iVar15 + 0x54) = *(undefined4 *)(param_1 + 0x204);
                *(char *)(iVar15 + 0x10) = cVar3;
                *(undefined1 *)(iVar15 + 0x12) = *(undefined1 *)(iVar15 + 0x16);
                *(float *)(param_1 + 0x204) = fVar42;
                *(char *)(param_1 + 0x1a8) = cVar4;
              }
            }
          }
          if (*(char *)(param_1 + 0x22d) == '\0') goto LAB_001fce20;
        }
        goto LAB_001fce28;
      }
      if (*(char *)(param_1 + 0x22d) != '\x01') goto LAB_001fce28;
      iVar25 = FUN_003769d8(param_2 + 0x28a0);
      if (((iVar25 != 4) && (iVar25 = FUN_003769d8(param_2 + 0x28a0), iVar25 != 0)) ||
         (iVar25 = FUN_00346964(param_2), iVar25 == 0)) goto LAB_001fce28;
      FUN_003725e0(param_2);
      iVar25 = FUN_00369f3c(param_2);
      if (iVar25 != 0) {
        uVar2 = *(undefined1 *)(iVar15 + 0x10);
        uVar27 = *(undefined4 *)(iVar15 + 0x54);
        *(undefined4 *)(iVar15 + 0x54) = *(undefined4 *)(param_1 + 0x204);
        *(undefined1 *)(iVar15 + 0x12) = *(undefined1 *)(iVar15 + 0x16);
        *(undefined4 *)(param_1 + 0x204) = uVar27;
        *(undefined1 *)(param_1 + 0x1a8) = uVar2;
      }
LAB_001fce20:
      *(undefined2 *)(iVar15 + 0x1e) = 0;
    }
    if (*(int *)(param_1 + 0x13c) != 0) {
      *(undefined2 *)(param_1 + 0x1b2) = 0;
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      fVar42 = DAT_001fcb50;
      iVar15 = *piVar6;
      fVar36 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1fc) = (short)(int)(DAT_001fcb4c / fVar36 + fVar9);
      fVar36 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1fa) = (short)(int)(fVar42 / fVar36 + fVar9);
      fVar42 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1d4) = (short)(int)(fVar7 / fVar42 + fVar9);
      *(undefined2 *)(param_1 + 0x1d2) = 0;
      *(float *)(param_1 + 0x1e8) = fVar23;
      *(undefined4 *)(param_1 + 0x1ec) = uVar26;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00350be0(param_1 + 0x230,param_2);
    }
    *(undefined4 *)(iVar15 + 0xf4) = DAT_001fd188;
    *(undefined4 *)(iVar15 + 0xf0) = DAT_001fd18c;
    FUN_003655d0(0,10);
    fVar42 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(iVar15 + 0x2e) = (short)(int)(fVar34 / fVar42 + fVar9);
    *(undefined1 *)(iVar15 + 9) = 3;
  }
  else if (uVar16 == 10) {
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x10);
    FUN_00373500(fVar40,fVar23,fVar9,param_1 + 0x6c);
    FUN_00373500(DAT_001faae8,fVar23,DAT_001faae4,param_1 + 0x208);
    uVar26 = DAT_001faaf0;
    if ((int)fVar41 < DAT_001faaec) {
      *(undefined2 *)(param_1 + 0x1b0) = 0xb;
      *(undefined4 *)(param_1 + 0x1e8) = uVar26;
      *(float *)(param_1 + 0x1ec) = fVar35;
    }
    FUN_00339890(param_1,puVar28);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar42 * fVar33 <= *(float *)(param_1 + 0x98)) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      *(undefined2 *)(param_1 + 0x1b2) = 0;
      fVar42 = DAT_001fb520;
      iVar15 = *piVar6;
      fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1fc) = (short)(int)(DAT_001fb1ac / fVar38 + fVar9);
      fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1fa) = (short)(int)(fVar42 / fVar38 + fVar9);
      fVar42 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1d4) = (short)(int)(fVar7 / fVar42 + fVar9);
    }
  }
  else if (uVar16 == 0xb) {
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x10);
    FUN_00373500(fVar36,fVar23,uVar37,param_1 + 0x6c);
    FUN_00373500(fVar36,fVar23,DAT_001faae4,param_1 + 0x208);
    if (DAT_001faaec <= (int)fVar41) {
      *(undefined2 *)(param_1 + 0x1b0) = 10;
      *(float *)(param_1 + 0x1e8) = fVar23;
      *(undefined4 *)(param_1 + 0x1ec) = uVar26;
    }
    FUN_00339890(param_1,puVar28);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar42 * fVar33 <= *(float *)(param_1 + 0x98)) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      *(undefined2 *)(param_1 + 0x1b0) = 0;
      *(undefined2 *)(param_1 + 0x1b2) = 0;
      fVar42 = DAT_001faafc;
      iVar15 = *piVar6;
      fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1fc) = (short)(int)(DAT_001faaf8 / fVar38 + fVar9);
      fVar38 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1fa) = (short)(int)(fVar42 / fVar38 + fVar9);
      fVar42 = (float)VectorSignedToFloat((int)*(short *)(iVar15 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x1d4) = (short)(int)(fVar7 / fVar42 + fVar9);
    }
    iVar25 = FUN_003769d8(param_2 + 0x28a0);
    iVar15 = DAT_001fa72c;
    if (iVar25 == 0) {
      if (*(ushort *)(DAT_001fa72c + 0xc) - 0xc000 < 0x1c) {
        *(undefined2 *)(param_1 + 0x1b0) = 7;
        fVar42 = (float)FUN_00371e50(fVar7);
        *(short *)(param_1 + 0x1d8) = (short)(int)fVar42 + 200;
      }
      if (*(ushort *)(iVar15 + 0xc) - 0x3aaa < 0x1c) {
        *(undefined2 *)(param_1 + 0x1b0) = 7;
        fVar42 = (float)FUN_00371e50(fVar7);
        *(short *)(param_1 + 0x1d8) = (short)(int)fVar42 + 200;
      }
    }
  }
  else if (uVar16 == 100) {
    sVar18 = (short)DAT_001fa728;
    uVar16 = *(uint *)(DAT_001fa72c + 0xed8);
    if (*(char *)(DAT_001f9ec8 + 0xd) == '\x01') {
      if ((uVar16 & 0x7f) == 0) {
LAB_001fa380:
        *(short *)(param_1 + 0x116) = sVar18 + -3;
        goto LAB_001fa384;
      }
      uVar16 = uVar16 & 0x80;
    }
    else {
      if ((uVar16 & 0x7f000000) == 0) goto LAB_001fa380;
      uVar16 = uVar16 & 0x80000000;
    }
    if (uVar16 == 0) {
      *(short *)(param_1 + 0x116) = sVar18 + -0x28;
    }
    else {
      *(short *)(param_1 + 0x116) = sVar18;
    }
LAB_001fa384:
    if (*(char *)(param_1 + 0x22b) == '\0') {
      if (*(char *)(param_1 + 0x22c) == '\0') {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
        if ((*(short *)(iVar15 + 0x1e) == 0) &&
           ((*(uint *)(*(int *)(local_70 + 0xac) + 4) & 0x100) == 0)) {
          uVar16 = VectorFloatToUnsigned(*(undefined4 *)(iVar15 + 200),3);
          FUN_0034051c(uVar16 & 0xffff);
        }
        iVar25 = FUN_0036bc98(param_1,param_2);
        if (iVar25 == 0) {
          FUN_00363cb8(param_1,param_2);
        }
        else {
          *(undefined1 *)(param_1 + 0x22b) = 1;
        }
      }
      else {
        *(char *)(param_1 + 0x22c) = *(char *)(param_1 + 0x22c) + -1;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      }
    }
    else {
      iVar25 = FUN_00369a48(param_1,param_2);
      if (iVar25 != 0) {
        *(undefined1 *)(param_1 + 0x22b) = 0;
        *(undefined1 *)(param_1 + 0x22c) = 0x14;
      }
    }
    uVar26 = DAT_001fa730;
    *(float *)(param_1 + 0xfc) = fVar35;
    *(undefined4 *)(param_1 + 0x100) = uVar26;
    local_ec = 0.0;
    fVar42 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar35 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar26 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                                 (byte)(in_fpscr >> 0x15) & 3);
    FUN_003591e4(uVar26,fVar35 + DAT_001fa2b4,fVar42 - DAT_001fa734,param_1 + 0x888,0xff,0xff,0xff,
                 0xff);
    *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(iVar15 + 200);
    local_88 = (float)FUN_002cfca0((int)(short)((short)*(undefined4 *)(param_2 + 0x5bf4) * 300));
    local_84 = (float)FUN_002cfca0((int)(short)((short)*(undefined4 *)(param_2 + 0x5bf4) * 0xe6));
    iVar15 = DAT_001fa744;
    fVar42 = DAT_001fa738;
    local_84 = local_84 * fVar40;
    *(float *)(param_1 + 0x28) = DAT_001fa738;
    fVar35 = DAT_001fa740;
    *(float *)(param_1 + 0x2c) = local_88 + DAT_001fa73c;
    *(float *)(param_1 + 0x30) = local_84 + fVar35;
    *(undefined2 *)(param_1 + 0xbe) = 0x8000;
    fVar35 = *(float *)(param_1 + 0xf4);
    if (((int)fVar35 < iVar15) &&
       (uVar16 = in_fpscr & 0xfffffff | (uint)(fVar35 < fVar36) << 0x1f |
                 (uint)(fVar35 == fVar36) << 0x1e,
       in_fpscr = uVar16 | (uint)(NAN(fVar35) || NAN(fVar36)) << 0x1c,
       bVar5 = (byte)(uVar16 >> 0x18),
       !(bool)(bVar5 >> 6 & 1) && bVar5 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
      local_e0 = (float)FUN_003738a8(fVar39);
      local_e0 = local_e0 + fVar42;
      local_dc = DAT_001fa748;
      fVar42 = (float)FUN_003738a8(fVar39);
      local_d8 = (short *)(fVar42 + DAT_001fa74c);
      pfVar21 = *(float **)(param_2 + 0x5c28);
      fVar42 = (float)FUN_00371e50(DAT_001fa750);
      sVar18 = 0;
      fVar42 = fVar42 + DAT_001fa754;
      local_ec = fVar36;
      local_e8 = fVar23;
      local_e4 = fVar36;
      do {
        if (*(char *)(pfVar21 + 9) == '\0') {
          *(undefined1 *)(pfVar21 + 9) = 4;
          uVar26 = DAT_001fa75c;
          *pfVar21 = local_e0;
          pfVar21[1] = local_dc;
          pfVar21[2] = (float)local_d8;
          pfVar10 = DAT_001fa758;
          pfVar21[3] = fVar36;
          pfVar21[4] = fVar23;
          pfVar21[5] = fVar36;
          fVar36 = pfVar10[1];
          fVar23 = pfVar10[2];
          pfVar21[6] = *pfVar10;
          pfVar21[7] = fVar36;
          pfVar21[8] = fVar23;
          fVar36 = (float)FUN_00371e50(uVar26);
          *(char *)((int)pfVar21 + 0x25) = (char)(int)fVar36;
          pfVar21[0xc] = fVar42;
          *(undefined2 *)(pfVar21 + 0xb) = 1;
          break;
        }
        sVar18 = sVar18 + 1;
        pfVar21 = pfVar21 + 0x10;
      } while (sVar18 < 0x5a);
    }
    fVar42 = DAT_001fa760;
    fVar36 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b4),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar23 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar36 = (float)FUN_002cfca0((int)(short)(int)(fVar36 * fVar23 * DAT_001fa760 * DAT_001fa764));
    FUN_00370084(param_1 + 0x1ca,(int)(short)(int)(DAT_001fa768 + fVar36 * DAT_001fa768),2,2000);
    fVar36 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b4),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar23 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar42 = (float)FUN_002cfca0((int)(short)(int)(fVar36 * fVar23 * fVar42 * DAT_001fa76c));
    FUN_00370084(param_1 + 0x1cc,(int)(short)(int)(fVar42 * DAT_001fa770),2,2000);
    *(undefined4 *)(param_1 + 0x1e8) = DAT_001fa774;
    *(undefined4 *)(param_1 + 0x1ec) = DAT_001fa778;
    return;
  }
LAB_001fd218:
  fVar42 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b4),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar38 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001fd558 + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar42 = (float)FUN_002cfca0((int)(short)(int)(fVar42 * fVar38 * DAT_001fd55c * DAT_001fd560));
  FUN_00370084(param_1 + 0x1ca,(int)(short)(int)(fVar8 + fVar42 * fVar8),2,2000);
  if (*(short *)(param_1 + 0x1b0) == 6) goto LAB_001fdb48;
  fVar42 = *(float *)(param_1 + 0x2c);
  fVar38 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2
                                                     ),(byte)(in_fpscr >> 0x15) & 3);
  uVar32 = in_fpscr & 0xfffffff | (uint)(fVar42 < fVar38) << 0x1f | (uint)(fVar42 == fVar38) << 0x1e
  ;
  uVar16 = uVar32 | (uint)(NAN(fVar42) || NAN(fVar38)) << 0x1c;
  bVar5 = (byte)(uVar32 >> 0x18);
  if ((bool)(bVar5 >> 6 & 1) || bVar5 >> 7 != ((byte)(uVar16 >> 0x1c) & 1)) {
    FUN_0036fc20(fVar23,fVar40,param_1 + 0x1dc);
    if (*(ushort *)(param_1 + 0x1b0) < 0xfffe && *(ushort *)(param_1 + 0x1b0) != 0xffe7) {
      *(undefined2 *)(param_1 + 0x1be) = 0;
    }
    *(undefined2 *)(param_1 + 0x1c2) = 0;
    *(undefined2 *)(param_1 + 0x1c0) = 0;
    uVar26 = 4;
    local_98 = 4;
    local_a0 = 4;
    local_9c = 0x2000;
    local_a4 = 0x2000;
    local_d8 = (short *)(param_1 + 0x36);
    iVar25 = (int)(short)(int)*(float *)(param_1 + 0x208);
    sVar18 = *local_d8;
    sVar14 = FUN_00368d94((int)(short)((short)local_94 - sVar18),local_74);
    iVar15 = (int)sVar14;
    if (iVar25 < sVar14) {
      iVar15 = iVar25;
    }
    if (iVar15 < -iVar25) {
      iVar15 = (int)(short)-iVar25;
    }
    *local_d8 = sVar18 + (short)iVar15;
    fVar42 = (float)VectorSignedToFloat(iVar15,(byte)(uVar16 >> 0x15) & 3);
    puVar24 = (undefined1 *)(int)(short)(int)(fVar42 * fVar20);
    FUN_00370084(param_1 + 0x34,local_90,local_74,
                 (int)(short)(int)(*(float *)(param_1 + 0x208) * fVar9));
    if ((int)puVar24 < 0x1f41) {
      if ((int)puVar24 < -8000) {
        puVar24 = DAT_001fd568;
      }
    }
    else {
      puVar24 = &DAT_00001f40;
    }
    if (*(int *)(param_1 + 0x6c) < DAT_001fd56c) {
      FUN_00370084(param_1 + 0x1c6,puVar24,3,DAT_001fd574);
    }
    else {
      FUN_00370084(param_1 + 0x1c6,puVar24,2,DAT_001fd570);
    }
    FUN_00365860(param_1);
  }
  else {
    *(float *)(param_1 + 0x1e8) = DAT_001fd564;
    *(float *)(param_1 + 0x1ec) = fVar8;
    FUN_00370084(param_1 + 0x1c6,0,5,2000);
    uVar26 = 3;
    local_98 = 3;
    local_a0 = 3;
    local_9c = 0x2000;
    local_a4 = 0x2000;
    *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 0x1dc) - fVar23;
    *(undefined2 *)(param_1 + 0x1d6) = 0;
  }
  uVar27 = 0x2000;
  FUN_0036b96c(param_1);
  fVar42 = DAT_001fd564;
  *(float *)(param_1 + 0x2c) =
       *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x1dc) * DAT_001fd564;
  if (*(char *)(param_1 + 0x1aa) == '\0') {
    *(undefined1 *)(param_1 + 0x1ae) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x1c0) = *(undefined2 *)(param_1 + 0x1ac);
    *(char *)(param_1 + 0x1aa) = *(char *)(param_1 + 0x1aa) + -1;
    bVar29 = *(char *)(param_1 + 0x1ae) == '\0';
    if (bVar29) {
      uVar26 = 10;
      uVar27 = 0x800;
    }
    *(short *)(param_1 + 0x1be) = -(*(short *)(param_1 + 0xbc) + 0x500);
    local_a0 = 5;
    if (!bVar29) {
      uVar26 = 5;
      uVar27 = 0x4000;
    }
    local_a4 = 0x4000;
  }
  FUN_00370084(param_1 + 0x1b8,(int)*(short *)(param_1 + 0x1be),local_a0,local_a4);
  FUN_00370084(param_1 + 0x1ba,(int)*(short *)(param_1 + 0x1c0),uVar26,uVar27);
  FUN_00370084(param_1 + 0x1bc,(int)*(short *)(param_1 + 0x1c2),local_98,local_9c);
  if (*(int *)(param_1 + 0x6c) < 0x3f000001) {
    FUN_00370084(param_1 + 0xbc,0,10,(int)*(short *)(param_1 + 0x1d0));
    FUN_00370084(param_1 + 0x1d0,0x500,1,0x20);
  }
  else {
    FUN_00370084(param_1 + 0xbc,(int)-*(short *)(param_1 + 0x34),10,0x1000);
    *(undefined2 *)(param_1 + 0x1d0) = 0;
  }
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  uVar26 = DAT_001fd9e0;
  if (*(ushort *)(param_1 + 0x1b0) < 0xfffe && *(ushort *)(param_1 + 0x1b0) != 0xffe7) {
    fVar38 = *(float *)(param_1 + 0x2c);
    iVar15 = (int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2);
    fVar33 = (float)VectorSignedToFloat(iVar15,(byte)(uVar16 >> 0x15) & 3);
    uVar32 = uVar16 & 0xfffffff;
    uVar1 = uVar32 | (uint)(fVar38 < fVar33) << 0x1f | (uint)(fVar38 == fVar33) << 0x1e;
    uVar16 = uVar1 | (uint)(NAN(fVar38) || NAN(fVar33)) << 0x1c;
    bVar5 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar5 >> 6 & 1) && bVar5 >> 7 == ((byte)(uVar16 >> 0x1c) & 1)) {
      fVar33 = (float)VectorSignedToFloat(iVar15,(byte)(uVar16 >> 0x15) & 3);
      uVar16 = uVar32 | (uint)(*(float *)(param_1 + 0x10c) == fVar33) << 0x1e |
               (uint)(fVar33 <= *(float *)(param_1 + 0x10c)) << 0x1d;
      bVar5 = (byte)(uVar16 >> 0x18);
      if (!(bool)(bVar5 >> 5 & 1) || (bool)(bVar5 >> 6)) {
        FUN_00339660(param_1,param_2,1);
        FUN_00339600(param_1,1);
        *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 100);
        *(float *)(param_1 + 100) = fVar36;
        fVar38 = (float)FUN_003738a8(DAT_001fd9d4);
        *(short *)(param_1 + 0x1c2) = (short)(int)fVar38;
        goto LAB_001fd6c4;
      }
    }
    fVar33 = (float)VectorSignedToFloat(iVar15,(byte)(uVar16 >> 0x15) & 3);
    uVar32 = uVar16 & 0xfffffff;
    uVar16 = uVar32 | (uint)(fVar33 <= fVar38) << 0x1d;
    if (!SUB41(uVar16 >> 0x1d,0)) {
      fVar38 = (float)VectorSignedToFloat(iVar15,(byte)(uVar16 >> 0x15) & 3);
      uVar32 = uVar32 | (uint)(*(float *)(param_1 + 0x10c) < fVar38) << 0x1f;
      uVar16 = uVar32 | (uint)(NAN(*(float *)(param_1 + 0x10c)) || NAN(fVar38)) << 0x1c;
      if ((byte)(uVar32 >> 0x1f) == ((byte)(uVar16 >> 0x1c) & 1)) {
        uVar32 = *(uint *)(param_1 + 0x1dc);
        if (DAT_001fd9d8 <= *(uint *)(param_1 + 0x1dc)) {
          uVar32 = DAT_001fd9dc;
        }
        *(uint *)(param_1 + 0x1dc) = uVar32;
        *(short *)(param_1 + 0x34) = (short)uVar26;
        FUN_00339660(param_1,param_2,1);
        fVar38 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001fd558 + 0x110),
                                            (byte)(uVar16 >> 0x15) & 3);
        *(char *)(param_1 + 0x22a) = (char)(int)(fVar34 / fVar38 + fVar9);
        FUN_00339600(param_1,0);
      }
    }
  }
LAB_001fd6c4:
  fVar38 = *(float *)(param_1 + 0x2c);
  iVar15 = (int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 2);
  fVar33 = (float)VectorSignedToFloat(iVar15,(byte)(uVar16 >> 0x15) & 3);
  uVar16 = uVar16 & 0xfffffff;
  uVar32 = uVar16 | (uint)(fVar33 <= fVar38) << 0x1d;
  if (!SUB41(uVar32 >> 0x1d,0)) {
    fVar33 = (float)VectorSignedToFloat(iVar15,(byte)(uVar32 >> 0x15) & 3);
    fVar33 = fVar33 - fVar44;
    uVar1 = uVar16 | (uint)(fVar38 < fVar33) << 0x1f | (uint)(fVar38 == fVar33) << 0x1e;
    uVar32 = uVar1 | (uint)(NAN(fVar38) || NAN(fVar33)) << 0x1c;
    bVar5 = (byte)(uVar1 >> 0x18);
    if ((!(bool)(bVar5 >> 6 & 1) && bVar5 >> 7 == ((byte)(uVar32 >> 0x1c) & 1)) &&
       ((*(ushort *)(param_1 + 0x1b4) & 1) == 0)) {
      fVar38 = *(float *)(param_1 + 0x6c);
      uVar16 = uVar16 | (uint)(fVar38 < fVar36) << 0x1f | (uint)(fVar38 == fVar36) << 0x1e;
      uVar32 = uVar16 | (uint)(NAN(fVar38) || NAN(fVar36)) << 0x1c;
      bVar5 = (byte)(uVar16 >> 0x18);
      if (!(bool)(bVar5 >> 6 & 1) && bVar5 >> 7 == ((byte)(uVar32 >> 0x1c) & 1)) {
        local_e0 = *(float *)(param_1 + 0x28);
        local_d8 = *(short **)(param_1 + 0x30);
        local_dc = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) +
                                                                      0x28) + 2),
                                              (byte)(uVar32 >> 0x15) & 3);
        FUN_00368b98(DAT_001fd9e8,fVar35,param_1 + 0xec,*(undefined4 *)(DAT_001fd9e4 + param_2),
                     &local_e0,0x96,0x5a);
      }
    }
  }
  uVar26 = DAT_001fd9f4;
  fVar35 = *(float *)(param_1 + 0x6c);
  uVar16 = uVar32 & 0xfffffff | (uint)(fVar35 < fVar36) << 0x1f | (uint)(fVar35 == fVar36) << 0x1e;
  uVar32 = uVar16 | (uint)(NAN(fVar35) || NAN(fVar36)) << 0x1c;
  bVar5 = (byte)(uVar16 >> 0x18);
  if ((!(bool)(bVar5 >> 6 & 1) && bVar5 >> 7 == ((byte)(uVar32 >> 0x1c) & 1)) ||
     (*(short *)(param_1 + 0x1b0) == 5)) {
    uVar27 = *(undefined4 *)(param_1 + 100);
    fVar38 = *(float *)(param_1 + 0x204) * DAT_001fd9ec;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fVar38;
    *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) - fVar38;
    *(undefined4 *)(param_1 + 100) = DAT_001fd9f0;
    FUN_00376340(DAT_001fd9f8,DAT_001fd9f8,uVar26,param_2,param_1,0x45);
    fVar35 = *(float *)(param_1 + 0x2c) + fVar38;
    *(float *)(param_1 + 0x2c) = fVar35;
    *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) + fVar38;
    *(undefined4 *)(param_1 + 100) = uVar27;
    if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
      *(undefined2 *)(param_1 + 0x1f8) = 0x14;
    }
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
      fVar38 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28)
                                                         + 2),(byte)(uVar32 >> 0x15) & 3);
      if (fVar38 < fVar35) {
        fVar36 = (float)FUN_00371e50(fVar20);
        uVar26 = DAT_001fda00;
        *(float *)(param_1 + 0x1dc) = fVar36 + fVar20;
        fVar36 = DAT_001fd9fc;
        *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x28) * DAT_001fd9fc;
        *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x30) * fVar36;
        FUN_00375bcc(param_1,uVar26);
        fVar36 = DAT_001fda14;
        uVar27 = DAT_001fda10;
        uVar26 = DAT_001fda0c;
        sVar18 = 0;
        if (*(int *)(param_1 + 0x204) < DAT_001fda04) {
          sVar14 = 0x14;
          fVar23 = DAT_001fda08;
        }
        else {
          sVar14 = 0x1e;
          fVar23 = fVar9;
        }
        if (sVar14 != 0) {
          do {
            fVar35 = (float)FUN_00371e50(fVar42);
            fVar35 = (fVar35 + fVar9) * fVar23;
            uVar37 = FUN_00371e50(uVar27);
            local_ec = (float)FUN_003727f0();
            local_ec = local_ec * fVar35;
            local_e4 = (float)FUN_00372674(uVar37);
            local_e4 = local_e4 * fVar35;
            local_e8 = (float)FUN_00371e50(fVar40);
            local_e8 = local_e8 + fVar40;
            local_e0 = *(float *)(param_1 + 0x28) + local_ec * fVar20;
            local_dc = *(float *)(param_1 + 0x2c) + local_e8 * fVar20;
            local_d8 = (short *)(*(float *)(param_1 + 0x30) + local_e4 * fVar20);
            fVar35 = (float)FUN_00371e50(uVar26);
            FUN_00346ab4((fVar35 + fVar36) * fVar23,param_1 + 0xec,*(undefined4 *)(param_2 + 0x5c28)
                         ,&local_e0,&local_ec);
            sVar18 = sVar18 + 1;
          } while (sVar18 < sVar14);
        }
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      *(float *)(param_1 + 0x1dc) = fVar36;
      uVar22 = *(ushort *)(param_1 + 0x1b0);
      bVar29 = uVar22 == 5;
      if (bVar29) {
        uVar22 = *(ushort *)(param_1 + 0x1b4);
      }
      if (bVar29 && (uVar22 & 1) == 0) {
        local_e0 = (float)FUN_003738a8(fVar44);
        local_e0 = local_e0 + *(float *)(param_1 + 0x28);
        fVar35 = (float)FUN_003738a8(fVar44);
        fVar42 = DAT_001fdca0;
        local_d8 = (short *)(fVar35 + *(float *)(param_1 + 0x30));
        local_dc = *(float *)(param_1 + 0x84) + fVar39;
        pfVar21 = *(float **)(DAT_001fd9e4 + param_2);
        fVar35 = DAT_001fdc9c + *(float *)(param_1 + 0x204) * DAT_001fdc98;
        local_ec = fVar36;
        local_e8 = DAT_001fdca0;
        local_e4 = fVar36;
        if ((param_1 == -0xec) ||
           (((int)*(float *)(param_1 + 0xf4) <= DAT_001fdca4 &&
            (fVar36 <= *(float *)(param_1 + 0xf4))))) {
          sVar18 = 0;
          do {
            if (*(char *)(pfVar21 + 9) == '\0') {
              *(undefined1 *)(pfVar21 + 9) = 3;
              *pfVar21 = local_e0;
              pfVar21[1] = local_dc;
              pfVar21[2] = (float)local_d8;
              fVar20 = DAT_001fdca8[1];
              fVar38 = DAT_001fdca8[2];
              pfVar21[3] = *DAT_001fdca8;
              pfVar21[4] = fVar20;
              pfVar21[5] = fVar38;
              pfVar21[6] = fVar36;
              pfVar21[7] = fVar42;
              pfVar21[8] = fVar36;
              *(undefined2 *)((int)pfVar21 + 0x2a) = 0xff;
              fVar42 = (float)FUN_00371e50(uVar26);
              *(char *)((int)pfVar21 + 0x25) = (char)(int)fVar42;
              pfVar21[0xc] = fVar35;
              pfVar21[0xd] = fVar35 * fVar40;
              break;
            }
            sVar18 = sVar18 + 1;
            pfVar21 = pfVar21 + 0x10;
          } while (sVar18 < 0x5a);
        }
      }
    }
  }
LAB_001fdb48:
  fVar42 = DAT_001fdcb4;
  uVar27 = DAT_001fdcb0;
  uVar26 = DAT_001fd9f4;
  if (*(char *)(param_1 + 0x22a) != '\0') {
    fVar44 = fVar44 + *(float *)(param_1 + 0x204) * DAT_001fdcac;
    sVar18 = 0;
    *(char *)(param_1 + 0x22a) = *(char *)(param_1 + 0x22a) + -1;
    do {
      local_e0 = (float)FUN_003738a8(fVar44);
      local_e0 = local_e0 + *(float *)(param_1 + 0x28);
      local_dc = (float)FUN_003738a8(fVar44);
      local_dc = local_dc + *(float *)(param_1 + 0x2c);
      fVar35 = (float)FUN_003738a8(fVar44);
      local_d8 = (short *)(fVar35 + *(float *)(param_1 + 0x30));
      pfVar21 = *(float **)(param_2 + 0x5c28);
      fVar35 = (float)FUN_00371e50(uVar27);
      local_ec = fVar36;
      local_e8 = fVar23;
      local_e4 = fVar36;
      if ((param_1 == -0xec) ||
         (((int)*(float *)(param_1 + 0xf4) <= DAT_001fdca4 && (fVar36 <= *(float *)(param_1 + 0xf4))
          ))) {
        sVar14 = 0;
        do {
          if (*(char *)(pfVar21 + 9) == '\0') {
            *(undefined1 *)(pfVar21 + 9) = 4;
            *pfVar21 = local_e0;
            pfVar21[1] = local_dc;
            pfVar21[2] = (float)local_d8;
            pfVar21[3] = fVar36;
            pfVar21[4] = fVar23;
            pfVar21[5] = fVar36;
            fVar20 = DAT_001fdca8[1];
            fVar38 = DAT_001fdca8[2];
            pfVar21[6] = *DAT_001fdca8;
            pfVar21[7] = fVar20;
            pfVar21[8] = fVar38;
            fVar20 = (float)FUN_00371e50(uVar26);
            *(char *)((int)pfVar21 + 0x25) = (char)(int)fVar20;
            pfVar21[0xc] = fVar35 + fVar42;
            *(undefined2 *)(pfVar21 + 0xb) = 0;
            break;
          }
          sVar14 = sVar14 + 1;
          pfVar21 = pfVar21 + 0x10;
        } while (sVar14 < 0x5a);
      }
      sVar18 = sVar18 + 1;
    } while (sVar18 < 2);
  }
  return;
}
