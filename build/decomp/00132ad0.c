// OoT3D decomp @ 00132ad0  name=FUN_00132ad0  size=2072

undefined4 FUN_00132ad0(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  int *piVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  bool bVar19;
  bool bVar20;
  uint in_fpscr;
  float fVar21;
  
  if (*(char *)(param_1 + 0x249e) != '\0') {
    iVar8 = FUN_0035db20(param_2,param_1);
    if (iVar8 != 0) {
      return 1;
    }
    FUN_0035daac(param_2,0xfffffff0);
    *(undefined *)(param_1 + 0x249e) = 0;
    return 1;
  }
  fVar21 = (float)FUN_00367ef0(param_1);
  uVar4 = DAT_001332d0;
  uVar16 = DAT_001332cc;
  fVar7 = DAT_00132e70;
  piVar6 = DAT_00132e6c;
  fVar5 = DAT_00132e68;
  uVar12 = in_fpscr & 0xfffffff |
           (uint)(*(float *)(param_1 + 0x1760) * *(float *)(param_1 + 0x58) <= fVar21 - DAT_00132e38
                 ) << 0x1d;
  if ((SUB41(uVar12 >> 0x1d,0)) || ((*(uint *)(param_1 + 0x29b8) & 0x100) != 0)) {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  bVar19 = !bVar20;
  if (bVar19) {
    bVar19 = (*(ushort *)(param_1 + 0x90) & 0x100) == 0;
  }
  if (((bVar19) && (*(int *)(DAT_00132e3c + 0x28) != 9)) &&
     ((*(uint *)(param_1 + 0x1714) & 0x80000000) == 0)) {
    if ((*(byte *)(param_1 + 0x2291) != 0) &&
       ((1 < *(byte *)(param_1 + 0x2291) || (*(char *)(param_1 + 0x2488) == '\0')))) {
      if (*(char *)(param_1 + 0xbb) == '\x01') {
        FUN_0035d8d8(param_1,param_2,0);
      }
      else if (*(char *)(param_1 + 0xbb) == '\n') {
        FUN_0035d8d8(param_1,param_2,1);
      }
      if (*(char *)(param_1 + 2) == '\x02') {
        FUN_0036f59c(param_1,DAT_00132e78 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
      }
      else {
        FUN_0036aeb4(param_1 + 0x28,DAT_00132e78);
      }
      if (*(byte *)(param_1 + 0x2291) == 3) {
        fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                            (byte)(uVar12 >> 0x15) & 3);
        *(char *)(param_1 + 0x227d) = (char)(int)(DAT_00132e7c / fVar21 + fVar7);
      }
      *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) + *(char *)(param_1 + 0x2290);
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                          (byte)(uVar12 >> 0x15) & 3);
      FUN_0035d304(*(undefined4 *)(param_1 + 0x2294),*(undefined4 *)(param_1 + 0x2298),param_2,
                   param_1,(&stack0xffffffc7)[*(byte *)(param_1 + 0x2291)],
                   (int)*(short *)(param_1 + 0x2292),(int)(fVar5 / fVar21 + fVar7));
      return 1;
    }
    if (*(char *)(param_1 + 0x1579) < '\0') {
      iVar8 = FUN_0035d2d4(param_1);
      if (iVar8 == 0) {
        if (-1 < *(char *)(param_1 + 0x2488)) {
          bVar20 = *(int *)(param_1 + 0x1708) == DAT_001332d8;
          uVar12 = *(uint *)(param_1 + 0x1710);
          bVar19 = (uVar12 & 0x8000000) != 0;
          if (bVar19) {
            uVar12 = (uint)*(byte *)(param_1 + 0x1a7);
          }
          if (!bVar19 || uVar12 == 1) {
            FUN_0036055c(param_2,param_1,DAT_001332dc,0);
          }
          *(bool *)(param_1 + 0x2237) = bVar20;
          if (bVar20) {
            iVar8 = FUN_0035d260(param_1);
            uVar16 = *(undefined4 *)(DAT_001332ec + iVar8 * 4);
            iVar8 = param_1 + 0x254;
          }
          else {
            FUN_0035d27c(param_1,DAT_001332e0);
            if (*(int *)(param_1 + 0x225c) < 0x3f000000) {
              iVar10 = FUN_0035d260(param_1);
              iVar8 = DAT_001332e4;
            }
            else {
              iVar10 = FUN_0035d260(param_1);
              iVar8 = DAT_001332e8;
            }
            uVar16 = *(undefined4 *)(iVar8 + iVar10 * 4);
            iVar8 = param_1 + 0x1764;
          }
          FUN_003604f0(iVar8,param_2,uVar16);
        }
        uVar12 = *(uint *)(param_1 + 0x1710);
        if ((DAT_001332f0 & uVar12) == 0) {
          bVar20 = (uVar12 & 0x8000000) != 0;
          *(undefined4 *)(param_1 + 0x221c) = DAT_001332f4;
          if (bVar20) {
            uVar12 = (uint)*(byte *)(param_1 + 0x1a7);
          }
          if (bVar20 && uVar12 != 1) {
            *(undefined4 *)(param_1 + 0x221c) = DAT_001332f8;
          }
          *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
        }
      }
      cVar1 = *(char *)(*(int *)(param_1 + 0x15a4) + 4);
      bVar20 = cVar1 == '\x01';
      if (bVar20) {
        cVar1 = *(char *)(param_1 + 0x1a6);
      }
      if (bVar20 && cVar1 == '\x01') {
        FUN_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                     *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0xee,0,0,0,1,1);
        FUN_0035d190(param_2,1);
        FUN_00367c7c(param_2,DAT_001332fc,0);
      }
      return 0;
    }
    uVar15 = (uint)*(char *)(param_1 + 0x2488);
    if (*(char *)(param_1 + 0x249f) != '\0') {
      return 0;
    }
    uVar13 = 0;
    uVar14 = uVar15;
    if ((int)uVar15 < 1) {
      uVar13 = *(uint *)(param_1 + 0x1710);
      uVar14 = uVar13 & 0x4000000;
    }
    if (uVar14 == 0) {
      uVar13 = (uint)*(byte *)(param_1 + 0x12bc);
    }
    if (uVar14 != 0 || uVar13 != 0) {
      return 0;
    }
    bVar11 = *(byte *)(param_1 + 0x1378);
    bVar20 = (bVar11 & 2) == 0;
    if (bVar20) {
      bVar11 = *(byte *)(param_1 + 0x13f8) & 2;
      bVar20 = (*(byte *)(param_1 + 0x13f8) & 2) == 0;
    }
    if (!bVar20) {
      bVar11 = 1;
    }
    if (bVar11 != 0) {
      return 0;
    }
    uVar14 = 0;
    if (*(char *)(param_1 + 2) == '\x02') {
      bVar11 = *(byte *)(param_1 + 0x1478);
      bVar20 = (bVar11 & 2) == 0;
      if (bVar20) {
        bVar11 = *(byte *)(param_1 + 0x14f8);
      }
      uVar14 = (uint)bVar11;
      if (bVar20) {
        uVar14 = uVar14 & 2;
        bVar20 = (bVar11 & 2) == 0;
      }
      if (!bVar20) {
        uVar14 = 1;
      }
      uVar14 = uVar14 | (*(byte *)(param_1 + 0x15f8) & 2) >> 1;
    }
    if (uVar14 != 0) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x1321) & 2) == 0) {
      if (uVar15 != 0) {
        return 0;
      }
      iVar8 = *(int *)(DAT_00132e3c + 0x28) + -2;
      uVar17 = 0;
      if ((iVar8 < 0) || (1 < iVar8)) {
        iVar8 = -1;
      }
      if ((*(int *)(param_1 + 0x1708) == DAT_00133300) && (*(int *)(param_1 + 0x2498) != 0)) {
        iVar8 = *(int *)(param_1 + 0x2498) + -2;
        if ((iVar8 < 0) || (1 < iVar8)) {
          iVar8 = -1;
        }
        uVar17 = 2;
        *(undefined *)(param_1 + 0x2489) = 0xff;
      }
      if ((*(int *)(param_1 + 0x78) == 0) ||
         (iVar10 = FUN_0035d178(param_2 + 0xa98,*(int *)(param_1 + 0x78),
                                *(undefined *)(param_1 + 0x80)), iVar10 == 0)) {
        if (iVar8 < 0) {
          return 0;
        }
        iVar10 = FUN_0035d178(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x7c),
                              *(undefined *)(param_1 + 0x81));
        if ((((iVar10 == 0) || (*(byte *)(param_1 + 0x2489) < *(byte *)(DAT_00133304 + iVar8))) &&
            (*(char *)(param_1 + 0x1a4) == '\x01')) &&
           (*(byte *)(param_1 + 0x2489) < *(byte *)(DAT_00133304 + iVar8))) {
          return 0;
        }
      }
      *(undefined *)(param_1 + 0x2489) = 0;
      *(undefined *)(param_1 + 0xb8) = 4;
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                          (byte)(uVar12 >> 0x15) & 3);
      FUN_0035d304(uVar4,uVar16,param_2,param_1,uVar17,(int)*(short *)(param_1 + 0xbe),
                   (int)(fVar5 / fVar21 + fVar7));
      return 1;
    }
    iVar8 = *(int *)(param_1 + 0x1318);
    if ((*(uint *)(iVar8 + 4) & 0x1000000) != 0) {
      FUN_0036f59c(param_1,DAT_001332d4);
    }
    if ((*(uint *)(param_1 + 0x1710) & 0x8000000) == 0) {
      cVar1 = *(char *)(param_1 + 0xbb);
      if (cVar1 == '\x02') {
        uVar17 = 3;
        goto LAB_00133180;
      }
      if (cVar1 == '\x03' || cVar1 == '\a') {
        uVar17 = 4;
        goto LAB_00133180;
      }
      if (cVar1 == '\x04') {
        uVar17 = 1;
        goto LAB_00133180;
      }
      if (cVar1 == '\x01') {
        FUN_0035d8d8(param_1,param_2,0);
      }
      else if (cVar1 == '\n') {
        FUN_0035d8d8(param_1,param_2,1);
      }
      if (*(char *)(param_1 + 2) == '\x02') {
        FUN_0036f59c(param_1,(uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4) + DAT_00132e78);
      }
      else {
        FUN_0036aeb4(param_1 + 0x28,DAT_00132e78);
      }
    }
    uVar17 = 0;
