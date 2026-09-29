// OoT3D decomp @ 002483fc  name=FUN_002483fc  size=2704

void FUN_002483fc(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  uint uVar13;
  short sVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  float fVar21;
  int6 iVar22;
  undefined1 auStack_54 [12];
  int local_48;
  int local_44;
  int local_40;

  local_48 = 0;
  iVar11 = *(int *)(DAT_00248754 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  fVar21 = DAT_00248758;
  *(float *)(param_1 + 0x468) = *(float *)(param_1 + 0x474) + DAT_00248758;
  fVar15 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x464));
  iVar7 = DAT_0024875c;
  *(float *)(param_1 + 0x464) = *(float *)(param_1 + 0x464) + *(float *)(param_1 + 0x468);
  if ((int)*(float *)(param_1 + 0x470) < iVar7) {
    *(float *)(param_1 + 0x470) = *(float *)(param_1 + 0x470) + fVar21;
  }
  fVar16 = (float)FUN_003406a8();
  fVar17 = DAT_0024876c;
  fVar4 = DAT_00248768;
  fVar3 = DAT_00248764;
  fVar21 = DAT_00248760;
  *(float *)(param_1 + 0x54) =
       DAT_0024876c - fVar16 * *(float *)(param_1 + 0x470) * DAT_00248760 * DAT_00248768;
  fVar16 = (float)FUN_003406a8(*(undefined4 *)(param_1 + 0x464));
  *(float *)(param_1 + 0x58) = fVar17 - fVar16 * *(float *)(param_1 + 0x470) * fVar21 * fVar4;
  fVar16 = (float)FUN_003406a8(*(undefined4 *)(param_1 + 0x464));
  *(float *)(param_1 + 0x5c) = fVar17 + fVar16 * *(float *)(param_1 + 0x470) * fVar21 * fVar4;
  fVar17 = (float)FUN_00340698(*(undefined4 *)(param_1 + 0x464));
  fVar4 = DAT_00248770;
  if (*(char *)(param_1 + 0x456) == '\0') {
    if (NAN(fVar15) || NAN(DAT_00248770)) {
      fVar15 = -fVar15;
    }
    fVar16 = fVar17;
    if (NAN(fVar17) || NAN(DAT_00248770)) {
      fVar16 = -fVar17;
    }
    uVar13 = in_fpscr & 0xfffffff | (uint)(fVar16 <= fVar15) << 0x1d;
    if (!SUB41(uVar13 >> 0x1d,0)) {
      uVar6 = 1;
LAB_00248568:
      *(undefined1 *)(param_1 + 0x456) = uVar6;
    }
  }
  else {
    if (NAN(fVar15) || NAN(DAT_00248770)) {
      fVar15 = -fVar15;
    }
    fVar16 = fVar17;
    if (NAN(fVar17) || NAN(DAT_00248770)) {
      fVar16 = -fVar17;
    }
    uVar10 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar16) << 0x1f |
             (uint)(fVar15 == fVar16) << 0x1e;
    uVar13 = uVar10 | (uint)(NAN(fVar15) || NAN(fVar16)) << 0x1c;
    bVar2 = (byte)(uVar10 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar13 >> 0x1c) & 1)) {
      FUN_00375bcc(param_1,DAT_00248774);
      uVar6 = 0;
      goto LAB_00248568;
    }
  }
  fVar15 = *(float *)(param_1 + 0x470) * *(float *)(param_1 + 0x468) * fVar17 * DAT_00248778;
  uVar10 = uVar13 & 0xfffffff | (uint)(fVar15 < fVar4) << 0x1f;
  uVar13 = uVar10 | (uint)(NAN(fVar15) || NAN(fVar4)) << 0x1c;
  if ((byte)(uVar10 >> 0x1f) != ((byte)(uVar13 >> 0x1c) & 1)) {
    fVar15 = -fVar15;
  }
  *(float *)(param_1 + 0x6c) = fVar15;
  if (*(char *)(param_1 + 0x445) != '\x01') {
    fVar15 = (float)FUN_003406a8(*(undefined4 *)(param_1 + 0x464));
    uVar10 = uVar13 & 0xfffffff | (uint)(fVar15 < fVar4) << 0x1f;
    uVar13 = uVar10 | (uint)(NAN(fVar15) || NAN(fVar4)) << 0x1c;
    if ((byte)(uVar10 >> 0x1f) != ((byte)(uVar13 >> 0x1c) & 1)) {
      fVar15 = -fVar15;
    }
    *(char *)(param_1 + 0x451) = (char)(int)(fVar15 * DAT_0024877c);
  }
  fVar17 = DAT_00248784;
  fVar15 = DAT_00248780;
  uVar9 = *(ushort *)(param_1 + 0x1c);
  local_40 = param_2 + 0xa98;
  iVar22 = (uint6)uVar9 << 0x20;
  if (((*(uint *)(param_2 + 0x5bf4) & 3) != (int)(short)uVar9) ||
     (uVar13 = uVar13 & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar4) << 0x1e,
     iVar22 = (uint6)uVar9 << 0x20, SUB41(uVar13 >> 0x1e,0))) {
LAB_0024864c:
    uVar9 = (ushort)((uint6)iVar22 >> 0x20);
    uVar10 = (uint)iVar22;
    if (*(short *)(param_1 + 0x446) == 0) goto LAB_00248658;
    uVar13 = uVar13 & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar4) << 0x1e;
    bVar12 = SUB41(uVar13 >> 0x1e,0);
    if (!bVar12) {
      uVar9 = *(ushort *)(param_1 + 0x90);
      bVar12 = (uVar9 & 8) == 0;
    }
    if (!bVar12) {
      sVar14 = *(short *)(param_1 + 0x82);
      if (*(short *)(param_1 + 0x45a) == sVar14) {
        if ((*(char *)(param_1 + 0x445) == '\0') &&
           (uVar10 = FUN_003303cc(local_40,param_1 + 0x28,iVar11 + 0x28,auStack_54,&local_48,1,0,0,1
                                 ), uVar10 != 0)) {
          uVar20 = VectorSignedToFloat((int)*(short *)(local_48 + 0xe),(byte)(uVar13 >> 0x15) & 3);
          uVar18 = VectorSignedToFloat((int)*(short *)(local_48 + 10),(byte)(uVar13 >> 0x15) & 3);
          fVar16 = (float)FUN_003696ec(uVar18,uVar20);
          sVar14 = (short)(int)(fVar16 * fVar15);
          if (*(short *)(param_1 + 0x45a) != sVar14) {
            if ((short)(*(short *)(param_1 + 0x92) - sVar14) < 0) {
              *(undefined2 *)(param_1 + 0x45c) = 0xc000;
            }
            else {
              *(undefined2 *)(param_1 + 0x45c) = 0x4000;
            }
            *(short *)(param_1 + 0x45a) = sVar14;
          }
        }
      }
      else {
        *(short *)(param_1 + 0x45a) = sVar14;
        uVar10 = 1;
        if (*(char *)(param_1 + 0x445) == '\x03') {
          bVar12 = (*(uint *)(param_2 + 0x5bf4) & 0x20) == 0;
          if (bVar12) {
            *(undefined2 *)(param_1 + 0x45c) = 0xc000;
          }
          if (!bVar12) {
            *(undefined2 *)(param_1 + 0x45c) = 0x4000;
          }
          *(ushort *)(param_1 + 0x90) = uVar9 & 0xfff7;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        if ((short)(*(short *)(param_1 + 0x92) - sVar14) < 0) {
          *(undefined2 *)(param_1 + 0x45c) = 0xc000;
        }
        else {
          *(undefined2 *)(param_1 + 0x45c) = 0x4000;
        }
        if (*(char *)(param_1 + 0x445) == '\x01') {
          *(short *)(param_1 + 0x45c) = -*(short *)(param_1 + 0x45c);
        }
      }
    }
LAB_00248a24:
    *(short *)(param_1 + 0x446) = *(short *)(param_1 + 0x446) + -1;
    if (*(short *)(param_1 + 0x448) != 0) {
      *(short *)(param_1 + 0x448) = *(short *)(param_1 + 0x448) + -1;
    }
    if ((*(short *)(param_1 + 0x458) == 0) &&
       (iVar7 = FUN_0035e600(DAT_00248b80,param_1,param_2,
                             (int)(short)(*(short *)(param_1 + 0x45a) + *(short *)(param_1 + 0x45c))
                            ), iVar7 == 0)) {
      if (*(short *)(param_1 + 0x45c) == 0x4000) {
        *(undefined2 *)(param_1 + 0x45c) = 0xc000;
      }
      else {
        *(undefined2 *)(param_1 + 0x45c) = 0x4000;
      }
    }
    uVar20 = DAT_00248b98;
    uVar18 = DAT_00248b94;
    fVar15 = DAT_00248b90;
    uVar5 = DAT_00248b8c;
    cVar1 = *(char *)(param_1 + 0x445);
    uVar8 = param_1 + 0x46c;
    if (cVar1 == '\0') {
      FUN_0036e168(DAT_00248b94,DAT_00248b88,DAT_00248b84,fVar4);
      if (uVar10 == 0) {
        FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,
                     (int)(short)(int)(*(float *)(param_1 + 0x6c) * fVar15),0);
        iVar19 = *(int *)(param_1 + 0x98);
        bVar12 = SBORROW4(iVar19,DAT_00248fe4);
        iVar7 = iVar19 - DAT_00248fe4;
        if (iVar19 < DAT_00248fe4) {
          bVar12 = SBORROW4(*(int *)(param_1 + 0x9c),uVar5);
          iVar7 = *(int *)(param_1 + 0x9c) - uVar5;
        }
        if (((iVar7 < 0 != bVar12) && (iVar7 = FUN_0036f18c(param_1,DAT_00248fe8), iVar7 != 0)) &&
           (iVar7 = FUN_0035e600(DAT_00248fec,param_1,param_2,(int)*(short *)(param_1 + 0x92)),
           iVar7 != 0)) {
          FUN_00374a58(DAT_00248ff0,param_1 + 0x1a4,2);
          uVar18 = DAT_00248ff4;
          *(undefined1 *)(param_1 + 0x444) = 4;
          *(undefined4 *)(param_1 + 0x6c) = uVar18;
          uVar18 = DAT_00248ff8;
          *(undefined2 *)(param_1 + 0x446) = 1000;
          *(undefined4 *)(param_1 + 100) = uVar18;
          uVar18 = DAT_00248ffc;
          *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
          FUN_00375bcc(param_1,uVar18);
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
          *(undefined4 *)(param_1 + 0x44c) = DAT_00249000;
        }
      }
      else {
        FUN_00375a18(param_1 + 0x36,
                     (int)(short)(*(short *)(param_1 + 0x45a) + *(short *)(param_1 + 0x45c)),1,
                     (int)(short)(int)(*(float *)(param_1 + 0x6c) * fVar15),0);
      }
      if (*(short *)(param_1 + 0x448) != 0) {
        fVar21 = *(float *)(param_1 + 0x9c);
        if (fVar21 < fVar4) {
          fVar21 = -fVar21;
        }
        if (((int)fVar21 <= DAT_00249004) && ((*(uint *)(iVar11 + 0x1710) & 0x6000) == 0))
        goto LAB_00248fd0;
      }
      *(undefined1 *)(param_1 + 0x445) = 3;
      *(undefined2 *)(param_1 + 0x448) = 0xe1;
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 == '\x03') {
          FUN_0036e168(DAT_00248b94,DAT_00248b88,DAT_00248b84,fVar4);
          if ((*(short *)(param_1 + 0x448) == 0) &&
             (*(int *)(param_1 + 0x98) < (int)(uVar5 | 0x3000000))) {
            fVar21 = *(float *)(param_1 + 0x9c);
            if (fVar21 < fVar4) {
              fVar21 = -fVar21;
            }
            if (((int)fVar21 < (int)uVar5) && (iVar7 = FUN_0036f18c(param_1,uVar20), iVar7 != 0)) {
              FUN_00374a58(DAT_00248b9c,param_1 + 0x1a4,1);
              *(undefined1 *)(param_1 + 0x444) = 3;
              *(undefined1 *)(param_1 + 0x445) = 0;
              *(undefined4 *)(param_1 + 0x474) = uVar18;
              *(float *)(param_1 + 0x6c) = fVar4;
              *(undefined2 *)(param_1 + 0x446) = 0x1e;
              uVar18 = DAT_00248ba4;
              *(short *)(param_1 + 0x448) = (short)DAT_00248ba0;
              FUN_00375bcc(param_1,uVar18);
              *(undefined4 *)(param_1 + 0x44c) = DAT_00248ba8;
              goto LAB_00248fd0;
            }
          }
          FUN_00375a18(param_1 + 0x36,
                       (int)(short)(*(short *)(param_1 + 0x45a) + *(short *)(param_1 + 0x45c)),1,
                       (int)(short)(int)(*(float *)(param_1 + 0x6c) * fVar15),0);
        }
        goto LAB_00248fd0;
      }
      if (uVar10 == 0) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x90);
      }
      if ((uVar10 == 0 && (uVar8 & 8) == 0) ||
         (iVar7 = FUN_0036f18c(param_1,DAT_00248b98), iVar7 != 0)) {
        iVar7 = FUN_0036f18c(param_1,uVar20);
        if (iVar7 != 0) {
          *(short *)(param_1 + 0x45c) = -*(short *)(param_1 + 0x45c);
        }
        FUN_00375a18(param_1 + 0x36,(int)(short)(*(short *)(param_1 + 0x92) + -0x8000),1,
                     (int)(short)(int)(*(float *)(param_1 + 0x6c) * fVar15),0);
      }
      else {
        FUN_00375a18(param_1 + 0x36,
                     (int)(short)(*(short *)(param_1 + 0x45a) + *(short *)(param_1 + 0x45c)),1,
                     (int)(short)(int)(*(float *)(param_1 + 0x6c) * fVar15),0);
      }
      iVar7 = (int)*(short *)(param_1 + 0x448);
      if (300 < iVar7) goto LAB_00248fd0;
      fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(uVar13 >> 0x15) & 3);
      if (iVar7 < 1) {
        fVar16 = fVar15 * fVar21 * fVar3 - fVar17;
        fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(uVar13 >> 0x15) & 3);
        fVar15 = fVar15 * fVar21 * fVar3 - fVar17;
      }
      else {
        fVar16 = fVar17 + fVar15 * fVar21 * fVar3;
        fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(uVar13 >> 0x15) & 3);
        fVar15 = fVar17 + fVar15 * fVar21 * fVar3;
      }
      fVar15 = (float)FUN_002cfca0((int)(short)((short)(int)fVar16 * (0x960 - (short)(int)fVar15)));
      iVar7 = (int)(short)(int)(fVar15 * DAT_00249008);
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      *(char *)(param_1 + 0x450) = -1 - (char)iVar7;
      iVar7 = (int)*(short *)(param_1 + 0x448);
      fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(uVar13 >> 0x15) & 3);
      if (iVar7 < 1) {
        fVar16 = fVar15 * fVar21 * fVar3 - fVar17;
        fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(uVar13 >> 0x15) & 3);
        fVar15 = fVar15 * fVar21 * fVar3 - fVar17;
      }
      else {
        fVar16 = fVar17 + fVar15 * fVar21 * fVar3;
        fVar15 = (float)VectorSignedToFloat(iVar7,(byte)(uVar13 >> 0x15) & 3);
        fVar15 = fVar17 + fVar15 * fVar21 * fVar3;
      }
      fVar15 = (float)FUN_002cfca0((int)(short)((short)(int)fVar16 * (0x960 - (short)(int)fVar15)));
      iVar7 = (int)(short)(int)(fVar15 * DAT_0024900c);
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      *(char *)(param_1 + 0x451) = (char)iVar7 + 'U';
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x448),
                                          (byte)(uVar13 >> 0x15) & 3);
      if (*(short *)(param_1 + 0x448) < 1) {
        fVar17 = fVar15 * fVar21 * fVar3 - fVar17;
      }
      else {
        fVar17 = fVar17 + fVar15 * fVar21 * fVar3;
      }
      fVar21 = (float)FUN_002cfca0((int)(short)(0x960 - (short)(int)fVar17));
      iVar7 = (int)(short)(int)(fVar21 * DAT_00249010);
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      *(char *)(param_1 + 0x452) = (char)iVar7;
      if (*(short *)(param_1 + 0x448) != 0) goto LAB_00248fd0;
      *(undefined1 *)(param_1 + 0x445) = 3;
    }
    *(float *)(param_1 + 0x474) = fVar4;
