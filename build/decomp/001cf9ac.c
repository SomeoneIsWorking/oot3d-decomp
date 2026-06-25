// OoT3D decomp @ 001cf9ac  name=FUN_001cf9ac  size=2344

void FUN_001cf9ac(int param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  float *pfVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined4 local_94;
  undefined auStack_90 [4];
  int iStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  
  sVar4 = (short)(int)*(float *)(param_1 + 0x2c);
  *(short *)(param_1 + 0x2282) = *(short *)(param_1 + 0x2280) - sVar4;
  fVar13 = DAT_001cfe40;
  iVar6 = DAT_001cfe34;
  bVar11 = (*(uint *)(param_1 + 0x1710) & 0x28000000) == 0;
  if (bVar11) {
    bVar11 = (*(ushort *)(param_1 + 0x90) & 1) == 0;
  }
  if ((!bVar11) ||
     ((*(short *)(param_2 + 0x104) == 0x49 &&
      (sVar1 = *(short *)(param_1 + 0x2248), (sVar1 == 1 || sVar1 == 2) || sVar1 == 3)))) {
    *(short *)(param_1 + 0x2280) = sVar4;
    return;
  }
  if ((*(char *)(param_2 + 0x5c2d) == '\0') && ((*(uint *)(param_1 + 0x1710) & 0x80000000) != 0)) {
    FUN_0036055c(param_2,param_1,DAT_001cfe20,0);
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0xa0000000;
    uVar5 = FUN_0036c5bc(param_2,0);
    FUN_0033885c(uVar5,0x21);
    FUN_0033f104(0);
    FUN_00359aa0(param_1 + 0x254,param_2,0x89);
    if (*(char *)(param_1 + 2) == '\x02') {
      FUN_0036f59c(param_1,DAT_001cfe24 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
    }
    else {
      FUN_0036aeb4(param_1 + 0x28);
    }
    FUN_0037547c(DAT_001cfe30,0,4,DAT_001cfe2c,DAT_001cfe2c,DAT_001cfe28);
    return;
  }
  if (*(int *)(DAT_001cfe34 + 0x40) == 8) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x110);
    return;
  }
  bVar11 = (*(byte *)(param_1 + 0x172a) & 2) == 0;
  if (bVar11) {
    bVar11 = (*(byte *)(param_1 + 0x2a6) & 0x80) == 0;
  }
  if (!bVar11) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x1708);
  iVar10 = DAT_001cfe38;
  if (iVar7 != DAT_001cfe38) {
    iVar10 = DAT_001cfe3c;
  }
  if (iVar7 == DAT_001cfe38 || iVar7 == iVar10) {
    return;
  }
  if ((*(int *)(DAT_001cfe34 + 0x40) == 7) || (*(char *)(param_1 + 0x2227) != '\0')) {
    FUN_0036df4c(param_1 + 0x28,param_1 + 0x108);
    *(float *)(param_1 + 0x6c) = fVar13;
    *(float *)(param_1 + 0x221c) = fVar13;
    return;
  }
  if (*(char *)(param_1 + 0x227f) != '\0') {
    *(undefined4 *)(param_1 + 100) = DAT_001cfe44;
    *(undefined4 *)(iVar6 + 0x40) = 9;
    return;
  }
  iVar10 = (int)(short)(*(short *)(param_1 + 0x2220) - *(short *)(param_1 + 0xbe));
  FUN_0036055c(param_2,param_1,DAT_001cfe38,1);
  FUN_0036b0fc(param_2,param_1);
  *(undefined4 *)(param_1 + 0x228c) = *(undefined4 *)(param_1 + 0x2494);
  pfVar3 = DAT_001cfe50;
  local_50 = param_2 + 0xa98;
  if (((*(ushort *)(param_1 + 0x90) & 4) == 0) || ((*(uint *)(param_1 + 0x1710) & 0x8000000) != 0))
  {
    if (*(int *)(iVar6 + 0x40) == 9) goto LAB_001d031c;
  }
  else {
    iVar7 = *(int *)(iVar6 + 0x40);
    if (iVar7 != 6) {
      if (iVar7 == 9) goto LAB_001d031c;
      if ((DAT_001cfe48 < *(int *)(iVar6 + 0x3c)) && (*(char *)(param_1 + 0x2227) == '\0')) {
        if (iVar10 < 0) {
          iVar10 = -iVar10;
        }
        if ((iVar10 < 0x2000) && (DAT_001cfe4c < *(int *)(param_1 + 0x221c))) {
          bVar11 = iVar7 == 0xb;
          if (bVar11) {
            bVar11 = (*(uint *)(param_1 + 0x1710) & 0x800) == 0;
          }
          if (bVar11) {
            if (((*(uint *)(iVar6 + 0x8c) & 1) == 0) &&
               (iVar6 = FUN_003679b4(DAT_001cfe54), fVar14 = DAT_001cfe58, iVar6 != 0)) {
              *pfVar3 = fVar13;
              pfVar3[1] = fVar13;
              pfVar3[2] = fVar14;
            }
            fVar13 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
            fVar14 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
            local_68 = *pfVar3 * fVar13 + pfVar3[2] * fVar14 + *(float *)(param_1 + 0x28);
            local_64 = *(float *)(param_1 + 0x2c) + pfVar3[1];
            local_60 = (pfVar3[2] * fVar13 - *pfVar3 * fVar14) + *(float *)(param_1 + 0x30);
            fVar13 = (float)FUN_00358410(local_50,&local_54,&local_58,&local_68);
            local_6c = *(float *)(param_1 + 0x2c);
            iVar6 = FUN_0033eeb8(local_68,local_60,param_2,local_50,&local_6c,&local_5c);
            if ((iVar6 != 0) && (DAT_001cfe5c < (int)(local_6c - fVar13))) {
              FUN_0034b3dc(DAT_001cfe60,param_1,0x69,param_2,DAT_001cfe64);
              FUN_0036055c(param_2,param_1,DAT_001cfe3c,0);
              return;
            }
          }
          iVar6 = (int)(short)(*(short *)(param_1 + 0x2220) - *(short *)(param_1 + 0xbe));
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          if ((iVar6 < 0x1000) && (DAT_001cfe68 < *(int *)(param_1 + 0x221c))) {
            uVar5 = 0x6b;
          }
          else {
            uVar5 = 0x95;
          }
          fVar13 = *(float *)(param_1 + 0x221c);
          iVar6 = *DAT_001cfe6c;
          fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x758),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar14 = fVar14 * DAT_001cfe70;
          uVar8 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar14) << 0x1f |
                  (uint)(fVar13 == fVar14) << 0x1e;
          bVar2 = (byte)(uVar8 >> 0x18);
          if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar13) || NAN(fVar14))) {
            fVar19 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x75e),
                                                (byte)(uVar8 >> 0x15) & 3);
            fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x75c),
                                                (byte)(uVar8 >> 0x15) & 3);
            fVar13 = fVar13 * fVar19 * DAT_001d0218 + fVar14 * DAT_001cfe70;
          }
          else {
            fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x75a),
                                                (byte)(uVar8 >> 0x15) & 3);
            fVar13 = fVar13 * DAT_001cfe70;
          }
          FUN_0034b3dc(fVar13,param_1,uVar5,param_2,DAT_001d021c);
          *(undefined2 *)(param_1 + 0x2238) = 1;
          return;
        }
      }
    }
  }
  if ((!NAN(*(float *)(*(int *)(param_1 + 0x170c) + 0x34)) && !NAN(*(float *)(iVar6 + 0x3c))) ||
     (*(uint *)(param_1 + 0x88) <= DAT_001d0220)) {
LAB_001d031c:
    uVar5 = 0x89;
    if ((*(uint *)(param_1 + 0x29b8) & 0x8000) != 0) {
      uVar5 = 0x22c;
    }
    FUN_00359aa0(param_1 + 0x254,param_2,uVar5);
    return;
  }
  uVar8 = (int)*(short *)(param_1 + 0x2284) + ((int)DAT_001d0224 >> 1);
  bVar12 = DAT_001d0224 <= uVar8;
  bVar11 = uVar8 == DAT_001d0224;
  if (!bVar12 || bVar11) {
    uVar8 = (int)*(short *)(param_1 + 0x2286) + ((int)DAT_001d0224 >> 1);
    bVar12 = DAT_001d0224 <= uVar8;
    bVar11 = uVar8 == DAT_001d0224;
  }
  if (bVar12 && !bVar11) goto LAB_001d031c;
  fVar15 = *(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x28);
  fVar19 = *(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x30);
  fVar17 = SQRT(fVar15 * fVar15 + fVar19 * fVar19);
  uVar8 = in_fpscr & 0xfffffff | (uint)(fVar17 == fVar13) << 0x1e;
  fVar14 = fVar13;
  if (!SUB41(uVar8 >> 0x1e,0)) {
    fVar14 = DAT_001d0228 / fVar17;
  }
  local_64 = *(float *)(param_1 + 0x108) + fVar15 * fVar14;
  local_60 = *(float *)(param_1 + 0x2c);
  local_5c = *(float *)(param_1 + 0x110) + fVar19 * fVar14;
  iVar10 = FUN_00369f9c(local_50,param_1 + 0x28,&local_64,&local_70,&local_54,1,0,0,1,&local_58);
  fVar14 = DAT_001d0230;
  if ((iVar10 == 0) ||
     (DAT_001d022c < (uint)((int)*(short *)(local_54 + 0xc) + ((int)DAT_001d022c >> 1))))
  goto LAB_001d031c;
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 10),(byte)(uVar8 >> 0x15) & 3);
  fVar19 = fVar19 * DAT_001d0230;
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 0xc),(byte)(uVar8 >> 0x15) & 3);
  fVar15 = fVar15 * DAT_001d0230;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(local_54 + 0xe),(byte)(uVar8 >> 0x15) & 3);
  fVar17 = fVar17 * DAT_001d0230;
  uVar5 = FUN_0033ee60(fVar19,fVar15,fVar17,*(undefined4 *)(local_54 + 0x10),param_1 + 0x28);
  pfVar3 = DAT_001d0238;
  bVar11 = *(int *)(iVar6 + 0x40) == 6;
  if (((*DAT_001d0234 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_001d0234), iVar6 != 0)) {
    *pfVar3 = fVar13;
    pfVar3[1] = fVar13;
    pfVar3[2] = fVar13;
  }
  local_7c = *pfVar3;
  local_78 = pfVar3[1];
  local_74 = pfVar3[2];
  iVar6 = 0;
  fVar19 = fVar19 * DAT_001d0240;
  fVar17 = fVar17 * DAT_001d0240;
  local_94 = *DAT_001d023c;
  *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) | 0x400000;
  do {
    local_64 = fVar19;
    local_60 = fVar15;
    local_5c = fVar17;
    fVar13 = (float)FUN_002cfca0((int)*(short *)(auStack_90 + iVar6 * 2 + -4));
    local_88 = *(float *)(param_1 + 0x28) + local_5c * fVar13;
    local_84 = *(undefined4 *)(param_1 + 0x2c);
    fVar13 = (float)FUN_002cfca0((int)*(short *)(auStack_90 + iVar6 * 2 + -4));
    local_80 = *(float *)(param_1 + 0x30) - local_64 * fVar13;
    uVar20 = FUN_00369f9c(local_50,param_1 + 0x28,&local_88,&local_70,&iStack_8c,1,0,0,1,auStack_90)
    ;
    bVar12 = (int)uVar20 != 0;
    if (bVar12) {
      uVar20 = CONCAT44(iStack_8c,local_54);
    }
    iVar10 = (int)((ulonglong)uVar20 >> 0x20);
    if (bVar12 && iVar10 != (int)uVar20) {
      fVar18 = *(float *)(param_1 + 0x28) - local_70;
      fVar13 = *(float *)(param_1 + 0x2c) - local_6c;
      fVar16 = *(float *)(param_1 + 0x30) - local_68;
      fVar13 = SQRT(fVar18 * fVar18 + fVar13 * fVar13 + fVar16 * fVar16);
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 10),(byte)(uVar8 >> 0x15) & 3);
      local_7c = local_7c + fVar16 * fVar14 * fVar13;
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0xc),(byte)(uVar8 >> 0x15) & 3);
      local_78 = local_78 + fVar16 * fVar14;
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0xe),(byte)(uVar8 >> 0x15) & 3);
      local_74 = local_74 + fVar16 * fVar14 * fVar13;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  if (!bVar11) {
    uVar8 = FUN_0035fee8(local_50,local_54,local_58);
    if ((uVar8 & 8) == 0) {
      uVar9 = 0xb5;
      goto LAB_001d0204;
    }
    bVar11 = true;
  }
  uVar9 = 0xad;
LAB_001d0204:
  FUN_0033ebfc(uVar5,param_2,param_1,local_54,local_58,&local_7c,uVar9);
  if (bVar11) {
    FUN_0035976c(param_2,param_1,DAT_001d0354);
    sVar4 = *(short *)(param_1 + 0x2220) + -0x8000;
    *(short *)(param_1 + 0x2220) = sVar4;
    *(short *)(param_1 + 0xbe) = sVar4;
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x200000;
    FUN_003603f8(param_2,param_1,0x9f);
    *(bool *)(param_1 + 0x2237) = bVar11;
    *(undefined2 *)(param_1 + 0x2238) = 0xffff;
  }
  else {
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xfffdffff | 0x2000;
  }
  if (*(char *)(DAT_001d0358 + param_1) == '\0') {
    FUN_0036f59c(param_1,DAT_001d035c);
    if (*(char *)(param_1 + 2) == '\x02') {
      FUN_0036f59c(param_1,DAT_001d0360 + (uint)*(ushort *)(*(int *)(param_1 + 0x170c) + 0xf4));
    }
    else {
      FUN_0036aeb4(param_1 + 0x28);
    }
    *(undefined *)(param_1 + 0x2482) = 4;
  }
  return;
}

