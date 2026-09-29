// OoT3D decomp @ 0013bb74  name=FUN_0013bb74  size=3604

void FUN_0013bb74(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  short sVar11;
  undefined2 uVar12;
  int iVar13;
  int iVar14;
  undefined1 uVar15;
  undefined4 *puVar16;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r1_02;
  undefined4 *extraout_r1_03;
  undefined4 *extraout_r1_04;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  bool bVar20;
  uint in_fpscr;
  uint uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 *local_6c;
  int local_68;
  undefined4 *local_64;
  int local_60;

  bVar5 = false;
  uVar17 = 0;
  iVar18 = *(int *)(param_2 + 0x20ac);
  iVar13 = FUN_0036c5bc(param_2,0);
  FUN_003731e0(param_1 + 0x1a4);
  sVar11 = *(short *)(param_1 + 0x25e) + 1;
  iVar14 = (int)sVar11;
  bVar20 = iVar14 - 0x5bU < DAT_0013bfb4;
  *(short *)(param_1 + 0x25e) = sVar11;
  if ((bVar20) ||
     ((iVar22 = VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3), DAT_0013bfb8 < iVar22 &&
      (iVar14 < DAT_0013bfbc)))) {
    FUN_00375bcc(param_1,DAT_0013bfc0);
  }
  uVar10 = DAT_0013c7b4;
  uVar19 = DAT_0013c37c;
  fVar24 = DAT_0013c36c;
  fVar9 = DAT_0013bfe8;
  fVar8 = DAT_0013bfe4;
  fVar27 = DAT_0013bfe0;
  fVar30 = DAT_0013bfdc;
  uVar7 = DAT_0013bfd8;
  uVar6 = DAT_0013bfd4;
  fVar28 = DAT_0013bfd0;
  uVar33 = DAT_0013bfcc;
  uVar32 = DAT_0013bfc8;
  fVar29 = DAT_0013bfc4;
  local_60 = param_2 + 0x2298;
  local_64 = (undefined4 *)(param_1 + 0x3b0);
  local_68 = param_2 + 0x208c;
  puVar16 = (undefined4 *)(param_1 + 0x3a4);
  local_6c = puVar16;
  switch(*(undefined2 *)(param_1 + 0x3a2)) {
  default:
    goto switchD_0013bc6c_caseD_0;
  case 1:
    FUN_00367494(param_2,local_60);
    FUN_0036e980(param_2,param_1,1);
    uVar12 = FUN_00367d74(param_2);
    *(undefined2 *)(param_1 + 0x3a0) = uVar12;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x3a0),7);
    *(undefined2 *)(param_1 + 0x3a2) = 2;
    fVar24 = DAT_0013bfec;
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(float *)(iVar18 + 0x6c) = fVar24;
    *(undefined2 *)(param_1 + 0x264) = 0x4b;
    fVar24 = DAT_0013bff0;
    uVar32 = *(undefined4 *)(iVar13 + 0x90);
    uVar19 = *(undefined4 *)(iVar13 + 0x94);
    *local_6c = *(undefined4 *)(iVar13 + 0x8c);
    local_6c[1] = uVar32;
    local_6c[2] = uVar19;
    uVar32 = *(undefined4 *)(iVar13 + 0x84);
    uVar19 = *(undefined4 *)(iVar13 + 0x88);
    *local_64 = *(undefined4 *)(iVar13 + 0x80);
    local_64[1] = uVar32;
    local_64[2] = uVar19;
    fVar25 = *(float *)(param_1 + 700);
    *(float *)(param_1 + 0x3d4) = fVar25;
    *(float *)(param_1 + 0x3d8) = fVar27;
    fVar23 = *(float *)(param_1 + 0x2c4);
    *(float *)(param_1 + 0x3dc) = fVar23 + fVar24;
    *(float *)(param_1 + 0x3ec) = fVar25;
    fVar26 = *(float *)(param_1 + 0x2c0) - fVar28;
    *(float *)(param_1 + 0x3f0) = fVar26;
    *(float *)(param_1 + 0x3f4) = fVar23;
    *(float *)(param_1 + 0x3bc) = ABS(*(float *)(iVar13 + 0x8c) - fVar25);
    *(float *)(param_1 + 0x3c0) = ABS(*(float *)(iVar13 + 0x90) - fVar27);
    *(float *)(param_1 + 0x3c4) = ABS(*(float *)(iVar13 + 0x94) - (fVar23 + fVar24));
    *(float *)(param_1 + 0x3c8) = ABS(*(float *)(iVar13 + 0x80) - fVar25);
    *(float *)(param_1 + 0x3cc) = ABS(*(float *)(iVar13 + 0x84) - fVar26);
    *(float *)(param_1 + 0x3d0) = ABS(*(float *)(iVar13 + 0x88) - fVar23);
    *(undefined4 *)(param_1 + 0x408) = uVar6;
    *(undefined4 *)(param_1 + 1000) = uVar7;
    *(undefined4 *)(param_1 + 0x3e4) = uVar7;
    *(undefined4 *)(param_1 + 0x3e0) = uVar7;
    uVar32 = DAT_0013bff4;
    *(undefined4 *)(param_1 + 0x400) = DAT_0013bff4;
    *(undefined4 *)(param_1 + 0x3fc) = uVar32;
    *(undefined4 *)(param_1 + 0x3f8) = uVar32;
    *(undefined2 *)(param_1 + 0x264) = 0xe1;
    *(undefined2 *)(param_1 + 0x24a) = 1;
  case 2:
    sVar11 = *(short *)(param_1 + 0x24a);
    if (sVar11 == 0) {
      iVar13 = FUN_003736fc(*(float *)(param_1 + 0x278) * DAT_0013bff8,param_1 + 0x1a4);
      if (iVar13 != 0) {
        uVar32 = FUN_0036ae14(param_1 + 0x1a4,0x11);
        fVar27 = (float)VectorSignedToFloat(uVar32,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x278) = fVar27 * fVar29;
        *(undefined4 *)(param_1 + 0x234) = 1;
        uVar32 = FUN_0036ae14(param_1 + 0x1a4,0x11);
        uVar32 = VectorSignedToFloat(uVar32,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(fVar8,DAT_0013bfec,uVar32,DAT_0013bfec,param_1 + 0x1a4,0x11,3);
        *(undefined2 *)(param_1 + 0x24a) = 1;
      }
    }
    else {
      if (sVar11 == 1) {
        iVar13 = FUN_003736fc(*(float *)(param_1 + 0x278) * DAT_0013bff8,param_1 + 0x1a4);
        if (iVar13 != 0) {
          uVar32 = FUN_0036ae14(param_1 + 0x1a4,3);
          fVar27 = (float)VectorSignedToFloat(uVar32,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x278) = fVar27 * fVar29;
          FUN_00370350(DAT_0013bffc,param_1 + 0x1a4,3);
          *(undefined2 *)(param_1 + 0x24a) = 2;
        }
      }
      else if (sVar11 != 2) goto LAB_0013bed4;
      uVar17 = 1;
    }
LAB_0013bed4:
    FUN_00370084(param_1 + 0xbe,(int)(short)(*(short *)(param_1 + 0x23c) * -100),5,DAT_0013c000);
    FUN_00373500(*(float *)(param_1 + 0x2c4) + DAT_0013c004,uVar6,fVar8,param_1 + 0x3dc);
    FUN_00373500(uVar33,uVar7,uVar33,param_1 + 0x2c);
    fVar29 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x23c) * (short)DAT_0013c008));
    *(float *)(param_1 + 0x2c) = fVar29 + *(float *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 700);
    *(float *)(param_1 + 0x3f0) = *(float *)(param_1 + 0x2c0) - fVar28;
    *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x2c4);
    uVar32 = DAT_0013c00c;
    puVar16 = extraout_r1;
    if (*(short *)(param_1 + 0x264) != 0) goto switchD_0013bc6c_caseD_0;
    *(undefined2 *)(param_1 + 0x3a2) = 3;
    *(undefined4 *)(param_1 + 0x280) = uVar32;
    uVar32 = DAT_0013c014;
    *(undefined4 *)(param_1 + 0x3d8) = DAT_0013c010;
    uVar33 = DAT_0013c018;
    *(short *)(param_1 + 0x264) = (short)uVar32;
    *(undefined2 *)(param_1 + 0x266) = 0x4b;
    *(undefined4 *)(iVar18 + 0x28) = uVar33;
    bVar5 = true;
    *(float *)(iVar18 + 0x30) = DAT_0013c01c;
    uVar17 = 1;
    *(undefined4 *)(param_1 + 0x234) = 2;
    break;
  case 3:
    if (*(short *)(param_1 + 0x266) == 2) {
      uVar32 = *(undefined4 *)(param_1 + 0x128);
      FUN_0036aa20(DAT_0013c36c,DAT_0013c368,DAT_0013c01c,local_68,param_1,param_2,0x6d,0x4000,0,0,
                   0x29);
      *(undefined4 *)(param_1 + 0x128) = uVar32;
      *(undefined4 *)(param_1 + 0x234) = 4;
      FUN_00367c7c(param_2,DAT_0013c370,0);
    }
    uVar32 = DAT_0013c008;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + -200;
    fVar24 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x23c) * (short)uVar32));
    fVar28 = DAT_0013c374;
    *(float *)(param_1 + 0x2c) = fVar24 + *(float *)(param_1 + 0x2c);
    fVar28 = *(float *)(param_1 + 0x284) + fVar28;
    *(float *)(param_1 + 0x284) = fVar28;
    fVar25 = (float)FUN_002cfca0((int)(short)(int)fVar28);
    fVar31 = *(float *)(param_1 + 0x280);
    fVar26 = (float)FUN_00338f60((int)(short)(int)*(float *)(param_1 + 0x284));
    uVar32 = DAT_0013c378;
    fVar23 = DAT_0013c36c;
    fVar24 = DAT_0013c01c;
    fVar28 = DAT_0013bfec;
    fVar26 = fVar26 * *(float *)(param_1 + 0x280) + DAT_0013c01c;
    *(float *)(param_1 + 0x3a4) = fVar25 * fVar31 + DAT_0013c36c;
    *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x3d8);
    *(float *)(param_1 + 0x3ac) = fVar26;
    *(float *)(param_1 + 0x3b0) = fVar23;
    *(undefined4 *)(param_1 + 0x3b4) = uVar32;
    *(float *)(param_1 + 0x3b8) = fVar24;
    FUN_00373500(fVar28,uVar7,fVar8,param_1 + 0x3d8);
    uVar33 = DAT_0013c37c;
    FUN_00373500(DAT_0013c380,uVar7,DAT_0013c37c,param_1 + 0x280);
    FUN_00373500(fVar23,uVar7,fVar29,param_1 + 0x28);
    FUN_00373500(fVar27,uVar7,uVar33,param_1 + 0x2c);
    FUN_00373500(fVar24,uVar7,fVar29,param_1 + 0x30);
    if (*(short *)(param_1 + 0x264) == 0) {
      *(undefined2 *)(param_1 + 0x3a2) = 4;
      *(float *)(param_1 + 0x2a0) = fVar28;
      *(undefined2 *)(param_1 + 0x264) = 0x4b;
      *(undefined4 *)(param_1 + 0x234) = 5;
      FUN_00370350(uVar32,param_1 + 0x1a4,5);
      *(float *)(param_1 + 0x28) = fVar23;
      *(float *)(param_1 + 0x2c) = fVar27;
      *(float *)(param_1 + 0x30) = fVar24;
      *(undefined2 *)(param_1 + 0xbe) = 0;
      *(undefined2 *)(param_1 + 0x256) = 0;
      FUN_00375bcc(param_1,DAT_0013c384);
      uVar17 = 2;
      puVar16 = extraout_r1_01;
    }
    else {
      uVar17 = 1;
      puVar16 = extraout_r1_00;
    }
    bVar5 = true;