LAB_00248fd0:
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
    return;
  }
  iVar22 = FUN_003303cc(local_40,param_1 + 0x28,param_1 + 0x488,auStack_54,&local_48,1,0,0,1);
  uVar10 = (uint)iVar22;
  if (uVar10 == 0) goto LAB_0024864c;
LAB_00248658:
  if (local_48 == 0) {
    sVar14 = *(short *)(param_1 + 0x36) + -0x8000;
  }
  else {
    uVar20 = VectorSignedToFloat((int)*(short *)(local_48 + 0xe),(byte)(uVar13 >> 0x15) & 3);
    uVar18 = VectorSignedToFloat((int)*(short *)(local_48 + 10),(byte)(uVar13 >> 0x15) & 3);
    fVar16 = (float)FUN_003696ec(uVar18,uVar20);
    sVar14 = (short)(int)(fVar16 * fVar15);
  }
  if ((*(short *)(param_1 + 0x45a) == sVar14) && (uVar10 != 0)) goto LAB_00248a24;
  local_44 = param_1 + 0x494;
  iVar7 = FUN_003303cc(local_40,local_44,param_1 + 0x4ac,auStack_54,&local_48,1,0,0,1);
  if (iVar7 != 0) {
    uVar10 = uVar10 | 2;
  }
  iVar7 = FUN_003303cc(local_40,local_44,param_1 + 0x4a0,auStack_54,&local_48,1,0,0,1);
  if (iVar7 != 0) {
    uVar10 = uVar10 | 4;
  }
  switch(uVar10) {
  case 0:
    *(short *)(param_1 + 0x45a) = *(short *)(param_1 + 0x45a) + *(short *)(param_1 + 0x45c);
  case 1:
    if (*(char *)(param_1 + 0x445) == '\x03') {
      if ((*(uint *)(param_2 + 0x5bf4) & 2) == 0) goto switchD_0024872c_caseD_5;
      goto switchD_0024872c_caseD_3;
    }
    if ((short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) < 0) {
      *(undefined2 *)(param_1 + 0x45c) = 0xc000;
    }
    else {
      *(undefined2 *)(param_1 + 0x45c) = 0x4000;
    }
    if (*(char *)(param_1 + 0x445) == '\x01') {
      *(short *)(param_1 + 0x45c) = -*(short *)(param_1 + 0x45c);
    }
    break;
  case 2:
    *(short *)(param_1 + 0x45a) = *(short *)(param_1 + 0x45a) + *(short *)(param_1 + 0x45c);
  case 3:
switchD_0024872c_caseD_3:
    *(undefined2 *)(param_1 + 0x45c) = 0x4000;
    break;
  case 4:
    *(short *)(param_1 + 0x45a) = *(short *)(param_1 + 0x45a) + *(short *)(param_1 + 0x45c);
  case 5:
switchD_0024872c_caseD_5:
    *(undefined2 *)(param_1 + 0x45c) = 0xc000;
    break;
  default:
    break;
  case 7:
    *(undefined2 *)(param_1 + 0x45c) = 0;
    goto LAB_002487f4;
  }
  if (uVar10 != 6) {
LAB_002487f4:
    *(short *)(param_1 + 0x45a) = sVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
