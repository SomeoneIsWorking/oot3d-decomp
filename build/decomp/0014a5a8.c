// OoT3D decomp @ 0014a5a8  name=FUN_0014a5a8  size=6096

void FUN_0014a5a8(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  short *psVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  byte bVar14;
  byte bVar15;
  bool bVar16;
  uint in_fpscr;
  uint uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [4];
  float fStack_ac;
  uint uStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 *puStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  
  fVar5 = fRam0014a934;
  fVar4 = fRam0014a930;
  fStack_68 = fRam0014a930;
  fStack_64 = fRam0014a930;
  fStack_60 = fRam0014a930;
  fStack_74 = fRam0014a930;
  fStack_70 = fRam0014a934;
  fStack_6c = fRam0014a930;
  iStack_78 = *(int *)(param_2 + 0x20ac);
  iStack_48 = param_1 + 0xe00;
  *(undefined2 *)(param_1 + 0xe64) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined4 *)(param_1 + 0xed0) = *(undefined4 *)(param_1 + 0xec8);
  *(undefined4 *)(param_1 + 0xed4) = *(undefined4 *)(param_1 + 0xecc);
  uVar18 = VectorSignedToFloat((int)*(float *)(param_2 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xec8) = uVar18;
  iVar11 = iRam0014a938;
  uVar18 = VectorSignedToFloat((int)*(float *)(param_2 + 0x40),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xecc) = uVar18;
  sVar6 = *(short *)(param_1 + 0xbe);
  fVar26 = *(float *)(iVar11 + 0x1c);
  iVar11 = *(int *)(param_2 + 0x20ac);
  iStack_5c = param_2;
  fVar19 = (float)FUN_002cfca0((int)sVar6);
  fVar28 = *(float *)(param_1 + 0x28);
  fVar20 = (float)FUN_00338f60((int)sVar6);
  fVar29 = *(float *)(param_1 + 0x30);
  sVar6 = *(short *)(iVar11 + 0xbe);
  fVar21 = (float)FUN_002cfca0((int)sVar6);
  fVar27 = *(float *)(iVar11 + 0x28);
  fVar22 = (float)FUN_00338f60((int)sVar6);
  sVar6 = FUN_003758b0((*(float *)(iVar11 + 0x30) + fVar4 * fVar22) - (fVar29 + fVar26 * fVar20),
                       (fVar27 + fVar4 * fVar21) - (fVar28 + fVar26 * fVar19));
  iVar11 = (int)(short)(sVar6 - *(short *)(param_1 + 0x36));
  fVar19 = (float)FUN_002cfca0(iVar11);
  fVar20 = (float)FUN_00338f60(iVar11);
  if (iRam0014a93c < (int)fVar19) {
    *(undefined1 *)(param_1 + 0xffc) = 5;
  }
  else if ((uint)fRam0014a940 < (uint)fVar19) {
    *(undefined1 *)(param_1 + 0xffc) = 4;
  }
  else if (fVar20 <= fVar4) {
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar4) << 0x1f | (uint)(fVar19 == fVar4) << 0x1e;
    in_fpscr = uVar7 | (uint)(NAN(fVar19) || NAN(fVar4)) << 0x1c;
    bVar15 = (byte)(uVar7 >> 0x18);
    if ((bool)(bVar15 >> 6 & 1) || bVar15 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      *(undefined1 *)(param_1 + 0xffc) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0xffc) = 3;
    }
  }
  else {
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar4) << 0x1f | (uint)(fVar19 == fVar4) << 0x1e;
    in_fpscr = uVar7 | (uint)(NAN(fVar19) || NAN(fVar4)) << 0x1c;
    bVar15 = (byte)(uVar7 >> 0x18);
    if ((bool)(bVar15 >> 6 & 1) || bVar15 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      *(undefined1 *)(param_1 + 0xffc) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xffc) = 1;
    }
  }
  if ((*(uint *)(param_1 + 0xe54) & 0x2000) == 0) {
    iVar11 = *(int *)(param_2 + 0x20ac);
    if ((*(char *)(param_1 + 0x1a4) == '\x02') && (*(byte *)(param_1 + 0xe74) < 2)) {
      fVar19 = (float)FUN_00357eac(param_1,iVar11);
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(fVar19 <= *(float *)(iVar11 + 0x6c) + fRam0014a944) << 0x1d;
      if ((!SUB41(in_fpscr >> 0x1d,0)) ||
         (iRam0014a948 < (int)ABS(*(float *)(param_1 + 0x2c) - *(float *)(iVar11 + 0x2c))))
      goto LAB_0014a7f0;
      sVar6 = FUN_0036e800(iVar11,param_1);
      iVar23 = FUN_00338f60((int)(short)(sVar6 - *(short *)(iVar11 + 0x36)));
      if (iVar23 < iRam0014a94c) goto LAB_0014a7f0;
      iVar23 = -1;
      if (*(char *)(param_1 + 0xffc) == '\x05') {
        iVar8 = -1;
      }
      else if (*(char *)(param_1 + 0xffc) == '\x04') {
        iVar8 = 1;
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 != -1) {
        if (iVar8 != 1) goto LAB_0014a7f0;
        iVar23 = 1;
      }
    }
    else {
LAB_0014a7f0:
      iVar23 = 0;
    }
    if (iVar23 != 0) {
      uVar7 = *(uint *)(param_1 + 0xe54);
      bVar16 = (uVar7 & 0x10000) == 0;
      if (bVar16) {
        uVar7 = *(uint *)(iRam0014a950 + iVar11);
      }
      if (bVar16 && uVar7 == 0) {
        FUN_001ebf34(param_2,param_1);
      }
    }
    iVar23 = iRam0014a958;
    fVar19 = fRam0014a954;
    if ((*(int *)(param_1 + 0xe70) == 0) && (iVar8 = FUN_001a60c0(param_2,param_1), iVar8 == 1)) {
      uVar18 = FUN_003603c0(iVar11 + 0x254,0x23);
      fVar20 = (float)VectorSignedToFloat(uVar18,(byte)(in_fpscr >> 0x15) & 3);
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piRam0014a95c + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar11 = (int)((fVar20 * fVar19) / fVar21 + fVar5);
      *(int *)(param_1 + 0x1a8) = iVar11;
      *(int *)(param_1 + 0x1ac) = iVar11;
      *(undefined4 *)(param_1 + 0xe70) = 1;
      if (*(char *)(param_1 + 0x1a4) != '\x11' && *(char *)(param_1 + 0x1a4) != '\x12') {
        if (*(char *)(iVar23 + *(short *)(param_1 + 0x1c)) != '\0' &&
            *(short *)(param_1 + 0x1c) != 4) {
LAB_0014aa00:
          *(undefined4 *)(param_1 + 0x1a8) = 0;
          *(undefined4 *)(param_1 + 0x1ac) = 0;
        }
LAB_0014a8f8:
        *(undefined1 *)(param_1 + 0xeb6) = *(undefined1 *)(param_1 + 0x1a4);
        *(undefined1 *)(param_1 + 0x1a4) = 0;
        *(byte *)(param_1 + 0xeee) = *(byte *)(param_1 + 0xeee) & 0xfe;
        *(byte *)(param_1 + 0xf46) = *(byte *)(param_1 + 0xf46) & 0xfe;
        *(byte *)(param_1 + 0xf9e) = *(byte *)(param_1 + 0xf9e) & 0xfe;
        *(undefined1 *)(param_1 + 0xe74) = 0;
      }
    }
    else if ((*(int *)(param_1 + 0xe70) == 1) && (iVar8 = FUN_0021fd50(param_2,param_1), iVar8 == 1)
            ) {
      uVar18 = FUN_003603c0(iVar11 + 0x254,0x24);
      fVar20 = (float)VectorSignedToFloat(uVar18,(byte)(in_fpscr >> 0x15) & 3);
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piRam0014a95c + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar11 = (int)((fVar20 * fVar19) / fVar21 + fVar5);
      *(int *)(param_1 + 0x1a8) = iVar11;
      *(int *)(param_1 + 0x1ac) = iVar11;
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffeffff;
      *(undefined4 *)(param_1 + 0xe70) = 0;
      if (*(char *)(param_1 + 0x1a4) != '\x11' && *(char *)(param_1 + 0x1a4) != '\x12') {
        if (*(char *)(iVar23 + *(short *)(param_1 + 0x1c)) != '\0' &&
            *(short *)(param_1 + 0x1c) != 4) goto LAB_0014aa00;
        goto LAB_0014a8f8;
      }
    }
  }
  uVar18 = uRam0014ada4;
  iVar11 = iRam0014ada0;
  uVar7 = *(uint *)(param_1 + 0xe54);
  uStack_4c = param_1 + 0x1000;
  puVar12 = (undefined4 *)(param_1 + 0xe8c);
  puVar13 = (undefined4 *)(param_1 + 0xe80);
  if ((uVar7 & 0x80000) != 0) {
    if ((uVar7 & 0x100000) == 0) {
      bVar16 = (uVar7 & 0x200000) != 0;
      uVar24 = uStack_4c;
      if (bVar16) {
        uVar24 = (uint)*(byte *)(param_1 + 0x1a4);
      }
      if ((bVar16 && uVar24 != 0xb) && (*(int *)(param_1 + 0x1014) == 1)) {
        *(undefined1 *)(param_1 + 0x1a4) = 0xb;
        *(undefined1 *)(param_1 + 0xe74) = 3;
        *(uint *)(param_1 + 0xe54) = uVar7 & 0xffdff7ff;
        *puVar13 = *puVar12;
        *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
        *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
        uVar7 = *(uint *)(param_1 + 0xe54);
        goto joined_r0x0014aaf8;
      }
    }
    else if (*(int *)(param_1 + 0x1014) == 1) {
      *(undefined1 *)(param_1 + 0x1a4) = 0xb;
      *(undefined1 *)(param_1 + 0xe74) = 3;
      *(uint *)(param_1 + 0xe54) = uVar7 & 0xffeff7ff;
      *puVar13 = *puVar12;
      *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
      *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
      uVar7 = *(uint *)(param_1 + 0xe54);
joined_r0x0014aaf8:
      if ((uVar7 & 0x8000000) != 0) {
        iStack_bc = iRam0014ada8;
        FUN_0037547c(uRam0014adb0,param_1 + 0xe80,4,uRam0014adac,uRam0014adac);
      }
      uVar9 = FUN_0036ae14(param_1 + 0x1c4,
                           *(undefined4 *)
                            (*(int *)(iVar11 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                            (uint)*(byte *)(param_1 + 0xe74) * 4));
      uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(fVar5,fVar4,uVar9,uVar18,param_1 + 0x1c4,
                   *(undefined4 *)
                    (*(int *)(iVar11 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4),2);
    }
  }
  iStack_50 = iStack_5c + 0x100;
  if (((*(short *)(iStack_5c + 0x104) == 0x5a && (piRam0014adb4[2] & 0xfU) == 0xd) &&
      (*(char *)(param_1 + 0x1a4) != '\x01')) &&
     ((*(uint *)(iRam0014adb8 + *(int *)(param_2 + 0x20ac)) & 0x800000) != 0)) {
    iVar11 = FUN_00357ea0(iStack_5c);
    iVar23 = FUN_00375750(*(undefined4 *)(param_1 + 0xe50),0);
    if (iVar11 == iVar23) goto LAB_0014abd4;
    iVar11 = FUN_00357ea0(iStack_5c);
    iVar23 = FUN_00375750(*(undefined4 *)(param_1 + 0xe50),1);
    if (iVar11 == iVar23) goto LAB_0014abd4;
LAB_0014ac38:
    if ((0 < *(short *)(uStack_4c + 0xc)) &&
       (sVar6 = *(short *)(uStack_4c + 0xc) + -1, *(short *)(uStack_4c + 0xc) = sVar6, sVar6 == 0))
    {
      FUN_00357d6c(param_1);
    }
  }
  else {
LAB_0014abd4:
    if (*(short *)(iStack_50 + 4) == 0x57 && (piRam0014adb4[2] & 0xfU) == 0xd) {
      uVar7 = *(uint *)(iRam0014adb8 + *(int *)(param_2 + 0x20ac));
      bVar16 = (uVar7 & 0x800000) != 0;
      if (bVar16) {
        uVar7 = (uint)*(byte *)(param_1 + 0x1a4);
      }
      if (bVar16 && uVar7 != 1) goto LAB_0014ac38;
    }
    if (*(short *)(iStack_50 + 4) == 0x5d && (piRam0014adb4[2] & 0xfU) == 0xd) {
      uVar7 = *(uint *)(iRam0014adb8 + *(int *)(param_2 + 0x20ac));
      bVar16 = (uVar7 & 0x800000) != 0;
      if (bVar16) {
        uVar7 = (uint)*(byte *)(param_1 + 0x1a4);
      }
      if (bVar16 && uVar7 != 1) goto LAB_0014ac38;
    }
  }
  cVar1 = *(char *)(param_1 + 0xe74);
  if ((cVar1 != '\x05' && cVar1 != '\a') && cVar1 != '\t') {
    *(undefined1 *)(param_1 + 0x245) = 0;
  }
  if ((cVar1 == '\x05' || cVar1 == '\a') || cVar1 == '\t') {
    *(undefined1 *)(param_1 + 0x245) = 1;
  }
  (**(code **)(iRam0014adbc + (uint)*(byte *)(param_1 + 0x1a4) * 4))(param_1,param_2);
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffbfff;
  puStack_54 = (undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xe78) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0xe58) = *puStack_54;
  *(undefined4 *)(param_1 + 0xe5c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0xe60) = *(undefined4 *)(param_1 + 0x30);
  uVar7 = *(uint *)(param_1 + 0xe54);
  if ((uVar7 & 0x2000) != 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x1a4);
  if ((((cVar1 == '\n' || cVar1 == '\t') || cVar1 == '\b') &&
      ((cVar1 == '\b' || cVar1 == '\t') || cVar1 == '\n')) &&
     (((*(uint *)(param_2 + 0x18) & 1) != 0 &&
      (((*(short *)(iRam0014adc0 + param_2) == 8 && (uVar7 & 1) == 0) && (uVar7 & 0x100) == 0) &&
       (uVar7 & 0x200) == 0)))) {
    if (*(char *)(param_1 + 0xe9c) == '\0') {
      *puVar13 = *puVar12;
      *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
      *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
      if (((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) &&
         (iVar11 = FUN_003759d0(), iVar11 < iRam0014b2f0)) {
        iStack_bc = iRam0014ada8;
        FUN_0037547c(uRam0014adb0,param_1 + 0xe80,4,uRam0014adac,uRam0014adac);
      }
    }
    else {
      *(uint *)(param_1 + 0xe54) = uVar7 | 0x400101;
      uVar7 = *(byte *)(param_1 + 0xe9c) - 1;
      *(char *)(param_1 + 0xe9c) = (char)uVar7;
      bVar16 = (uVar7 & 0xff) == 0;
      if (bVar16) {
        uVar7 = 0xd2;
      }
      *(undefined4 *)(param_1 + 0xea4) = 0;
      if (bVar16) {
LAB_0014adc8:
        *(uint *)(param_1 + 0xea0) = uVar7;
      }
      else if (*(char *)(param_1 + 0x1b0) == '\0') {
        if ((*(uint *)(param_1 + 0xe54) & 0x400000) == 0) {
          uVar7 = 0xc;
          goto LAB_0014adc8;
        }
        *(undefined4 *)(param_1 + 0xea0) = 0x5a;
        *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffbfffff;
      }
      else {
        *(undefined4 *)(param_1 + 0xea0) = 0x69;
      }
    }
  }
  uVar18 = uRam0014b2f4;
  if (*(int *)(param_1 + 0xe70) == 1) {
    if (*(byte *)(param_1 + 0xe9c) - 1 < 5) {
      *(int *)(param_1 + 0xea0) = *(int *)(param_1 + 0xea0) + -1;
      *(int *)(param_1 + 0xea4) = *(int *)(param_1 + 0xea4) + 1;
      if (*(int *)(param_1 + 0xea0) < 1) {
        *(char *)(param_1 + 0xe9c) = *(char *)(param_1 + 0xe9c) + '\x01';
        cVar1 = *(char *)(param_1 + 0x1a4);
        if (((cVar1 != '\x05' && cVar1 != '\0') && cVar1 != '\x06') ||
           ((*(uint *)(param_1 + 0xe54) & 0x80000) != 0 ||
            (*(uint *)(param_1 + 0xe54) & 0x2000000) != 0)) {
          iStack_bc = iRam0014ada8;
          FUN_0037547c(uVar18,0,4,uRam0014adac,uRam0014adac);
        }
        if (*(byte *)(param_1 + 0xe9c) < 6) {
          *(undefined4 *)(param_1 + 0xea0) = 0x11;
        }
      }
    }
    else if (*(byte *)(param_1 + 0xe9c) == 0) {
      *(int *)(param_1 + 0xea0) = *(int *)(param_1 + 0xea0) + -1;
      *(int *)(param_1 + 0xea4) = *(int *)(param_1 + 0xea4) + 1;
      if (*(int *)(param_1 + 0xea0) < 1) {
        *(undefined4 *)(param_1 + 0xea0) = 0;
        *(undefined1 *)(param_1 + 0xe9c) = 6;
        cVar1 = *(char *)(param_1 + 0x1a4);
        if (((cVar1 != '\x05' && cVar1 != '\0') && cVar1 != '\x06') ||
           ((*(uint *)(param_1 + 0xe54) & 0x80000) != 0 ||
            (*(uint *)(param_1 + 0xe54) & 0x2000000) != 0)) {
          iStack_bc = iRam0014ada8;
          FUN_0037547c(uVar18,0,4,uRam0014adac,uRam0014adac);
        }
      }
    }
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piRam0014a95c + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (((int)(fRam0014b2f8 / fVar19 + fRam0014b2fc) == *(int *)(param_1 + 0xea4)) &&
       (iVar11 = FUN_003759d0(), iVar11 < 0x3e800000)) {
      *puVar13 = *puVar12;
      *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
      *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
      if ((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) {
        iStack_bc = iRam0014ada8;
        FUN_0037547c(uRam0014adb0,param_1 + 0xe80,4,uRam0014adac,uRam0014adac);
      }
    }
    *(undefined1 *)(param_2 + 0x2e18) = *(undefined1 *)(param_1 + 0xe9c);
  }
  FUN_00376864(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0xfa8) + 0x17) & 2) != 0) {
    if (iRam0014b300 < (int)*(float *)(param_1 + 0x6c)) {
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - fVar5;
    }
  }
  if ((*(byte *)(param_1 + 0xf9d) & 2) != 0) {
    *puVar13 = *puVar12;
    *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
    *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
    if ((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) {
      iStack_bc = iRam0014ada8;
      FUN_0037547c(uRam0014adb0,param_1 + 0xe80,4,uRam0014adac,uRam0014adac);
    }
  }
  fVar5 = fRam0014b304;
  if (*(char *)(param_1 + 0x1a4) != '\x04') {
    fVar19 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xe6c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)VectorSignedToFloat((int)(short)(*(short *)(param_1 + 0xbe) -
                                                    *(short *)(iStack_48 + 100)),
                                        (byte)(in_fpscr >> 0x15) & 3);
    iVar23 = (int)(short)(int)((*(float *)(param_1 + 0x6c) / fVar19) * fRam0014b30c *
                              fVar20 * fRam0014b308);
    iVar11 = -iVar23;
    fVar20 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorSignedToFloat(-(*(short *)(param_1 + 0x38) + iVar23),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)ABS(fVar20) < iRam0014b310) {
      FUN_00370378(param_1 + 0x38,0,0x1c8);
    }
    else if ((int)ABS(fVar19) < iRam0014b310) {
      *(short *)(param_1 + 0x38) = (short)iVar11;
    }
    else {
      uVar7 = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar4) << 0x1f |
              (uint)(fVar19 == fVar4) << 0x1e;
      in_fpscr = uVar7 | (uint)(NAN(fVar19) || NAN(fVar4)) << 0x1c;
      bVar15 = (byte)(uVar7 >> 0x18);
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x38),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if ((bool)(bVar15 >> 6 & 1) || bVar15 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        *(short *)(param_1 + 0x38) = (short)(int)(fVar19 - fRam0014b304);
      }
      else {
        *(short *)(param_1 + 0x38) = (short)(int)(fVar19 + fRam0014b304);
      }
    }
    *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  }
  iStack_bc = *(int *)(param_1 + 0xe40);
  FUN_00408828(param_1 + 0x1b4,(float *)(param_1 + 0xeb8),param_1,iStack_5c,0xe);
  if (*(char *)(iStack_48 + 0xc4) != '\0') {
    *(float *)(param_1 + 0x2c) =
         *(float *)(param_1 + 0xed8) + *(float *)(param_1 + 0x1bc) * fRam0014b314;
  }
  if ((*(char *)(param_1 + 0x1a4) == '\x04') && (*(int *)(uStack_4c + 0x18) != 0)) {
    *(float *)(*(int *)(uStack_4c + 0x18) + 0x3f4) = *(float *)(param_1 + 0x200) * fRam0014b318;
    iVar11 = *(int *)(uStack_4c + 0x18);
    uVar18 = puStack_54[1];
    uVar9 = puStack_54[2];
    *(undefined4 *)(iVar11 + 0x28) = *puStack_54;
    *(undefined4 *)(iVar11 + 0x2c) = uVar18;
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
    *(float *)(*(int *)(uStack_4c + 0x18) + 0x2c) =
         *(float *)(*(int *)(uStack_4c + 0x18) + 0x2c) - *(float *)(param_1 + 0x2c);
    iVar11 = *(int *)(uStack_4c + 0x18);
    *(float *)(iVar11 + 0x28) = *(float *)(iVar11 + 0x28) + *(float *)(param_1 + 0xeb8);
    *(float *)(iVar11 + 0x2c) = *(float *)(iVar11 + 0x2c) + *(float *)(param_1 + 0xebc);
    *(float *)(iVar11 + 0x30) = *(float *)(iVar11 + 0x30) + *(float *)(param_1 + 0xec0);
    *(undefined2 *)(*(int *)(uStack_4c + 0x18) + 0xbc) = *(undefined2 *)(param_1 + 0xbc);
    *(undefined2 *)(*(int *)(uStack_4c + 0x18) + 0xbe) = *(undefined2 *)(param_1 + 0xbe);
  }
  FUN_0037632c(param_1);
  FUN_0037632c(param_1);
  fVar20 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar19 = fRam0014b31c;
  *(float *)(param_1 + 0xf28) = *(float *)(param_1 + 0xf28) + fVar20 * fRam0014b31c;
  fVar20 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  *(float *)(param_1 + 0xf30) = *(float *)(param_1 + 0xf30) + fVar20 * fVar19;
  fVar20 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar19 = fRam0014b320;
  *(float *)(param_1 + 0xf80) = *(float *)(param_1 + 0xf80) + fVar20 * fRam0014b320;
  fVar20 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  iVar11 = param_2 + 0x5c78;
  *(float *)(param_1 + 0xf88) = *(float *)(param_1 + 0xf88) + fVar20 * fVar19;
  FUN_003761f0(param_2,iVar11,param_1 + 0xedc);
  FUN_003762a4(param_2,iVar11,param_1 + 0xedc);
  FUN_003762a4(param_2,iVar11,param_1 + 0xf34);
  iVar23 = param_2 + 0xa98;
  iVar11 = iStack_78 + 0x1000;
  bVar16 = (*(uint *)(iStack_78 + 0x1710) & 1) != 0;
  if (bVar16) {
    iVar11 = *(int *)(iStack_78 + 0x12b8);
  }
  if ((bVar16 && iVar11 != 0) &&
     ((*(short *)(iStack_50 + 4) != 99 || (uRam0014b778 < *(uint *)(param_1 + 0x30))))) {
    if ((*(int *)(param_1 + 0x7c) != 0) ||
       (*(int *)(*(int *)(param_2 + 0x20ac) + 0x12b8) == param_1)) {
      sVar6 = FUN_00357d54(iVar23,*(int *)(param_1 + 0x7c),*(undefined1 *)(param_1 + 0x81));
      sVar3 = *(short *)(param_1 + 0x36);
      sVar6 = sVar6 * 0x400 - sVar3;
      if (iRam0014b77c < sVar6) {
        fVar19 = (float)VectorSignedToFloat((int)sVar3,(byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x36) = (short)(int)(fVar19 + fRam0014b780);
      }
      else if (sVar6 < iRam0014b784) {
        fVar19 = (float)VectorSignedToFloat((int)sVar3,(byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x36) = (short)(int)(fVar19 - fRam0014b780);
      }
      else {
        *(short *)(param_1 + 0x36) = sVar3 + sVar6;
      }
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
    }
  }
  fVar19 = fRam0014b788;
  if ((*(uint *)(param_1 + 0xe54) & 0x1000000) == 0) {
    FUN_001b3db4(param_1,param_2);
    uStack_a8 = (uint)(0x41000000 < *(int *)(param_1 + 0x6c));
    iStack_58 = iVar23;
    iVar11 = FUN_0035e8a0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),param_2,
                          iVar23,&fStack_ac,auStack_b0);
    fVar21 = fRam0014b790;
    fVar20 = fRam0014b78c;
    if ((iVar11 != 1) ||
       (in_fpscr = in_fpscr & 0xfffffff | (uint)(fStack_ac <= *(float *)(param_1 + 0x84)) << 0x1d,
       SUB41(in_fpscr >> 0x1d,0))) {
      sVar6 = *(short *)(param_1 + 0xbe);
      fVar22 = (float)FUN_002cfca0((int)sVar6);
      fStack_8c = *(float *)(param_1 + 0x28) + fVar20 * fVar22;
      fStack_88 = *(float *)(param_1 + 0x2c) + fVar21;
      fVar22 = (float)FUN_00338f60((int)sVar6);
      fStack_84 = *(float *)(param_1 + 0x30) + fVar20 * fVar22;
      iStack_7c = 0;
      fVar26 = (float)FUN_00358410(iStack_58,&iStack_7c,&uStack_b4,&fStack_8c);
      iVar11 = iRam0014b79c;
      fVar22 = fRam0014b798;
      fVar20 = fRam0014b794;
      bVar16 = fVar26 == fRam0014b794;
      *(float *)(param_1 + 0xeac) = fVar26;
      if (bVar16) {
        iVar23 = 1;
      }
      else {
        iVar23 = FUN_0035e8a0(fStack_8c,fStack_84,param_2,iStack_58,&fStack_b8,&iStack_bc);
        if ((iVar23 != 1) ||
           (in_fpscr = in_fpscr & 0xfffffff |
                       (uint)(fStack_b8 <= *(float *)(param_1 + 0xeac)) << 0x1d,
           SUB41(in_fpscr >> 0x1d,0))) {
          fVar26 = (float)VectorSignedToFloat((int)*(short *)(iStack_7c + 0xc),
                                              (byte)(in_fpscr >> 0x15) & 3);
          if (((int)(fVar26 * fVar22) < iVar11) ||
             ((iVar23 = FUN_00357b88(iStack_58,iStack_7c,uStack_b4), iVar23 != 0 ||
              (iVar23 = FUN_0035ea34(iStack_58,iStack_7c,uStack_b4), iVar23 == 7)))) {
            iVar23 = 3;
          }
          else {
            iVar23 = 0;
          }
        }
        else {
          iVar23 = 2;
        }
      }
      fVar26 = fRam0014b7a0;
      if (iVar23 == 1) {
        *(undefined2 *)(param_1 + 0xbc) = 0;
      }
      else if (iVar23 != 2 && iVar23 != 3) {
        sVar6 = *(short *)(param_1 + 0xbe);
        fVar27 = (float)FUN_002cfca0((int)sVar6);
        fStack_98 = *(float *)(param_1 + 0x28) + fVar26 * fVar27;
        fStack_94 = *(float *)(param_1 + 0x2c) + fVar21;
        fVar27 = (float)FUN_00338f60((int)sVar6);
        fStack_90 = *(float *)(param_1 + 0x30) + fVar26 * fVar27;
        iStack_80 = 0;
        fVar26 = (float)FUN_00358410(iStack_58,&iStack_80,&uStack_b4,&fStack_98);
        *(float *)(param_1 + 0xeb0) = fVar26;
        if (fVar26 == fVar20) {
          iVar23 = 1;
        }
        else {
          iVar23 = FUN_0035e8a0(fStack_98,fStack_90,param_2,iStack_58,&fStack_b8,&iStack_bc);
          if ((iVar23 != 1) ||
             (in_fpscr = in_fpscr & 0xfffffff |
                         (uint)(fStack_b8 <= *(float *)(param_1 + 0xeb0)) << 0x1d,
             SUB41(in_fpscr >> 0x1d,0))) {
            fVar20 = (float)VectorSignedToFloat((int)*(short *)(iStack_80 + 0xc),
                                                (byte)(in_fpscr >> 0x15) & 3);
            if (((int)(fVar20 * fVar22) < iVar11) ||
               ((iVar23 = FUN_00357b88(iStack_58,iStack_80,uStack_b4), iVar23 != 0 ||
                (iVar23 = FUN_0035ea34(iStack_58,iStack_80,uStack_b4), iVar23 == 7)))) {
              iVar23 = 3;
            }
            else {
              iVar23 = 0;
            }
          }
          else {
            iVar23 = 2;
          }
        }
        if (iVar23 == 1) {
          *(undefined2 *)(param_1 + 0xbc) = 0;
        }
        else if (iVar23 != 2 && iVar23 != 3) {
          fVar20 = (float)FUN_003696ec(*(float *)(param_1 + 0xeb0) - *(float *)(param_1 + 0xeac),
                                       fVar21);
          sVar6 = (short)(int)(fVar20 * fRam0014b7a4);
          iVar23 = *(int *)(param_1 + 0x7c);
          fVar20 = fRam0014b7a4;
          if (iVar23 == 0) goto LAB_0014b99c;
          fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar23 + 10),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar21 = (float)VectorSignedToFloat((int)*(short *)(iVar23 + 0xc),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar21 = fVar21 * fVar22;
          fVar26 = (float)VectorSignedToFloat((int)*(short *)(iVar23 + 0xe),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fStack_a4 = fStack_8c;
          fStack_9c = fStack_84;
          uStack_a0 = *(undefined4 *)(param_1 + 0xeac);
          uVar24 = FUN_00357b30(fVar20 * fVar22,fVar21,fVar26 * fVar22,
                                *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x10),&fStack_a4);
          uVar7 = uRam0014bc98;
          if ((*(int *)(param_1 + 0x7c) != iStack_7c) &&
             (uVar25 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) < fVar4) << 0x1f,
             in_fpscr = uVar25 | (uint)(NAN(*(float *)(param_1 + 0x6c)) || NAN(fVar4)) << 0x1c,
             (byte)(uVar25 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1))) {
            uVar25 = uRam0014bc9c;
            if ((*(uint *)(param_1 + 0xe54) & 4) == 0) {
              uVar25 = uRam0014bc98;
            }
            if (uVar25 < uVar24) goto LAB_0014b8e8;
          }
          fStack_a4 = fStack_98;
          fStack_9c = fStack_90;
          uStack_a0 = *(undefined4 *)(param_1 + 0xeb0);
          uVar25 = FUN_00357b30(fVar20 * fVar22,fVar21,fVar26 * fVar22,
                                *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x10),&fStack_a4);
          uVar24 = uRam0014bc9c;
          if ((*(int *)(param_1 + 0x7c) == iStack_80) ||
             (in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar4) << 0x1e
                         | (uint)(fVar4 <= *(float *)(param_1 + 0x6c)) << 0x1d,
             bVar15 = (byte)(in_fpscr >> 0x18), (bool)(bVar15 >> 5 & 1) && !(bool)(bVar15 >> 6))) {
            if ((*(uint *)(param_1 + 0xe54) & 4) != 0) goto joined_r0x0014b894;
          }
          else {
            if ((*(uint *)(param_1 + 0xe54) & 4) == 0) {
              uVar24 = uVar7;
            }
joined_r0x0014b894:
            if (uVar24 < uVar25) goto LAB_0014b908;
          }
          if (((iVar11 <= (int)fVar21) &&
              (iVar11 = FUN_00357b88(iStack_58,*(int *)(param_1 + 0x7c),
                                     *(undefined1 *)(param_1 + 0x81)), iVar11 == 0)) &&
             (iVar11 = FUN_0035ea34(iStack_58,*(undefined4 *)(param_1 + 0x7c),
                                    *(undefined1 *)(param_1 + 0x81)), iVar11 != 7)) {
            fVar20 = extraout_s1_00;
            if (((*(uint *)(param_1 + 0xe54) & 4) == 0) &&
               (in_fpscr = in_fpscr & 0xfffffff |
                           (uint)(*(float *)(param_1 + 0x2c) <=
                                 *(float *)(param_1 + 0x84) + fRam0014bca0) << 0x1d,
               fVar20 = fRam0014bca0, SUB41(in_fpscr >> 0x1d,0))) {
              fVar21 = (float)VectorSignedToFloat((int)sVar6,(byte)(in_fpscr >> 0x15) & 3);
              if ((int)ABS(fVar21) <= iRam0014bca4) {
                *(short *)(param_1 + 0xbc) = sVar6;
                fVar20 = (*(float *)(param_1 + 0xeb0) - *(float *)(param_1 + 0xeac)) * fVar19;
                *(float *)(param_1 + 0xc4) =
                     (*(float *)(param_1 + 0xeac) + fVar20 * fRam0014bca8) -
                     *(float *)(param_1 + 0x84);
              }
            }
            else {
              *(undefined2 *)(param_1 + 0xbc) = 0;
            }
            goto LAB_0014b99c;
          }
          uVar7 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) < fVar4) << 0x1f;
          in_fpscr = uVar7 | (uint)(NAN(*(float *)(param_1 + 0x6c)) || NAN(fVar4)) << 0x1c;
          if ((byte)(uVar7 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_0014b8e8;
        }
LAB_0014b908:
        FUN_00357b9c(param_1,param_2,5,uStack_a8);
        fVar20 = extraout_s1_02;
        goto LAB_0014b99c;
      }