switchD_0013bc6c_caseD_0:
    if (uVar17 == 0) goto LAB_0013c910;
    break;
  case 4:
    *(float *)(param_1 + 0x2c) = DAT_0013bfe0;
    *(float *)(param_1 + 0x3a4) = fVar24;
    uVar32 = DAT_0013c394;
    *(float *)(param_1 + 0x3a8) = fVar27;
    *(undefined4 *)(param_1 + 0x3ac) = uVar32;
    *(float *)(param_1 + 0x3b0) = fVar24;
    bVar5 = true;
    *(undefined4 *)(param_1 + 0x3b4) = DAT_0013c398;
    uVar17 = 2;
    *(float *)(param_1 + 0x3b8) = DAT_0013c01c;
    if (*(short *)(param_1 + 0x264) == 0) {
      *(undefined2 *)(param_1 + 0x3a2) = 5;
      *(undefined2 *)(param_1 + 0x256) = 0;
      *(undefined2 *)(param_1 + 0x264) = 0x3c;
    }
    break;
  case 5:
    bVar5 = true;
    uVar17 = 3;
    FUN_0036fc20(DAT_0013bfd8,DAT_0013c37c,param_1 + 0x3a8);
    FUN_00373500(uVar32,uVar7,fVar9,param_1 + 0x3ac);
    FUN_00373500(DAT_0013c7b0,uVar7,uVar19,param_1 + 0x3b4);
    puVar16 = extraout_r1_02;
    if (*(short *)(param_1 + 0x264) == 0) {
      *(undefined2 *)(param_1 + 0x264) = 0x177;
      uVar32 = 6;
      *(undefined2 *)(param_1 + 0x3a2) = 6;
LAB_0013c5ec:
      bVar5 = true;
      *(undefined4 *)(param_1 + 0x234) = uVar32;
    }
    break;
  case 6:
    bVar5 = true;
    uVar17 = 10;
    if (*(short *)(param_1 + 0x264) == 0xe1) {
      FUN_0036ec40(0,DAT_0013c7b8);
      z_actor_003738d0(DAT_0013c36c,uVar10,DAT_0013c7bc,local_68,param_2,0x5d,0,0,0,0xffffffff,1);
    }
    uVar33 = DAT_0013c37c;
    FUN_0036fc20(uVar7,DAT_0013c37c,param_1 + 0x3a8);
    FUN_00373500(uVar32,uVar7,fVar9,param_1 + 0x3ac);
    FUN_00373500(DAT_0013c7b0,uVar7,uVar33,param_1 + 0x3b4);
    puVar16 = extraout_r1_03;
    if (*(short *)(param_1 + 0x264) == 0) {
      local_70 = *(float *)(param_1 + 0x128);
      uVar32 = local_6c[1];
      uVar33 = local_6c[2];
      *(undefined4 *)(iVar13 + 0x8c) = *local_6c;
      *(undefined4 *)(iVar13 + 0x90) = uVar32;
      *(undefined4 *)(iVar13 + 0x94) = uVar33;
      uVar32 = local_6c[1];
      uVar33 = local_6c[2];
      *(undefined4 *)(iVar13 + 0xa4) = *local_6c;
      *(undefined4 *)(iVar13 + 0xa8) = uVar32;
      *(undefined4 *)(iVar13 + 0xac) = uVar33;
      uVar32 = local_64[1];
      uVar33 = local_64[2];
      *(undefined4 *)(iVar13 + 0x80) = *local_64;
      *(undefined4 *)(iVar13 + 0x84) = uVar32;
      *(undefined4 *)(iVar13 + 0x88) = uVar33;
      FUN_0036e9b8(param_2,(int)*(short *)(param_1 + 0x3a0),0);
      *(undefined2 *)(param_1 + 0x3a0) = 0;
      FUN_00367374(param_2,local_60);
      FUN_0036e980(param_2,param_1,7);
      iVar13 = FUN_0035b164();
      uVar32 = DAT_0013c7c0;
      if (iVar13 == 1) {
        iVar13 = FUN_0035b0a0();
        if (iVar13 != 0) {
          FUN_0035af20(DAT_0013c36c,uVar10,DAT_0013c7c4,DAT_0013c36c,uVar10,uVar32,param_2,3,0x8000,
                       0);
        }
      }
      else {
        z_actor_003738d0(DAT_0013c36c,uVar10,DAT_0013c7c0,local_68,param_2,0x5f,0,0,0,0,1);
      }
      *(float *)(param_1 + 0x128) = local_70;
      *(undefined1 *)(param_1 + 0x26e) = 1;
      *(undefined1 *)((int)local_70 + 0x1a6) = 1;
      FUN_0036ec14(param_2,(int)*(char *)(param_2 + DAT_0013c7c8));
      FUN_00375c10(param_2,0x22);
      FUN_0035af04(iVar18,0);
      uVar32 = 7;
      puVar16 = extraout_r1_04;
      goto LAB_0013c5ec;
    }
  }
  fVar28 = DAT_0013c390;
  uVar32 = DAT_0013c38c;
  fVar29 = DAT_0013bfec;
  uVar15 = SUB41(puVar16,0);
  if (9 < uVar17) {
    uVar15 = 0;
  }
  local_80 = DAT_0013bfec;
  local_90 = DAT_0013bfec;
  local_8c = DAT_0013bfec;
  local_88 = DAT_0013bfec;
  local_84 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x108);
  local_7c = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x110);
  if (9 >= uVar17) {
    if (*(short *)(param_1 + 0x25c) == 0) {
      if (*(char *)(param_2 + 0x3237) == '\0') {
        *(undefined1 *)(param_2 + 0x3237) = 3;
        fVar27 = (float)FUN_00371e50(uVar32);
        fVar27 = (float)VectorSignedToFloat((int)(short)(int)fVar27,(byte)(in_fpscr >> 0x15) & 3);
        fVar27 = fVar27 + fVar28;
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar27 < fVar29) << 0x1f |
                (uint)(fVar27 == fVar29) << 0x1e;
        uVar21 = uVar1 | (uint)(NAN(fVar27) || NAN(fVar29)) << 0x1c;
        bVar4 = (byte)(uVar1 >> 0x18);
        if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar21 >> 0x1c) & 1)) {
          fVar27 = (float)FUN_00371e50(uVar32);
          fVar27 = (float)VectorSignedToFloat((int)(short)(int)fVar27,(byte)(uVar21 >> 0x15) & 3);
          uVar12 = (undefined2)(int)((fVar27 + fVar28) * fVar30 * fVar8 - fVar8);
        }
        else {
          fVar27 = (float)FUN_00371e50(uVar32);
          fVar27 = (float)VectorSignedToFloat((int)(short)(int)fVar27,(byte)(uVar21 >> 0x15) & 3);
          uVar12 = (undefined2)(int)(fVar8 + (fVar27 + fVar28) * fVar30 * fVar8);
        }
        *(undefined2 *)(param_1 + 0x25c) = uVar12;
        *(undefined2 *)(param_2 + 0x3254) = 0x28;
      }
      else {
        *(undefined1 *)(param_2 + 0x3237) = 0;
        fVar28 = (float)FUN_00371e50(fVar9);
        fVar28 = (float)VectorSignedToFloat((int)(short)(int)fVar28,(byte)(in_fpscr >> 0x15) & 3);
        fVar28 = fVar28 + fVar9;
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar28 < fVar29) << 0x1f |
                (uint)(fVar28 == fVar29) << 0x1e;
        uVar21 = uVar1 | (uint)(NAN(fVar28) || NAN(fVar29)) << 0x1c;
        bVar4 = (byte)(uVar1 >> 0x18);
        if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar21 >> 0x1c) & 1)) {
          fVar28 = (float)FUN_00371e50(fVar9);
          fVar28 = (float)VectorSignedToFloat((int)(short)(int)fVar28,(byte)(uVar21 >> 0x15) & 3);
          uVar12 = (undefined2)(int)((fVar28 + fVar9) * fVar30 * fVar8 - fVar8);
        }
        else {
          fVar28 = (float)FUN_00371e50(fVar9);
          fVar28 = (float)VectorSignedToFloat((int)(short)(int)fVar28,(byte)(uVar21 >> 0x15) & 3);
          uVar12 = (undefined2)(int)(fVar8 + (fVar28 + fVar9) * fVar30 * fVar8);
        }
        *(undefined2 *)(param_1 + 0x25c) = uVar12;
        *(undefined2 *)(param_2 + 0x3254) = 0x14;
      }
    }
    else {
      *(short *)(param_1 + 0x25c) = *(short *)(param_1 + 0x25c) + -1;
    }
    fVar8 = DAT_0013c7d0;
    fVar27 = DAT_0013c7cc;
    fVar30 = DAT_0013c7bc;
    uVar33 = DAT_0013c7b0;
    fVar28 = DAT_0013c36c;
    sVar2 = *(short *)(param_1 + 0x25a);
    sVar11 = sVar2 + 1;
    lVar3 = (longlong)DAT_0013c7dc * (longlong)(int)sVar11;
    *(short *)(param_1 + 0x25a) =
         sVar11 + ((short)(int)(lVar3 >> 0x22) - (short)(lVar3 >> 0x3f)) * -0x12;
    local_78 = (float)FUN_003738a8(uVar32);
    param_1 = param_1 + sVar2 * 0xc;
    local_78 = local_78 + *(float *)(param_1 + 0x2c8);
    local_74 = (float)FUN_003738a8(uVar32);
    local_74 = local_74 + *(float *)(param_1 + 0x2cc);
    local_70 = (float)FUN_003738a8(uVar32);
    local_70 = local_70 + *(float *)(param_1 + 0x2d0);
    local_8c = fVar29;
    if (uVar17 == 3) {
      local_8c = fVar27;
      local_90 = (fVar28 - local_78) * fVar8;
      local_88 = (fVar30 - local_70) * fVar8;
    }
    fVar29 = (float)FUN_00371e50(uVar33);
    FUN_0035aea0(param_2,&local_78,&local_84,&local_90,(int)(short)((short)(int)fVar29 + 0xf),uVar17
                );
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(undefined1 *)(param_2 + 0x3237) = uVar15;
  *(undefined2 *)(param_2 + 0x3254) = 0x14;
  fVar28 = DAT_0013cadc;
  *(undefined2 *)(param_1 + 600) = 1;
  iVar13 = DAT_0013caec;
  if (uVar17 == 1) {
    fVar29 = *(float *)(param_1 + 0x2a0);
    fVar30 = fVar29 + DAT_0013cae4;
    *(float *)(param_1 + 0x29c) = (DAT_0013cae0 - fVar29) + fVar29 * fVar28;
    *(float *)(param_1 + 0x2a0) = fVar30;
  }
  else if (1 < uVar17) {
    fVar30 = *(float *)(param_1 + 0x2a0) + DAT_0013cae8;
    *(float *)(param_1 + 0x29c) = (DAT_0013cae0 - *(float *)(param_1 + 0x2a0)) * fVar28;
    *(float *)(param_1 + 0x2a0) = fVar30;
    if (iVar13 <= (int)fVar30) {
      *(float *)(param_1 + 0x1e4) = fVar29;
    }
  }
  fVar29 = *(float *)(param_1 + 0x2a0);
  if (0x3f800000 < (int)*(float *)(param_1 + 0x2a0)) {
    fVar29 = DAT_0013cae0;
  }
  *(float *)(param_1 + 0x2a0) = fVar29;
