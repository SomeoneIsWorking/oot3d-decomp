// OoT3D decomp @ 0047bfec  name=FUN_0047bfec  size=2000

void FUN_0047bfec(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  uint *puVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined4 extraout_r1;
  undefined4 uVar13;
  undefined4 extraout_r1_00;
  int iVar14;
  uint uVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  float *local_60;

  iVar4 = DAT_0047c410;
  *(undefined4 *)(*(int *)(param_1 + 0x2270) + 0x170) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x2274) + 0x170) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x2278) + 0x170) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x227c) + 0x170) = 0;
  pfVar6 = DAT_0047c440;
  fVar17 = DAT_0047c43c;
  iVar12 = DAT_0047c438;
  fVar5 = DAT_0047c42c;
  fVar28 = DAT_0047c428;
  iVar14 = DAT_0047c424;
  fVar21 = DAT_0047c420;
  fVar19 = DAT_0047c41c;
  cVar10 = *(char *)(iVar4 + 0x3b);
  iVar11 = (int)cVar10;
  if (iVar11 != 0) {
    fVar29 = DAT_0047c414;
    if (*(int *)(iVar4 + -0x14fc) != 0) {
      fVar29 = DAT_0047c418;
    }
    iVar9 = iVar11 + -0x28;
    uVar15 = 0xff;
    if (iVar9 < 0) {
      iVar11 = iVar11 + 1;
      *(char *)(DAT_0047c424 + 0x53b) = (char)iVar11;
      iVar12 = DAT_0047c438;
      if (iVar11 < 0) {
        iVar11 = -iVar11;
      }
      fVar17 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0047c430 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(int *)(DAT_0047c438 + 0x94) = (int)(DAT_0047c434 / fVar22 + fVar28);
      *(float *)(iVar12 + 0x98) = fVar19;
      fVar22 = fVar17 * fVar21;
    }
    else {
      fVar22 = fVar19;
      if (*(int *)(DAT_0047c438 + 0x94) == 0) {
        fVar18 = *(float *)(DAT_0047c438 + 0x98);
        uVar1 = in_fpscr & 0xfffffff;
        uVar2 = uVar1 | (uint)(fVar18 < DAT_0047c42c) << 0x1f |
                (uint)(fVar18 == DAT_0047c42c) << 0x1e;
        in_fpscr = uVar2 | (uint)(NAN(fVar18) || NAN(DAT_0047c42c)) << 0x1c;
        bVar3 = (byte)(uVar2 >> 0x18);
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          if (((*(uint *)(DAT_0047c438 + 0x70) & 1) == 0) &&
             (iVar11 = FUN_003679b4(DAT_0047c444), pfVar7 = DAT_0047c44c, fVar21 = DAT_0047c448,
             iVar11 != 0)) {
            *DAT_0047c44c = fVar5;
            pfVar7[1] = fVar21;
            pfVar7[2] = fVar5;
          }
          if (((*(uint *)(iVar12 + 0x6c) & 1) == 0) &&
             (iVar11 = FUN_003679b4(DAT_0047c450), pfVar7 = DAT_0047c458, fVar21 = DAT_0047c454,
             iVar11 != 0)) {
            *DAT_0047c458 = fVar5;
            pfVar7[1] = fVar21;
            pfVar7[2] = fVar5;
          }
          pfVar7 = DAT_0047c45c;
          local_60 = DAT_0047c45c;
          fVar22 = *(float *)(iVar12 + 0x98);
          fVar17 = *pfVar6 - *DAT_0047c45c;
          fVar18 = pfVar6[1] - DAT_0047c45c[1];
          fVar29 = pfVar6[2] - DAT_0047c45c[2];
          fVar21 = SQRT(fVar17 * fVar17 + fVar18 * fVar18 + fVar29 * fVar29);
          if ((int)fVar21 < DAT_0047c460) {
            *(float *)(iVar12 + 0x98) = fVar5;
            fVar19 = (float)FUN_0036df4c(pfVar6,pfVar7);
          }
          else {
            fVar20 = (fVar19 / fVar22) * fVar21;
            fVar19 = DAT_0047c464 / fVar20;
            if ((int)fVar19 < DAT_0047c468) {
              fVar19 = DAT_0047c46c;
            }
            FUN_003705a0(fVar5,fVar19,DAT_0047c470);
            fVar19 = ((*(float *)(iVar12 + 0x98) / fVar22) * fVar21) / fVar21;
            *pfVar6 = *pfVar7 + fVar17 * fVar19;
            pfVar6[1] = pfVar7[1] + fVar18 * fVar19;
            fVar20 = fVar20 * fVar28;
            pfVar6[2] = pfVar7[2] + fVar29 * fVar19;
            fVar19 = SQRT(fVar20 * fVar20 - (fVar21 - fVar20) * (fVar21 - fVar20));
          }
                    /* WARNING: Subroutine does not return */
          FUN_003759d0(fVar19);
        }
        if (0 < iVar9) {
          fVar22 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
          fVar22 = DAT_0047c41c - fVar22 * DAT_0047c47c;
          fVar18 = (float)VectorSignedToFloat(iVar11 + -0x29,(byte)(in_fpscr >> 0x15) & 3);
          uVar15 = uVar1 | (uint)(fVar22 < DAT_0047c42c) << 0x1f |
                   (uint)(fVar22 == DAT_0047c42c) << 0x1e;
          in_fpscr = uVar15 | (uint)(NAN(fVar22) || NAN(DAT_0047c42c)) << 0x1c;
          bVar3 = (byte)(uVar15 >> 0x18);
          if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar26 = *(float *)(param_1 + 0x1bc) - fVar29;
            fVar27 = *(float *)(param_1 + 0x1c0);
            fVar23 = *DAT_0047c440 - *(float *)(param_1 + 0x1b8);
            fVar25 = DAT_0047c440[2] - fVar27;
            fVar24 = DAT_0047c440[1] - fVar26;
            fVar20 = SQRT(fVar23 * fVar23 + fVar24 * fVar24 + fVar25 * fVar25);
            fVar20 = ((fVar22 / (DAT_0047c41c - fVar18 * DAT_0047c47c)) * fVar20) / fVar20;
            *DAT_0047c440 = *(float *)(param_1 + 0x1b8) + fVar23 * fVar20;
            pfVar6[1] = fVar26 + fVar24 * fVar20;
            pfVar6[2] = fVar27 + fVar25 * fVar20;
          }
          uVar15 = iVar9 * -0x1e + 0xff;
          if (-1 < (int)uVar15) {
            cVar10 = cVar10 + '\x01';
          }
          fVar22 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
          if (-1 < (int)uVar15) {
            *(char *)(iVar14 + 0x53b) = cVar10;
          }
          else {
            *(undefined4 *)(iVar4 + -0x668) = 0;
            uVar15 = 0;
            *(undefined1 *)(iVar14 + 0x53b) = 0;
          }
          fVar22 = fVar19 + fVar22 * fVar17;
        }
      }
      else {
        *(int *)(DAT_0047c438 + 0x94) = *(int *)(DAT_0047c438 + 0x94) + -1;
      }
    }
    cVar10 = *(char *)(DAT_0047c484 + *(short *)(iVar4 + 0x38) * 4);
    fVar17 = fVar22 * DAT_0047c480;
    iVar11 = FUN_0037571c(param_1);
    iVar4 = DAT_0047c488;
    bVar16 = iVar11 == 0;
    if (bVar16) {
      iVar11 = (int)*(short *)(param_1 + 0x104);
    }
    if ((bVar16 && iVar11 == cVar10) &&
       ((uint)*(byte *)(iVar14 + 0x53a) == (int)*(char *)(DAT_0047c89c + param_1))) {
      local_6c = *(undefined4 *)(DAT_0047c488 + 0x128);
      local_64 = *(undefined4 *)(DAT_0047c488 + 0x130);
      local_68 = *(float *)(DAT_0047c488 + 300) + fVar29;
      local_78 = fVar22 * fVar21 * DAT_0047c8a0;
      local_74 = local_78;
      local_70 = local_78;
      FUN_003534b8(&local_88,0xff,0xff,200,uVar15 & 0xff,100,200,0);
      fVar21 = DAT_0047c8ac;
      iVar11 = *(int *)(param_1 + 0x2270);
      *(undefined4 *)(iVar11 + 0x3c) = local_6c;
      *(float *)(iVar11 + 0x40) = local_68;
      *(undefined4 *)(iVar11 + 0x44) = local_64;
      iVar11 = *(int *)(param_1 + 0x2270);
      *(float *)(iVar11 + 0x48) = local_78;
      *(float *)(iVar11 + 0x4c) = local_74;
      *(float *)(iVar11 + 0x50) = local_70;
      iVar11 = *(int *)(param_1 + 0x2270);
      *(undefined4 *)(iVar11 + 0xf0) = local_88;
      *(undefined4 *)(iVar11 + 0xf4) = uStack_84;
      *(undefined4 *)(iVar11 + 0xf8) = uStack_80;
      *(float *)(iVar11 + 0xfc) = local_7c;
      *(undefined4 *)(*(int *)(param_1 + 0x2270) + 0x170) = 1;
      iVar11 = *(int *)(param_1 + 0x2274);
      *(undefined4 *)(iVar11 + 0x3c) = local_6c;
      *(float *)(iVar11 + 0x40) = local_68;
      *(undefined4 *)(iVar11 + 0x44) = local_64;
      iVar11 = *(int *)(param_1 + 0x2274);
      *(float *)(iVar11 + 0x48) = local_78;
      *(float *)(iVar11 + 0x4c) = local_74;
      *(float *)(iVar11 + 0x50) = local_70;
      iVar11 = *(int *)(param_1 + 0x2274);
      *(undefined4 *)(iVar11 + 0xf0) = local_88;
      *(undefined4 *)(iVar11 + 0xf4) = uStack_84;
      *(undefined4 *)(iVar11 + 0xf8) = uStack_80;
      *(float *)(iVar11 + 0xfc) = local_7c;
      *(undefined4 *)(*(int *)(param_1 + 0x2274) + 0x170) = 1;
      iVar11 = *(int *)(param_1 + 0x2278);
      *(undefined4 *)(iVar11 + 0x3c) = local_6c;
      *(float *)(iVar11 + 0x40) = local_68;
      *(undefined4 *)(iVar11 + 0x44) = local_64;
      iVar11 = *(int *)(param_1 + 0x2278);
      *(float *)(iVar11 + 0x48) = local_78;
      *(float *)(iVar11 + 0x4c) = local_74;
      *(float *)(iVar11 + 0x50) = local_70;
      iVar11 = *(int *)(param_1 + 0x2278);
      *(undefined4 *)(iVar11 + 0xf0) = local_88;
      *(undefined4 *)(iVar11 + 0xf4) = uStack_84;
      *(undefined4 *)(iVar11 + 0xf8) = uStack_80;
      *(float *)(iVar11 + 0xfc) = local_7c;
      *(undefined4 *)(*(int *)(param_1 + 0x2278) + 0x170) = 1;
      iVar11 = *(int *)(param_1 + 0x227c);
      *(undefined4 *)(iVar11 + 0x3c) = local_6c;
      *(float *)(iVar11 + 0x40) = local_68;
      *(undefined4 *)(iVar11 + 0x44) = local_64;
      iVar11 = *(int *)(param_1 + 0x227c);
      *(float *)(iVar11 + 0x48) = local_78;
      *(float *)(iVar11 + 0x4c) = local_74;
      *(float *)(iVar11 + 0x50) = local_70;
      iVar11 = *(int *)(param_1 + 0x227c);
      *(undefined4 *)(iVar11 + 0xf0) = local_88;
      *(undefined4 *)(iVar11 + 0xf4) = uStack_84;
      *(undefined4 *)(iVar11 + 0xf8) = uStack_80;
      *(float *)(iVar11 + 0xfc) = local_7c;
      *(undefined4 *)(*(int *)(param_1 + 0x227c) + 0x170) = 1;
      fVar18 = DAT_0047c8b4;
      fVar22 = DAT_0047c8b0;
      iVar14 = *(int *)(DAT_0047c8a4 + param_1);
      iVar11 = iVar14 * DAT_0047c8a8;
      fVar20 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0047c430 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (iVar11 < 1) {
        fVar20 = fVar20 * fVar23 * fVar21 - fVar28;
      }
      else {
        fVar20 = fVar28 + fVar20 * fVar23 * fVar21;
      }
      fVar20 = (float)VectorSignedToFloat(~((int)fVar20 & 0xffffU),(byte)(in_fpscr >> 0x15) & 3);
      FUN_003332b4(fVar5,fVar5,fVar20 * DAT_0047c8b0 * DAT_0047c8b4,&local_b8);
      iVar11 = *(int *)(param_1 + 0x2270);
      *(undefined4 *)(iVar11 + 0x54) = local_b8;
      *(undefined4 *)(iVar11 + 0x58) = uStack_b4;
      *(undefined4 *)(iVar11 + 0x5c) = uStack_b0;
      *(undefined4 *)(iVar11 + 0x60) = uStack_ac;
      *(undefined4 *)(iVar11 + 100) = uStack_a8;
      *(undefined4 *)(iVar11 + 0x68) = uStack_a4;
      *(undefined4 *)(iVar11 + 0x6c) = local_a0;
      *(undefined4 *)(iVar11 + 0x70) = local_9c;
      *(undefined4 *)(iVar11 + 0x74) = uStack_98;
      *(undefined4 *)(iVar11 + 0x78) = uStack_94;
      *(undefined4 *)(iVar11 + 0x7c) = uStack_90;
      *(undefined4 *)(iVar11 + 0x80) = uStack_8c;
      iVar11 = *(int *)(param_1 + 0x2278);
      *(undefined4 *)(iVar11 + 0x54) = local_b8;
      *(undefined4 *)(iVar11 + 0x58) = uStack_b4;
      *(undefined4 *)(iVar11 + 0x5c) = uStack_b0;
      *(undefined4 *)(iVar11 + 0x60) = uStack_ac;
      *(undefined4 *)(iVar11 + 100) = uStack_a8;
      *(undefined4 *)(iVar11 + 0x68) = uStack_a4;
      *(undefined4 *)(iVar11 + 0x6c) = local_a0;
      *(undefined4 *)(iVar11 + 0x70) = local_9c;
      *(undefined4 *)(iVar11 + 0x74) = uStack_98;
      *(undefined4 *)(iVar11 + 0x78) = uStack_94;
      *(undefined4 *)(iVar11 + 0x7c) = uStack_90;
      *(undefined4 *)(iVar11 + 0x80) = uStack_8c;
      iVar14 = iVar14 * 0x4b0;
      fVar20 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0047c430 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (iVar14 < 1) {
        fVar28 = fVar20 * fVar23 * fVar21 - fVar28;
      }
      else {
        fVar28 = fVar28 + fVar20 * fVar23 * fVar21;
      }
      fVar21 = (float)VectorSignedToFloat(~((int)fVar28 & 0xffffU),(byte)(in_fpscr >> 0x15) & 3);
      FUN_003332b4(fVar5,fVar5,fVar21 * fVar22 * fVar18,&local_b8);
      iVar11 = *(int *)(param_1 + 0x2274);
      *(undefined4 *)(iVar11 + 0x54) = local_b8;
      *(undefined4 *)(iVar11 + 0x58) = uStack_b4;
      *(undefined4 *)(iVar11 + 0x5c) = uStack_b0;
      *(undefined4 *)(iVar11 + 0x60) = uStack_ac;
      *(undefined4 *)(iVar11 + 100) = uStack_a8;
      *(undefined4 *)(iVar11 + 0x68) = uStack_a4;
      *(undefined4 *)(iVar11 + 0x6c) = local_a0;
      *(undefined4 *)(iVar11 + 0x70) = local_9c;
      *(undefined4 *)(iVar11 + 0x74) = uStack_98;
      *(undefined4 *)(iVar11 + 0x78) = uStack_94;
      *(undefined4 *)(iVar11 + 0x7c) = uStack_90;
      *(undefined4 *)(iVar11 + 0x80) = uStack_8c;
      iVar11 = *(int *)(param_1 + 0x227c);
      *(undefined4 *)(iVar11 + 0x54) = local_b8;
      *(undefined4 *)(iVar11 + 0x58) = uStack_b4;
      *(undefined4 *)(iVar11 + 0x5c) = uStack_b0;
      *(undefined4 *)(iVar11 + 0x60) = uStack_ac;
      *(undefined4 *)(iVar11 + 100) = uStack_a8;
      *(undefined4 *)(iVar11 + 0x68) = uStack_a4;
      *(undefined4 *)(iVar11 + 0x6c) = local_a0;
      iVar14 = DAT_0047c8bc;
      *(undefined4 *)(iVar11 + 0x70) = local_9c;
      *(undefined4 *)(iVar11 + 0x74) = uStack_98;
      *(undefined4 *)(iVar11 + 0x78) = uStack_94;
      *(undefined4 *)(iVar11 + 0x7c) = uStack_90;
      *(undefined4 *)(iVar11 + 0x80) = uStack_8c;
      puVar8 = DAT_0047c8b8;
      iVar11 = DAT_0047c438;
      if ((*(char *)(param_1 + 0x208f) != '\0') && (*(char *)(DAT_0047c8c0 + param_1) == '\0')) {
        fVar21 = local_7c * *(float *)(DAT_0047c438 + 0x7c);
        iVar12 = *(int *)(param_1 + 0x2270);
        *(undefined4 *)(iVar12 + 0xf0) = local_88;
        *(undefined4 *)(iVar12 + 0xf4) = uStack_84;
        *(undefined4 *)(iVar12 + 0xf8) = uStack_80;
        *(float *)(iVar12 + 0xfc) = fVar21;
        iVar12 = *(int *)(param_1 + 0x2274);
        *(undefined4 *)(iVar12 + 0xf0) = local_88;
        *(undefined4 *)(iVar12 + 0xf4) = uStack_84;
        *(undefined4 *)(iVar12 + 0xf8) = uStack_80;
        *(float *)(iVar12 + 0xfc) = fVar21;
        local_7c = (fVar19 - *(float *)(iVar11 + 0x7c)) * local_7c;
        iVar11 = *(int *)(param_1 + 0x2278);
        *(undefined4 *)(iVar11 + 0xf0) = local_88;
        *(undefined4 *)(iVar11 + 0xf4) = uStack_84;
        *(undefined4 *)(iVar11 + 0xf8) = uStack_80;
        *(float *)(iVar11 + 0xfc) = local_7c;
        iVar11 = *(int *)(param_1 + 0x227c);
        *(undefined4 *)(iVar11 + 0xf0) = local_88;
        *(undefined4 *)(iVar11 + 0xf4) = uStack_84;
        *(undefined4 *)(iVar11 + 0xf8) = uStack_80;
        *(float *)(iVar11 + 0xfc) = local_7c;
        FUN_00371eac(*(undefined4 *)(param_1 + 0x2278),0);
        FUN_00371eac(*(undefined4 *)(param_1 + 0x227c),0);
        uVar13 = extraout_r1;
        if ((*puVar8 & 1) == 0) {
          uVar30 = FUN_003679b4(puVar8);
          uVar13 = (int)((ulonglong)uVar30 >> 0x20);
          if ((int)uVar30 != 0) {
            FUN_0036788c(iVar14 + -0x180);
            uVar13 = DAT_0047c8c8;
          }
        }
        FUN_0032d5dc(iVar14,uVar13);
      }
      FUN_00371eac(*(undefined4 *)(param_1 + 0x2270),0);
      FUN_00371eac(*(undefined4 *)(param_1 + 0x2274),0);
      uVar13 = extraout_r1_00;
      if ((*puVar8 & 1) == 0) {
        uVar30 = FUN_003679b4(DAT_0047c8b8);
        uVar13 = (int)((ulonglong)uVar30 >> 0x20);
        if ((int)uVar30 != 0) {
          FUN_0036788c(DAT_0047c8cc);
          uVar13 = DAT_0047c8c8;
        }
      }
      FUN_0032d5b8(iVar14,uVar13);
    }
    FUN_003591e4(*(undefined4 *)(iVar4 + 0x128),*(float *)(iVar4 + 300) + fVar29,
                 *(undefined4 *)(iVar4 + 0x130),DAT_0047c904,0xff,0xff,0xff,(int)(short)(int)fVar17,
                 0);
  }
  return;
}
