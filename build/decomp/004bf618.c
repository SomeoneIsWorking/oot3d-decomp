// OoT3D decomp @ 004bf618  name=FUN_004bf618  size=2160

void FUN_004bf618(float param_1,undefined4 *param_2)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  float *pfVar12;
  float *pfVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 uVar32;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  int iStack_fc;
  float afStack_f8 [9];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  
  fVar24 = fRam004bfa18;
  uStack_34 = (undefined4)unaff_d8;
  uStack_30 = (undefined4)((ulonglong)unaff_d8 >> 0x20);
  fStack_2c = (float)unaff_d9;
  fVar21 = fStack_2c;
  uStack_28 = (undefined4)((ulonglong)unaff_d9 >> 0x20);
  if ((*(uint *)((int)param_1 + 0x1714) & 0x20000000) != 0) {
    return;
  }
  puVar11 = param_2;
  if ((*(char *)((int)param_1 + 0x12bc) == '\0') &&
     (func_0x003518cc(param_1), puVar11 = puRam004bfa1c,
     (int)puRam004bfa1c <= *(int *)((int)param_1 + 0xf4))) {
    uStack_38 = 1;
  }
  else {
    uStack_38 = 0;
  }
  fVar19 = fRam004bfa28;
  iVar9 = iRam004bfa24;
  if (0 < *(char *)(iRam004bfa20 + (int)param_1)) {
    fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piRam004bfa2c + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    iVar16 = (int)(fRam004bfa30 / fVar18 + fRam004bfa34) -
             (int)*(char *)(iRam004bfa20 + (int)param_1);
    uVar32 = func_0x003695f8();
    puVar11 = (undefined4 *)((ulonglong)uVar32 >> 0x20);
    if ((int)uVar32 == 0) {
      if (iVar16 < 8) {
        iVar16 = 8;
      }
      else if (0x28 < iVar16) {
        iVar16 = 0x28;
      }
      *(char *)((int)param_1 + 0x227b) = *(char *)((int)param_1 + 0x227b) + (char)iVar16;
    }
    if ((*(uint *)((int)param_1 + 0x1710) & 0x20000000) == 0) {
      lVar3 = (ulonglong)*(byte *)((int)param_1 + 0x227b) * 0x4000 * (ulonglong)uRam004bfa38;
      fVar18 = (float)func_0x00338f68((uint)((int)((ulonglong)lVar3 >> 0x20) << 9) >> 0x10,
                                      (int)lVar3);
      pfVar12 = pfRam004bfa3c;
      fVar18 = fVar18 * *(float *)(iVar9 + 0x114) * fRam004bfa40;
      *pfRam004bfa3c = fVar18;
      pfVar12[3] = fVar19 - fVar18;
      iVar16 = *(int *)((int)param_1 + 0x178);
      *(undefined1 *)(iVar16 + 0x1b7) = *(undefined1 *)(iVar16 + 0x1b6);
      *(undefined1 *)(iVar16 + 0x1b6) = 0;
      func_0x00358964(*(undefined4 *)((int)param_1 + 0x178),5,pfVar12);
      func_0x003589cc(*(undefined4 *)((int)param_1 + 0x178),5);
      bVar1 = *(byte *)(*(int *)((int)param_1 + 0x178) + 0x1b7);
      puVar11 = (undefined4 *)(uint)bVar1;
      *(byte *)(*(int *)((int)param_1 + 0x178) + 0x1b6) = bVar1;
    }
  }
  fVar18 = fRam004bfa48;
  iVar16 = iRam004bfa44;
  if (*(char *)((int)param_1 + 0x1749) == '\0') {
    bVar17 = true;
    if ((*(uint *)((int)param_1 + 0x1714) & 0x40000) != 0) {
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(fRam004bfa48 <= *(float *)((int)param_1 + 0xf4)) << 0x1d;
      bVar17 = SUB41(in_fpscr >> 0x1d,0);
    }
    if (!bVar17) {
      fVar24 = fRam004bfa58;
    }
    goto LAB_004bf8b8;
  }
  func_0x004c2c18(param_2 + 0x16ed,(int)param_1 + 0x3c,(int)param_1 + 0x1214);
  puVar11 = extraout_r1;
  if (*(int *)(iVar16 + 4) == 0) {
    if (*(char *)((int)param_1 + 0x1749) == '\x02') {
      uVar32 = FUN_0036c5bc(param_2,0);
      puVar11 = (undefined4 *)((ulonglong)uVar32 >> 0x20);
      if (*(short *)((int)uVar32 + 0x18a) == 2) {
        iVar8 = FUN_0036c5bc(param_2,0);
        if ((*(short *)(iVar8 + 0x18c) != 6) &&
           (iVar8 = FUN_0036c5bc(param_2,0), *(short *)(iVar8 + 0x18c) != 7)) {
          uVar32 = FUN_0036c5bc(param_2,0);
          puVar11 = (undefined4 *)((ulonglong)uVar32 >> 0x20);
          if (*(short *)((int)uVar32 + 0x18c) != 9) goto LAB_004bf874;
        }
        uVar32 = FUN_0036c5bc(param_2,0);
        puVar11 = (undefined4 *)((ulonglong)uVar32 >> 0x20);
        if (*(short *)((int)uVar32 + 0x2c) < 2) {
          uVar32 = FUN_0036c5bc(param_2,0);
          puVar11 = (undefined4 *)((ulonglong)uVar32 >> 0x20);
          if (*(short *)((int)uVar32 + 0x1a6) == 1) {
            fVar21 = fRam004bfa4c;
          }
        }
        goto LAB_004bf878;
      }
    }
LAB_004bf874:
    fVar21 = *(float *)(iVar9 + 0x11c);
  }
  else {
    fVar21 = *(float *)(iVar9 + 0x118);
  }