LAB_0013c910:
  if (*(short *)(param_1 + 0x3a0) != 0) {
    if (!bVar5) {
      FUN_00373500(*(undefined4 *)(param_1 + 0x3d4),*(undefined4 *)(param_1 + 0x3e0),
                   *(float *)(param_1 + 0x3bc) * *(float *)(param_1 + 0x404),param_1 + 0x3a4);
      FUN_00373500(*(undefined4 *)(param_1 + 0x3d8),*(undefined4 *)(param_1 + 0x3e4),
                   *(float *)(param_1 + 0x3c0) * *(float *)(param_1 + 0x404),param_1 + 0x3a8);
      FUN_00373500(*(undefined4 *)(param_1 + 0x3dc),*(undefined4 *)(param_1 + 1000),
                   *(float *)(param_1 + 0x3c4) * *(float *)(param_1 + 0x404),param_1 + 0x3ac);
      FUN_00373500(*(undefined4 *)(param_1 + 0x3ec),*(undefined4 *)(param_1 + 0x3f8),
                   *(float *)(param_1 + 0x3c8) * *(float *)(param_1 + 0x404),param_1 + 0x3b0);
      FUN_00373500(*(undefined4 *)(param_1 + 0x3f0),*(undefined4 *)(param_1 + 0x3fc),
                   *(float *)(param_1 + 0x3cc) * *(float *)(param_1 + 0x404),param_1 + 0x3b4);
      FUN_00373500(*(undefined4 *)(param_1 + 0x3f4),*(undefined4 *)(param_1 + 0x400),
                   *(float *)(param_1 + 0x3d0) * *(float *)(param_1 + 0x404),param_1 + 0x3b8);
      FUN_00373500(DAT_0013cae0,DAT_0013cae0,*(undefined4 *)(param_1 + 0x408),param_1 + 0x404);
    }
    FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x3a0),param_1 + 0x3b0,param_1 + 0x3a4);
  }
  if (*(int *)(param_1 + 0x234) != -1) {
    puVar16 = (undefined4 *)(DAT_0013caf0 + *(int *)(param_1 + 0x234) * 0xc);
    iVar14 = puVar16[2];
    uVar32 = puVar16[1];
    uVar33 = *puVar16;
    iVar13 = FUN_0036c5bc(param_2,0xffffffff);
    if (iVar14 < 0) {
      FUN_00367c48(iVar13);
      uVar32 = DAT_0013caf4;
    }
    else {
      if (iVar14 == 0) {
        FUN_00367c54(iVar13);
        *(undefined4 *)(param_1 + 0x22c) = uVar32;
        *(undefined4 *)(param_1 + 0x230) = uVar33;
        FUN_00367c60(iVar13);
        *(undefined4 *)(iVar13 + 0x144) = *(undefined4 *)(param_1 + 0x230);
        return;
      }
      FUN_00367c54(iVar13);
      fVar29 = DAT_0013cae0;
      fVar28 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00373500(uVar32,DAT_0013cae0 / fVar28,uVar32,param_1 + 0x22c);
      fVar28 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00373500(uVar33,fVar29 / fVar28,uVar33,param_1 + 0x230);
      FUN_00367c60(*(undefined4 *)(param_1 + 0x22c),iVar13);
      uVar32 = *(undefined4 *)(param_1 + 0x230);
    }
    *(undefined4 *)(iVar13 + 0x144) = uVar32;
  }
  return;
}
