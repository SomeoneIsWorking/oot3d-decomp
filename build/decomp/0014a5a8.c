// OoT3D decomp @ 0014a5a8  name=FUN_0014a5a8  size=2588

/* WARNING: Instruction at (ram,0x0014ab6e) overlaps instruction at (ram,0x0014ab6c)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_0014a5a8(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int extraout_r12;
  int *piVar12;
  bool bVar13;
  uint in_fpscr;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float extraout_s1;
  int extraout_s3;
  float extraout_s12;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_s24;
  int aiStack_cc [2];
  undefined1 auStack_c4 [4];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  int iStack_5c;
  undefined4 *puStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  
  fVar3 = fRam0014a934;
  fVar20 = fRam0014a930;
  fStack_68 = fRam0014a930;
  fStack_64 = fRam0014a930;
  fStack_60 = fRam0014a930;
  fStack_74 = fRam0014a930;
  fStack_70 = fRam0014a934;
  fStack_6c = fRam0014a930;
  uStack_78 = *(undefined4 *)(param_2 + 0x20ac);
  iStack_48 = param_1 + 0xe00;
  *(undefined2 *)(param_1 + 0xe64) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined4 *)(param_1 + 0xed0) = *(undefined4 *)(param_1 + 0xec8);
  *(undefined4 *)(param_1 + 0xed4) = *(undefined4 *)(param_1 + 0xecc);
  uVar14 = VectorSignedToFloat((int)*(float *)(param_2 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xec8) = uVar14;
  iVar9 = iRam0014a938;
  uVar14 = VectorSignedToFloat((int)*(float *)(param_2 + 0x40),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0xecc) = uVar14;
  sVar4 = *(short *)(param_1 + 0xbe);
  fVar21 = *(float *)(iVar9 + 0x1c);
  iVar9 = *(int *)(param_2 + 0x20ac);
  iStack_5c = param_2;
  fVar15 = (float)func_0x002cfca0((int)sVar4);
  fVar23 = *(float *)(param_1 + 0x28);
  fVar16 = (float)func_0x00338f60((int)sVar4);
  fVar24 = *(float *)(param_1 + 0x30);
  sVar4 = *(short *)(iVar9 + 0xbe);
  fVar17 = (float)func_0x002cfca0((int)sVar4);
  fVar22 = *(float *)(iVar9 + 0x28);
  fVar18 = (float)func_0x00338f60((int)sVar4);
  sVar4 = func_0x003758b0((*(float *)(iVar9 + 0x30) + fVar20 * fVar18) - (fVar24 + fVar21 * fVar16),
                          (fVar22 + fVar20 * fVar17) - (fVar23 + fVar21 * fVar15));
  iVar9 = (int)(short)(sVar4 - *(short *)(param_1 + 0x36));
  fVar15 = (float)func_0x002cfca0(iVar9);
  fVar16 = (float)func_0x00338f60(iVar9);
  if (iRam0014a93c < (int)fVar15) {
    *(undefined1 *)(param_1 + 0xffc) = 5;
  }
  else if ((uint)fRam0014a940 < (uint)fVar15) {
    *(undefined1 *)(param_1 + 0xffc) = 4;
  }
  else if (fVar16 <= fVar20) {
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar20) << 0x1f |
            (uint)(fVar15 == fVar20) << 0x1e;
    in_fpscr = uVar5 | (uint)(NAN(fVar15) || NAN(fVar20)) << 0x1c;
    bVar2 = (byte)(uVar5 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      *(undefined1 *)(param_1 + 0xffc) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0xffc) = 3;
    }
  }
  else {
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar20) << 0x1f |
            (uint)(fVar15 == fVar20) << 0x1e;
    in_fpscr = uVar5 | (uint)(NAN(fVar15) || NAN(fVar20)) << 0x1c;
    bVar2 = (byte)(uVar5 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      *(undefined1 *)(param_1 + 0xffc) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xffc) = 1;
    }
  }
  if ((*(uint *)(param_1 + 0xe54) & 0x2000) == 0) {
    iVar9 = *(int *)(param_2 + 0x20ac);
    if ((*(char *)(param_1 + 0x1a4) == '\x02') && (*(byte *)(param_1 + 0xe74) < 2)) {
      fVar15 = (float)func_0x00357eac(param_1,iVar9);
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(fVar15 <= *(float *)(iVar9 + 0x6c) + fRam0014a944) << 0x1d;
      if ((!SUB41(in_fpscr >> 0x1d,0)) ||
         (iRam0014a948 < (int)ABS(*(float *)(param_1 + 0x2c) - *(float *)(iVar9 + 0x2c))))
      goto LAB_0014a7f0;
      sVar4 = func_0x0036e800(iVar9,param_1);
      iVar19 = func_0x00338f60((int)(short)(sVar4 - *(short *)(iVar9 + 0x36)));
      if (iVar19 < iRam0014a94c) goto LAB_0014a7f0;
      iVar19 = -1;
      if (*(char *)(param_1 + 0xffc) == '\x05') {
        iVar6 = -1;
      }
      else if (*(char *)(param_1 + 0xffc) == '\x04') {
        iVar6 = 1;
      }
      else {
        iVar6 = 0;
      }
      if (iVar6 != -1) {
        if (iVar6 != 1) goto LAB_0014a7f0;
        iVar19 = 1;
      }
    }
    else {
LAB_0014a7f0:
      iVar19 = 0;
    }
    if (iVar19 != 0) {
      uVar5 = *(uint *)(param_1 + 0xe54);
      bVar13 = (uVar5 & 0x10000) == 0;
      if (bVar13) {
        uVar5 = *(uint *)(iRam0014a950 + iVar9);
      }
      if (bVar13 && uVar5 == 0) {
        func_0x001ebf34(param_2,param_1);
      }
    }
    iVar19 = iRam0014a958;
    fVar15 = fRam0014a954;
    if ((*(int *)(param_1 + 0xe70) == 0) && (iVar6 = func_0x001a60c0(param_2,param_1), iVar6 == 1))
    {
      uVar14 = func_0x003603c0(iVar9 + 0x254,0x23);
      fVar16 = (float)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piRam0014a95c + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar9 = (int)((fVar16 * fVar15) / fVar17 + fVar3);
      *(int *)(param_1 + 0x1a8) = iVar9;
      *(int *)(param_1 + 0x1ac) = iVar9;
      *(undefined4 *)(param_1 + 0xe70) = 1;
      if (*(char *)(param_1 + 0x1a4) != '\x11' && *(char *)(param_1 + 0x1a4) != '\x12') {
        if (*(char *)(iVar19 + *(short *)(param_1 + 0x1c)) != '\0' &&
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
    else if ((*(int *)(param_1 + 0xe70) == 1) &&
            (iVar6 = func_0x0021fd50(param_2,param_1), iVar6 == 1)) {
      uVar14 = func_0x003603c0(iVar9 + 0x254,0x24);
      fVar16 = (float)VectorSignedToFloat(uVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piRam0014a95c + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar9 = (int)((fVar16 * fVar15) / fVar17 + fVar3);
      *(int *)(param_1 + 0x1a8) = iVar9;
      *(int *)(param_1 + 0x1ac) = iVar9;
      *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffeffff;
      *(undefined4 *)(param_1 + 0xe70) = 0;
      if (*(char *)(param_1 + 0x1a4) != '\x11' && *(char *)(param_1 + 0x1a4) != '\x12') {
        if (*(char *)(iVar19 + *(short *)(param_1 + 0x1c)) != '\0' &&
            *(short *)(param_1 + 0x1c) != 4) goto LAB_0014aa00;
        goto LAB_0014a8f8;
      }
    }
  }
  uVar14 = uRam0014ada4;
  iVar9 = iRam0014ada0;
  uVar5 = *(uint *)(param_1 + 0xe54);
  uStack_4c = param_1 + 0x1000;
  puVar10 = (undefined4 *)(param_1 + 0xe8c);
  puVar11 = (undefined4 *)(param_1 + 0xe80);
  if ((uVar5 & 0x80000) != 0) {
    if ((uVar5 & 0x100000) == 0) {
      bVar13 = (uVar5 & 0x200000) != 0;
      uVar8 = uStack_4c;
      if (bVar13) {
        uVar8 = (uint)*(byte *)(param_1 + 0x1a4);
      }
      if ((bVar13 && uVar8 != 0xb) && (*(int *)(param_1 + 0x1014) == 1)) {
        *(undefined1 *)(param_1 + 0x1a4) = 0xb;
        *(undefined1 *)(param_1 + 0xe74) = 3;
        *(uint *)(param_1 + 0xe54) = uVar5 & 0xffdff7ff;
        *puVar11 = *puVar10;
        *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
        *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
        uVar5 = *(uint *)(param_1 + 0xe54);
        goto joined_r0x0014aaf8;
      }
    }
    else if (*(int *)(param_1 + 0x1014) == 1) {
      *(undefined1 *)(param_1 + 0x1a4) = 0xb;
      *(undefined1 *)(param_1 + 0xe74) = 3;
      *(uint *)(param_1 + 0xe54) = uVar5 & 0xffeff7ff;
      *puVar11 = *puVar10;
      *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
      *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
      uVar5 = *(uint *)(param_1 + 0xe54);
joined_r0x0014aaf8:
      if ((uVar5 & 0x8000000) != 0) {
        uStack_c0 = uRam0014adac;
        uStack_bc = uRam0014ada8;
        func_0x0037547c(uRam0014adb0,param_1 + 0xe80,4,uRam0014adac);
      }
      uVar7 = func_0x0036ae14(param_1 + 0x1c4,
                              *(undefined4 *)
                               (*(int *)(iVar9 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                               (uint)*(byte *)(param_1 + 0xe74) * 4));
      uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
      func_0x00375c08(fVar3,fVar20,uVar7,uVar14,param_1 + 0x1c4,
                      *(undefined4 *)
                       (*(int *)(iVar9 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                       (uint)*(byte *)(param_1 + 0xe74) * 4),2);
    }
  }
  iStack_50 = iStack_5c + 0x100;
  if (((*(short *)(iStack_5c + 0x104) == 0x5a && (*(uint *)(iRam0014adb4 + 8) & 0xf) == 0xd) &&
      (*(char *)(param_1 + 0x1a4) != '\x01')) &&
     ((*(uint *)(iRam0014adb8 + *(int *)(param_2 + 0x20ac)) & 0x800000) != 0)) {
    iVar9 = func_0x00357ea0(iStack_5c);
    iVar19 = func_0x00375750(*(undefined4 *)(param_1 + 0xe50),0);
    if (iVar9 == iVar19) goto LAB_0014abd4;
    iVar9 = func_0x00357ea0(iStack_5c);
    iVar19 = func_0x00375750(*(undefined4 *)(param_1 + 0xe50),1);
    if (iVar9 == iVar19) goto LAB_0014abd4;
LAB_0014ac38:
    if ((0 < *(short *)(uStack_4c + 0xc)) &&
       (sVar4 = *(short *)(uStack_4c + 0xc) + -1, *(short *)(uStack_4c + 0xc) = sVar4, sVar4 == 0))
    {
      func_0x00357d6c(param_1);
    }
  }
  else {
LAB_0014abd4:
    if (*(short *)(iStack_50 + 4) == 0x57 && (*(uint *)(iRam0014adb4 + 8) & 0xf) == 0xd) {
      uVar5 = *(uint *)(iRam0014adb8 + *(int *)(param_2 + 0x20ac));
      bVar13 = (uVar5 & 0x800000) != 0;
      if (bVar13) {
        uVar5 = (uint)*(byte *)(param_1 + 0x1a4);
      }
      if (bVar13 && uVar5 != 1) goto LAB_0014ac38;
    }
    if (*(short *)(iStack_50 + 4) == 0x5d && (*(uint *)(iRam0014adb4 + 8) & 0xf) == 0xd) {
      uVar5 = *(uint *)(iRam0014adb8 + *(int *)(param_2 + 0x20ac));
      bVar13 = (uVar5 & 0x800000) != 0;
      if (bVar13) {
        uVar5 = (uint)*(byte *)(param_1 + 0x1a4);
      }
      if (bVar13 && uVar5 != 1) goto LAB_0014ac38;
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
  uVar5 = *(uint *)(param_1 + 0xe54);
  if ((uVar5 & 0x2000) != 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x1a4);
  if ((((cVar1 == '\n' || cVar1 == '\t') || cVar1 == '\b') &&
      ((cVar1 == '\b' || cVar1 == '\t') || cVar1 == '\n')) &&
     (((*(uint *)(param_2 + 0x18) & 1) != 0 &&
      (((*(short *)(iRam0014adc0 + param_2) == 8 && (uVar5 & 1) == 0) && (uVar5 & 0x100) == 0) &&
       (uVar5 & 0x200) == 0)))) {
    if (*(char *)(param_1 + 0xe9c) == '\0') {
      *puVar11 = *puVar10;
      *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
      *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
      if (((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) &&
         (iVar9 = func_0x003759d0(), iVar9 < iRam0014b2f0)) {
        uStack_c0 = uRam0014adac;
        uStack_bc = uRam0014ada8;
        func_0x0037547c(uRam0014adb0,param_1 + 0xe80,4,uRam0014adac);
      }
    }
    else {
      *(uint *)(param_1 + 0xe54) = uVar5 | 0x400101;
      uVar5 = *(byte *)(param_1 + 0xe9c) - 1;
      *(char *)(param_1 + 0xe9c) = (char)uVar5;
      bVar13 = (uVar5 & 0xff) == 0;
      if (bVar13) {
        uVar5 = 0xd2;
      }
      *(undefined4 *)(param_1 + 0xea4) = 0;
      if (!bVar13) {
        if (*(char *)(param_1 + 0x1b0) != '\0') {
          *(undefined4 *)(param_1 + 0xea0) = 0x69;
          goto LAB_0014ae18;
        }
        if ((*(uint *)(param_1 + 0xe54) & 0x400000) != 0) {
          *(undefined4 *)(param_1 + 0xea0) = 0x5a;
          *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffbfffff;
          goto LAB_0014ae18;
        }
        uVar5 = 0xc;
      }
      *(uint *)(param_1 + 0xea0) = uVar5;
    }
  }
LAB_0014ae18:
  uVar14 = uRam0014b2f4;
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
          uStack_c0 = uRam0014adac;
          uStack_bc = uRam0014ada8;
          func_0x0037547c(uVar14,0,4,uRam0014adac);
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
          uStack_c0 = uRam0014adac;
          uStack_bc = uRam0014ada8;
          func_0x0037547c(uVar14,0,4,uRam0014adac);
        }
      }
    }
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piRam0014a95c + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (((int)(fRam0014b2f8 / fVar15 + fRam0014b2fc) == *(int *)(param_1 + 0xea4)) &&
       (iVar9 = func_0x003759d0(), iVar9 < 0x3e800000)) {
      *puVar11 = *puVar10;
      *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
      *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
      if ((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) {
        uStack_c0 = uRam0014adac;
        uStack_bc = uRam0014ada8;
        func_0x0037547c(uRam0014adb0,param_1 + 0xe80,4,uRam0014adac);
      }
    }
    *(undefined1 *)(param_2 + 0x2e18) = *(undefined1 *)(param_1 + 0xe9c);
  }
  func_0x00376864(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0xfa8) + 0x17) & 2) != 0) {
    if (iRam0014b300 < (int)*(float *)(param_1 + 0x6c)) {
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - fVar3;
    }
  }
  if ((*(byte *)(param_1 + 0xf9d) & 2) != 0) {
    *puVar11 = *puVar10;
    *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
    *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
    if ((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) {
      coprocessor_movefromRt(10,5,0,in_cr13,in_cr0);
      coprocessor_movefromRt(3,0,5,in_cr0,in_cr6);
      coprocessor_load(3,in_cr1,param_1);
      coprocessor_store(3,in_cr9,&stack0x000001a0);
      coprocessor_load(0,in_cr3,&stack0x0000006c);
      iVar9 = extraout_r12;
      piVar12 = (int *)auStack_c4;
      fVar15 = extraout_s1;
      do {
        fVar16 = *(float *)(param_1 + 8);
        coprocessor_loadlong(0,in_cr1,piVar12 + 3);
        iVar9 = iVar9 + -0x50;
        coprocessor_storelong(0,in_cr0,iVar9);
        piVar12[-1] = 0x14afc8;
        piVar12[-2] = iVar9;
        coprocessor_movefromRt(10,5,5,in_cr0,in_cr6);
        *(float *)(param_1 + 0x308) = fVar20;
        *(float *)(param_1 + 0x300) = fVar16;
        *(float *)(param_1 + 0x1a0) = fVar16;
        coprocessor_movefromRt(10,5,5,in_cr0,in_cr12);
        *(float *)(param_1 + 0x2e8) = fVar15;
        *(float *)(param_1 + 0x120) = fVar16;
        *(float *)(param_1 + 0x348) = ABS(extraout_s12);
        *(float *)(param_1 + 0x340) = fVar16;
        *(float *)(param_1 + 0x1a0) = fVar16;
        fVar20 = ABS(unaff_s24);
        *(float *)(param_1 + 0x328) = fVar15;
        *(float *)(param_1 + 0x120) = fVar16;
        coprocessor_movefromRt(10,5,6,in_cr0,in_cr6);
        *(float *)(param_1 + 0x388) = fVar20;
        *(float *)(param_1 + 0x380) = fVar16;
        *(float *)(param_1 + 0x1a0) = fVar16;
        coprocessor_movefromRt(10,5,6,in_cr0,in_cr12);
        *(float *)(param_1 + 0x368) = fVar15;
        *(float *)(param_1 + 0x398) = fVar20;
        *(float *)(param_1 + 0x3c8) = fVar20;
        *(float *)(param_1 + 0x3c0) = fVar20;
        *(float *)(param_1 + 0x3b0) = fVar20;
        *(float *)(param_1 + 0x3a8) = fVar3;
        coprocessor_storelong(1,in_cr0,param_1 + 0x290);
        coprocessor_store(0,in_cr1,piVar12 + 0xf0);
        piVar12[0x3f] = (int)fVar16;
        coprocessor_function(10,0xb,1,in_cr0,in_cr0,in_cr2);
        piVar12[0x7e] = extraout_s3;
        fVar15 = fVar15 * fVar16;
        piVar12[0x1f] = extraout_s3;
        piVar12[0x20] = (int)fVar16;
        coprocessor_store(0,in_cr2,piVar12 + 0xee);
        param_1 = 0;
        piVar12 = piVar12 + -2;
      } while( true );
    }
  }
  if (*(char *)(param_1 + 0x1a4) != '\x04') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack_bc = *(undefined4 *)(param_1 + 0xe40);
  uStack_c0 = 0xe;
  func_0x00408828(param_1 + 0x1b4,param_1 + 0xeb8,param_1,iStack_5c);
  coprocessor_store(1,in_cr0,*(byte *)(iStack_48 + 0xc4) + 0x290);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

