// OoT3D decomp @ 003ec208  name=FUN_003ec208  size=4500

/* WARNING: Type propagation algorithm not settling */

void FUN_003ec208(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  short *psVar12;
  ushort *puVar13;
  ushort *puVar14;
  ushort *puVar15;
  int iVar16;
  uint uVar17;
  uint extraout_r2;
  uint extraout_r3;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint in_fpscr;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;

  uVar11 = DAT_003ec610;
  fVar4 = DAT_003ec60c;
  local_48 = param_2 + 0x208c;
  uVar1 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18;
  local_4c = DAT_003ec608;
  iVar8 = *(int *)(DAT_003ec608 + 0x4e8);
  if (uVar1 == 2) {
    if (iVar8 == 5) {
      iVar8 = (int)*(short *)(*DAT_003ec604 + 0x110);
      fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_003ec614 / fVar21 + DAT_003ec60c) == (uint)*(ushort *)(param_2 + 0x22b8)) {
        FUN_00375bcc(param_1,DAT_003ec618);
      }
      else {
        fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_003ec61c / fVar21 + DAT_003ec60c) == (uint)*(ushort *)(param_2 + 0x22b8)) {
          FUN_00375bcc(param_1,DAT_003ec620);
        }
      }
    }
  }
  else if (uVar1 == 7) {
    FUN_0037572c(DAT_003ec624,param_1);
    uVar9 = DAT_003ec628;
    *(undefined4 *)(param_1 + 0xfc) = DAT_003ec628;
    *(undefined4 *)(param_1 + 0x100) = uVar9;
    *(undefined4 *)(param_1 + 0x104) = uVar9;
  }
  else if (uVar1 == 3) {
    if (iVar8 == 4) {
      iVar8 = (int)*(short *)(*DAT_003ec604 + 0x110);
      uVar10 = (uint)*(ushort *)(param_2 + 0x22b8);
      fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      if ((((((((int)(DAT_003ec62c / fVar21 + DAT_003ec60c) == uVar10) ||
              (fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3),
              (int)(DAT_003ec630 / fVar21 + DAT_003ec60c) == uVar10)) ||
             (fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3),
             (int)(DAT_003ec634 / fVar21 + DAT_003ec60c) == uVar10)) ||
            ((fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3),
             (int)(DAT_003ec638 / fVar21 + DAT_003ec60c) == uVar10 ||
             (fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3),
             (int)(DAT_003ec63c / fVar21 + DAT_003ec60c) == uVar10)))) ||
           ((fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3),
            (int)(DAT_003ec640 / fVar21 + DAT_003ec60c) == uVar10 ||
            ((fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3),
             (int)(DAT_003ec644 / fVar21 + DAT_003ec60c) == uVar10 ||
             (fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3),
             (int)(DAT_003ec648 / fVar21 + DAT_003ec60c) == uVar10)))))) ||
          (fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3),
          (int)(DAT_003ec64c / fVar21 + DAT_003ec60c) == uVar10)) ||
         ((fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3),
          (int)(DAT_003ec650 / fVar21 + DAT_003ec60c) == uVar10 ||
          (fVar21 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3),
          (int)(DAT_003ec654 / fVar21 + DAT_003ec60c) == uVar10)))) {
        FUN_0037547c(DAT_003ec660,0,4,DAT_003ec65c,DAT_003ec65c,DAT_003ec658);
        goto LAB_003ec4c8;
      }
    }
    else {
LAB_003ec4c8:
      piVar3 = DAT_003ec604;
      if (*(int *)(local_4c + 0x4e8) == 5) {
        fVar21 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003ec604 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_003ec664 / fVar21 + fVar4) == (uint)*(ushort *)(param_2 + 0x22b8)) {
          FUN_00375bcc(param_1,DAT_003ec668);
        }
        fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_003ec66c / fVar21 + fVar4) == (uint)*(ushort *)(param_2 + 0x22b8)) {
          local_58 = DAT_003ec670;
          local_54 = DAT_003ec674;
          local_50 = DAT_003ec678;
          uVar9 = FUN_003478bc(*(undefined4 *)(param_1 + 0x1dc),4);
          FUN_003735ac(&local_64,uVar9,&local_58);
          FUN_0036aa20(local_64,local_60,local_5c,local_48,param_1,param_2,0xf5,0,0,0,0xc);
        }
      }
    }
    piVar3 = DAT_003ec604;
    fVar21 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003ec604 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_003ec67c / fVar21 + fVar4) == (uint)*(ushort *)(param_2 + 0x22b8)) {
      FUN_0036ec40(1,DAT_003ec680,0);
    }
    fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)(DAT_003ec684 / fVar21 + fVar4) == (uint)*(ushort *)(param_2 + 0x22b8)) {
      FUN_0037547c(DAT_003ece88,param_1 + 0x28,4,DAT_003ec65c,DAT_003ec65c,DAT_003ec658);
    }
  }
  else if (uVar1 == 6) {
    if (iVar8 == 5 || iVar8 == 10) {
LAB_003ec7b4:
      FUN_00375bcc(param_1,DAT_003ec610);
    }
  }
  else if (uVar1 == 4) {
    sVar2 = (short)(int)(*(float *)(param_1 + 0x1f0) + DAT_003ec60c);
    if (*(int *)(param_1 + 0x1e4) == 2) {
      if (sVar2 == 8) {
        FUN_00375bcc(param_1,DAT_003ece8c);
      }
      else if (sVar2 == 0x1e) {
        FUN_00375bcc(param_1,DAT_003ece90);
      }
    }
    else if (*(int *)(param_1 + 0x1e4) == 4) {
      if (sVar2 == 0x19) {
        FUN_00375bcc(param_1,DAT_003ece94);
      }
    }
    else if (*(int *)(param_1 + 0x1e4) == 0) goto LAB_003ec7b4;
  }
  pcVar6 = DAT_003ece98;
  if (*(short *)(DAT_003ece98 + 2) != 0) {
    *(short *)(DAT_003ece98 + 2) = *(short *)(DAT_003ece98 + 2) + -1;
  }
  sVar2 = *(short *)(param_1 + 0x1c) >> 8;
  if (sVar2 < 3) {
    uVar28 = FUN_0037571c(param_2);
    uVar5 = DAT_003ec65c;
    uVar9 = DAT_003ec658;
    uVar17 = (uint)((ulonglong)uVar28 >> 0x20);
    bVar18 = (int)uVar28 != 0;
    uVar10 = 0;
    if (bVar18) {
      uVar10 = *(uint *)(&DAT_000022dc + param_2);
    }
    bVar19 = uVar10 != 0;
    if (bVar18 && bVar19) {
      uVar17 = (uint)*(ushort *)(param_2 + 0x22b8);
      uVar10 = (uint)*(ushort *)(uVar10 + 4);
    }
    if ((bVar18 && bVar19) && uVar17 < uVar10) {
      if (sVar2 == 0) {
        if (*pcVar6 == '\0') {
          *pcVar6 = '\x01';
          FUN_0037547c(DAT_003ece9c,param_1 + 0x28,4,uVar5,uVar5,uVar9);
        }
        FUN_00375bcc(param_1,uVar11);
      }
      iVar8 = *(int *)(&DAT_000022dc + param_2);
      fVar22 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar23 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x10),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar24 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x14),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar25 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x18),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar26 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x1c),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar27 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x20),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar21 = (float)FUN_00361490(*(undefined2 *)(iVar8 + 4),*(undefined2 *)(iVar8 + 2),
                                   *(undefined2 *)(param_2 + 0x22b8));
      *(float *)(param_1 + 0x28) = fVar22 + (fVar25 - fVar22) * fVar21;
      *(float *)(param_1 + 0x2c) = fVar23 + (fVar26 - fVar23) * fVar21;
      *(float *)(param_1 + 0x30) = fVar24 + (fVar27 - fVar24) * fVar21;
    }
  }
  else {
    iVar8 = FUN_0037571c(param_2);
    bVar18 = iVar8 != 0;
    iVar8 = 0;
    if (bVar18) {
      iVar8 = *(int *)(&DAT_000022e0 + param_2);
    }
    uVar10 = extraout_r3;
    uVar17 = extraout_r2;
    if (bVar18 && iVar8 != 0) {
      uVar17 = (uint)*(ushort *)(param_2 + 0x22b8);
      uVar10 = (uint)*(ushort *)(iVar8 + 4);
    }
    if ((bVar18 && iVar8 != 0) && uVar17 < uVar10) {
      fVar22 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar23 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x10),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar24 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x14),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar25 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x18),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar27 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x1c),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar26 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x20),(byte)(in_fpscr >> 0x15) & 3
                                         );
      fVar21 = (float)FUN_00361490(uVar10,*(undefined2 *)(iVar8 + 2));
      *(float *)(param_1 + 0x28) = fVar22 + (fVar25 - fVar22) * fVar21;
      *(float *)(param_1 + 0x2c) = fVar23 + (fVar27 - fVar23) * fVar21;
      *(float *)(param_1 + 0x30) = fVar24 + (fVar26 - fVar24) * fVar21;
      if (**(short **)(&DAT_000022e0 + param_2) == 0xc) {
        uVar11 = FUN_003758b0(fVar26 - fVar24);
        FUN_00375a18(param_1 + 0x36,uVar11,10,1000,1);
        FUN_00375a18(param_1 + 0xbe,uVar11,10,1000,1);
      }
      if (sVar2 == 9) {
        *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(*(int *)(&DAT_000022e0 + param_2) + 6);
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(&DAT_000022e0 + param_2) + 8);
        *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(*(int *)(&DAT_000022e0 + param_2) + 10);
        *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(*(int *)(&DAT_000022e0 + param_2) + 6);
        *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(*(int *)(&DAT_000022e0 + param_2) + 8);
        *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(*(int *)(&DAT_000022e0 + param_2) + 10);
        goto LAB_003eca50;
      }
    }
    if (sVar2 == 5) {
      FUN_0037547c(DAT_003ecea0,0,4,DAT_003ec65c,DAT_003ec65c,DAT_003ec658);
      FUN_001f09ac(param_1,param_2);
    }
  }