LAB_00133180:
    fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),(byte)(uVar12 >> 0x15) & 3)
    ;
    uVar9 = FUN_0036e800(iVar8,param_1);
    FUN_0035d304(uVar4,uVar16,param_2,param_1,uVar17,uVar9,(int)(fVar5 / fVar21 + fVar7));
    return 1;
  }
  if (*(char *)(param_1 + 2) == '\x02') {
    FUN_0036f59c(param_1,(uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4) + DAT_00132e40);
  }
  else {
    FUN_0036aeb4(param_1 + 0x28);
  }
  if (bVar20) {
    FUN_0036f4f0(param_2);
    FUN_0035da3c(param_2);
    goto LAB_00132c74;
  }
  uVar12 = param_2 + 0x4c00;
  sVar2 = *(short *)(param_2 + 0x104);
  if (sVar2 == 3) {
    if (*(char *)(param_2 + 0x4c30) == '\x0f') {
LAB_00132c28:
      puVar18 = DAT_00132e44;
      if (sVar2 == 3) {
        puVar18 = DAT_00132e48;
      }
      FUN_0036c494(param_2,0,DAT_00132e4c);
      iVar8 = DAT_00132e54;
      puVar3 = DAT_00132e50;
      *DAT_00132e50 = *puVar18;
      puVar3[1] = puVar18[1];
      puVar3[2] = puVar18[2];
      *(undefined2 *)(iVar8 + 0xfc) = *(undefined2 *)(puVar18 + 3);
    }
  }
  else {
    if (sVar2 == 7) {
      uVar12 = (uint)*(byte *)(param_2 + 0x4c30);
    }
    if (sVar2 == 7 && uVar12 == 10) goto LAB_00132c28;
  }
  FUN_0036ebdc(param_2);
LAB_00132c74:
  if (*(char *)(param_1 + 2) == '\x02') {
    FUN_0036f59c(param_1,DAT_00132e58 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
  }
  else {
    FUN_0036aeb4(param_1 + 0x28);
  }
  uVar4 = DAT_00132e60;
  uVar16 = DAT_00132e5c;
  *(undefined *)(param_2 + 0x5c01) = 1;
  FUN_0037547c(DAT_00132e64,0,4,uVar4,uVar4,uVar16);
  return 1;
}

