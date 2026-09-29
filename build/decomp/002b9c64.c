// OoT3D decomp @ 002b9c64  name=FUN_002b9c64  size=1804

undefined4 FUN_002b9c64(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint extraout_r1_06;
  uint extraout_r1_07;
  uint extraout_r1_08;
  uint extraout_r1_09;
  uint extraout_r1_10;
  uint uVar11;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  int extraout_r2_05;
  int extraout_r2_06;
  int extraout_r2_07;
  int extraout_r2_08;
  int extraout_r2_09;
  int extraout_r2_10;
  int extraout_r2_11;
  int extraout_r2_12;
  int extraout_r2_13;
  int extraout_r2_14;
  int extraout_r2_15;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined1 auStack_64 [12];
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;

  fVar14 = DAT_002b9f80;
  fVar5 = DAT_002b9f7c;
  fVar4 = DAT_002b9f74;
  if (*(char *)(param_2 + 0x2227) < '\x01') {
    return 0;
  }
  local_40 = DAT_002b9f78;
  local_44 = param_2 + 0x23e8;
  uVar11 = param_1;
  if ('\x17' < *(char *)(param_2 + 0x2226)) goto LAB_002ba160;
  bVar2 = *(byte *)(param_2 + 0x1378);
  bVar12 = (bVar2 & 4) != 0;
  if (!bVar12) {
    bVar2 = *(byte *)(param_2 + 0x13f8);
  }
  if (bVar12 || (bVar2 & 4) != 0) {
    FUN_002b98bc(param_1,param_2);
    if (*(char *)(param_1 + 0x208c) != '\0') {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x208c) = 1;
    return 1;
  }
  fVar13 = (float)FUN_0036b4d0(DAT_002b9f84,param_2 + 0x254);
  uVar9 = in_fpscr & 0xfffffff;
  uVar1 = uVar9 | (uint)(fVar13 < fVar4) << 0x1f;
  in_fpscr = uVar1 | (uint)(NAN(fVar13) || NAN(fVar4)) << 0x1c;
  uVar11 = extraout_r1;
  param_3 = extraout_r2;
  if ((byte)(uVar1 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_002ba160;
  fVar17 = *(float *)(param_2 + 0x22c0) - *(float *)(param_2 + 0x22a8);
  fVar15 = *(float *)(param_2 + 0x22c4) - *(float *)(param_2 + 0x22ac);
  fVar16 = *(float *)(param_2 + 0x22c8) - *(float *)(param_2 + 0x22b0);
  fVar13 = SQRT(fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16);
  in_fpscr = uVar9 | (uint)(fVar13 == fVar4) << 0x1e;
  if (!SUB41(in_fpscr >> 0x1e,0)) {
    fVar13 = (fVar13 + DAT_002b9f88) / fVar13;
  }
  local_58 = *(float *)(param_2 + 0x22a8) + fVar17 * fVar13;
  local_54 = *(float *)(param_2 + 0x22ac) + fVar15 * fVar13;
  local_50 = *(float *)(param_2 + 0x22b0) + fVar16 * fVar13;
  iVar6 = param_1 + 0xa98;
  uVar18 = FUN_00369f9c(iVar6,&local_58,(float *)(param_2 + 0x22a8),auStack_64,&local_48,1,0,0,1,
                        &local_4c);
  uVar11 = (uint)((ulonglong)uVar18 >> 0x20);
  param_3 = extraout_r2_00;
  if ((int)uVar18 == 0) goto LAB_002ba160;
  uVar18 = FUN_004c931c(iVar6,local_48,local_4c);
  uVar11 = (uint)((ulonglong)uVar18 >> 0x20);
  param_3 = extraout_r2_01;
  if ((int)uVar18 != 0) goto LAB_002ba160;
  uVar18 = FUN_0035ea34(iVar6,local_48,local_4c);
  uVar11 = (uint)((ulonglong)uVar18 >> 0x20);
  param_3 = extraout_r2_02;
  if ((int)uVar18 == 6) goto LAB_002ba160;
  uVar18 = FUN_00314c68(param_1,param_2,local_48,local_4c,auStack_64);
  uVar11 = (uint)((ulonglong)uVar18 >> 0x20);
  param_3 = extraout_r2_03;
  if ((int)uVar18 != 0) goto LAB_002ba160;
  if (*(char *)(param_2 + 0x1a9) == '\a') {
    if (*(char *)(param_1 + 0x208c) == '\0') {
      *(undefined1 *)(param_1 + 0x208c) = 1;
    }
    uVar7 = FUN_0036c5bc(param_1,0);
    uVar7 = FUN_0036f848(uVar7,3);
    FUN_0036f7c0(uVar7,DAT_002b9f8c);
    FUN_0036f6b0(uVar7,7,0,0,0);
    FUN_0036f628(uVar7,0x14);
    *(undefined1 *)(param_1 + 0x208e) = 4;
    FUN_0036f59c(param_2,DAT_002b9f90);
    FUN_002b98bc(param_1,param_2);
    return 1;
  }
  uVar9 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_2 + 0x221c) < fVar4) << 0x1f;
  in_fpscr = uVar9 | (uint)(NAN(*(float *)(param_2 + 0x221c)) || NAN(fVar4)) << 0x1c;
  if ((byte)(uVar9 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_002ba160;
  iVar8 = FUN_00314c14(iVar6,local_48,local_4c);
  uVar18 = FUN_00359690(iVar6,local_4c);
  uVar11 = (uint)((ulonglong)uVar18 >> 0x20);
  iVar6 = (int)uVar18;
  uVar9 = 0;
  if (iVar6 != 0) {
    uVar9 = (uint)*(byte *)(iVar6 + 0x19b);
  }
  if (iVar6 == 0 || uVar9 == 0) {
    if (iVar8 == 10) {
      FUN_00323d90(param_1,auStack_64,param_2 + 0x28,2);
      uVar11 = extraout_r1_06;
      param_3 = extraout_r2_11;
    }
    else if (iVar8 == 0xb) {
      FUN_0036f59c(param_2,DAT_002b9f94);
      FUN_0034e568(param_1,auStack_64,8);
      uVar11 = extraout_r1_07;
      param_3 = extraout_r2_12;
    }
    else {
      FUN_0036f59c(param_2,DAT_002ba394);
      FUN_003661a8(param_1,auStack_64,8);
      uVar11 = extraout_r1_08;
      param_3 = extraout_r2_13;
    }
  }
  else {
    param_3 = extraout_r2_04;
    if (iVar8 == 10) {
      if (uVar9 < 4) {
        FUN_00323d90(param_1,auStack_64,param_2 + 0x28,uVar9 - 1);
        uVar11 = extraout_r1_00;
        param_3 = extraout_r2_05;
      }
    }
    else {
      if (uVar9 == 1) {
        FUN_003757a8(param_1,auStack_64,8);
        uVar11 = extraout_r1_03;
        param_3 = extraout_r2_08;
      }
      else if (uVar9 == 2) {
        FUN_0034e568(param_1,auStack_64,8);
        uVar11 = extraout_r1_04;
        param_3 = extraout_r2_09;
      }
      else if (uVar9 == 3) {
        FUN_003661a8(param_1,auStack_64,8);
        uVar11 = extraout_r1_01;
        param_3 = extraout_r2_06;
      }
      if (*(byte *)(iVar6 + 0x19b) < 4) {
        if (iVar8 == 0xb) {
          FUN_0036f59c(param_2,DAT_002b9f94);
          uVar11 = extraout_r1_02;
          param_3 = extraout_r2_07;
        }
        else {
          FUN_0036f59c(param_2,DAT_002ba394);
          uVar11 = extraout_r1_05;
          param_3 = extraout_r2_10;
        }
      }
    }
  }
  if (*(char *)(param_2 + 0x1a9) == '\x06') {
    if ((0x3f000000 < *(int *)(param_2 + 0x2244)) &&
       (uVar11 = local_40, *(char *)(*DAT_002ba398 + local_40) != '\0')) {
      FUN_002b9888(param_1,local_44,(int)(short)(*(short *)(param_2 + 0xbe) + -0x8000));
      *(float *)(param_2 + 0x2244) = fVar5;
      FUN_00355830(0,0xffffffff);
      FUN_0034d688(param_1,param_2,0xff);
      uVar7 = DAT_002ba39c;
      *(uint *)(param_2 + 0x29b8) = *(uint *)(param_2 + 0x29b8) | 0x800;
      FUN_0036f59c(param_2,uVar7);
      uVar11 = extraout_r1_09;
      param_3 = extraout_r2_14;
      goto LAB_002ba0e0;
    }
  }
  else {
LAB_002ba0e0:
    cVar3 = *(char *)(param_2 + 0x1a9);
    bVar12 = cVar3 == '\x05';
    if (bVar12) {
      cVar3 = *(char *)(DAT_002ba3a0 + 0x52);
      uVar11 = DAT_002ba3a0;
    }
    if ((bVar12 && cVar3 == '\0') && (*(ushort *)(uVar11 + 0x4a) != 0)) {
      fVar13 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(uVar11 + 0x4a),(byte)(in_fpscr >> 0x15) & 3);
      uVar9 = VectorFloatToUnsigned(fVar13 - fVar14,3);
      *(short *)(uVar11 + 0x4a) = (short)uVar9;
      if ((uVar9 & 0xffff) == 0) {
        FUN_002b9888(param_1,local_44,(int)(short)(*(short *)(param_2 + 0xbe) + -0x8000));
        FUN_00369128(param_1);
        FUN_0036f59c(param_2,DAT_002ba3a4);
        uVar11 = extraout_r1_10;
        param_3 = extraout_r2_15;
      }
    }
  }
  *(undefined4 *)(param_2 + 0x221c) = DAT_002ba3a8;
LAB_002ba160:
  bVar2 = *(byte *)(param_2 + 0x1378);
  bVar12 = (bVar2 & 2) == 0;
  if (bVar12) {
    bVar2 = *(byte *)(param_2 + 0x13f8);
  }
  uVar9 = (uint)bVar2;
  if (bVar12) {
    uVar9 = uVar9 & 2;
  }
  if (!bVar12 || (bVar2 & 2) != 0) {
    uVar9 = 1;
  }
  if (uVar9 == 0) {
    uVar11 = (uint)*(byte *)(param_2 + 2);
  }
  if (uVar9 == 0 && uVar11 == 2) {
    bVar2 = *(byte *)(param_2 + 0x1478);
    bVar12 = (bVar2 & 2) == 0;
    if (bVar12) {
      bVar2 = *(byte *)(param_2 + 0x14f8);
    }
    uVar9 = (uint)bVar2;
    uVar11 = *(byte *)(param_2 + 0x15f8) & 2;
    if (bVar12) {
      uVar9 = uVar9 & 2;
    }
    if (!bVar12 || (bVar2 & 2) != 0) {
      uVar9 = 1;
    }
    uVar9 = uVar9 | uVar11 >> 1;
  }
  if (uVar9 != 0) {
    if (*(char *)(param_2 + 0x2226) < '\x18') {
      psVar10 = *(short **)(DAT_002ba3ac + param_2);
      bVar12 = psVar10 != (short *)0x0;
      if (bVar12) {
        uVar11 = (uint)*psVar10;
        param_3 = uVar11 - 0x100;
      }
      if (bVar12 && param_3 != 0x41) {
        psVar10 = (short *)(uint)*(byte *)((int)psVar10 + 0x19b);
      }
      if (((bVar12 && param_3 != 0x41) && psVar10 != (short *)&Reset) &&
         (*(char *)(param_1 + 0x208c) == '\0')) {
        *(undefined1 *)(param_1 + 0x208c) = 1;
      }
    }
    uVar9 = (uint)*(char *)(param_2 + 0x1a9);
    if ((uVar9 == 6) && (uVar11 = *(uint *)(param_2 + 0x2244), 0x3f000000 < (int)uVar11)) {
      if (*(char *)(*DAT_002ba398 + local_40) != '\0') {
        FUN_002b9888(param_1,local_44,(int)(short)(*(short *)(param_2 + 0xbe) + -0x8000));
        *(float *)(param_2 + 0x2244) = fVar5;
        FUN_00355830(0,0xffffffff);
        FUN_0034d688(param_1,param_2,0xff);
        uVar7 = DAT_002ba39c;
        *(uint *)(param_2 + 0x29b8) = *(uint *)(param_2 + 0x29b8) | 0x800;
        FUN_0036f59c(param_2,uVar7);
      }
    }
    else if (uVar9 != 7) {
      bVar12 = uVar9 == 5;
      if (bVar12) {
        uVar9 = (uint)*(byte *)(DAT_002ba3a0 + 0x52);
        uVar11 = DAT_002ba3a0;
      }
      if ((bVar12 && uVar9 == 0) && (*(ushort *)(uVar11 + 0x4a) != 0)) {
        fVar13 = (float)VectorUnsignedToFloat
                                  ((uint)*(ushort *)(uVar11 + 0x4a),(byte)(in_fpscr >> 0x15) & 3);
        uVar9 = VectorFloatToUnsigned(fVar13 - fVar14,3);
        *(short *)(uVar11 + 0x4a) = (short)uVar9;
        if ((uVar9 & 0xffff) == 0) {
          FUN_002b9888(param_1,local_44,(int)(short)(*(short *)(param_2 + 0xbe) + -0x8000));
          FUN_00369128(param_1);
          FUN_0036f59c(param_2,DAT_002ba3a4);
        }
      }
      if (*(char *)(param_2 + 0xba) == '\x01') {
        *(undefined1 *)(param_2 + 0xb8) = 8;
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002ba3b0 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        FUN_0035d304(fVar4,fVar4,param_1,param_2,4,(int)*(short *)(param_2 + 0xbe),
                     (int)(DAT_002ba3b4 / fVar14 + fVar5));
        return 1;
      }
    }
  }
  return 0;
}
