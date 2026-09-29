// OoT3D decomp @ 001ba22c  name=FUN_001ba22c  size=3284

void FUN_001ba22c(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float *pfVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float afStack_ac [4];
  float fStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [7];
  undefined4 uStack_48;
  float fStack_44;
  int iStack_40;

  fVar18 = DAT_001ba628;
  fVar17 = DAT_001ba624;
  piVar2 = DAT_001ba620;
  fVar1 = DAT_001ba61c;
  fVar14 = DAT_001ba618;
  fVar15 = DAT_001ba614;
  uVar10 = 0;
  if ((*(uint *)(param_1 + 4) & 0x8000) != 0) {
    FUN_0036b4ec(param_1 + 0x1a4,0);
    return;
  }
  iVar6 = *DAT_001ba620;
  if ((*(byte *)(param_1 + 0x765) & 2) == 0) {
    if (*(char *)(param_2 + 0x208e) != '\0') {
      return;
    }
    uVar8 = 0;
    bVar12 = (*(byte *)(param_1 + 0x6b5) & 2) != 0;
    if (bVar12) {
      *(byte *)(param_1 + 0x6b5) = *(byte *)(param_1 + 0x6b5) & 0xfd;
      uVar8 = **(uint **)(param_1 + 0x6e0);
    }
    if ((*(byte *)(param_1 + 0x70d) & 2) == 0) {
      if (bVar12) goto LAB_001ba358;
    }
    else {
      *(byte *)(param_1 + 0x70d) = *(byte *)(param_1 + 0x70d) & 0xfd;
      uVar8 = uVar8 | **(uint **)(param_1 + 0x738);
LAB_001ba358:
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x938) = (short)(int)(fVar14 / fVar19 + fVar17);
      if (*(char *)(param_1 + 0xb9) == '\x01') {
        if (*(short *)(param_1 + 0x936) == 0) {
          FUN_00375bcc(param_1,DAT_001ba62c);
          fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(param_1 + 0x936) = (short)(int)(fVar1 / fVar14 + fVar17);
          FUN_00375ed8(param_1,0,200);
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x936) = 0;
        *(undefined2 *)(param_1 + 0x92c) = 0;
        *(undefined2 *)(param_1 + 0x93c) = 1;
        uVar9 = DAT_001ba630;
        fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x938) = (short)(int)(fVar14 / fVar19 + fVar17);
        FUN_003717ac(param_1 + 0x1a4,uVar9,3);
        *(short *)(param_1 + 0x934) = (short)(int)*(float *)(param_1 + 0x1f0);
        FUN_00375ed8(param_1,0x400000,200,0);
        iVar6 = FUN_00375eb8(param_1);
        if (iVar6 == 0) {
          FUN_00375b70(param_2,param_1);
          fVar15 = DAT_001ba9b8;
          uVar10 = DAT_001ba9b4;
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          *(undefined4 *)(param_1 + 0x70) = uVar10;
          *(undefined2 *)(param_1 + 0x928) = 3;
          uVar10 = DAT_001ba9bc;
          fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(param_1 + 0x940) = (short)(int)(fVar15 / fVar14 + fVar17);
          FUN_00375bcc(param_1,uVar10);
          if ((DAT_001ba9c0 & uVar8) == 0) {
            *(undefined4 *)(param_1 + 0x6a0) = DAT_001ba9c4;
          }
          else {
            *(undefined4 *)(param_1 + 0x6a0) = DAT_001ba9c8;
            *(undefined2 *)(param_1 + 0x93e) = 0xc;
          }
          return;
        }
        FUN_00375bcc(param_1,DAT_001ba634);
      }
    }
    sVar4 = *(short *)(param_1 + 0x936);
    bVar12 = sVar4 == 0;
    if (bVar12) {
      sVar4 = *(short *)(param_1 + 0x934);
    }
    if (bVar12 && sVar4 == 0) {
      uVar9 = *(undefined4 *)(param_2 + 0x20ac);
      bVar12 = (*(byte *)(param_1 + 0x7bf) & 1) != 0;
      if (bVar12) {
        *(byte *)(param_1 + 0x7bf) = *(byte *)(param_1 + 0x7bf) & 0xfe;
      }
      bVar13 = (*(byte *)(param_1 + 0x817) & 1) != 0;
      if (bVar13) {
        *(byte *)(param_1 + 0x817) = *(byte *)(param_1 + 0x817) & 0xfe;
      }
      if ((*(byte *)(param_1 + 0x86f) & 1) == 0) {
        if (!bVar13 && !bVar12) goto LAB_001ba598;
      }
      else {
        *(byte *)(param_1 + 0x86f) = *(byte *)(param_1 + 0x86f) & 0xfe;
      }
      if (*(short *)(param_1 + 0x92c) == 0) {
        FUN_00375bcc(param_1,DAT_001ba638);
      }
      if (*(short *)(param_1 + 0x93c) == 0) {
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x93c) = (short)(int)(fVar18 / fVar14 + fVar17);
        if (*(int *)(param_1 + 0x980) != 0) {
          *(undefined2 *)(param_1 + 0x934) = 0x96;
        }
      }
      if (*(short *)(DAT_001ba63c + 0x52) == 0) {
        if (*(char *)(DAT_001ba640 + *(int *)(param_2 + 0x20ac)) < '\0') {
          *(undefined1 *)(*(int *)(param_2 + 0x20ac) + 0x2488) = 0;
        }
        (**(code **)(DAT_001ba644 + param_2))(param_2,0xfffffff8);
      }
      FUN_00375bcc(uVar9,DAT_001ba648);
      FUN_00374bb8(DAT_001ba650,DAT_001ba64c,param_2,param_1,(int)*(short *)(param_1 + 0x92));
    }
  }
  else {
    *(byte *)(param_1 + 0x765) = *(byte *)(param_1 + 0x765) & 0xfd;
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x938) = (short)(int)(fVar14 / fVar19 + fVar17);
    *(undefined1 *)(param_1 + 0x944) = 0;
    fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(short *)(param_1 + 0x92c) = (short)(int)(fVar15 / fVar14 + fVar17);
  }
