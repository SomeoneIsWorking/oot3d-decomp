// OoT3D decomp @ 004bf618  name=FUN_004bf618  size=2480

void FUN_004bf618(float param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_s18;
  undefined8 uVar23;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  int local_fc;
  float afStack_f8 [24];
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [48];
  undefined4 local_38;
  
  fVar17 = DAT_004bfa18;
  if ((*(uint *)((int)param_1 + 0x1714) & 0x20000000) != 0) {
    return;
  }
  uVar7 = param_2;
  if ((*(char *)((int)param_1 + 0x12bc) == '\0') &&
     (FUN_003518cc(param_1), uVar7 = DAT_004bfa1c,
     (int)DAT_004bfa1c <= *(int *)((int)param_1 + 0xf4))) {
    local_38 = 1;
  }
  else {
    local_38 = 0;
  }
  fVar14 = DAT_004bfa28;
  iVar5 = DAT_004bfa24;
  if (0 < *(char *)(DAT_004bfa20 + (int)param_1)) {
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004bfa2c + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    iVar11 = (int)(DAT_004bfa30 / fVar13 + DAT_004bfa34) -
             (int)*(char *)(DAT_004bfa20 + (int)param_1);
    uVar23 = FUN_003695f8();
    uVar7 = (uint)((ulonglong)uVar23 >> 0x20);
    if ((int)uVar23 == 0) {
      if (iVar11 < 8) {
        iVar11 = 8;
      }
      else if (0x28 < iVar11) {
        iVar11 = 0x28;
      }
      *(char *)((int)param_1 + 0x227b) = *(char *)((int)param_1 + 0x227b) + (char)iVar11;
    }
    if ((*(uint *)((int)param_1 + 0x1710) & 0x20000000) == 0) {
      lVar2 = (ulonglong)*(byte *)((int)param_1 + 0x227b) * 0x4000 * (ulonglong)DAT_004bfa38;
      fVar13 = (float)FUN_00338f68((uint)((int)((ulonglong)lVar2 >> 0x20) << 9) >> 0x10,(int)lVar2);
      pfVar8 = DAT_004bfa3c;
      fVar13 = fVar13 * *(float *)(iVar5 + 0x114) * DAT_004bfa40;
      *DAT_004bfa3c = fVar13;
      pfVar8[3] = fVar14 - fVar13;
      iVar11 = *(int *)((int)param_1 + 0x178);
      *(undefined1 *)(iVar11 + 0x1b7) = *(undefined1 *)(iVar11 + 0x1b6);
      *(undefined1 *)(iVar11 + 0x1b6) = 0;
      FUN_00358964(*(undefined4 *)((int)param_1 + 0x178),5,pfVar8);
      FUN_003589cc(*(undefined4 *)((int)param_1 + 0x178),5);
      bVar1 = *(byte *)(*(int *)((int)param_1 + 0x178) + 0x1b7);
      uVar7 = (uint)bVar1;
      *(byte *)(*(int *)((int)param_1 + 0x178) + 0x1b6) = bVar1;
    }
  }
  fVar13 = DAT_004bfa48;
  iVar11 = DAT_004bfa44;
  if (*(char *)((int)param_1 + 0x1749) == '\0') {
    bVar12 = true;
    if ((*(uint *)((int)param_1 + 0x1714) & 0x40000) != 0) {
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(DAT_004bfa48 <= *(float *)((int)param_1 + 0xf4)) << 0x1d;
      bVar12 = SUB41(in_fpscr >> 0x1d,0);
    }
    if (!bVar12) {
      fVar17 = DAT_004bfa58;
    }
    goto LAB_004bf8b8;
  }
  FUN_004c2c18(param_2 + 0x5bb4,(int)param_1 + 0x3c,(int)param_1 + 0x1214);
  uVar7 = extraout_r1;
  if (*(int *)(iVar11 + 4) == 0) {
    if (*(char *)((int)param_1 + 0x1749) == '\x02') {
      uVar23 = FUN_0036c5bc(param_2,0);
      uVar7 = (uint)((ulonglong)uVar23 >> 0x20);
      if (*(short *)((int)uVar23 + 0x18a) == 2) {
        iVar4 = FUN_0036c5bc(param_2,0);
        if ((*(short *)(iVar4 + 0x18c) != 6) &&
           (iVar4 = FUN_0036c5bc(param_2,0), *(short *)(iVar4 + 0x18c) != 7)) {
          uVar23 = FUN_0036c5bc(param_2,0);
          uVar7 = (uint)((ulonglong)uVar23 >> 0x20);
          if (*(short *)((int)uVar23 + 0x18c) != 9) goto LAB_004bf874;
        }
        uVar23 = FUN_0036c5bc(param_2,0);
        uVar7 = (uint)((ulonglong)uVar23 >> 0x20);
        if (*(short *)((int)uVar23 + 0x2c) < 2) {
          uVar23 = FUN_0036c5bc(param_2,0);
          uVar7 = (uint)((ulonglong)uVar23 >> 0x20);
          if (*(short *)((int)uVar23 + 0x1a6) == 1) {
            unaff_s18 = DAT_004bfa4c;
          }
        }
        goto LAB_004bf878;
      }
    }
LAB_004bf874:
    unaff_s18 = *(float *)(iVar5 + 0x11c);
  }
  else {
    unaff_s18 = *(float *)(iVar5 + 0x118);
  }
LAB_004bf878:
  in_fpscr = in_fpscr & 0xfffffff | (uint)(unaff_s18 <= *(float *)((int)param_1 + 0x121c)) << 0x1d;
  if ((!SUB41(in_fpscr >> 0x1d,0)) &&
     (uVar7 = DAT_004bfa50, *(uint *)((int)param_1 + 0x1708) != DAT_004bfa50)) {
    fVar17 = DAT_004bfa54;
  }
LAB_004bf8b8:
  if ((*(uint *)((int)param_1 + 0x1714) & 0x4000000) != 0) {
    fVar15 = (float)VectorUnsignedToFloat
                              (DAT_004bfa60 & *(int *)(DAT_004bfa5c + param_2) * 600,
                               (byte)(in_fpscr >> 0x15) & 3);
    fVar15 = fVar15 * DAT_004bfa64;
    fVar16 = (float)VectorUnsignedToFloat
                              (DAT_004bfa60 & *(int *)(DAT_004bfa5c + param_2) * 1000,
                               (byte)(in_fpscr >> 0x15) & 3);
    fVar16 = fVar16 * DAT_004bfa64;
    if (*(int *)((int)param_1 + 0x2918) == 0) {
      if (((*DAT_004bfa68 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_004bfa68), iVar5 != 0)) {
        FUN_0036788c(DAT_004bfa6c);
      }
      piVar10 = *(int **)(DAT_004bfa6c + 0x17c);
      iVar4 = (**(code **)(*(int *)*DAT_004bfab0 + 0xc))
                        ((int *)*DAT_004bfab0,0x234,s_d__home_queen_dailyBuild_game_us_004bfa78,
                         DAT_004bfab4);
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = FUN_004c346c(iVar4,*(undefined4 *)((int)param_1 + 0x178));
      }
      *(int *)((int)param_1 + 0x291c) = iVar5;
      piVar10[2] = iVar5;
      uVar6 = (**(code **)(*piVar10 + 8))(piVar10,*(undefined4 *)((int)param_1 + 0x24dc),1);
      *(undefined4 *)((int)param_1 + 0x2918) = uVar6;
      piVar10[2] = 0;
      iVar5 = *(int *)((int)param_1 + 0x2918);
      *(float *)(iVar5 + 0x40) = fVar14;
      *(float *)(iVar5 + 0x44) = fVar14;
      *(float *)(iVar5 + 0x48) = fVar14;
      FUN_0030fd98(DAT_004bfab8,*(undefined4 *)((int)param_1 + 0x2918));
      iVar5 = *(int *)((int)param_1 + 0x2918);
      *(float *)(iVar5 + 0x24) = fVar13;
      *(float *)(iVar5 + 0x28) = fVar13;
      *(float *)(iVar5 + 0x2c) = fVar13;
      *(undefined4 *)((int)param_1 + 0x2920) =
           *(undefined4 *)(*(int *)((int)param_1 + 0x2918) + 0x10);
      uVar6 = FUN_00372f0c(*(undefined4 *)((int)param_1 + 0x24e0),2);
      FUN_00372d94((undefined4 *)((int)param_1 + 0x2920),uVar6);
    }
    FUN_00372224(auStack_98,(int)param_1 + 0x148);
    FUN_00372224(auStack_68,(int)param_1 + 0x148);
    fVar14 = *(float *)((int)param_1 + 0x58);
    *(float *)((int)param_1 + 0x58) = -fVar14;
    FUN_003679d0(*(undefined4 *)((int)param_1 + 0x28),
                 (*(float *)((int)param_1 + 0x84) - *(float *)((int)param_1 + 0x2c)) +
                 *(float *)((int)param_1 + 0xc4) * -fVar14 + *(float *)((int)param_1 + 0x84),
                 *(undefined4 *)((int)param_1 + 0x30),auStack_68,(int)param_1 + 0xbc);
    FUN_00371348(*(undefined4 *)((int)param_1 + 0x54),*(undefined4 *)((int)param_1 + 0x58),
                 *(undefined4 *)((int)param_1 + 0x5c),auStack_68,1);
    FUN_00369014(fVar15,auStack_68,1);
    FUN_003735e8(fVar16,auStack_68,1);
    FUN_00371348(DAT_004bff3c,DAT_004bff38,DAT_004bff34,auStack_68,1);
    FUN_003735e8(-fVar16,auStack_68,1);
    FUN_00369014(-fVar15,auStack_68,1);
    *(float *)((int)param_1 + 0x2524) = param_1;
    *(undefined1 *)(*(int *)((int)param_1 + 0x2918) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)((int)param_1 + 0x2918),auStack_68);
    FUN_00347774(*(undefined4 *)((int)param_1 + 0x2918),(int)param_1 + 0x2520);
    iVar4 = 0;
    iVar5 = FUN_002bb71c(*(undefined4 *)((int)param_1 + 0x27c));
    if (0 < iVar5) {
      do {
        iVar5 = FUN_004c6880(*(undefined4 *)((int)param_1 + 0x27c),iVar4);
        if (iVar5 == 0) {
          FUN_0036932c(*(undefined4 *)((int)param_1 + 0x2918),iVar4);
        }
        else {
          FUN_0037266c();
        }
        iVar4 = iVar4 + 1;
        iVar5 = FUN_002bb71c(*(undefined4 *)((int)param_1 + 0x27c));
      } while (iVar4 < iVar5);
    }
    *(float *)((int)param_1 + 0x292c) = fVar13;
    uVar6 = VectorSignedToFloat((int)*(char *)((int)param_1 + 0x1a4),(byte)(in_fpscr >> 0x15) & 3);
    if (*DAT_004bff40 == 0) {
      *(undefined4 *)((int)param_1 + 0x2928) = uVar6;
      FUN_003586ec();
    }
    FUN_00373bec((int)param_1 + 0x2920);
    if (*(char *)(iVar11 + 0xe) == '\0') {
      uVar3 = 0x900;
    }
    else {
      uVar3 = (undefined2)DAT_004bff44;
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x291c) + 0x230) = uVar3;
    FUN_00372170(*(undefined4 *)((int)param_1 + 0x2918),0);
    *(float *)((int)param_1 + 0x58) = -*(float *)((int)param_1 + 0x58);
    FUN_00372224((int)param_1 + 0x148,auStack_98);
    uVar7 = extraout_r1_00;
  }
  bVar12 = *(short *)(param_2 + 0x104) == 0x51;
  if (bVar12) {
    uVar7 = *(int *)(iVar11 + 8) - 0xff00;
  }
  if (bVar12 && uVar7 == 0xf7) {
    *(undefined1 *)((int)param_1 + 0xd0) = 0;
  }
  local_128 = DAT_004bff48;
  *(uint *)((int)param_1 + 0x29b8) = *(uint *)((int)param_1 + 0x29b8) & 0xfbffffff;
  local_12c = fVar17;
  local_124 = param_1;
  FUN_004c11f4(param_2,local_38,(int)*(char *)((int)param_1 + 0x1a4),
               *(undefined1 *)((int)param_1 + 0x1b8),(int)*(short *)((int)param_1 + 0xc2));
  if (((fVar17 == DAT_004bfa18) && (uVar7 = (uint)*(byte *)((int)param_1 + 0x1b7), uVar7 != 0)) &&
     (FUN_00371738(afStack_f8,DAT_004bff4c,0xc0), *(int *)(iVar11 + 4) != 0)) {
    local_fc = *(int *)((int)param_1 + uVar7 * 4 + 0x28c8);
    iVar5 = uVar7 * 2 + -2;
    fVar14 = ABS(afStack_f8[iVar5 * 3 + 4] * DAT_004bff50);
    in_fpscr = in_fpscr & 0xfffffff |
               (uint)(fVar13 <= afStack_f8[iVar5 * 3 + 5] * DAT_004bff50) << 0x1d;
    fVar15 = ABS(afStack_f8[iVar5 * 3 + 5] * DAT_004bff50);
    for (fVar17 = ABS(afStack_f8[iVar5 * 3 + 3] * DAT_004bff50); DAT_004bff54 <= (int)fVar17;
        fVar17 = fVar17 - DAT_004bff58) {
    }
    for (; DAT_004bff54 <= (int)fVar14; fVar14 = fVar14 - DAT_004bff58) {
    }
    for (; DAT_004bff54 <= (int)fVar15; fVar15 = fVar15 - DAT_004bff58) {
    }
    uVar7 = VectorFloatToUnsigned(fVar17,3);
    uVar18 = VectorFloatToUnsigned(fVar14,3);
    uVar19 = VectorFloatToUnsigned(fVar15,3);
    pfVar8 = (float *)(DAT_004bff5c + (uVar7 & 0xff) * 0x10);
    fVar22 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)VectorUnsignedToFloat(uVar18 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = (float)VectorUnsignedToFloat(uVar19 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar21 = *pfVar8 + (fVar17 - fVar22) * pfVar8[2];
    pfVar9 = (float *)(DAT_004bff5c + (uVar18 & 0xff) * 0x10);
    fVar22 = pfVar8[1] + (fVar17 - fVar22) * pfVar8[3];
    pfVar8 = (float *)(DAT_004bff5c + (uVar19 & 0xff) * 0x10);
    local_10c = *pfVar9 + (fVar14 - fVar20) * pfVar9[2];
    local_11c = pfVar9[1] + (fVar14 - fVar20) * pfVar9[3];
    fVar17 = *pfVar8 + (fVar15 - fVar16) * pfVar8[2];
    if (afStack_f8[iVar5 * 3 + 3] * DAT_004bff50 < fVar13) {
      fVar21 = -fVar21;
    }
    fVar14 = pfVar8[1] + (fVar15 - fVar16) * pfVar8[3];
    if (afStack_f8[iVar5 * 3 + 4] * DAT_004bff50 < fVar13) {
      local_10c = -local_10c;
    }
    local_104 = fVar22 * local_11c;
    local_108 = fVar21 * local_11c;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar17 = -fVar17;
    }
    local_12c = fVar14 * local_11c;
    local_11c = fVar17 * local_11c;
    local_128 = fVar21 * fVar14 * local_10c - fVar22 * fVar17;
    local_114 = fVar22 * fVar17 * local_10c - fVar21 * fVar14;
    local_124 = fVar21 * fVar17 + fVar22 * fVar14 * local_10c;
    local_118 = fVar22 * fVar14 + fVar21 * fVar17 * local_10c;
    local_10c = -local_10c;
    local_120 = afStack_f8[iVar5 * 3];
    local_110 = afStack_f8[iVar5 * 3 + 1];
    local_100 = afStack_f8[iVar5 * 3 + 2];
    uVar6 = FUN_003478bc(*(undefined4 *)((int)param_1 + 0x27c),0xb);
    FUN_0036c174(&local_12c,uVar6,&local_12c);
    *(undefined1 *)(local_fc + 0xac) = 1;
    FUN_003721e0(local_fc,&local_12c);
    FUN_00372170(local_fc,0);
  }
  uVar6 = 0;
  if ((*(char *)(DAT_004c0098 + param_2) != '\0') && (*(char *)(DAT_004c009c + param_2) == '\0')) {
    uVar6 = 1;
  }
  FUN_002d5b2c(param_2,param_1,uVar6);
  if ((*(uint *)((int)param_1 + 0x1714) & 0x4000) != 0) {
    fVar17 = (float)VectorSignedToFloat((int)*(char *)(DAT_004c00a0 + (int)param_1) >> 1,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar17 = fVar17 * DAT_004c00a4;
    FUN_00372224(auStack_68,(int)param_1 + 0x148);
    FUN_00371348(fVar17,fVar17,fVar17,auStack_68,1);
    *(undefined1 *)(*(int *)((int)param_1 + 0x28ec) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)((int)param_1 + 0x28ec),auStack_68);
    FUN_00372170(*(undefined4 *)((int)param_1 + 0x28ec),0);
  }
  if (*(short *)(DAT_004c00a8 + (int)param_1) < 1) {
    return;
  }
  FUN_004c0f9c(param_2,param_1);
  return;
}

