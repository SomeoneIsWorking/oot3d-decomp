// OoT3D decomp @ 0012e2d0  name=FUN_0012e2d0  size=2680

void FUN_0012e2d0(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;

  fVar4 = DAT_0012e62c;
  uVar10 = DAT_0012e628;
  pfVar12 = (float *)(param_1 + 0x28);
  iVar11 = *(int *)(param_2 + 0x20ac);
  if ((*(byte *)(param_1 + 0x1d79) & 0x80) == 0) {
    if ((*(byte *)(param_1 + 0x1ca1) & 2) == 0) goto LAB_0012e72c;
    *(byte *)(param_1 + 0x1ca1) = *(byte *)(param_1 + 0x1ca1) & 0xfd;
    cVar2 = *(char *)(param_1 + 0xb9);
    if (cVar2 != '\r') {
      if (cVar2 == '\x06') goto LAB_0012ecc0;
      *(char *)(param_1 + 0x1c66) = cVar2;
      iVar5 = DAT_0012e630;
      if ('\0' < *(char *)(param_1 + 0x1c88)) {
        *(undefined1 *)(param_1 + 0x1c88) = 0;
      }
      *(undefined1 *)(param_1 + 0x1c60) = *(undefined1 *)(iVar5 + iVar11);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      FUN_00375fd0(param_1,param_1 + 0x1ca8,0);
      FUN_003ff758(param_1 + 0x28,DAT_0012e634);
      cVar2 = *(char *)(param_1 + 0xb9);
      if ((cVar2 == '\x01' || cVar2 == '\x0f') || cVar2 == '\x0e') {
        if (*(char *)(param_1 + 0x1c4c) != '\v') {
          FUN_00375eb8(param_1);
          *(float *)(param_1 + 0x220) = fVar4;
          *(undefined1 *)(param_1 + 0x1c4c) = 0xb;
          *(undefined1 *)(param_1 + 0x1c62) = 0;
          *(undefined1 *)(param_1 + 0x1c88) = 0;
          *(undefined4 *)(param_1 + 0x6c) = uVar10;
          if (*(char *)(param_1 + 0x1c66) == '\x0e') {
            FUN_00375ed8(param_1,0x800000,0x78,0,0x50);
          }
          else {
            FUN_00375ed8(param_1,0,0x78,0,0x50);
            if (*(char *)(param_1 + 0x1c66) == '\x0f') {
              *(undefined2 *)(param_1 + 0x1c64) = 0x36;
            }
            else {
              FUN_0037422c(fVar4,param_1 + 0x1e0,7);
            }
          }
          FUN_00375bcc(param_1,DAT_0012e638);
          uVar10 = DAT_0012e63c;
LAB_0012e5c0:
          *(undefined4 *)(param_1 + 0x1c50) = uVar10;
        }
      }
      else {
        iVar11 = FUN_0036f18c(param_1,0x4000);
        uVar10 = DAT_0012e640;
        if (iVar11 != 0) {
          iVar11 = FUN_00375eb8(param_1);
          if (iVar11 == 0) {
            FUN_00375b70(param_2,param_1);
            FUN_00373d40(param_1 + 0x1e0,9);
            FUN_00375bcc(param_1,DAT_0012e644);
            *(float *)(param_1 + 0x6c) = fVar4;
            *(undefined1 *)(param_1 + 0x1c62) = 0;
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
            *(undefined2 *)(param_1 + 0x11a) = 0;
            if (*(short *)(param_1 + 0x1c) < 4) {
              *(undefined1 *)(param_1 + 0x1c4c) = 5;
              uVar10 = DAT_0012e648;
            }
            else {
              *(undefined1 *)(param_1 + 0x1c4c) = 2;
              FUN_00375e18(param_1 + 0x1c74,0x19,param_2);
              *(undefined2 *)(param_1 + 0x14) = 0;
              if (-1 < *(char *)(param_1 + 0x1c88)) {
                FUN_00362384(*(undefined4 *)(param_1 + 0x1c8c));
                FUN_0035eb74();
                *(undefined1 *)(param_1 + 0x1c88) = 0xff;
              }
              *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
              uVar10 = DAT_0012e64c;
              if (*(short *)(param_1 + 0x1c) == 5) {
                FUN_00375d3c(param_2,param_2 + 0x208c,param_1,6);
                uVar10 = DAT_0012e64c;
              }
            }
          }
          else {
            FUN_00373d40(param_1 + 0x1e0,7);
            FUN_00375bcc(param_1,DAT_0012e650);
            *(undefined2 *)(DAT_0012e654 + param_1) = 0x16;
            *(undefined4 *)(param_1 + 0x6c) = uVar10;
            *(undefined1 *)(param_1 + 0x1c4c) = 8;
            FUN_00375ed8(param_1,0x400000,0xff,0,8);
            uVar10 = DAT_0012e658;
          }
          goto LAB_0012e5c0;
        }
        iVar11 = FUN_00375eb8(param_1);
        if (iVar11 == 0) {
          FUN_00373d40(param_1 + 0x1e0,10);
          FUN_00375bcc(param_1,DAT_0012e644);
          *(undefined1 *)(param_1 + 0x1c4c) = 6;
          *(float *)(param_1 + 0x6c) = fVar4;
          *(undefined2 *)(param_1 + 0x11a) = 0;
          *(undefined1 *)(param_1 + 0x1c62) = 0;
          uVar10 = DAT_0012e65c;
          if (*(short *)(param_1 + 0x1c) < 4) {
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
          }
          else {
            *(undefined1 *)(param_1 + 0x1c4c) = 2;
            FUN_00375e18(param_1 + 0x1c74,0x19,param_2);
            *(undefined2 *)(param_1 + 0x14) = 0;
            if (-1 < *(char *)(param_1 + 0x1c88)) {
              FUN_00362384(*(undefined4 *)(param_1 + 0x1c8c));
              FUN_0035eb74();
              *(undefined1 *)(param_1 + 0x1c88) = 0xff;
            }
            *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
            uVar10 = DAT_0012e64c;
            if (*(short *)(param_1 + 0x1c) == 5) {
              FUN_00375d3c(param_2,param_2 + 0x208c,param_1,6);
              uVar10 = DAT_0012e64c;
            }
          }
          *(undefined4 *)(param_1 + 0x1c50) = uVar10;
          FUN_00375b70(param_2,param_1);
        }
        else {
          FUN_00373d40(param_1 + 0x1e0,8);
          FUN_00375bcc(param_1,DAT_0012e650);
          *(undefined4 *)(param_1 + 0x6c) = uVar10;
          *(undefined1 *)(param_1 + 0x1c4c) = 9;
          FUN_00375ed8(param_1,0x400000,0xff,0,8);
          *(undefined4 *)(param_1 + 0x1c50) = DAT_0012ea5c;
        }
      }
      goto LAB_0012e72c;
    }
  }
  else {
    *(byte *)(param_1 + 0x1d79) = *(byte *)(param_1 + 0x1d79) & 0x7f;
    *(byte *)(param_1 + 0x1ca1) = *(byte *)(param_1 + 0x1ca1) & 0xfd;
    if (9 < *(byte *)(param_1 + 0x1c4c)) {
      *(undefined4 *)(param_1 + 0x6c) = uVar10;
    }
LAB_0012e72c:
    if (*(char *)(param_1 + 0xb9) == '\x06') goto LAB_0012ecc0;
  }
  FUN_00376864(param_1);
  bVar15 = true;
  if (*(short *)(param_2 + 0x104) == 7) {
    fVar22 = *(float *)(param_1 + 0x28) - DAT_0012ea60;
    if (NAN(fVar22) || NAN(fVar4)) {
      fVar22 = DAT_0012ea60 - *(float *)(param_1 + 0x28);
    }
    fVar16 = *(float *)(param_1 + 0x2c);
    fVar18 = fVar16 - DAT_0012ea64;
    if (NAN(fVar18) || NAN(fVar4)) {
      fVar18 = DAT_0012ea64 - fVar16;
    }
    fVar20 = *(float *)(param_1 + 0x30) - DAT_0012ea68;
    uVar9 = in_fpscr & 0xfffffff | (uint)(fVar20 < fVar4) << 0x1f;
    in_fpscr = uVar9 | (uint)(NAN(fVar20) || NAN(fVar4)) << 0x1c;
    if ((byte)(uVar9 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar20 = DAT_0012ea68 - *(float *)(param_1 + 0x30);
    }
    bVar14 = SBORROW4((int)fVar22,DAT_0012ea6c);
    iVar11 = (int)fVar22 - DAT_0012ea6c;
    if ((int)fVar22 < DAT_0012ea6c) {
      bVar14 = SBORROW4((int)fVar18,DAT_0012ea6c + -0x168000);
      iVar11 = (int)fVar18 - (DAT_0012ea6c + -0x168000);
    }
    bVar13 = iVar11 < 0;
    if (bVar13 != bVar14) {
      bVar14 = SBORROW4((int)fVar20,DAT_0012ea6c);
      bVar13 = (int)fVar20 - DAT_0012ea6c < 0;
    }
    if ((bVar13 != bVar14) && (bVar15 = false, (uint)DAT_0012ea70 < (uint)fVar16))
    goto LAB_0012ea48;
  }
  fVar22 = *pfVar12;
  fVar16 = *(float *)(param_1 + 0x2c);
  fVar18 = *(float *)(param_1 + 0x30);
  if (bVar15) {
    FUN_00376340(DAT_0012ea78,DAT_0012ea74,DAT_0012ea74,param_2,param_1,0x1d);
  }
  fVar20 = DAT_0012ea90;
  if (*(short *)(param_2 + 0x104) == 7) {
    fVar17 = *(float *)(param_1 + 0x28);
    fVar23 = fVar17 - DAT_0012ea7c;
    uVar9 = in_fpscr & 0xfffffff;
    if (NAN(fVar23) || NAN(fVar4)) {
      fVar23 = DAT_0012ea7c - fVar17;
    }
    fVar19 = *(float *)(param_1 + 0x30);
    fVar21 = fVar19 - DAT_0012ea80;
    uVar1 = uVar9 | (uint)(fVar21 < fVar4) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(fVar21) || NAN(fVar4)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar21 = DAT_0012ea80 - fVar19;
    }
    bVar15 = SBORROW4((int)fVar23,DAT_0012ea84);
    iVar11 = (int)fVar23 - DAT_0012ea84;
    if ((int)fVar23 < DAT_0012ea84) {
      bVar15 = SBORROW4((int)fVar21,DAT_0012ea88);
      iVar11 = (int)fVar21 - DAT_0012ea88;
    }
    if (iVar11 < 0 != bVar15) {
      fVar23 = *(float *)(param_1 + 0x2c);
      uVar1 = uVar9 | (uint)(fVar23 < fVar16) << 0x1f | (uint)(fVar23 == fVar16) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(fVar23) || NAN(fVar16)) << 0x1c;
      bVar3 = (byte)(uVar1 >> 0x18);
      if ((!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
         ((uint)fVar23 < (uint)DAT_0012ea8c)) {
        in_fpscr = uVar9 | (uint)(fVar23 - fVar16 == fVar4) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar16 = (DAT_0012ea90 - fVar16) / (fVar23 - fVar16);
          *(float *)(param_1 + 0x30) = fVar18 + (fVar19 - fVar18) * fVar16;
          *(float *)(param_1 + 0x2c) = fVar20;
          *pfVar12 = fVar22 + (fVar17 - fVar22) * fVar16;
        }
      }
    }
  }
  uVar6 = DAT_0012eaa8;
  uVar10 = DAT_0012ea9c;
  if (*(char *)(DAT_0012ea94 + 0xe) != '\0') {
    sVar7 = *(short *)(param_2 + 0x104);
    uVar9 = param_2 + 0x4c00;
    if (sVar7 == 7) {
      if (*(char *)(param_2 + 0x4c30) == '\x0e') {
        iVar11 = FUN_0035ea64(DAT_0012eaac,DAT_0012eaa8,DAT_0012eaa4,DAT_0012eaa0,DAT_0012ea9c,
                              DAT_0012ea98,param_1 + 0x28);
        if (iVar11 == 0) {
          FUN_0035ea64(DAT_0012eabc,uVar6,DAT_0012eab8,DAT_0012eab4,uVar10,DAT_0012eab0,
                       param_1 + 0x28);
        }
        if (DAT_0012eac0 < *(uint *)(param_1 + 0x2c)) {
          *(undefined4 *)(param_1 + 0x28) = DAT_0012eac4;
          *(undefined4 *)(param_1 + 0x2c) = DAT_0012eac8;
          *(undefined4 *)(param_1 + 0x30) = DAT_0012eacc;
        }
      }
    }
    else {
      if (sVar7 == 0xb) {
        uVar9 = (uint)*(byte *)(param_2 + 0x4c30);
      }
      if ((sVar7 == 0xb && uVar9 == 3) && (DAT_0012ead0 < *(uint *)(param_1 + 0x2c))) {
        *(undefined4 *)(param_1 + 0x28) = DAT_0012ead4;
        *(undefined4 *)(param_1 + 0x2c) = DAT_0012ead8;
        *(undefined4 *)(param_1 + 0x30) = DAT_0012eadc;
      }
    }
  }
  if (*(short *)(param_1 + 0x1c) == 1) {
    fVar22 = *(float *)(param_1 + 0xc);
    if (*(float *)(param_1 + 0x2c) <= fVar22) {
      *(float *)(param_1 + 0x2c) = fVar22;
      *(float *)(param_1 + 100) = fVar4;
    }
    fVar16 = *(float *)(param_1 + 0x84);
    uVar9 = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar22) << 0x1f |
            (uint)(fVar16 == fVar22) << 0x1e;
    in_fpscr = uVar9 | (uint)(NAN(fVar16) || NAN(fVar22)) << 0x1c;
    bVar3 = (byte)(uVar9 >> 0x18);
    if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar22 = fVar16;
    }
    *(float *)(param_1 + 0x84) = fVar22;
  }
  else if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    iVar11 = FUN_0035ea4c(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x7c),
                          *(undefined1 *)(param_1 + 0x81));
    if ((iVar11 == 5 || iVar11 == 0xc) ||
       (iVar11 = FUN_0035ea34(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x7c),
                              *(undefined1 *)(param_1 + 0x81)), iVar11 == 9)) {
LAB_0012ea48:
      FUN_00374428(param_1);
      return;
    }
  }
  (**(code **)(param_1 + 0x1c50))(param_1,param_2);
  switch(*(undefined1 *)(param_1 + 0x1c62)) {
  case 1:
    uVar10 = FUN_0036ae14(param_1 + 0x264,6);
    uVar10 = VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_0012ee18,fVar4,uVar10,DAT_0012ee18,param_1 + 0x264,6,2);
    FUN_0035e9fc(param_2,param_1 + 0x1e0,*(undefined4 *)(param_1 + 600),
                 *(undefined4 *)(param_1 + 0x2dc),DAT_0012ee1c);
    *(char *)(param_1 + 0x1c62) = *(char *)(param_1 + 0x1c62) + '\x01';
    break;
  case 2:
    FUN_003731e0(param_1 + 0x264);
    FUN_0035e990(param_1 + 0x1e0,*(undefined4 *)(param_1 + 600),*(undefined4 *)(param_1 + 0x2dc),
                 DAT_0012ee1c);
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x298) = DAT_0012ee20;
    *(undefined1 *)(param_1 + 0x1c62) = 4;
  case 4:
    fVar22 = DAT_0012ee24;
    fVar16 = *(float *)(param_1 + 0x298);
    *(float *)(param_1 + 0x298) = *(float *)(param_1 + 0x298) - DAT_0012ee24;
    if (*(float *)(param_1 + 0x298) <= fVar4) {
      *(undefined1 *)(param_1 + 0x1c62) = 0;
    }
    FUN_00216980(fVar22 - *(float *)(param_1 + 0x298) / fVar16,param_1 + 0x1e0,
                 *(undefined1 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 0x2dc),
                 *(undefined4 *)(param_1 + 0x2dc),*(undefined4 *)(param_1 + 600));
    FUN_0035e990(param_1 + 0x1e0,*(undefined4 *)(param_1 + 600),*(undefined4 *)(param_1 + 0x2dc),
                 DAT_0012ee1c);
  }
  if ((*(short *)(param_1 + 0x11a) == 0) && (*(char *)(param_1 + 0xb7) != '\0')) {
    if (*(char *)(param_1 + 0x1c4c) == '\x10' || *(char *)(param_1 + 0x1c4c) == '\x17') {
      FUN_00375a18(param_1 + 0x1c56,0,1,1000,0);
    }
    else {
      sVar7 = *(short *)(param_1 + 0x92) -
              (*(short *)(param_1 + 0xbe) + *(short *)(param_1 + 0x1c56));
      if (sVar7 < -2000) {
        sVar7 = (short)DAT_0012ee28;
      }
      else if (2000 < sVar7) {
        sVar7 = 2000;
      }
      *(short *)(param_1 + 0x1c5c) = sVar7;
      uVar9 = DAT_0012ee2c;
      sVar7 = sVar7 + *(short *)(param_1 + 0x1c56);
      *(short *)(param_1 + 0x1c56) = sVar7;
      if (((int)sVar7 < (int)uVar9) || (uVar9 = uVar9 ^ (int)uVar9 >> 0xd, (int)uVar9 < (int)sVar7))
      {
        sVar7 = (short)uVar9;
      }
      *(short *)(param_1 + 0x1c56) = sVar7;
    }
  }