LAB_003eca50:
  FUN_00376864(param_1);
  if (uVar1 == 6) {
    psVar12 = *(short **)(param_2 + 0x20d4);
    while ((psVar12 != (short *)0x0 &&
           ((*psVar12 != 0x2a || (((uint)(ushort)psVar12[0xe] << 0x10) >> 0x18 != 5))))) {
      psVar12 = *(short **)(psVar12 + 0x98);
    }
    if (psVar12 != (short *)0x0) {
      uVar10 = (uint)*(byte *)(param_1 + 0x467);
      bVar18 = uVar10 == 0;
      if (bVar18) {
        uVar10 = *(uint *)(param_1 + 0x1e4);
      }
      bVar19 = bVar18 && uVar10 == 0;
      if (bVar18 && uVar10 == 0) {
        bVar19 = *(int *)(psVar12 + 0xf2) == 0;
      }
      if (bVar19) {
        bVar18 = *(char *)(param_1 + 0x466) != '\0';
        cVar7 = '\0';
        if (bVar18) {
          cVar7 = (char)psVar12[0x233];
        }
        if (bVar18 && cVar7 != '\0') {
          *(undefined1 *)(param_1 + 0x467) = 1;
          *(undefined4 *)(psVar12 + 0xf8) = *(undefined4 *)(param_1 + 0x1f0);
        }
      }
    }
  }
  iVar8 = FUN_003731e0(param_1 + 0x1b4);
  if (uVar1 == 0) {
    if (*(char *)(param_1 + 0x467) != '\0') {
      return;
    }
    puVar13 = *(ushort **)(param_2 + 0x20d4);
    puVar14 = puVar13;
    while ((puVar15 = puVar14, puVar14 != (ushort *)0x0 &&
           ((*puVar14 != 0x2a || (((uint)puVar14[0xe] << 0x10) >> 0x18 != 2))))) {
      puVar14 = *(ushort **)(puVar14 + 0x98);
    }
    while ((puVar13 != (ushort *)0x0 &&
           ((puVar15 = (ushort *)(uint)*puVar13, puVar15 != (ushort *)0x2a ||
            (puVar15 = (ushort *)(((uint)puVar13[0xe] << 0x10) >> 0x18), puVar15 != (ushort *)0x1)))
           )) {
      puVar13 = *(ushort **)(puVar13 + 0x98);
    }
    bVar18 = puVar14 != (ushort *)0x0;
    bVar19 = puVar13 != (ushort *)0x0;
    if (bVar18 && bVar19) {
      puVar15 = (ushort *)(uint)*(byte *)(param_1 + 0x466);
    }
    bVar20 = puVar15 != (ushort *)0x0;
    if ((bVar18 && bVar19) && bVar20) {
      puVar15 = (ushort *)(uint)(byte)puVar14[0x233];
    }
    if ((((bVar18 && bVar19) && bVar20) && puVar15 != (ushort *)0x0) &&
       ((char)puVar13[0x233] != '\0')) {
      *(undefined1 *)(param_1 + 0x467) = 1;
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(puVar14 + 0xf8);
      *(undefined4 *)(puVar13 + 0xf8) = *(undefined4 *)(puVar14 + 0xf8);
    }
  }
  uVar5 = DAT_003eceac;
  uVar9 = DAT_003ecea8;
  uVar11 = DAT_003ecea4;
  if (uVar1 != 3 && uVar1 != 4) {
    if (uVar1 == 1) {
      if (*(int *)(local_4c + 0x4e8) == 5) {
        if (*(short *)(param_2 + 0x22b8) == 0x4f1) {
          FUN_0036aa20(DAT_003ed24c,DAT_003ed248,DAT_003ed250,local_48,param_1,param_2,0xf1,0,0,0,0)
          ;
        }
      }
      else {
        fVar21 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003ec604 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_003ed254 / fVar21 + fVar4) == (uint)*(ushort *)(param_2 + 0x22b8)) {
          FUN_0036aa20(DAT_003ed24c,DAT_003ed248,DAT_003ed258,local_48,param_1,param_2,0xf1,0,0,0,1)
          ;
        }
      }
      if (*(char *)(param_1 + 0x465) == '\0') {
        iVar8 = FUN_0037571c(param_2);
        psVar12 = (short *)0x0;
        if (iVar8 != 0) {
          psVar12 = *(short **)(&DAT_000022dc + param_2);
        }
        if (iVar8 == 0 || psVar12 == (short *)0x0) {
          return;
        }
        if (*psVar12 != 6) {
          return;
        }
        if (*(int *)(param_1 + 0x1e4) != 0xb) {
          FUN_003660fc(*(undefined4 *)(pcVar6 + 0xc),param_1 + 0x1b4,0xb);
          *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
          return;
        }
        return;
      }
      if (*(char *)(param_1 + 0x465) != '\x01') {
        return;
      }
      iVar8 = FUN_0037571c(param_2);
      psVar12 = (short *)0x0;
      if (iVar8 != 0) {
        psVar12 = *(short **)(&DAT_000022dc + param_2);
      }
      if (iVar8 == 0 || psVar12 == (short *)0x0) {
        return;
      }
      if (*psVar12 != 2) {
        return;
      }
      if (*(int *)(param_1 + 0x1e4) != 10) {
        FUN_003660fc(uVar5,param_1 + 0x1b4,10);
        *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
        return;
      }
      return;
    }
    if (uVar1 == 2) {
      if (*(short *)(param_2 + 0x104) != 0x51) {
        FUN_0032eb60(0);
        cVar7 = *(char *)(param_1 + 0x465);
        if (cVar7 == '\0') {
          FUN_003660fc(uVar11,param_1 + 0x1b4,0x1a);
          *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
          return;
        }
        if (cVar7 == '\x01') {
          if (**(short **)(&DAT_000022dc + param_2) == 0xb) {
            FUN_00374a58(uVar9,param_1 + 0x1b4,0x18);
            *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
            return;
          }
          return;
        }
        if (cVar7 != '\x02') {
          return;
        }
        if (iVar8 != 0) {
          FUN_00370350(uVar9,param_1 + 0x1b4,0x19);
          *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
          return;
        }
        return;
      }
      if (*(char *)(param_1 + 0x465) == '\0') {
        iVar8 = FUN_0037571c(param_2);
        psVar12 = (short *)0x0;
        if (iVar8 != 0) {
          psVar12 = *(short **)(&DAT_000022dc + param_2);
        }
        if (iVar8 == 0 || psVar12 == (short *)0x0) {
          return;
        }
        if (*psVar12 != 6) {
          return;
        }
        if (*(int *)(param_1 + 0x1e4) != 0x17) {
          psVar12 = *(short **)(param_2 + 0x20d4);
          while ((psVar12 != (short *)0x0 &&
                 ((*psVar12 != 0x2a || (((uint)(ushort)psVar12[0xe] << 0x10) >> 0x18 != 0))))) {
            psVar12 = *(short **)(psVar12 + 0x98);
          }
          if (psVar12 != (short *)0x0) {
            *(float *)(psVar12 + 0xf8) =
                 *(float *)(psVar12 + 0xfe) - *(float *)(psVar12 + 0xfa) * DAT_003ed25c;
          }
          FUN_003660fc(*(undefined4 *)(pcVar6 + 0xc),param_1 + 0x1b4,0x17);
          *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
          return;
        }
        return;
      }
      if (*(char *)(param_1 + 0x465) != '\x01') {
        return;
      }
      iVar8 = FUN_0037571c(param_2);
      psVar12 = (short *)0x0;
      if (iVar8 != 0) {
        psVar12 = *(short **)(&DAT_000022dc + param_2);
      }
      if (iVar8 == 0 || psVar12 == (short *)0x0) {
        return;
      }
      if (*psVar12 != 2) {
        return;
      }
      if (*(int *)(param_1 + 0x1e4) != 0x16) {
        FUN_003660fc(uVar5,param_1 + 0x1b4,0x16);
        *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
        return;
      }
      return;
    }
    if (uVar1 == 7) {
      if (*(char *)(param_1 + 0x465) == '\0') {
        iVar8 = FUN_0037571c(param_2);
        psVar12 = (short *)0x0;
        if (iVar8 != 0) {
          psVar12 = *(short **)(&DAT_000022e0 + param_2);
        }
        if (iVar8 != 0 && psVar12 != (short *)0x0) {
          if (*psVar12 == 7) {
            FUN_0037547c(DAT_003ed490,0,4,DAT_003ec65c,DAT_003ec65c,DAT_003ec658);
            FUN_00374a58(uVar9,param_1 + 0x1b4,0xb);
            *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
            return;
          }
          return;
        }
        return;
      }
      if (*(char *)(param_1 + 0x465) != '\x01') {
        return;
      }
      if (iVar8 != 0) {
        FUN_00370350(DAT_003ecea8,param_1 + 0x1b4,0xc);
        *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
        return;
      }
      return;
    }
    if (uVar1 != 8) {
      return;
    }
    cVar7 = *(char *)(param_1 + 0x465);
    if (cVar7 == '\0') {
      iVar8 = FUN_0037571c(param_2);
      psVar12 = (short *)0x0;
      if (iVar8 != 0) {
        psVar12 = *(short **)(&DAT_000022e0 + param_2);
      }
      if (iVar8 != 0 && psVar12 != (short *)0x0) {
        if (*psVar12 == 9) {
          FUN_003660fc(uVar11,param_1 + 0x1b4,0xd);
          *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
          return;
        }
        return;
      }
      return;
    }
    if (cVar7 == '\x01') {
      if (**(short **)(&DAT_000022e0 + param_2) == 10) {
        FUN_00374a58(DAT_003ed494,param_1 + 0x1b4,7);
        *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
        return;
      }
      return;
    }
    if (cVar7 == '\x02') {
      if (iVar8 != 0) {
        FUN_00370350(DAT_003ecea8,param_1 + 0x1b4,9);
        *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
        return;
      }
      return;
    }
    if (cVar7 == '\x03') {
      if (**(short **)(&DAT_000022e0 + param_2) == 4) {
        FUN_00374a58(DAT_003ecea8,param_1 + 0x1b4,8);
        *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
        return;
      }
      return;
    }