LAB_004bf878:
  in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar21 <= *(float *)((int)param_1 + 0x121c)) << 0x1d;
  if ((!SUB41(in_fpscr >> 0x1d,0)) &&
     (puVar11 = puRam004bfa50, *(undefined4 **)((int)param_1 + 0x1708) != puRam004bfa50)) {
    fVar24 = fRam004bfa54;
  }
LAB_004bf8b8:
  if ((*(uint *)((int)param_1 + 0x1714) & 0x4000000) != 0) {
    fVar21 = (float)VectorUnsignedToFloat
                              (uRam004bfa60 & *(int *)(iRam004bfa5c + (int)param_2) * 600,
                               (byte)(in_fpscr >> 0x15) & 3);
    fVar21 = fVar21 * fRam004bfa64;
    fVar22 = (float)VectorUnsignedToFloat
                              (uRam004bfa60 & *(int *)(iRam004bfa5c + (int)param_2) * 1000,
                               (byte)(in_fpscr >> 0x15) & 3);
    fVar22 = fVar22 * fRam004bfa64;
    if (*(int *)((int)param_1 + 0x2918) == 0) {
      if (((*puRam004bfa68 & 1) == 0) && (iVar9 = func_0x003679b4(puRam004bfa68), iVar9 != 0)) {
        func_0x0036788c(iRam004bfa6c);
      }
      piVar14 = *(int **)(iRam004bfa6c + 0x17c);
      iVar8 = (**(code **)(*(int *)*puRam004bfab0 + 0xc))
                        ((int *)*puRam004bfab0,0x234,0x4bfa78,uRam004bfab4);
      iVar9 = 0;
      if (iVar8 != 0) {
        iVar9 = func_0x004c346c(iVar8,*(undefined4 *)((int)param_1 + 0x178));
      }
      *(int *)((int)param_1 + 0x291c) = iVar9;
      piVar14[2] = iVar9;
      uVar10 = (**(code **)(*piVar14 + 8))(piVar14,*(undefined4 *)((int)param_1 + 0x24dc),1);
      *(undefined4 *)((int)param_1 + 0x2918) = uVar10;
      piVar14[2] = 0;
      iVar9 = *(int *)((int)param_1 + 0x2918);
      *(float *)(iVar9 + 0x40) = fVar19;
      *(float *)(iVar9 + 0x44) = fVar19;
      *(float *)(iVar9 + 0x48) = fVar19;
      func_0x0030fd98(uRam004bfab8,*(undefined4 *)((int)param_1 + 0x2918));
      iVar9 = *(int *)((int)param_1 + 0x2918);
      *(float *)(iVar9 + 0x24) = fVar18;
      *(float *)(iVar9 + 0x28) = fVar18;
      *(float *)(iVar9 + 0x2c) = fVar18;
      *(undefined4 *)((int)param_1 + 0x2920) =
           *(undefined4 *)(*(int *)((int)param_1 + 0x2918) + 0x10);
      uVar10 = func_0x00372f0c(*(undefined4 *)((int)param_1 + 0x24e0),2);
      func_0x00372d94((undefined4 *)((int)param_1 + 0x2920),uVar10);
    }
    func_0x00372224(&uStack_98,(int)param_1 + 0x148);
    func_0x00372224(&uStack_68,(int)param_1 + 0x148);
    fVar19 = *(float *)((int)param_1 + 0x58);
    *(float *)((int)param_1 + 0x58) = -fVar19;
    func_0x003679d0(*(undefined4 *)((int)param_1 + 0x28),
                    (*(float *)((int)param_1 + 0x84) - *(float *)((int)param_1 + 0x2c)) +
                    *(float *)((int)param_1 + 0xc4) * -fVar19 + *(float *)((int)param_1 + 0x84),
                    *(undefined4 *)((int)param_1 + 0x30),&uStack_68,(int)param_1 + 0xbc);
    func_0x00371348(*(undefined4 *)((int)param_1 + 0x54),*(undefined4 *)((int)param_1 + 0x58),
                    *(undefined4 *)((int)param_1 + 0x5c),&uStack_68,1);
    func_0x00369014(fVar21,&uStack_68,1);
    func_0x003735e8(fVar22,&uStack_68,1);
    func_0x00371348(uRam004bff3c,uRam004bff38,uRam004bff34,&uStack_68,1);
    func_0x003735e8(-fVar22,&uStack_68,1);
    func_0x00369014(-fVar21,&uStack_68,1);
    *(float *)((int)param_1 + 0x2524) = param_1;
    *(undefined1 *)(*(int *)((int)param_1 + 0x2918) + 0xac) = 1;
    func_0x003721e0(*(undefined4 *)((int)param_1 + 0x2918),&uStack_68);
    func_0x00347774(*(undefined4 *)((int)param_1 + 0x2918),(int)param_1 + 0x2520);
    iVar8 = 0;
    iVar9 = func_0x002bb71c(*(undefined4 *)((int)param_1 + 0x27c));
    if (0 < iVar9) {
      do {
        iVar9 = func_0x004c6880(*(undefined4 *)((int)param_1 + 0x27c),iVar8);
        if (iVar9 == 0) {
          func_0x0036932c(*(undefined4 *)((int)param_1 + 0x2918),iVar8);
        }
        else {
          func_0x0037266c();
        }
        iVar8 = iVar8 + 1;
        iVar9 = func_0x002bb71c(*(undefined4 *)((int)param_1 + 0x27c));
      } while (iVar8 < iVar9);
    }
    *(float *)((int)param_1 + 0x292c) = fVar18;
    uVar10 = VectorSignedToFloat((int)*(char *)((int)param_1 + 0x1a4),(byte)(in_fpscr >> 0x15) & 3);
    if (*piRam004bff40 == 0) {
      *(undefined4 *)((int)param_1 + 0x2928) = uVar10;
      func_0x003586ec();
    }
    func_0x00373bec((int)param_1 + 0x2920);
    if (*(char *)(iVar16 + 0xe) == '\0') {
      uVar7 = 0x900;
    }
    else {
      uVar7 = (undefined2)uRam004bff44;
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x291c) + 0x230) = uVar7;
    func_0x00372170(*(undefined4 *)((int)param_1 + 0x2918),0);
    *(float *)((int)param_1 + 0x58) = -*(float *)((int)param_1 + 0x58);
    func_0x00372224((int)param_1 + 0x148,&uStack_98);
    puVar11 = extraout_r1_00;
  }
  if (*(short *)(param_2 + 0x41) == 0x51) {
    puVar11 = (undefined4 *)(*(int *)(iVar16 + 8) - 0xff00);
  }
  if (*(short *)(param_2 + 0x41) == 0x51 && puVar11 == (undefined4 *)0xf7) {
    *(undefined1 *)((int)param_1 + 0xd0) = 0;
  }
  fStack_128 = fRam004bff48;
  *(uint *)((int)param_1 + 0x29b8) = *(uint *)((int)param_1 + 0x29b8) & 0xfbffffff;
  fStack_12c = fVar24;
  fStack_124 = param_1;
  func_0x004c11f4(param_2,uStack_38,(int)*(char *)((int)param_1 + 0x1a4),
                  *(undefined1 *)((int)param_1 + 0x1b8),(int)*(short *)((int)param_1 + 0xc2));
  if (((fVar24 == fRam004bfa18) && (uVar15 = (uint)*(byte *)((int)param_1 + 0x1b7), uVar15 != 0)) &&
     (func_0x00371738(afStack_f8,uRam004bff4c,0xc0), *(int *)(iVar16 + 4) != 0)) {
    iStack_fc = *(int *)((int)param_1 + uVar15 * 4 + 0x28c8);
    iVar9 = uVar15 * 2 + -2;
    fVar21 = ABS(afStack_f8[iVar9 * 3 + 4] * fRam004bff50);
    in_fpscr = in_fpscr & 0xfffffff |
               (uint)(fVar18 <= afStack_f8[iVar9 * 3 + 5] * fRam004bff50) << 0x1d;
    fVar19 = ABS(afStack_f8[iVar9 * 3 + 5] * fRam004bff50);
    for (fVar24 = ABS(afStack_f8[iVar9 * 3 + 3] * fRam004bff50); iRam004bff54 <= (int)fVar24;
        fVar24 = fVar24 - fRam004bff58) {
    }
    for (; iRam004bff54 <= (int)fVar21; fVar21 = fVar21 - fRam004bff58) {
    }
    for (; iRam004bff54 <= (int)fVar19; fVar19 = fVar19 - fRam004bff58) {
    }
    uVar15 = VectorFloatToUnsigned(fVar24,3);
    uVar26 = VectorFloatToUnsigned(fVar21,3);
    uVar27 = VectorFloatToUnsigned(fVar19,3);
    pfVar12 = (float *)(iRam004bff5c + (uVar15 & 0xff) * 0x10);
    fVar30 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar28 = (float)VectorUnsignedToFloat(uVar26 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar22 = (float)VectorUnsignedToFloat(uVar27 & 0xffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar29 = *pfVar12 + (fVar24 - fVar30) * pfVar12[2];
    pfVar13 = (float *)(iRam004bff5c + (uVar26 & 0xff) * 0x10);
    fVar30 = pfVar12[1] + (fVar24 - fVar30) * pfVar12[3];
    pfVar12 = (float *)(iRam004bff5c + (uVar27 & 0xff) * 0x10);
    fStack_10c = *pfVar13 + (fVar21 - fVar28) * pfVar13[2];
    fStack_11c = pfVar13[1] + (fVar21 - fVar28) * pfVar13[3];
    fVar24 = *pfVar12 + (fVar19 - fVar22) * pfVar12[2];
    if (afStack_f8[iVar9 * 3 + 3] * fRam004bff50 < fVar18) {
      fVar29 = -fVar29;
    }
    fVar21 = pfVar12[1] + (fVar19 - fVar22) * pfVar12[3];
    if (afStack_f8[iVar9 * 3 + 4] * fRam004bff50 < fVar18) {
      fStack_10c = -fStack_10c;
    }
    fStack_104 = fVar30 * fStack_11c;
    fStack_108 = fVar29 * fStack_11c;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar24 = -fVar24;
    }
    fStack_12c = fVar21 * fStack_11c;
    fStack_11c = fVar24 * fStack_11c;
    fStack_128 = fVar29 * fVar21 * fStack_10c - fVar30 * fVar24;
    fStack_114 = fVar30 * fVar24 * fStack_10c - fVar29 * fVar21;
    fStack_124 = fVar29 * fVar24 + fVar30 * fVar21 * fStack_10c;
    fStack_118 = fVar30 * fVar21 + fVar29 * fVar24 * fStack_10c;
    fStack_10c = -fStack_10c;
    fStack_120 = afStack_f8[iVar9 * 3];
    fStack_110 = afStack_f8[iVar9 * 3 + 1];
    fStack_100 = afStack_f8[iVar9 * 3 + 2];
    uVar10 = func_0x003478bc(*(undefined4 *)((int)param_1 + 0x27c),0xb);
    func_0x0036c174(&fStack_12c,uVar10,&fStack_12c);
    *(undefined1 *)(iStack_fc + 0xac) = 1;
    func_0x003721e0(iStack_fc,&fStack_12c);
    func_0x00372170(iStack_fc,0);
  }
  uVar10 = 0;
  if ((*(char *)(iRam004c0098 + (int)param_2) != '\0') &&
     (*(char *)(iRam004c009c + (int)param_2) == '\0')) {
    uVar10 = 1;
  }
  func_0x002d5b2c(param_2,param_1,uVar10);
  if ((*(uint *)((int)param_1 + 0x1714) & 0x4000) != 0) {
    fVar24 = (float)VectorSignedToFloat((int)*(char *)(iRam004c00a0 + (int)param_1) >> 1,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar24 = fVar24 * fRam004c00a4;
    func_0x00372224(&uStack_68,(int)param_1 + 0x148);
    func_0x00371348(fVar24,fVar24,fVar24,&uStack_68,1);
    *(undefined1 *)(*(int *)((int)param_1 + 0x28ec) + 0xac) = 1;
    func_0x003721e0(*(undefined4 *)((int)param_1 + 0x28ec),&uStack_68);
    func_0x00372170(*(undefined4 *)((int)param_1 + 0x28ec),0);
  }
  if (*(short *)(iRam004c00a8 + (int)param_1) < 1) {
    return;
  }
  uVar32 = CONCAT44(uStack_30,uStack_34);
  uVar4 = CONCAT44(uStack_28,fStack_2c);
  if ((*(int *)((int)param_1 + 0x1d0) == 0) ||
     (iVar9 = func_0x0031b9c0(*(int *)((int)param_1 + 0x1d0),0), iVar9 == 0)) {
    if (*(char *)((int)param_1 + 0x250) != '\0') {
      return;
    }
  }
  else {
    func_0x0031b99c(*(undefined4 *)((int)param_1 + 0x1d0));
    *(undefined4 *)((int)param_1 + 0x1d0) = 0;
    if (*(int *)((int)param_1 + 0x1cc) != 0) {
      iVar9 = (int)*(short *)((int)param_1 + 0x224e);
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      func_0x004c60c0(*(undefined4 *)(iRam004c103c + (int)param_1),(int)param_1 + 0x1cc,iVar9 + -1);
    }
    *(undefined1 *)((int)param_1 + 0x250) = 0;
  }
  pfVar12 = pfRam004c1040;
  iVar9 = (int)*(short *)((int)param_1 + 0x224e);
  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  uStack_38 = (undefined4)unaff_d10;
  uStack_34 = (undefined4)((ulonglong)unaff_d10 >> 0x20);
  uStack_30 = (undefined4)unaff_d11;
  fStack_2c = (float)((ulonglong)unaff_d11 >> 0x20);
  sVar2 = *(short *)((int)param_1 + 0xbe);
  fVar24 = fRam004c4ba8;
  if (*(char *)((int)param_1 + 0x172b) != '\0') {
    fVar24 = fRam004c4bac;
  }
  if (*(int *)((int)param_1 + 0x284) == 0x198) {
    sVar2 = sVar2 + -0x8000;
  }
  iVar16 = *(int *)(iRam004c4bb0 + 4);
  if (*(char *)((int)param_1 + 0x172b) != '\0') {
    iVar16 = iVar16 + 2;
  }
  uStack_48 = uVar32;
  uStack_40 = uVar4;
  fVar21 = (float)func_0x002cfca0((int)sVar2,iRam004c4bb0,pfRam004c1040,iVar9);
  pfVar13 = (float *)(iRam004c4bb4 + iVar16 * 0xc);
  fVar29 = *pfVar12 + *pfVar13 * fVar21;
  fVar18 = pfVar12[1];
  fVar30 = pfVar13[1];
  fVar22 = (float)func_0x00338f60((int)sVar2);
  fVar19 = fRam004c4bc4;
  fVar21 = fRam004c4bc0;
  fVar28 = (float)VectorSignedToFloat((int)*(short *)(*piRam004c4bb8 + 0x788),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar22 = pfVar12[2] + (pfVar13[2] + fVar28 * fRam004c4bbc) * fVar22;
  if ((*(char *)((int)param_1 + 0x172b) == '\0') &&
     (((iVar9 = FUN_0036c5bc(param_2,0), *(short *)(iVar9 + 0x18a) == 0x28 ||
       (iVar9 = FUN_0036c5bc(param_2,0), *(short *)(iVar9 + 0x18a) == 0x29)) ||
      (iVar9 = FUN_0036c5bc(param_2,0), *(short *)(iVar9 + 0x18a) == 0x38)))) {
    iVar9 = FUN_0036c5bc(param_2,0);
    iVar16 = FUN_0036c5bc(param_2,0);
    fVar25 = *(float *)(iVar9 + 0x80) - *(float *)(iVar16 + 0x8c);
    fVar28 = *(float *)(iVar9 + 0x88) - *(float *)(iVar16 + 0x94);
    fVar23 = fVar21 / SQRT(fVar25 * fVar25 + fVar19 * fVar19 + fVar28 * fVar28);
    iVar9 = FUN_0036c5bc(param_2,0);
    fVar29 = fVar29 - *(float *)(iVar9 + 0x8c);
    fVar22 = fVar22 - *(float *)(iVar9 + 0x94);
    fVar31 = SQRT(fVar29 * fVar29 + fVar19 * fVar19 + fVar22 * fVar22);
    fVar20 = fVar21 / fVar31;
    iVar9 = FUN_0036c5bc(param_2,0);
    fVar31 = fVar31 * (fVar25 * fVar23 * fVar29 * fVar20 + fVar19 * fVar23 * fVar19 * fVar20 +
                      fVar28 * fVar23 * fVar22 * fVar20);
    fVar29 = *(float *)(iVar9 + 0x8c) + fVar25 * fVar23 * fVar31;
    iVar9 = FUN_0036c5bc(param_2,0);
    fVar22 = *(float *)(iVar9 + 0x94) + fVar28 * fVar23 * fVar31;
  }
  fStack_54 = fVar29;
  fStack_50 = fVar18 + fVar30 + fVar24;
  fStack_4c = fVar22;
  iVar9 = func_0x0035bfb4(param_2 + 0x29c,*param_2);
  func_0x0035bf50(iVar9,param_2[0x29c],&fStack_54);
  fVar24 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar9 + 8),(byte)(in_fpscr >> 0x15) & 3);
  uVar10 = VectorFloatToUnsigned(fVar24 * (float)param_2[0xc87],3);
  *(char *)(iVar9 + 8) = (char)uVar10;
  fVar24 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar9 + 9),(byte)(in_fpscr >> 0x15) & 3);
  uVar10 = VectorFloatToUnsigned(fVar24 * (float)param_2[0xc87],3);
  *(char *)(iVar9 + 9) = (char)uVar10;
  fVar24 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar9 + 10),(byte)(in_fpscr >> 0x15) & 3);
  uVar10 = VectorFloatToUnsigned(fVar24 * (float)param_2[0xc87],3);
  *(char *)(iVar9 + 10) = (char)uVar10;
  func_0x0035bbe0(iVar9,*(undefined4 *)((int)param_1 + 0x29d4));
  func_0x00368704(param_2[0x17f2],*(undefined4 *)((int)param_1 + 0x29d4));
  uVar6 = uRam004c4be0;
  uVar10 = uRam004c4bdc;
  puVar5 = puRam004c4bd8;
  fVar30 = fRam004c4bd4;
  fVar22 = fRam004c4bd0;
  fVar18 = fRam004c4bcc;
  fVar24 = fRam004c4bc8;
  iVar9 = 0;
  do {
    iVar16 = (int)param_1 + iVar9 * 4;
    if (*(int *)(iVar16 + 0x244) != 0) {
      uStack_90 = 0;
      uStack_94 = 0;
      fStack_8c = fStack_54;
      uStack_98 = 0x3f800000;
      uStack_88 = 0;
      uStack_84 = 0x3f800000;
      uStack_80 = 0;
      uStack_78 = 0;
      fStack_7c = fStack_50;
      uStack_74 = 0;
      uStack_70 = 0x3f800000;
      fStack_6c = fStack_4c;
      if (((*puVar5 & 1) == 0) && (iVar8 = func_0x003679b4(puRam004c4bd8), iVar8 != 0)) {
        func_0x0036788c(iRam004c4be4);
      }
      if (*(int *)(iRam004c4be4 + 0xfc) != 0) {
        func_0x0036c174(&uStack_98,&uStack_98,*(int *)(iRam004c4be4 + 0xfc) + 0x174);
      }
      if (iVar9 == 0) {
        fVar28 = (float)VectorUnsignedToFloat(param_2[0x16fd] * 1000,(byte)(in_fpscr >> 0x15) & 3);
        func_0x0036c258(fVar28 * fVar24 * fVar18 * fVar22 * fVar30 * fVar22,&fStack_58,&fStack_5c);
        fVar28 = fVar21 - fStack_5c;
        afStack_f8[0] = fStack_5c + fVar28 * fVar19;
        afStack_f8[5] = fStack_5c + fVar28 * fVar21;
        afStack_f8[1] = fVar28 * fVar19 * fVar21;
        afStack_f8[8] = fVar28 * fVar19 * fVar19;
        afStack_f8[4] = afStack_f8[1] + fStack_58 * fVar19;
        afStack_f8[1] = afStack_f8[1] - fStack_58 * fVar19;
        afStack_f8[2] = afStack_f8[8] + fStack_58 * fVar21;
        afStack_f8[8] = afStack_f8[8] - fStack_58 * fVar21;
        afStack_f8[6] = fVar28 * fVar21 * fVar19;
        fStack_d4 = afStack_f8[6] + fStack_58 * fVar19;
        afStack_f8[6] = afStack_f8[6] - fStack_58 * fVar19;
        afStack_f8[3] = fVar19;
        afStack_f8[7] = fVar19;
        fStack_d0 = afStack_f8[0];
        fStack_cc = fVar19;
        func_0x0036c174(&uStack_98,&uStack_98,afStack_f8);
      }
      uStack_c4 = 0;
      uStack_b0 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_9c = 0;
      uStack_c8 = uVar10;
      uStack_b4 = uVar10;
      uStack_a0 = uVar10;
      uStack_68 = uVar10;
      uStack_64 = uVar10;
      uStack_60 = uVar10;
      func_0x0036c174(&uStack_98,&uStack_98,&uStack_c8);
      func_0x003721e0(*(undefined4 *)(iVar16 + 0x244),&uStack_98);
      *(undefined1 *)(*(int *)(iVar16 + 0x244) + 0xac) = 1;
      if (((*puVar5 & 1) == 0) && (iVar8 = func_0x003679b4(puRam004c4bd8), iVar8 != 0)) {
        func_0x0036788c(iRam004c4be4);
      }
      func_0x00330b98(uVar6,*(undefined4 *)(iVar16 + 0x244),1);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 2);
  return;
}