LAB_001ba598:
  if (*(short *)(param_1 + 0x936) == 0) {
    FUN_0036b4ec(param_1 + 0x1a4,0);
  }
  sVar4 = *(short *)(param_1 + 0x92c);
  bVar12 = sVar4 == 0;
  if (bVar12) {
    sVar4 = *(short *)(param_1 + 0x936);
  }
  if (bVar12 && sVar4 == 0) {
    FUN_0036b96c(param_1);
  }
  fVar14 = DAT_001ba654;
  FUN_00376340(DAT_001ba654,DAT_001ba654,DAT_001ba654,param_2,param_1,4);
  fVar22 = DAT_001ba9d4;
  fVar19 = DAT_001ba9d0;
  if (*(short *)(param_1 + 0x936) == 0) {
    if (*(short *)(param_1 + 0x92c) == 0) {
      (**(code **)(param_1 + 0x6a0))(param_1,param_2);
    }
    else {
      iVar6 = *piVar2;
      fVar20 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x978) =
           *(short *)(param_1 + 0x978) + (short)(int)(fVar17 + fVar20 * DAT_001ba9cc * DAT_001ba9d0)
      ;
      sVar4 = *(short *)(param_1 + 0x92c) + -1;
      *(short *)(param_1 + 0x92c) = sVar4;
      if (sVar4 == 0) {
        *(undefined2 *)(param_1 + 0x978) = 0;
      }
      iVar6 = (int)*(short *)(iVar6 + 0x110);
      fVar20 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar23 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar20 = (float)VectorSignedToFloat((int)(fVar15 / fVar20 + fVar17),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar15 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x978));
      sVar4 = (short)(int)(fVar15 * ((fVar23 * fVar22 * fVar19) / fVar20) * fVar21 * DAT_001ba9d8);
      iVar16 = (int)sVar4;
      iVar6 = iVar16;
      if (iVar16 < 0) {
        iVar6 = -iVar16;
      }
      bVar12 = *(short *)(param_1 + 0x942) == iVar6;
      if (iVar6 <= *(short *)(param_1 + 0x942)) {
        bVar12 = *(char *)(param_1 + 0x944) == '\0';
      }
      if (bVar12) {
        FUN_00375bcc(param_1,DAT_001ba9dc);
        *(undefined1 *)(param_1 + 0x944) = 1;
      }
      iVar6 = iVar16;
      if (iVar16 < 0) {
        iVar6 = -iVar16;
      }
      if (*(short *)(param_1 + 0x942) < iVar6) {
        *(undefined1 *)(param_1 + 0x944) = 0;
      }
      sVar3 = sVar4;
      if (iVar16 < 0) {
        sVar3 = -sVar4;
      }
      *(short *)(param_1 + 0x942) = sVar3;
      fVar15 = DAT_001ba9e0;
      afStack_64[6] = (float)FUN_002cfca0(iVar16);
      afStack_64[6] = afStack_64[6] * fVar15;
      uStack_48 = (float)FUN_00338f60(iVar16);
      uStack_48 = uStack_48 * fVar15;
      fStack_44 = fVar14;
      fStack_94 = *(float *)(param_1 + 0x958);
      fStack_90 = *(float *)(param_1 + 0x95c);
      fStack_8c = *(float *)(param_1 + 0x960);
      fStack_80 = 0.0;
      fStack_84 = 0.0;
      fStack_88 = 1.0;
      fStack_78 = 0.0;
      fStack_74 = 1.0;
      fStack_70 = 0.0;
      fStack_68 = 0.0;
      afStack_64[0] = 0.0;
      afStack_64[1] = 1.0;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar15 = fVar15 * DAT_001ba9e4;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == fVar14) << 0x1e;
      fStack_7c = fStack_94;
      fStack_6c = fStack_90;
      afStack_64[2] = fStack_8c;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar19 = (float)FUN_003727f0(fVar15);
        fVar15 = (float)FUN_00372674(fVar15);
        fVar22 = fStack_88 * fVar19;
        fStack_88 = fStack_88 * fVar15 - fStack_80 * fVar19;
        fStack_80 = fVar22 + fStack_80 * fVar15;
        fVar22 = fStack_78 * fVar19;
        fStack_78 = fStack_78 * fVar15 - fStack_70 * fVar19;
        fStack_70 = fVar22 + fStack_70 * fVar15;
        fVar22 = fStack_68 * fVar19;
        fStack_68 = fStack_68 * fVar15 - afStack_64[1] * fVar19;
        afStack_64[1] = fVar22 + afStack_64[1] * fVar15;
      }
      FUN_003735ac(afStack_64 + 3,&fStack_88,afStack_64 + 6);
      *(short *)(param_1 + 0xc0) = sVar4 * -2;
      *(float *)(param_1 + 0x28) = afStack_64[3];
      *(float *)(param_1 + 0x30) = afStack_64[5];
    }
  }
  else {
    *(short *)(param_1 + 0x936) = *(short *)(param_1 + 0x936) + -1;
  }
  iVar6 = DAT_001ba9e8;
  uVar8 = (uint)*(short *)(param_1 + 0x936);
  uVar7 = 0;
  if (uVar8 == 0) {
    sVar4 = *(short *)(param_1 + 0x92c);
    bVar12 = sVar4 == 0;
    if (bVar12) {
      sVar4 = *(short *)(param_1 + 0x940);
    }
    bVar13 = bVar12 && sVar4 == 0;
    if (bVar12 && sVar4 == 0) {
      bVar13 = *(short *)(param_1 + 0x93e) == 0;
    }
    if (!bVar13) goto LAB_001babf8;
    sVar4 = *(short *)(param_1 + 0x934);
    bVar12 = sVar4 == 0;
    if (bVar12) {
      sVar4 = *(short *)(param_1 + 0x93c);
    }
    if (!bVar12 || sVar4 != 0) {
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x1555;
      goto LAB_001babf8;
    }
    if (*(int *)(param_1 + 0x6a0) != DAT_001ba9e8) {
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x930) = (short)(int)(fVar18 / fVar15 + fVar17);
      *(undefined2 *)(param_1 + 0x932) = 0;
    }
    if (*(short *)(param_1 + 0x930) == 0) {
      if (*(short *)(param_1 + 0x932) != 0) {
        sVar4 = *(short *)(param_1 + 0x932) + -1;
        *(short *)(param_1 + 0x932) = sVar4;
        if (sVar4 == 0) {
          FUN_00375bcc(param_1,DAT_001ba638);
          fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(param_1 + 0x930) = (short)(int)(fVar18 / fVar15 + fVar17);
        }
        uVar7 = 0x8000;
      }
    }
    else {
      sVar4 = *(short *)(param_1 + 0x930) + -1;
      *(short *)(param_1 + 0x930) = sVar4;
      if (sVar4 == 0) {
        FUN_00375bcc(param_1,DAT_001ba638);
        fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0x932) = (short)(int)(fVar18 / fVar15 + fVar17);
      }
    }
    uVar9 = *(undefined4 *)(param_1 + 0xbc);
    fStack_44 = *(float *)(param_1 + 0xc0);
    uStack_48._2_2_ = (short)((uint)uVar9 >> 0x10);
    if (*(int *)(param_1 + 0x6a0) == iVar6) {
      uVar5 = *(ushort *)(param_1 + 0x92);
    }
    else {
      uVar5 = *(ushort *)(param_1 + 0x924);
    }
    if ((int)(short)(uStack_48._2_2_ - (uVar5 ^ uVar7)) + 0x4000U < 0x8001) {
      uStack_48 = (float)uVar9;
      FUN_00375a18((int)&uStack_48 + 2,(int)(short)(uVar5 ^ uVar7),4,0x2000);
    }
    else {
      uStack_48._0_2_ = (undefined2)uVar9;
      uStack_48 = (float)CONCAT22(uStack_48._2_2_ + 0x1555,(undefined2)uStack_48);
    }
    *(undefined2 *)(param_1 + 0xbc) = (undefined2)uStack_48;
    *(short *)(param_1 + 0xbe) = uStack_48._2_2_;
    *(undefined2 *)(param_1 + 0xc0) = fStack_44._0_2_;
    *(undefined2 *)(param_1 + 0x34) = (undefined2)uStack_48;
    *(short *)(param_1 + 0x36) = uStack_48._2_2_;
    *(undefined2 *)(param_1 + 0x38) = fStack_44._0_2_;
    if (uVar7 == 0) {
      uVar7 = *(ushort *)(param_1 + 0x930);
    }
    else {
      if (uVar7 != 0x8000) goto LAB_001babf8;
      uVar7 = *(ushort *)(param_1 + 0x932);
    }
    if (0xe < (short)uVar7) goto LAB_001babf8;
    if ((uVar7 & 1) == 0) {
      sVar4 = *(short *)(param_1 + 0xbe) + -0x555;
    }
    else {
      sVar4 = *(short *)(param_1 + 0xbe) + 0x555;
    }
  }
  else {
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    iVar16 = (int)(fVar1 / fVar15 + fVar17);
    if ((int)(iVar16 + ((uint)(iVar16 >> 0x1f) >> 0x1e)) >> 2 <= (int)uVar8) goto LAB_001babf8;
    if ((uVar8 & 1) == 0) {
      sVar4 = *(short *)(param_1 + 0xbe) + -0x800;
    }
    else {
      sVar4 = *(short *)(param_1 + 0xbe) + 0x800;
    }
  }
  *(short *)(param_1 + 0xbe) = sVar4;