switchD_003ecd1c_caseD_7:
    cVar7 = '\0';
    goto LAB_003ecec4;
  }
  iVar16 = FUN_0037571c(param_2);
  psVar12 = (short *)0x0;
  if (iVar16 != 0) {
    psVar12 = *(short **)(&DAT_000022e0 + param_2);
  }
  if (iVar16 == 0 || psVar12 == (short *)0x0) {
    return;
  }
  sVar2 = *psVar12;
  if (sVar2 == 2) {
    if (*(short *)(pcVar6 + 2) == 0) {
      if (uVar1 != 3) {
        if (*(int *)(param_1 + 0x1e4) != 4) {
          FUN_003660fc(uVar11,param_1 + 0x1b4,4);
          return;
        }
        return;
      }
      if (*(int *)(param_1 + 0x1e4) != 6) {
        FUN_003660fc(uVar11,param_1 + 0x1b4,6);
        return;
      }
      return;
    }
  }
  else if (sVar2 == 1) {
    fVar21 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003ec604 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(pcVar6 + 2) = (short)(int)(DAT_003eceb0 / fVar21 + fVar4);
    if (uVar1 != 3) {
      if (*(int *)(param_1 + 0x1e4) != 2) {
        FUN_0037422c(uVar11,param_1 + 0x1b4,2);
        return;
      }
      return;
    }
    if (*(int *)(param_1 + 0x1e4) != 5) {
      FUN_0037422c(uVar11,param_1 + 0x1b4,5);
      return;
    }
    return;
  }
  if (uVar1 != 3) {
    if (*(int *)(param_1 + 0x1e4) == 0) {
      return;
    }
    if (**(short **)(&DAT_000022e0 + param_2) == 0xc) {
      FUN_003660fc(uVar5,param_1 + 0x1b4,0);
      return;
    }
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x465)) {
  case 0:
    if (sVar2 != 4) {
      return;
    }
    FUN_00374a58(uVar9,param_1 + 0x1b4,3);
    cVar7 = *(char *)(param_1 + 0x465) + '\x01';
    goto LAB_003ecec4;
  case 1:
    if (iVar8 == 0) {
      return;
    }
    FUN_00370350(uVar9,param_1 + 0x1b4,4);
    cVar7 = *(char *)(param_1 + 0x465) + '\x01';
LAB_003ecec4:
    *(char *)(param_1 + 0x465) = cVar7;
    return;
  case 2:
    if (sVar2 == 5) {
      FUN_00374a58(uVar9,param_1 + 0x1b4,1);
      *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
    }
    break;
  case 3:
    if (iVar8 != 0) {
      FUN_00370350(uVar9,param_1 + 0x1b4,2);
      *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
      return;
    }
    break;
  case 4:
    if (sVar2 == 0xb) {
      FUN_00370350(DAT_003eceb4,param_1 + 0x1b4,4);
      *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
      return;
    }
    break;
  case 5:
    if (sVar2 == 8) {
      FUN_00370350(DAT_003eceb8,param_1 + 0x1b4,6);
      *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
      return;
    }
    break;
  case 6:
    if (sVar2 == 0xc) {
      FUN_00375bcc(param_1,DAT_003ecebc);
      FUN_003660fc(uVar5,param_1 + 0x1b4,0);
      *(char *)(param_1 + 0x465) = *(char *)(param_1 + 0x465) + '\x01';
      return;
    }
    break;
  case 7:
    goto switchD_003ecd1c_caseD_7;
  }
  return;
}