LAB_0014b8e8:
      FUN_00357b9c(param_1,param_2,4,uStack_a8);
      fVar20 = extraout_s1_01;
    }
    else {
      FUN_00357b9c(param_1,param_2,1,uStack_a8);
      fVar20 = extraout_s1;
    }
LAB_0014b99c:
    fVar21 = *(float *)(param_1 + 0xeac);
    fVar22 = *(float *)(param_1 + 0x2c);
    uVar7 = in_fpscr & 0xfffffff;
    uVar24 = uVar7 | (uint)(fVar21 < fVar22) << 0x1f | (uint)(fVar21 == fVar22) << 0x1e;
    in_fpscr = uVar24 | (uint)(NAN(fVar21) || NAN(fVar22)) << 0x1c;
    bVar15 = (byte)(uVar24 >> 0x18);
    bVar14 = bVar15 >> 7;
    bVar16 = (bool)(bVar15 >> 6 & 1);
    bVar15 = (byte)(in_fpscr >> 0x1c) & 1;
    if (!bVar16 && bVar14 == bVar15) {
      fVar20 = *(float *)(param_1 + 0xeb0);
      in_fpscr = uVar7 | (uint)(fVar20 < fVar22) << 0x1f | (uint)(fVar20 == fVar22) << 0x1e |
                 (uint)(NAN(fVar20) || NAN(fVar22)) << 0x1c;
      bVar15 = (byte)(in_fpscr >> 0x18);
      bVar14 = bVar15 >> 7;
      bVar16 = (bool)(bVar15 >> 6 & 1);
      bVar15 = bVar15 >> 4 & 1;
    }
    if (!bVar16 && bVar14 == bVar15) {
      uVar7 = in_fpscr & 0xfffffff | (uint)(fVar21 < fVar20) << 0x1f |
              (uint)(fVar21 == fVar20) << 0x1e;
      in_fpscr = uVar7 | (uint)(NAN(fVar21) || NAN(fVar20)) << 0x1c;
      bVar15 = (byte)(uVar7 >> 0x18);
      if ((bool)(bVar15 >> 6 & 1) || bVar15 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        *(float *)(param_1 + 0x2c) = fVar21;
      }
      else {
        *(float *)(param_1 + 0x2c) = fVar20;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfeffffff;
  }
  uVar18 = uRam0014bcbc;
  iVar11 = iRam0014bcac;
  if (((*(short *)(iStack_50 + 4) == 0x5a) && ((~*(ushort *)(iRam0014bcac + -0x102) & 0xf) != 0)) &&
     (iRam0014bcb0 <= *(int *)(param_1 + 0x6c))) {
    fVar20 = *(float *)(param_1 + 0x30);
    uVar7 = 0;
    do {
      psVar10 = (short *)(iRam0014bcb4 + uVar7 * 0x1c);
      fVar21 = (float)VectorSignedToFloat((int)psVar10[2],(byte)(in_fpscr >> 0x15) & 3);
      fVar26 = (float)VectorSignedToFloat((int)psVar10[3],(byte)(in_fpscr >> 0x15) & 3);
      fVar26 = fVar26 + fVar21;
      uVar24 = in_fpscr & 0xfffffff;
      uVar25 = uVar24 | (uint)(fVar21 < fVar26) << 0x1f | (uint)(fVar21 == fVar26) << 0x1e;
      uVar17 = uVar25 | (uint)(NAN(fVar21) || NAN(fVar26)) << 0x1c;
      bVar15 = (byte)(uVar25 >> 0x18);
      fVar22 = fVar26;
      if (!(bool)(bVar15 >> 6 & 1) && bVar15 >> 7 == ((byte)(uVar17 >> 0x1c) & 1)) {
        fVar22 = fVar21;
        fVar21 = fVar26;
      }
      fVar26 = (float)VectorSignedToFloat((int)*psVar10,(byte)(uVar17 >> 0x15) & 3);
      uVar25 = uVar24 | (uint)(fVar20 < fVar26) << 0x1f | (uint)(fVar20 == fVar26) << 0x1e;
      in_fpscr = uVar25 | (uint)(NAN(fVar20) || NAN(fVar26)) << 0x1c;
      bVar15 = (byte)(uVar25 >> 0x18);
      if (!(bool)(bVar15 >> 6 & 1) && bVar15 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar26 = (float)VectorSignedToFloat((int)psVar10[1],(byte)(in_fpscr >> 0x15) & 3);
        in_fpscr = uVar24 | (uint)(fVar26 <= fVar20) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          fVar26 = *(float *)(param_1 + 0x28);
          uVar25 = uVar24 | (uint)(fVar26 < fVar21) << 0x1f | (uint)(fVar26 == fVar21) << 0x1e;
          in_fpscr = uVar25 | (uint)(NAN(fVar26) || NAN(fVar21)) << 0x1c;
          bVar15 = (byte)(uVar25 >> 0x18);
          if ((!(bool)(bVar15 >> 6 & 1) && bVar15 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
             (in_fpscr = uVar24 | (uint)(fVar22 <= fVar26) << 0x1d, !SUB41(in_fpscr >> 0x1d,0))) {
            if (((int)psVar10[5] - (int)psVar10[6] < (int)*(short *)(param_1 + 0x36)) &&
               ((int)*(short *)(param_1 + 0x36) < (int)psVar10[6] + (int)psVar10[5])) {
              *(char *)(iRam0014bcb8 + param_1) = (char)uVar7;
              *(undefined4 *)(param_1 + 0xea8) = uVar18;
              if ((uVar7 & 0xff) == 0) {
                uVar18 = FUN_00375750(*(undefined4 *)(param_1 + 0xe50),0);
                FUN_0037573c(iStack_5c,uVar18);
                *(undefined1 *)(iVar11 + 0x5a2) = 1;
              }
              else {
                uVar18 = FUN_00375750(*(undefined4 *)(param_1 + 0xe50),1);
                FUN_0037573c(iStack_5c,uVar18);
                *(undefined1 *)(iVar11 + 0x5a2) = 1;
              }
              break;
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 2);
  }
  fVar20 = fRam0014bcc0;
  uVar18 = puStack_54[1];
  uVar9 = puStack_54[2];
  *(undefined4 *)(param_1 + 0x3c) = *puStack_54;
  *(undefined4 *)(param_1 + 0x40) = uVar18;
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar20;
  iVar23 = FUN_003759d0();
  if (iVar23 < iRam0014bcc4) {
    if (*(char *)(param_1 + 0x1004) == '\0') {
      *(undefined1 *)(param_1 + 0x1004) = 1;
      goto LAB_0014bba0;
    }
  }
  else if (*(char *)(param_1 + 0x1004) == '\0') goto LAB_0014bba0;
  bVar15 = *(char *)(param_1 + 0x1004) + 1;
  *(byte *)(param_1 + 0x1004) = bVar15;
  if (3 < bVar15) {
    *(undefined1 *)(param_1 + 0x1004) = 0;
  }
LAB_0014bba0:
  if ((*(float *)(param_1 + 0x6c) == fVar4) && ((*(uint *)(param_1 + 0xe54) & 0x80000) == 0)) {
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
  }
  else {
    *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  }
  if (*(int *)(param_1 + 0x6c) < iRam0014bcc8) {
    bVar15 = *(byte *)(param_1 + 0xeec) & 0xfe;
  }
  else {
    bVar15 = *(byte *)(param_1 + 0xeec) | 1;
  }
  *(byte *)(param_1 + 0xeec) = bVar15;
  fVar4 = fRam0014bccc;
  iVar23 = *piRam0014adb4;
  bVar16 = iVar23 == 0x157;
  if (bVar16) {
    iVar23 = *(int *)(iVar11 + 0x4e8);
  }
  if (!bVar16 || iVar23 != 9) {
    uVar2 = *(ushort *)(param_1 + 0x1054);
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 2) == 0) {
        if ((uVar2 & 4) == 0) {
          if ((uVar2 & 8) != 0) {
            *(ushort *)(param_1 + 0x1054) = uVar2 & 0xfff7;
            fVar20 = (float)FUN_003759d0();
            fVar21 = (float)FUN_003759d0();
            fVar22 = (float)FUN_003759d0();
            iStack_bc = (int)(short)((short)(int)(fVar21 * fVar4) + 0x1e);
            fStack_b8 = (float)(int)(short)((short)(int)(fVar20 * fVar19) + 0x1e);
            FUN_00357a84(param_2,param_1 + 0x107c,&fStack_74,&fStack_68,
                         (int)(short)((short)(int)(fVar22 * fVar5) + 200));
          }
        }
        else {
          *(ushort *)(param_1 + 0x1054) = uVar2 & 0xfffb;
          fVar20 = (float)FUN_003759d0();
          fVar21 = (float)FUN_003759d0();
          fVar22 = (float)FUN_003759d0();
          iStack_bc = (int)(short)((short)(int)(fVar21 * fVar4) + 0x1e);
          fStack_b8 = (float)(int)(short)((short)(int)(fVar20 * fVar19) + 0x1e);
          FUN_00357a84(param_2,param_1 + 0x1070,&fStack_74,&fStack_68,
                       (int)(short)((short)(int)(fVar22 * fVar5) + 200));
        }
      }
      else {
        *(ushort *)(param_1 + 0x1054) = uVar2 & 0xfffd;
        fVar20 = (float)FUN_003759d0();
        fVar21 = (float)FUN_003759d0();
        fVar22 = (float)FUN_003759d0();
        iStack_bc = (int)(short)((short)(int)(fVar21 * fVar4) + 0x1e);
        fStack_b8 = (float)(int)(short)((short)(int)(fVar20 * fVar19) + 0x1e);
        FUN_00357a84(param_2,param_1 + 0x1064,&fStack_74,&fStack_68,
                     (int)(short)((short)(int)(fVar22 * fVar5) + 200));
      }
    }
    else {
      *(ushort *)(param_1 + 0x1054) = uVar2 & 0xfffe;
      fVar20 = (float)FUN_003759d0();
      fVar21 = (float)FUN_003759d0();
      fVar22 = (float)FUN_003759d0();
      iStack_bc = (int)(short)((short)(int)(fVar21 * fVar4) + 0x1e);
      fStack_b8 = (float)(int)(short)((short)(int)(fVar20 * fVar19) + 0x1e);
      FUN_00357a84(param_2,param_1 + 0x1058,&fStack_74,&fStack_68,
                   (int)(short)((short)(int)(fVar22 * fVar5) + 200));
    }
  }
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xf7ffffff;
  return;
}