LAB_001babf8:
  if ((*(int *)(param_1 + 0x6a0) == iVar6) && ((*(uint *)(param_2 + 0xf8) & 0x10) != 0)) {
    uVar10 = 0xff;
  }
  fStack_44 = (float)(uint)*(byte *)(param_1 + 0x945);
  uStack_48 = (float)(uint)*(byte *)(param_1 + 0x946);
  afStack_64[6] = (float)(uint)*(byte *)(param_1 + 0x947);
  FUN_00375a18(&fStack_44,uVar10,1,0x3f);
  FUN_00375a18(&uStack_48,0,1,0x3f);
  FUN_00375a18(afStack_64 + 6,0,1,0x3f);
  *(char *)(param_1 + 0x945) = SUB41(fStack_44,0);
  *(char *)(param_1 + 0x946) = SUB41(uStack_48,0);
  *(char *)(param_1 + 0x947) = SUB41(afStack_64[6],0);
  if ((*(char *)(param_1 + 0xb7) != '\0') || (*(int *)(param_1 + 0x6a0) == DAT_001baf7c)) {
    if ((*(short *)(param_1 + 0x93c) == 0) ||
       (sVar4 = *(short *)(param_1 + 0x93c) + -1, *(short *)(param_1 + 0x93c) = sVar4, sVar4 == 0))
    {
      fVar1 = DAT_001baf88;
      fVar15 = DAT_001baf84;
      iVar6 = 0;
      afStack_64[0] = *DAT_001baf80;
      afStack_64[1] = DAT_001baf80[1];
      afStack_64[2] = DAT_001baf80[2];
      afStack_64[3] = DAT_001baf80[3];
      afStack_64[4] = DAT_001baf80[4];
      afStack_64[5] = DAT_001baf80[5];
      afStack_64[6] = DAT_001baf80[6];
      uStack_48 = DAT_001baf80[7];
      fStack_44 = DAT_001baf80[8];
      iStack_40 = param_2 + 0x5c78;
      do {
        afStack_ac[3] = *(float *)(param_1 + 0x28);
        fStack_90 = *(float *)(param_1 + 0x2c);
        fStack_80 = *(float *)(param_1 + 0x30);
        pfVar11 = afStack_64 + iVar6 * 3;
        *pfVar11 = *pfVar11 * *(float *)(param_1 + 0x970);
        afStack_64[iVar6 * 3 + 1] = afStack_64[iVar6 * 3 + 1] * *(float *)(param_1 + 0x970);
        afStack_64[iVar6 * 3 + 2] = afStack_64[iVar6 * 3 + 2] * *(float *)(param_1 + 0x970);
        afStack_ac[2] = 0.0;
        afStack_ac[1] = 0.0;
        afStack_ac[0] = 1.0;
        fStack_9c = 0.0;
        uStack_98 = 0x3f800000;
        fStack_88 = 0.0;
        fStack_84 = 1.0;
        fStack_94 = 0.0;
        fStack_8c = 0.0;
        fVar17 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x924),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar17 = fVar17 * fVar15 * fVar1;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar17 == fVar14) << 0x1e;
        fStack_7c = afStack_ac[3];
        fStack_78 = fStack_90;
        fStack_74 = fStack_80;
        fStack_70 = afStack_ac[3];
        fStack_6c = fStack_90;
        fStack_68 = fStack_80;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar18 = (float)FUN_003727f0(fVar17);
          fVar17 = (float)FUN_00372674(fVar17);
          fVar19 = afStack_ac[0] * fVar18;
          afStack_ac[0] = afStack_ac[0] * fVar17 - afStack_ac[2] * fVar18;
          afStack_ac[2] = fVar19 + afStack_ac[2] * fVar17;
          fVar19 = fStack_9c * fVar18;
          fStack_9c = fStack_9c * fVar17 - fStack_94 * fVar18;
          fStack_94 = fVar19 + fStack_94 * fVar17;
          fVar19 = fStack_8c * fVar18;
          fStack_8c = fStack_8c * fVar17 - fStack_84 * fVar18;
          fStack_84 = fVar19 + fStack_84 * fVar17;
        }
        FUN_003735ac(&fStack_70,afStack_ac,pfVar11);
        iVar16 = param_1 + iVar6 * 0x58;
        *(float *)(iVar16 + 0x7f8) = fStack_70;
        *(float *)(iVar16 + 0x7fc) = fStack_6c;
        *(float *)(iVar16 + 0x800) = fStack_68;
        FUN_003762a4(param_2,iStack_40,iVar16 + 0x7ac);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
    }
    if (*(short *)(param_1 + 0x938) != 0) {
      *(short *)(param_1 + 0x938) = *(short *)(param_1 + 0x938) + -1;
    }
    if (*(short *)(param_1 + 0x934) != 0) {
      *(short *)(param_1 + 0x934) = *(short *)(param_1 + 0x934) + -1;
    }
    sVar4 = *(short *)(param_1 + 0x938);
    bVar12 = sVar4 == 0;
    if (bVar12) {
      sVar4 = *(short *)(param_1 + 0x934);
    }
    if (bVar12 && sVar4 == 0) {
      FUN_0037632c(param_1);
      iVar6 = param_2 + 0x5c78;
      FUN_00376168(param_2,iVar6,param_1 + 0x6a4);
      sVar4 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
      if (sVar4 < 0) {
        sVar4 = -sVar4;
      }
      if (sVar4 < DAT_001baf8c) {
        FUN_0037632c(param_1);
        FUN_00376168(param_2,iVar6,param_1 + 0x754);
      }
      else {
        FUN_0037632c(param_1);
        FUN_00376168(param_2,iVar6,param_1 + 0x6fc);
      }
    }
  }
  FUN_0037322c(fVar14,param_1);
  return;
}
