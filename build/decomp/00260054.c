// OoT3D decomp @ 00260054  name=FUN_00260054  size=3572

void FUN_00260054(int param_1,int param_2)

{
  short sVar1;
  longlong lVar2;
  byte bVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char cVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  float fVar21;
  undefined4 *puVar22;
  float fVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  bool bVar26;
  uint in_fpscr;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  float local_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float local_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined1 auStack_b8 [48];
  int local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;

  fVar5 = DAT_00260350;
  pfVar4 = DAT_0026034c;
  iVar13 = DAT_00260348;
  local_88 = param_2;
  if (((*(uint *)(DAT_00260348 + 0x2c) & 1) == 0) &&
     (iVar11 = FUN_003679b4(DAT_00260348 + 0x2c), fVar33 = DAT_00260354, iVar11 != 0)) {
    *pfVar4 = fVar5;
    pfVar4[1] = fVar33;
    pfVar4[2] = fVar5;
  }
  FUN_00372224(auStack_b8,param_1 + 0x148);
  fVar32 = DAT_00260360;
  fVar33 = DAT_0026035c;
  if (*(int *)(param_1 + 0x888) == DAT_00260358) {
    return;
  }
  cVar16 = *(char *)(param_1 + 0xa33);
  if (cVar16 == '\0') {
    uVar29 = 0;
    puVar17 = auStack_b8;
    iVar11 = param_1 + 0x1a4;
    uVar31 = DAT_00260394;
LAB_00260208:
    FUN_0035e240(iVar11,puVar17,uVar29,uVar31,param_1,0);
  }
  else if (cVar16 == '\x01' || cVar16 == '\x02') {
    FUN_0035e3a4(param_1 + 0x524,0,*(undefined1 *)(param_1 + 0xa0c));
    FUN_0035e330(param_1 + 0x524);
    FUN_0032d68c(0,param_1 + 0xb40,DAT_0026034c);
    FUN_0032d68c(1,param_1 + 0xb40,DAT_0026034c);
    uVar31 = DAT_00260368;
    uVar29 = DAT_00260364;
    fVar21 = pfVar4[1];
    fVar23 = pfVar4[2];
    *(float *)(param_1 + 0x914) = *pfVar4;
    *(float *)(param_1 + 0x918) = fVar21;
    *(float *)(param_1 + 0x91c) = fVar23;
    FUN_003713fc(fVar5,uVar31,uVar29,auStack_b8,1);
    FUN_00369014(*(undefined4 *)(param_1 + 0xa90),auStack_b8,1);
    FUN_003713fc(fVar5,uVar29,uVar31,auStack_b8,1);
    if ((*(ushort *)(DAT_0026036c + param_1) & 1) == 0) {
      local_c8 = *(float *)(param_1 + 0x8a8) * fVar32;
      local_c0 = *(float *)(param_1 + 0x8a8) * fVar32;
      local_c4 = local_c8;
    }
    else {
      local_c8 = fVar33;
      local_c4 = fVar5;
      local_c0 = fVar5;
    }
    local_bc = fVar33;
    FUN_00357a50(param_1 + 0x228,0,4,&local_c8,0);
    puVar17 = (undefined1 *)(param_1 + 0x148);
    iVar11 = param_1 + 0x228;
    uVar29 = DAT_00260374;
    uVar31 = DAT_00260370;
    goto LAB_00260208;
  }
  FUN_0013463c(param_1,local_88);
  FUN_00372224(&local_e8,param_1 + 0x148);
  fVar21 = *(float *)(param_1 + 0xa20);
  uVar18 = in_fpscr & 0xfffffff | (uint)(fVar21 < fVar5) << 0x1f | (uint)(fVar21 == fVar5) << 0x1e;
  uVar27 = uVar18 | (uint)(NAN(fVar21) || NAN(fVar5)) << 0x1c;
  bVar3 = (byte)(uVar18 >> 0x18);
  if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar27 >> 0x1c) & 1)) {
    FUN_003713fc(DAT_00260378,DAT_0026037c,DAT_00260378,&local_e8,0);
    FUN_00371348(DAT_00260380,DAT_00260384,DAT_00260380,&local_e8,1);
    if (*(int *)(param_1 + 0x2b4) != 0) {
      local_f8 = *DAT_00260388;
      local_f4 = DAT_00260388[1];
      local_f0 = DAT_00260388[2];
      local_ec = *(float *)(param_1 + 0xa20) * fVar32;
      FUN_00358778(*(undefined4 *)(param_1 + 0x2b4),0,4,&local_f8,2);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2b4) + 0xc) + 0xc) =
           *(undefined4 *)(local_88 + 0x7f44);
      *(undefined1 *)(*(int *)(param_1 + 0x2b4) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x2b4),&local_e8);
      FUN_00372170(*(undefined4 *)(param_1 + 0x2b4),1);
    }
  }
  FUN_00372224(&local_e8,param_1 + 0x148);
  uVar29 = DAT_00260764;
  fVar21 = *(float *)(param_1 + 0xa08);
  uVar18 = uVar27 & 0xfffffff | (uint)(fVar21 < fVar5) << 0x1f | (uint)(fVar21 == fVar5) << 0x1e;
  uVar28 = uVar18 | (uint)(NAN(fVar21) || NAN(fVar5)) << 0x1c;
  bVar3 = (byte)(uVar18 >> 0x18);
  if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar28 >> 0x1c) & 1)) {
    fVar21 = *(float *)(param_1 + 0xa7c);
    local_104 = fVar33;
    uVar18 = uVar27 & 0xfffffff | (uint)(fVar21 < fVar5) << 0x1f | (uint)(fVar21 == fVar5) << 0x1e;
    uVar28 = uVar18 | (uint)(NAN(fVar21) || NAN(fVar5)) << 0x1c;
    bVar3 = (byte)(uVar18 >> 0x18);
    if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar28 >> 0x1c) & 1)) {
      local_100 = fVar33;
      local_fc = fVar33;
      local_f8 = *(float *)(param_1 + 0x8b0);
    }
    else {
      local_100 = DAT_0026038c;
      local_fc = DAT_00260390;
      local_f8 = fVar33;
    }
    iVar11 = 1;
    do {
      iVar12 = param_1 + iVar11 * 0xc;
      local_f4 = *(float *)(iVar12 + 0x930);
      local_f0 = *(float *)(iVar12 + 0x934);
      local_ec = *(float *)(iVar12 + 0x938);
      local_e0 = 0.0;
      local_e4 = 0.0;
      local_e8 = 1.0;
      local_d8 = 0.0;
      local_d4 = 1.0;
      local_d0 = 0.0;
      local_c8 = 0.0;
      local_c4 = 0.0;
      local_c0 = 1.0;
      local_dc = local_f4;
      local_cc = local_f0;
      local_bc = local_ec;
      FUN_00371fac(&local_e8,local_88 + 0x2fc);
      fVar21 = *(float *)(param_1 + 0xa08);
      local_e8 = local_e8 * fVar21;
      local_d8 = local_d8 * fVar21;
      local_c8 = local_c8 * fVar21;
      local_e4 = local_e4 * fVar21;
      local_d4 = local_d4 * fVar21;
      local_c4 = local_c4 * fVar21;
      local_e0 = local_e0 * fVar21;
      local_d0 = local_d0 * fVar21;
      local_c0 = local_c0 * fVar21;
      FUN_003738a8(uVar29);
      FUN_00371234(&local_e8,1);
      iVar12 = param_1 + iVar11 * 4;
      if (*(int *)(iVar12 + 700) != 0) {
        FUN_00358778(*(int *)(iVar12 + 700),0,4,&local_104,0);
        *(undefined1 *)(*(int *)(iVar12 + 700) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar12 + 700),&local_e8);
        FUN_00372170(*(undefined4 *)(iVar12 + 700),0);
      }
      iVar11 = (int)(short)((short)iVar11 + 1);
    } while (iVar11 < 0xf);
  }
  FUN_00372224(&local_e8,param_1 + 0x148);
  fVar21 = *(float *)(param_1 + 0x8ac);
  uVar18 = uVar28 & 0xfffffff | (uint)(fVar21 < fVar5) << 0x1f | (uint)(fVar21 == fVar5) << 0x1e;
  uVar27 = uVar18 | (uint)(NAN(fVar21) || NAN(fVar5)) << 0x1c;
  bVar3 = (byte)(uVar18 >> 0x18);
  if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar27 >> 0x1c) & 1)) {
    FUN_003713fc(*(undefined4 *)(param_1 + 0x8b4),*(undefined4 *)(param_1 + 0x8b8),
                 *(undefined4 *)(param_1 + 0x8bc),&local_e8,0);
    FUN_00371fac(&local_e8,local_88 + 0x2fc);
    FUN_00371234(DAT_00260768,&local_e8,1);
    FUN_00371348(DAT_0026076c,DAT_0026076c,fVar33,&local_e8,1);
    if (*(int *)(param_1 + 0x344) != 0) {
      local_f8 = *DAT_00260770;
      local_f4 = DAT_00260770[1];
      local_f0 = DAT_00260770[2];
      local_ec = *(float *)(param_1 + 0x8ac) * fVar32;
      FUN_00358778(*(undefined4 *)(param_1 + 0x344),0,4,&local_f8,2);
      *(undefined1 *)(*(int *)(param_1 + 0x344) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x344),&local_e8);
      FUN_00372170(*(undefined4 *)(param_1 + 0x344),0);
    }
  }
  FUN_00372224(&local_e8,param_1 + 0x148);
  fVar21 = DAT_00260774;
  fVar23 = *(float *)(param_1 + 0xa7c);
  uVar18 = uVar27 & 0xfffffff | (uint)(fVar23 < fVar5) << 0x1f | (uint)(fVar23 == fVar5) << 0x1e;
  uVar27 = uVar18 | (uint)(NAN(fVar23) || NAN(fVar5)) << 0x1c;
  bVar3 = (byte)(uVar18 >> 0x18);
  if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar27 >> 0x1c) & 1)) {
    iVar11 = *(int *)(iVar13 + 0x30);
    FUN_003713fc(*(float *)(iVar11 + 0x28) + DAT_0026077c,*(float *)(iVar11 + 0x2c) + DAT_00260778,
                 *(float *)(iVar11 + 0x30) - DAT_0026077c,&local_e8,0);
    FUN_003735e8(DAT_00260780,&local_e8,1);
    FUN_003713fc(fVar5,fVar5,DAT_00260784,&local_e8,1);
    FUN_00371348(DAT_00260788,DAT_00260788,*(float *)(param_1 + 0xa7c) * fVar21,&local_e8,1);
    FUN_00369014(DAT_0026078c,&local_e8,1);
    if (*(int *)(param_1 + 0x2b8) != 0) {
      local_f8 = *DAT_00260790;
      local_f4 = DAT_00260790[1];
      local_f0 = DAT_00260790[2];
      local_ec = *(float *)(param_1 + 0xa78) * fVar32;
      FUN_00358778(*(undefined4 *)(param_1 + 0x2b8),0,4,&local_f8,2);
      *(undefined1 *)(*(int *)(param_1 + 0x2b8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x2b8),&local_e8);
      FUN_00372170(*(undefined4 *)(param_1 + 0x2b8),0);
    }
  }
  FUN_00372224(&local_e8,param_1 + 0x148);
  fVar23 = *(float *)(param_1 + 0xa80);
  uVar18 = uVar27 & 0xfffffff | (uint)(fVar23 < fVar5) << 0x1f | (uint)(fVar23 == fVar5) << 0x1e;
  uVar27 = uVar18 | (uint)(NAN(fVar23) || NAN(fVar5)) << 0x1c;
  bVar3 = (byte)(uVar18 >> 0x18);
  if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar27 >> 0x1c) & 1)) {
    iVar13 = *(int *)(iVar13 + 0x30);
    FUN_003713fc(*(undefined4 *)(iVar13 + 0x28),*(float *)(iVar13 + 0x2c) + DAT_00260794,
                 *(undefined4 *)(iVar13 + 0x30),&local_e8,0);
    FUN_00371fac(&local_e8,local_88 + 0x2fc);
    uVar29 = *(undefined4 *)(param_1 + 0xa80);
    FUN_00371348(uVar29,uVar29,uVar29,&local_e8,1);
    FUN_00371234(*(undefined4 *)(param_1 + 0xa84),&local_e8,1);
    local_f8 = *DAT_00260798;
    local_f4 = DAT_00260798[1];
    local_f0 = DAT_00260798[2];
    local_ec = DAT_00260798[3];
    FUN_00358778(*(undefined4 *)(param_1 + 0x2f8),0,4,&local_f8,0);
    FUN_00358778(*(undefined4 *)(param_1 + 0x2fc),0,4,&local_f8,0);
    if (*(int *)(param_1 + 0x2f8) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x2f8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x2f8),&local_e8);
      FUN_00372170(*(undefined4 *)(param_1 + 0x2f8),0);
    }
    FUN_00371234(*(float *)(param_1 + 0xa84) * DAT_00260bd8,&local_e8,1);
    if (*(int *)(param_1 + 0x2fc) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x2fc) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x2fc),&local_e8);
      FUN_00372170(*(undefined4 *)(param_1 + 0x2fc),0);
    }
  }
  FUN_00372224(&local_e8,param_1 + 0x148);
  fVar10 = DAT_00260bfc;
  puVar14 = DAT_00260bf8;
  uVar31 = DAT_00260bf4;
  fVar9 = DAT_00260bf0;
  fVar8 = DAT_00260bec;
  fVar7 = DAT_00260be8;
  fVar6 = DAT_00260be4;
  fVar23 = DAT_00260be0;
  uVar29 = DAT_00260bdc;
  fVar30 = *(float *)(param_1 + 0xa88);
  uVar18 = uVar27 & 0xfffffff | (uint)(fVar30 < fVar5) << 0x1f | (uint)(fVar30 == fVar5) << 0x1e;
  uVar27 = uVar18 | (uint)(NAN(fVar30) || NAN(fVar5)) << 0x1c;
  bVar3 = (byte)(uVar18 >> 0x18);
  if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar27 >> 0x1c) & 1)) {
    local_f8 = *(float *)(local_88 + 0x20ac);
    iVar13 = 0;
    do {
      FUN_003720a4(local_f8,&local_128);
      fVar30 = (float)VectorSignedToFloat(iVar13,(byte)(uVar27 >> 0x15) & 3);
      local_e8 = local_128;
      local_e4 = fStack_124;
      local_e0 = fStack_120;
      local_dc = fStack_11c;
      local_d8 = fStack_118;
      local_d4 = local_114;
      local_d0 = fStack_110;
      local_cc = fStack_10c;
      local_c8 = fStack_108;
      local_c4 = local_104;
      local_f4 = fVar6 + fVar30 * fVar23;
      local_c0 = local_100;
      local_bc = local_fc;
      local_f0 = fVar7;
      local_ec = fVar5;
      FUN_00372070(&local_e8,&local_e8,&local_f4);
      fVar30 = fVar33;
      if (6 < iVar13) {
        fVar30 = (float)VectorSignedToFloat(iVar13 + -7,(byte)(uVar27 >> 0x15) & 3);
        fVar30 = fVar33 - fVar30 * fVar8;
      }
      FUN_00371fac(&local_e8,local_88 + 0x2fc);
      fVar30 = fVar30 * fVar9;
      local_e8 = local_e8 * fVar30;
      local_d8 = local_d8 * fVar30;
      local_c8 = local_c8 * fVar30;
      local_e4 = local_e4 * fVar30;
      local_d4 = local_d4 * fVar30;
      local_c4 = local_c4 * fVar30;
      FUN_00371e50(uVar31);
      FUN_00371234(&local_e8,1);
      iVar11 = param_1 + iVar13 * 4;
      if (*(int *)(iVar11 + 700) != 0) {
        local_138 = *puVar14;
        uStack_134 = puVar14[1];
        uStack_130 = puVar14[2];
        local_12c = *(float *)(param_1 + 0xa88) * fVar10;
        FUN_00358778(*(undefined4 *)(iVar11 + 700),0,4,&local_138,0);
        *(undefined1 *)(*(int *)(iVar11 + 700) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar11 + 700),&local_e8);
        FUN_00372170(*(undefined4 *)(iVar11 + 700),0);
      }
      iVar13 = (int)(char)((char)iVar13 + '\x01');
    } while (iVar13 < 0xb);
  }
  puVar15 = DAT_00260f1c;
  puVar14 = DAT_00260c00;
  local_68 = DAT_00260c00;
  local_6c = DAT_00260c00 + 0xf;
  local_70 = DAT_00260c00 + 3;
  local_74 = DAT_00260c00 + 0x12;
  local_78 = DAT_00260c00 + 6;
  local_7c = DAT_00260c00 + 0x15;
  local_80 = DAT_00260c00 + 9;
  local_84 = DAT_00260c00 + 0x18;
  if (*(char *)(param_1 + 0xa0e) == '\0' && *(short *)(DAT_00260348 + 4) == 0) {
    puVar19 = (undefined4 *)(param_1 + 0x8fc);
    uVar29 = *(undefined4 *)(param_1 + 0x900);
    uVar31 = *(undefined4 *)(param_1 + 0x904);
    *DAT_00260f1c = *puVar19;
    puVar15[1] = uVar29;
    puVar15[2] = uVar31;
    puVar15 = DAT_00260f20;
    puVar20 = (undefined4 *)(param_1 + 0x908);
    uVar29 = *(undefined4 *)(param_1 + 0x90c);
    uVar31 = *(undefined4 *)(param_1 + 0x910);
    *DAT_00260f20 = *puVar20;
    puVar15[1] = uVar29;
    puVar15[2] = uVar31;
    uVar29 = *(undefined4 *)(param_1 + 0x900);
    uVar31 = *(undefined4 *)(param_1 + 0x904);
    *puVar14 = *puVar19;
    puVar14[1] = uVar29;
    puVar14[2] = uVar31;
    uVar29 = *(undefined4 *)(param_1 + 0x90c);
    uVar31 = *(undefined4 *)(param_1 + 0x910);
    *local_6c = *puVar20;
    puVar14[0x10] = uVar29;
    puVar14[0x11] = uVar31;
    uVar29 = *(undefined4 *)(param_1 + 0x900);
    uVar31 = *(undefined4 *)(param_1 + 0x904);
    *local_70 = *puVar19;
    puVar14[4] = uVar29;
    puVar14[5] = uVar31;
    uVar29 = *(undefined4 *)(param_1 + 0x90c);
    uVar31 = *(undefined4 *)(param_1 + 0x910);
    *local_74 = *puVar20;
    puVar14[0x13] = uVar29;
    puVar14[0x14] = uVar31;
    uVar29 = *(undefined4 *)(param_1 + 0x900);
    uVar31 = *(undefined4 *)(param_1 + 0x904);
    *local_78 = *puVar19;
    puVar14[7] = uVar29;
    puVar14[8] = uVar31;
    uVar29 = *(undefined4 *)(param_1 + 0x90c);
    uVar31 = *(undefined4 *)(param_1 + 0x910);
    *local_7c = *puVar20;
    puVar14[0x16] = uVar29;
    puVar14[0x17] = uVar31;
    uVar29 = *(undefined4 *)(param_1 + 0x900);
    uVar31 = *(undefined4 *)(param_1 + 0x904);
    *local_80 = *puVar19;
    puVar14[10] = uVar29;
    puVar14[0xb] = uVar31;
    uVar29 = *(undefined4 *)(param_1 + 0x90c);
    uVar31 = *(undefined4 *)(param_1 + 0x910);
    cVar16 = '\0';
    *local_84 = *puVar20;
    puVar14[0x19] = uVar29;
    puVar14[0x1a] = uVar31;
  }
  else {
    FUN_00372224(&local_e8,param_1 + 0x148);
    if (*(char *)(param_1 + 0xa0e) != '\0') {
      uVar27 = uVar27 & 0xfffffff | (uint)(*(float *)(local_88 + 0x7f44) == fVar5) << 0x1e;
      if (SUB41(uVar27 >> 0x1e,0)) {
        puVar14 = (undefined4 *)FUN_00333270(*(undefined4 *)(param_1 + 0x33c));
        puVar19 = DAT_00260c04 + 1;
        puVar25 = DAT_00260c04 + 2;
        puVar20 = DAT_00260c04 + 0x7b;
        puVar24 = DAT_00260c04 + 0x7c;
        puVar22 = DAT_00260c04 + 0x7d;
        local_ec = 5.74532e-44;
        puVar15 = DAT_00260c04;
        do {
          *puVar14 = *puVar15;
          puVar14[1] = *puVar19;
          local_ec = (float)((int)local_ec + -1);
          puVar14[2] = *puVar25;
          puVar19 = puVar19 + 3;
          puVar14[3] = *puVar20;
          puVar14[4] = *puVar24;
          uVar31 = *puVar22;
          puVar15 = puVar15 + 3;
          puVar25 = puVar25 + 3;
          puVar20 = puVar20 + 3;
          puVar24 = puVar24 + 3;
          puVar22 = puVar22 + 3;
          puVar14[5] = uVar31;
          puVar14 = puVar14 + 6;
        } while (local_ec != 0.0);
      }
      else {
        FUN_003cfff4(param_1,param_1 + 0x8fc,param_1 + 0x908);
      }
      *(undefined2 *)(DAT_00260348 + 4) = 0xff;
    }
    fVar23 = DAT_00260c08;
    if ('\x04' < *(char *)(DAT_00260348 + 3)) {
      if (*(char *)(param_1 + 0xa0e) == '\0') {
        puVar14 = (undefined4 *)FUN_00333270(*(undefined4 *)(param_1 + 0x33c));
        puVar22 = DAT_00260c04 + 1;
        local_ec = 5.74532e-44;
        puVar15 = DAT_00260c04;
        puVar19 = DAT_00260c04 + 0x7c;
        puVar20 = DAT_00260c04 + 0x7b;
        puVar24 = DAT_00260c04 + 2;
        puVar25 = DAT_00260c04 + 0x7d;
        do {
          *puVar14 = *puVar15;
          uVar31 = *puVar22;
          puVar22 = puVar22 + 3;
          puVar14[1] = uVar31;
          puVar15 = puVar15 + 3;
          local_ec = (float)((int)local_ec + -1);
          puVar14[2] = *puVar24;
          puVar14[3] = *puVar20;
          puVar14[4] = *puVar19;
          puVar14[5] = *puVar25;
          puVar14 = puVar14 + 6;
          puVar19 = puVar19 + 3;
          puVar20 = puVar20 + 3;
          puVar24 = puVar24 + 3;
          puVar25 = puVar25 + 3;
        } while (local_ec != 0.0);
      }
      FUN_003713fc(fVar5,fVar5,fVar5,&local_e8,0);
      bVar26 = *(int *)(param_1 + 0x340) != 0;
      iVar13 = 0;
      if (bVar26) {
        iVar13 = (int)*(short *)(DAT_00260348 + 4);
      }
      if (bVar26 && iVar13 != 0) {
        local_ec = (float)VectorSignedToFloat(iVar13,(byte)(uVar27 >> 0x15) & 3);
        local_f8 = fVar33;
        local_f0 = DAT_00260f04;
        local_ec = local_ec * fVar32;
        local_f4 = fVar21;
        FUN_003429c8(*(undefined4 *)(param_1 + 0x340),0,&local_f8);
        uVar18 = *(uint *)(local_88 + 0x5bf4);
        lVar2 = (longlong)(int)uVar18 * (longlong)DAT_00260f08 + ((ulonglong)uVar18 << 0x20);
        iVar11 = (int)((ulonglong)lVar2 >> 0x20);
        iVar13 = iVar11 >> 5;
        fVar32 = (float)VectorSignedToFloat(uVar18 + (iVar13 - (iVar11 >> 0x1f)) * -0x3c,
                                            (byte)(uVar27 >> 0x15) & 3);
        FUN_003713fc(fVar32 * DAT_00260f0c * fVar23,fVar5,fVar5,&local_128,0,iVar13,(int)lVar2);
        FUN_00371348(fVar23,uVar29,fVar33,&local_128,1);
        iVar13 = *(int *)(param_1 + 0x340);
        *(float *)(iVar13 + 0x140) = local_128;
        *(float *)(iVar13 + 0x144) = fStack_124;
        *(float *)(iVar13 + 0x148) = fStack_120;
        *(float *)(iVar13 + 0x14c) = fStack_11c;
        *(float *)(iVar13 + 0x150) = fStack_118;
        *(float *)(iVar13 + 0x154) = local_114;
        *(float *)(iVar13 + 0x158) = fStack_110;
        *(float *)(iVar13 + 0x15c) = fStack_10c;
        *(float *)(iVar13 + 0x160) = fStack_108;
        *(float *)(iVar13 + 0x164) = local_104;
        *(float *)(iVar13 + 0x168) = local_100;
        *(float *)(iVar13 + 0x16c) = local_fc;
        FUN_00371eac(*(undefined4 *)(param_1 + 0x340),0);
      }
    }
    iVar13 = DAT_00260348;
    if (*(char *)(param_1 + 0xa0e) == '\0') {
      uVar18 = uVar27 & 0xfffffff | (uint)(*(float *)(local_88 + 0x7f44) == fVar5) << 0x1e;
      if (!SUB41(uVar18 >> 0x1e,0)) {
        fVar33 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00260f10 + 0x110),
                                            (byte)(uVar18 >> 0x15) & 3);
        sVar1 = *(short *)(DAT_00260348 + 4) -
                (short)(int)(fVar23 + fVar33 * DAT_00260f14 * DAT_00260f18);
        *(short *)(DAT_00260348 + 4) = sVar1;
        if (sVar1 < 1) {
          *(undefined2 *)(iVar13 + 4) = 0;
        }
      }
      puVar14 = DAT_00260f1c;
      puVar15 = (undefined4 *)(param_1 + 0x8fc);
      uVar29 = *(undefined4 *)(param_1 + 0x900);
      uVar31 = *(undefined4 *)(param_1 + 0x904);
      *DAT_00260f1c = *puVar15;
      puVar14[1] = uVar29;
      puVar14[2] = uVar31;
      puVar14 = DAT_00260f20;
      puVar19 = (undefined4 *)(param_1 + 0x908);
      uVar29 = *(undefined4 *)(param_1 + 0x90c);
      uVar31 = *(undefined4 *)(param_1 + 0x910);
      *DAT_00260f20 = *puVar19;
      puVar14[1] = uVar29;
      puVar14[2] = uVar31;
      uVar29 = *(undefined4 *)(param_1 + 0x900);
      uVar31 = *(undefined4 *)(param_1 + 0x904);
      *local_68 = *puVar15;
      local_68[1] = uVar29;
      local_68[2] = uVar31;
      uVar29 = *(undefined4 *)(param_1 + 0x90c);
      uVar31 = *(undefined4 *)(param_1 + 0x910);
      *local_6c = *puVar19;
      local_6c[1] = uVar29;
      local_6c[2] = uVar31;
      uVar29 = *(undefined4 *)(param_1 + 0x900);
      uVar31 = *(undefined4 *)(param_1 + 0x904);
      *local_70 = *puVar15;
      local_70[1] = uVar29;
      local_70[2] = uVar31;
      uVar29 = *(undefined4 *)(param_1 + 0x90c);
      uVar31 = *(undefined4 *)(param_1 + 0x910);
      *local_74 = *puVar19;
      local_74[1] = uVar29;
      local_74[2] = uVar31;
      uVar29 = *(undefined4 *)(param_1 + 0x900);
      uVar31 = *(undefined4 *)(param_1 + 0x904);
      *local_78 = *puVar15;
      local_78[1] = uVar29;
      local_78[2] = uVar31;
      uVar29 = *(undefined4 *)(param_1 + 0x90c);
      uVar31 = *(undefined4 *)(param_1 + 0x910);
      *local_7c = *puVar19;
      local_7c[1] = uVar29;
      local_7c[2] = uVar31;
      uVar29 = *(undefined4 *)(param_1 + 0x900);
      uVar31 = *(undefined4 *)(param_1 + 0x904);
      *local_80 = *puVar15;
      local_80[1] = uVar29;
      local_80[2] = uVar31;
      uVar29 = *(undefined4 *)(param_1 + 0x90c);
      uVar31 = *(undefined4 *)(param_1 + 0x910);
      *local_84 = *puVar19;
      local_84[1] = uVar29;
      local_84[2] = uVar31;
    }
    if (*(float *)(local_88 + 0x7f44) == fVar5) goto LAB_00260e54;
    cVar16 = *(char *)(DAT_00260348 + 3) + '\x01';
  }
  *(char *)(DAT_00260348 + 3) = cVar16;
LAB_00260e54:
  FUN_001304d8(param_1,local_88);
  return;
}
