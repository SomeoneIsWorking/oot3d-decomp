// OoT3D decomp @ 0041d3f8  name=FUN_0041d3f8  size=2664

void FUN_0041d3f8(int param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  ushort *puVar4;
  float fVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *extraout_r1;
  int *piVar10;
  int *extraout_r1_00;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  uint in_fpscr;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;

  bVar19 = *(char *)(param_1 + 9) == '\0';
  cVar2 = '\0';
  if (!bVar19) {
    cVar2 = *(char *)(param_1 + 10);
  }
  if (bVar19 || cVar2 == '\0') {
    return;
  }
  iVar13 = param_1 + 0x918;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 0x1284) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1288) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x128c) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1290) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1298) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x129c) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x12a0) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x12a4) + 0x6c) = 0;
  if (*(int *)(param_1 + 0x404) < 1) {
    iVar18 = FUN_002fde54();
    *(bool *)(param_1 + 0x3f4) = iVar18 != 0;
    iVar18 = FUN_0033f238();
    *(bool *)(param_1 + 0x3f5) = iVar18 != 0;
    iVar18 = FUN_003063a0();
    *(bool *)(param_1 + 0x3f6) = iVar18 != 0;
    puVar4 = DAT_0041d8f0;
    *(uint *)(param_1 + 0x3f8) = (uint)*DAT_0041d8ec;
    *(uint *)(param_1 + 0x3fc) = (uint)*puVar4;
  }
  else {
    *(bool *)(param_1 + 0x3f4) = 1 < *(int *)(param_1 + 0x404);
    *(bool *)(param_1 + 0x3f5) = *(int *)(param_1 + 0x404) == 5;
    *(bool *)(param_1 + 0x3f6) = *(int *)(param_1 + 0x404) == 1;
    *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + -1;
  }
  uVar12 = 0;
  uVar14 = *(uint *)(*(int *)(param_1 + 4) + 0x14);
  uVar16 = *(uint *)(*(int *)(param_1 + 4) + 0x18);
  iVar18 = 0x20;
  piVar11 = (int *)(param_1 + 0x18b4);
  do {
    uVar1 = 1 << (uVar12 & 0xff);
    if ((uVar1 & uVar14) == 0) {
      iVar7 = 0;
    }
    else if ((uVar1 & uVar16) == 0) {
      if (*piVar11 < 1) {
        iVar7 = 3;
      }
      else {
        iVar7 = *piVar11 + -1;
      }
    }
    else {
      iVar7 = 0xc;
    }
    iVar18 = iVar18 + -1;
    uVar12 = uVar12 + 1;
    piVar10 = piVar11 + 1;
    *piVar11 = iVar7;
    piVar11 = piVar10;
  } while (iVar18 != 0);
  if ((*DAT_0041d8f4 & 1) == 0) {
    uVar27 = FUN_003679b4(DAT_0041d8f4);
    piVar10 = (int *)((ulonglong)uVar27 >> 0x20);
    if ((int)uVar27 != 0) {
      FUN_0036788c(DAT_0041d8f8);
      piVar10 = DAT_0041d900;
    }
  }
  iVar18 = DAT_0041d904;
  iVar7 = *(int *)(DAT_0041d904 + 0x2d4);
  if ((((*(char *)(param_1 + 0x19) != '\0') &&
       (cVar2 = *(char *)(iVar7 + 8), (cVar2 == '\0' || cVar2 == '\x0f') || cVar2 == '\x11')) &&
      (cVar2 == '\x11')) && (*(char *)(iVar7 + 9) != '\0')) {
    if (*(char *)(iVar7 + 9) == '\x02') {
      FUN_002fd84c(0);
      *(undefined4 *)(param_1 + 0x3ec) = 7;
      FUN_0034536c(param_2);
      FUN_00367bfc(param_2,2);
      piVar10 = extraout_r1;
    }
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(iVar7 + 9) = 0;
    *(undefined1 *)(iVar7 + 8) = 0;
  }
  fVar5 = DAT_0041d908;
  iVar15 = 0;
  do {
    iVar8 = param_1 + iVar15 * 0x1c;
    iVar9 = *(int *)(iVar8 + 0x175c);
    bVar19 = iVar9 != 0;
    if (bVar19) {
      piVar10 = (int *)(uint)*(byte *)(iVar8 + 0x1771);
    }
    bVar20 = piVar10 != (int *)0x0;
    if (bVar19 && bVar20) {
      piVar10 = (int *)(uint)*(byte *)(iVar8 + 0x1772);
    }
    if ((bVar19 && bVar20) && piVar10 != (int *)0x0) {
      iVar17 = *(int *)(iVar9 + (*(int *)(iVar8 + 0x1764) + 3) * 4 + 0x1130);
      piVar10 = (int *)0x0;
      if (*(char *)(iVar17 + 0x6c) != '\0') {
        fVar25 = (float)VectorSignedToFloat(*(undefined4 *)(iVar9 + 0x3f8),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar26 = (float)VectorSignedToFloat(*(undefined4 *)(iVar9 + 0x3fc),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar21 = (float)FUN_002fd82c(iVar17);
        fVar22 = (float)FUN_002fd80c(iVar17);
        fVar23 = (float)FUN_002fd7f0(iVar17);
        fVar24 = (float)FUN_002fd7d4(iVar17);
        fVar24 = fVar24 + fVar22;
        uVar12 = in_fpscr & 0xfffffff;
        uVar14 = uVar12 | (uint)(fVar25 < fVar21) << 0x1f;
        in_fpscr = uVar14 | (uint)(NAN(fVar25) || NAN(fVar21)) << 0x1c;
        if (*(char *)(iVar8 + 6000) != '\0') {
          fVar22 = fVar22 - fVar5;
          fVar24 = fVar24 - fVar5;
        }
        if ((((byte)(uVar14 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) ||
            (in_fpscr = uVar12 | (uint)(fVar23 + fVar21 <= fVar25) << 0x1d,
            SUB41(in_fpscr >> 0x1d,0))) ||
           ((uVar14 = uVar12 | (uint)(fVar26 < fVar22) << 0x1f,
            in_fpscr = uVar14 | (uint)(NAN(fVar26) || NAN(fVar22)) << 0x1c,
            (byte)(uVar14 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1) ||
            (in_fpscr = uVar12 | (uint)(fVar24 <= fVar26) << 0x1d, SUB41(in_fpscr >> 0x1d,0))))) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        if (*(char *)(*(int *)(iVar8 + 0x175c) + 0x3f5) != '\0' && bVar19) {
          *(undefined4 *)(*(int *)(iVar8 + 0x175c) + 0x400) = *(undefined4 *)(iVar8 + 0x1760);
          FUN_002fd71c(*(undefined4 *)(iVar8 + 0x175c),*(undefined4 *)(iVar8 + 0x1760),0);
        }
        uVar12 = *(uint *)(iVar8 + 0x175c);
        iVar9 = *(int *)(uVar12 + 0x400);
        bVar20 = iVar9 != *(int *)(iVar8 + 0x1760);
        if (!bVar20) {
          uVar12 = (uint)*(byte *)(uVar12 + 0x3f4);
        }
        if ((!bVar20 && uVar12 != 0) && bVar19) {
          iVar9 = 1;
        }
        if ((bVar20 || uVar12 == 0) || !bVar19) {
          iVar9 = 0;
        }
        FUN_002fd3e4(iVar8 + 0x1758,iVar9);
        piVar10 = extraout_r1_00;
        if (!bVar20) {
          piVar10 = (int *)0x0;
          if (*(char *)(*(int *)(iVar8 + 0x175c) + 0x3f6) != '\0') {
            if (bVar19) {
              FUN_00429600(*(int *)(iVar8 + 0x175c),*(undefined4 *)(iVar8 + 0x1760));
              FUN_0037547c(*(undefined4 *)(iVar8 + 0x176c),0,4,DAT_0041d910,DAT_0041d910,
                           DAT_0041d90c);
            }
            piVar10 = *(int **)(iVar8 + 0x175c);
            piVar10[0x100] = -1;
          }
        }
      }
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 < 0xc);
  switch(*(undefined1 *)(param_1 + 8)) {
  case 1:
    FUN_00429e94(param_1);
    break;
  case 2:
    iVar15 = 0;
    do {
      iVar8 = param_1 + iVar15 * 0x1c;
      iVar8 = FUN_002fde08(*(int *)(iVar8 + 0x175c) + 0x918,1,*(int *)(iVar8 + 0x1764) + 3);
      if (iVar8 == 0) goto switchD_0041d7e0_caseD_0;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 10);
    iVar15 = 0;
    do {
      iVar8 = iVar15 + 1;
      *(undefined1 *)(param_1 + iVar15 * 0x1c + 0x1771) = 1;
      iVar15 = iVar8;
    } while (iVar8 < 9);
    iVar15 = 0;
    *(undefined1 *)(DAT_0041d914 + param_1) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x12c0) + 0x6c) = 1;
    do {
      FUN_00307840(iVar13,1,iVar15 + 0x5a,iVar15 + 9,1);
      iVar15 = iVar15 + 1;
    } while (iVar15 < 4);
    *(undefined4 *)(param_1 + 1000) = 0xffffffff;
    uVar6 = 3;
    goto LAB_0041d9f8;
  case 3:
    FUN_00429784(param_1);
    break;
  case 4:
    iVar15 = 0;
    do {
      iVar8 = param_1 + iVar15 * 0x1c;
      iVar8 = FUN_002fde08(*(int *)(iVar8 + 0x175c) + 0x918,1,*(int *)(iVar8 + 0x1764) + 3);
      if (iVar8 == 0) goto switchD_0041d7e0_caseD_0;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 10);
    iVar15 = 0;
    do {
      FUN_002fd360(param_1 + iVar15 * 0x1c + 0x1758);
      iVar15 = iVar15 + 1;
    } while (iVar15 < 9);
    FUN_002fd360(param_1 + 0x1854);
    FUN_002fd360(param_1 + 0x1870);
    FUN_002fd360(param_1 + 0x188c);
    FUN_00307840(iVar13,0,0xfa,0x10,1);
    FUN_00307840(iVar13,1,0xfa,0x10,1);
    uVar6 = 0xd;
    goto LAB_0041d9f8;
  case 5:
    iVar15 = 0;
    do {
      iVar8 = param_1 + iVar15 * 0x1c;
      iVar8 = FUN_002fde08(*(int *)(iVar8 + 0x175c) + 0x918,1,*(int *)(iVar8 + 0x1764) + 3);
      if (iVar8 == 0) goto switchD_0041d7e0_caseD_0;
      iVar15 = iVar15 + 1;
    } while (iVar15 < 10);
    iVar15 = 0;
    do {
      if (*(int *)(param_1 + 1000) != iVar15) {
        FUN_002fd360(param_1 + iVar15 * 0x1c + 0x1758);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 9);
    FUN_002fd360(param_1 + 0x1854);
    FUN_002fd274();
    *(undefined1 *)(param_1 + 0x1889) = 1;
    FUN_002fd274();
    *(undefined1 *)(param_1 + 0x18a5) = 1;
    iVar15 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x12c0) + 0x6c) = 1;
    do {
      FUN_00307840(iVar13,1,iVar15 + 0x5a,iVar15 + 9,1);
      iVar15 = iVar15 + 1;
    } while (iVar15 < 4);
    uVar6 = 7;
    goto LAB_0041d9f8;
  case 6:
    FUN_0042a0cc(param_1);
    break;
  case 7:
    FUN_00429a24(param_1);
    break;
  case 8:
    FUN_00429ba0(param_1);
    break;
  case 9:
    FUN_00429cd8(param_1);
    break;
  case 10:
    if (*(char *)(param_1 + 0xb) != '\0') {
      iVar15 = FUN_002fde08(iVar13,0,6);
      if (((iVar15 == 0) || (iVar15 = FUN_002fde08(iVar13,0,10), iVar15 == 0)) ||
         ((iVar15 = FUN_002fde08(iVar13,0,0xdc), iVar15 == 0 ||
          ((iVar15 = FUN_002fde08(iVar13,0,8), iVar15 == 0 ||
           (iVar15 = FUN_002fde08(iVar13,0,0xc), iVar15 == 0)))))) break;
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      goto LAB_0041dc70;
    }
    iVar15 = FUN_002fde08(iVar13,0,7);
    if ((iVar15 == 0) || (iVar15 = FUN_0032c800(1), iVar15 != 0)) break;
    *(undefined4 *)(param_1 + 0x3f0) = 0x1e;
    uVar6 = 0xb;
    goto LAB_0041d9f8;
  case 0xb:
    iVar15 = *(int *)(param_1 + 0x3f0) + -1;
    *(int *)(param_1 + 0x3f0) = iVar15;
    if (((*(char *)(param_1 + 0x3f5) == '\0') &&
        ((~*(uint *)(*(int *)(param_1 + 4) + 0x18) & 1) != 0)) && (0 < iVar15)) break;
    FUN_00307840(iVar13,0,7,0x28,1);
LAB_0041dc70:
    uVar6 = 0xc;
LAB_0041d9f8:
    *(undefined1 *)(param_1 + 8) = uVar6;
    break;
  case 0xc:
    FUN_0042a018(param_1);
    break;
  case 0xd:
    iVar15 = FUN_002fde08(iVar13,0,0xfa);
    if ((iVar15 != 0) && (iVar15 = FUN_002fde08(iVar13,1,0xfa), iVar15 != 0)) {
      iVar15 = 0;
      do {
        iVar9 = iVar13 + iVar15 * 4;
        iVar15 = iVar15 + 1;
        iVar8 = *(int *)(iVar9 + 0x418);
        if (iVar8 != 0) {
          *(undefined1 *)(iVar8 + 0x6c) = 0;
        }
        iVar8 = *(int *)(iVar9 + 0x818);
        if (iVar8 != 0) {
          *(undefined1 *)(iVar8 + 0x6c) = 0;
        }
      } while (iVar15 < 0x100);
      FUN_00331754(0);
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
switchD_0041d7e0_caseD_0:
  FUN_00429544(param_1);
  if ((*(char *)(param_1 + 0xd) != '\0') && (iVar15 = FUN_002fd25c(), iVar15 != 0)) {
    cVar2 = *(char *)(*(int *)(param_1 + 4) + 0x100);
    bVar19 = cVar2 == '\x03';
    if (bVar19) {
      cVar2 = *(char *)(*(int *)(param_1 + 4) + 0x101);
    }
    if ((((bVar19 && cVar2 == '\x02') &&
         (cVar2 = *(char *)(iVar7 + 8), (cVar2 == '\0' || cVar2 == '\x0f') || cVar2 == '\x11')) &&
        (iVar15 = FUN_0037577c(), iVar15 == 0)) || (*(char *)(param_1 + 0x18) != '\0')) {
      iVar15 = *(int *)(param_1 + 0x10) + 1;
      *(int *)(param_1 + 0x10) = iVar15;
      uVar12 = iVar15 * 1000;
      lVar3 = (longlong)(int)uVar12 * (longlong)DAT_0041dec4 + ((ulonglong)uVar12 << 0x20);
      iVar15 = (int)((ulonglong)lVar3 >> 0x20);
      FUN_002fcf80(param_1,(iVar15 >> 4) - (iVar15 >> 0x1f),(int)lVar3);
    }
  }
  if (-1 < *(int *)(param_1 + 0x3ec)) {
    cVar2 = *(char *)(*(int *)(param_1 + 4) + 0x100);
    bVar19 = cVar2 == '\x03';
    if (bVar19) {
      cVar2 = *(char *)(*(int *)(param_1 + 4) + 0x101);
    }
    if (((((bVar19 && cVar2 == '\x02') && (iVar15 = FUN_0037577c(), iVar15 == 0)) &&
         ((iVar15 = FUN_00366748(*(undefined4 *)(param_1 + 4)), iVar15 == 0 &&
          ((iVar15 = FUN_002fd25c(), iVar15 != 0 &&
           (cVar2 = *(char *)(iVar7 + 8), (cVar2 == '\0' || cVar2 == '\x0f') || cVar2 == '\x11')))))
         ) && ((~*(uint *)(*(int *)(param_1 + 4) + 0x18) & 8) == 0)) &&
       ((~*(uint *)(*(int *)(param_1 + 4) + 0x14) & 0xfffffff7) != 0)) {
      piVar11 = (int *)0xfffffff7;
      if ((*DAT_0041d8f4 & 1) == 0) {
        uVar27 = FUN_003679b4(DAT_0041d8f4);
        piVar11 = (int *)((ulonglong)uVar27 >> 0x20);
        if ((int)uVar27 != 0) {
          FUN_0036788c(DAT_0041d8f8);
          piVar11 = DAT_0041d900;
        }
      }
      FUN_004276ec(*(undefined4 *)(iVar18 + 0x2d4),piVar11);
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
  }
  FUN_002fd8e8(DAT_0041dec8,iVar13);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}