LAB_0012ecc0:
  FUN_0037632c(param_1);
  fVar22 = DAT_0012ee30;
  *(float *)(param_1 + 0x3c) = *pfVar12;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  iVar11 = param_2 + 0x5c78;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar22;
  uVar8 = (ushort)*(byte *)(param_1 + 0xb7);
  bVar15 = uVar8 == 0;
  if (bVar15) {
    uVar8 = *(ushort *)(param_1 + 0x11a);
  }
  if (!bVar15 || uVar8 != 0) {
    FUN_003762a4(param_2,iVar11,param_1 + 0x1c90);
    if ((9 < *(byte *)(param_1 + 0x1c4c)) &&
       ((*(short *)(param_1 + 0x11a) == 0 || ((*(uint *)(param_1 + 0x11c) & 0x400000) == 0)))) {
      FUN_00376168(param_2,iVar11,param_1 + 0x1c90);
    }
    if (*(char *)(param_1 + 0x1c62) != '\0') {
      FUN_00376168(param_2,iVar11,param_1 + 0x1d68);
    }
  }
  uVar10 = DAT_0012ee34;
  if ('\0' < *(char *)(param_1 + 0x1c88)) {
    if ((*(byte *)(param_1 + 0x1cf8) & 4) == 0) {
      FUN_003761f0(param_2,iVar11,param_1 + 0x1ce8);
    }
    else {
      *(byte *)(param_1 + 0x1cf8) = *(byte *)(param_1 + 0x1cf8) & 0xfb;
      *(undefined1 *)(param_1 + 0x1c88) = 0;
      *(undefined4 *)(param_1 + 0x220) = uVar10;
      *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x21c);
      *(float *)(param_1 + 0x228) = fVar4;
      *(undefined1 *)(param_1 + 0x232) = 2;
      *(undefined1 *)(param_1 + 0x1c4c) = 0x13;
      *(undefined4 *)(param_1 + 0x1c50) = DAT_0012ee38;
    }
  }
  if (*(short *)(param_1 + 0x1c) != 0) {
    return;
  }
  if (*(char *)(param_2 + 0x208f) == '\0') {
    uVar9 = *(uint *)(param_1 + 4) & 0xffffff7e;
  }
  else {
    uVar9 = *(uint *)(param_1 + 4) | 0x81;
  }
  *(uint *)(param_1 + 4) = uVar9;
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}
