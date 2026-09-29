// OoT3D decomp @ 00476dfc  name=FUN_00476dfc  size=1528

void FUN_00476dfc(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  float fVar12;
  char cVar13;
  undefined2 uVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  short *psVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  uint in_fpscr;
  float fVar30;

  iVar20 = DAT_00477438;
  iVar18 = DAT_00477424;
  iVar21 = DAT_00477420;
  switch(*(undefined2 *)(DAT_00477420 + 0x80)) {
  default:
    *(undefined2 *)(DAT_00477420 + 0x80) = 0;
    return;
  case 1:
    uVar14 = 2;
    *(undefined2 *)(DAT_00477438 + 0x12) = 2;
    break;
  case 2:
    cVar13 = *(char *)(DAT_00477424 + 0x47) + -2;
    *(char *)(DAT_00477424 + 0x47) = cVar13;
    iVar20 = DAT_00477438;
    if (cVar13 < 1) {
      *(undefined1 *)(iVar18 + 0x47) = 0;
      *(undefined2 *)(iVar21 + 0x80) = 3;
      iVar21 = DAT_00477438;
      *(undefined2 *)(DAT_00477438 + 0xc) = 0xff;
      *(undefined2 *)(iVar21 + 10) = 0xff;
      *(undefined2 *)(iVar21 + 8) = 0xff;
    }
    else if ((int)cVar13 == (int)*(short *)(iVar21 + 0x88)) {
      *(undefined2 *)(iVar21 + 0x80) = 3;
      *(undefined2 *)(iVar20 + 0xc) = 0xff;
      *(undefined2 *)(iVar20 + 10) = 0xff;
      *(undefined2 *)(iVar20 + 8) = 0xff;
    }
  case 3:
  case 4:
  case 6:
    iVar21 = DAT_0047743c;
    sVar1 = *(short *)(DAT_0047743c + -0x38);
    sVar2 = *(short *)(DAT_0047743c + -0x44);
    iVar20 = (int)sVar2;
    psVar22 = (short *)(DAT_0047743c + 0x1cc + *(short *)(DAT_0047743c + sVar1 * 2) * 6);
    sVar3 = *(short *)(DAT_0047743c + -0x3a);
    sVar4 = *psVar22;
    iVar24 = (int)sVar4;
    iVar18 = iVar20 - iVar24;
    if (iVar18 < 0) {
      iVar18 = iVar24 - iVar20;
    }
    sVar15 = FUN_00368d94(iVar18);
    sVar5 = psVar22[1];
    iVar25 = (int)sVar5;
    sVar6 = *(short *)(iVar21 + -0x42);
    iVar18 = (int)sVar6;
    iVar21 = iVar18 - iVar25;
    if (iVar21 < 0) {
      iVar21 = iVar25 - iVar18;
    }
    sVar16 = FUN_00368d94(iVar21,(int)sVar3);
    sVar7 = psVar22[2];
    iVar26 = (int)sVar7;
    sVar8 = *(short *)(DAT_00477438 + 0xc);
    iVar23 = (int)sVar8;
    iVar21 = iVar23 - iVar26;
    if (iVar21 < 0) {
      iVar21 = iVar26 - iVar23;
    }
    sVar17 = FUN_00368d94(iVar21,(int)sVar3);
    if (iVar20 < iVar24) {
      *(short *)(DAT_00477438 + 8) = sVar2 + sVar15;
    }
    else {
      *(short *)(DAT_00477438 + 8) = sVar2 - sVar15;
    }
    iVar21 = DAT_00477438;
    if (iVar25 <= iVar18) {
      sVar16 = -sVar16;
    }
    if (iVar26 <= iVar23) {
      sVar17 = -sVar17;
    }
    *(short *)(DAT_00477438 + 10) = sVar16 + sVar6;
    *(short *)(iVar21 + 0xc) = sVar17 + sVar8;
    *(short *)(iVar21 + 0x12) = sVar3 + -1;
    piVar11 = DAT_00477440;
    if ((short)(sVar3 + -1) == 0) {
      *(short *)(iVar21 + 8) = sVar4;
      *(short *)(iVar21 + 10) = sVar5;
      *(short *)(iVar21 + 0xc) = sVar7;
      *(undefined2 *)(iVar21 + 0x12) = *(undefined2 *)(*piVar11 + sVar1 * 2 + 0x4e4);
      *(short *)(iVar21 + 0x14) = sVar1 + 1;
      if (3 < (short)(sVar1 + 1)) {
LAB_004770dc:
        *(undefined2 *)(iVar21 + 0x14) = 0;
        return;
      }
    }
    return;
  case 5:
    *(undefined2 *)(DAT_00477438 + 0xc) = 0xff;
    *(undefined2 *)(iVar20 + 10) = 0xff;
    *(undefined2 *)(iVar20 + 8) = 0xff;
    *(undefined2 *)(iVar21 + 0x80) = 0;
    return;
  case 7:
    iVar18 = FUN_003695f8();
    if (iVar18 == 0) {
      uVar19 = FUN_00366748(param_1);
      bVar27 = uVar19 == 0;
      if (bVar27) {
        uVar19 = (uint)*(ushort *)(DAT_00477444 + param_1);
      }
      bVar28 = bVar27 && uVar19 == 0;
      if (bVar27 && uVar19 == 0) {
        bVar28 = *(char *)(DAT_00477448 + param_1) == '\0';
      }
      if (((bVar28) && (*(char *)(DAT_0047744c + param_1) == '\0')) &&
         (iVar20 = FUN_0037577c(param_1), iVar18 = DAT_00477424, iVar20 == 0)) {
        if ((*(char *)(DAT_00477424 + 0x47) == '\0') ||
           ((iVar20 = FUN_002d7a78(param_1), 1 < iVar20 &&
            (iVar20 = FUN_002d7a78(param_1), iVar20 < 5)))) {
LAB_004771dc:
          uVar10 = DAT_00477430;
          uVar9 = DAT_0047742c;
          *(undefined1 *)(DAT_00477450 + param_1) = 0;
          FUN_0037547c(DAT_00477454,0,4,uVar10,uVar10,uVar9);
          iVar18 = DAT_00477438;
          *(undefined2 *)(iVar21 + 0x80) = 0;
          *(undefined2 *)(iVar18 + 0xc) = 0xff;
          *(undefined2 *)(iVar18 + 10) = 0xff;
          *(undefined2 *)(iVar18 + 8) = 0xff;
          return;
        }
        cVar13 = *(char *)(iVar18 + 0x81);
        bVar27 = cVar13 != '\x0f';
        if (bVar27) {
          cVar13 = *(char *)(iVar18 + 0x82);
        }
        bVar28 = cVar13 != '\x0f';
        if (bVar27 && bVar28) {
          cVar13 = *(char *)(iVar18 + 0x83);
        }
        bVar29 = cVar13 != '\x0f';
        if ((bVar27 && bVar28) && bVar29) {
          cVar13 = *(char *)(iVar18 + 0x84);
        }
        if ((((bVar27 && bVar28) && bVar29) && cVar13 != '\x0f') ||
           (*(char *)(DAT_00477450 + param_1) == '\0')) goto LAB_004771dc;
        sVar1 = *(short *)(param_1 + 0x2e0e) + -1;
        *(short *)(param_1 + 0x2e0e) = sVar1;
        fVar12 = DAT_00477458;
        if (sVar1 == 0) {
          *(char *)(iVar18 + 0x47) = *(char *)(iVar18 + 0x47) + -1;
          fVar30 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00477440 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(param_1 + 0x2e0e) = (short)(int)(fVar12 / fVar30 + DAT_0047745c);
        }
      }
    }
    iVar21 = DAT_0047743c;
    sVar1 = *(short *)(DAT_0047743c + -0x38);
    sVar2 = *(short *)(DAT_0047743c + -0x44);
    iVar20 = (int)sVar2;
    psVar22 = (short *)(DAT_0047743c + 0x1cc + *(short *)(DAT_0047743c + sVar1 * 2) * 6);
    sVar3 = *(short *)(DAT_0047743c + -0x3a);
    sVar4 = *psVar22;
    iVar24 = (int)sVar4;
    iVar18 = iVar20 - iVar24;
    if (iVar18 < 0) {
      iVar18 = iVar24 - iVar20;
    }
    sVar15 = FUN_00368d94(iVar18);
    sVar5 = psVar22[1];
    iVar25 = (int)sVar5;
    sVar6 = *(short *)(iVar21 + -0x42);
    iVar18 = (int)sVar6;
    iVar21 = iVar18 - iVar25;
    if (iVar21 < 0) {
      iVar21 = iVar25 - iVar18;
    }
    sVar16 = FUN_00368d94(iVar21,(int)sVar3);
    sVar7 = psVar22[2];
    iVar26 = (int)sVar7;
    sVar8 = *(short *)(DAT_00477438 + 0xc);
    iVar23 = (int)sVar8;
    iVar21 = iVar23 - iVar26;
    if (iVar21 < 0) {
      iVar21 = iVar26 - iVar23;
    }
    sVar17 = FUN_00368d94(iVar21,(int)sVar3);
    if (iVar20 < iVar24) {
      *(short *)(DAT_00477438 + 8) = sVar2 + sVar15;
    }
    else {
      *(short *)(DAT_00477438 + 8) = sVar2 - sVar15;
    }
    iVar21 = DAT_00477438;
    if (iVar25 <= iVar18) {
      sVar16 = -sVar16;
    }
    if (iVar26 <= iVar23) {
      sVar17 = -sVar17;
    }
    *(short *)(DAT_00477438 + 10) = sVar16 + sVar6;
    *(short *)(iVar21 + 0xc) = sVar17 + sVar8;
    *(short *)(iVar21 + 0x12) = sVar3 + -1;
    piVar11 = DAT_00477440;
    if ((short)(sVar3 + -1) != 0) {
      return;
    }
    *(short *)(iVar21 + 8) = sVar4;
    *(short *)(iVar21 + 10) = sVar5;
    *(short *)(iVar21 + 0xc) = sVar7;
    *(undefined2 *)(iVar21 + 0x12) = *(undefined2 *)(*piVar11 + sVar1 * 2 + 0x4e4);
    *(short *)(iVar21 + 0x14) = sVar1 + 1;
    if ((short)(sVar1 + 1) < 4) {
      return;
    }
    goto LAB_004770dc;
  case 8:
    sVar1 = *(short *)(DAT_00477420 + 0x84);
    iVar18 = *(char *)(DAT_00477424 + 0x46) * 0x30;
    if (sVar1 != iVar18) {
      if (sVar1 < iVar18) {
        *(short *)(DAT_00477420 + 0x84) = sVar1 + 8;
        if ((short)(sVar1 + 8) <= iVar18) {
          return;
        }
      }
      else {
        *(short *)(DAT_00477420 + 0x84) = sVar1 + -8;
        if (iVar18 < (short)(sVar1 + -8)) {
          return;
        }
      }
      *(short *)(iVar21 + 0x84) = (short)iVar18;
      return;
    }
    uVar14 = 9;
    break;
  case 9:
    if (((*(int *)(DAT_00477428 + 0x4e4) == 0) && (*(int *)(DAT_00477428 + 0x4e8) < 4)) &&
       ((int)*(char *)(DAT_00477424 + 0x47) < (int)*(short *)(DAT_00477420 + 0x84))) {
      FUN_0037547c(DAT_00477434,0,4,DAT_00477430,DAT_00477430,DAT_0047742c);
    }
    iVar18 = DAT_00477424;
    cVar13 = *(char *)(DAT_00477424 + 0x47) + '\x04';
    *(char *)(DAT_00477424 + 0x47) = cVar13;
    if ((int)cVar13 < (int)*(short *)(iVar21 + 0x86)) {
      return;
    }
    *(char *)(iVar18 + 0x47) = (char)*(short *)(iVar21 + 0x86);
    *(undefined2 *)(iVar21 + 0x80) = *(undefined2 *)(iVar21 + 0x82);
    *(undefined2 *)(iVar21 + 0x82) = 0;
    return;
  case 10:
    if ((int)*(char *)(DAT_00477424 + 0x47) < (int)*(short *)(DAT_00477420 + 0x84)) {
      FUN_0037547c(DAT_00477434,0,4,DAT_00477430,DAT_00477430,DAT_0047742c);
    }
    cVar13 = *(char *)(iVar18 + 0x47) + '\x04';
    *(char *)(iVar18 + 0x47) = cVar13;
    if ((int)cVar13 < (int)*(short *)(iVar21 + 0x88)) {
      return;
    }
    *(char *)(iVar18 + 0x47) = (char)*(short *)(iVar21 + 0x88);
    *(undefined2 *)(iVar21 + 0x80) = *(undefined2 *)(iVar21 + 0x82);
    *(undefined2 *)(iVar21 + 0x82) = 0;
    return;
  }
  *(undefined2 *)(iVar21 + 0x80) = uVar14;
  return;
}
