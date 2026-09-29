// OoT3D decomp @ 00152b30  name=FUN_00152b30  size=3540

void FUN_00152b30(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined2 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float *pfVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  bool bVar19;
  bool bVar20;
  uint in_fpscr;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  int local_78;
  int local_74;
  int local_70;

  bVar19 = false;
  iVar17 = *(int *)(param_2 + 0x20ac);
  local_84 = FUN_0036c5bc(param_2,0);
  fVar24 = DAT_00152e6c;
  if (*(short *)(param_1 + 0xfb8) < 4) {
    *(float *)(param_1 + 0xfb4) = DAT_00152e6c;
  }
  uVar7 = DAT_00152e94;
  uVar6 = DAT_00152e90;
  fVar5 = DAT_00152e8c;
  fVar4 = DAT_00152e88;
  fVar25 = DAT_00152e84;
  fVar3 = DAT_00152e80;
  fVar21 = DAT_00152e7c;
  uVar16 = DAT_00152e78;
  uVar14 = DAT_00152e74;
  fVar26 = DAT_00152e70;
  local_70 = param_2 + 0x2298;
  local_74 = param_1 + 0xfd4;
  local_78 = param_1 + 0x1044;
  local_7c = (undefined4 *)(param_1 + 0xfcc);
  local_80 = (undefined4 *)(param_1 + 0xfc0);
  pfVar15 = (float *)(param_1 + 0x1000);
  switch((int)*(short *)(param_1 + 0xfb8)) {
  case 1:
    if (*(short *)(param_1 + 0x1d6) == 1) {
      FUN_00367c7c(param_2,DAT_00152e98,0);
    }
    fVar24 = ABS(*(float *)(iVar17 + 0x30) - fVar4);
    if (((((DAT_00152e9c <= (int)fVar24) ||
          (DAT_00152e9c <= (int)ABS(*(float *)(iVar17 + 0x28) - fVar4))) &&
         ((fVar21 = ABS(*(float *)(iVar17 + 0x30) - DAT_00152ea0), DAT_00152e9c <= (int)fVar21 ||
          (DAT_00152e9c <= (int)ABS(*(float *)(iVar17 + 0x28) - fVar4))))) &&
        ((DAT_00152e9c <= (int)fVar24 ||
         (DAT_00152e9c <= (int)ABS(*(float *)(iVar17 + 0x28) - DAT_00152ea0))))) &&
       ((DAT_00152e9c <= (int)fVar21 ||
        (DAT_00152e9c <= (int)ABS(*(float *)(iVar17 + 0x28) - DAT_00152ea0))))) break;
    FUN_00367494(param_2,local_70);
    FUN_0036e980(param_2,param_1,8);
    uVar9 = FUN_00367d74(param_2);
    *(undefined2 *)(param_1 + 0xfba) = uVar9;
    FUN_00320d7c(param_2,0,1);
    FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0xfba),7);
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    puVar8 = DAT_00152ea4;
    *(undefined2 *)(param_1 + 0xfb8) = 2;
    *(undefined2 *)(param_1 + 0x1da) = 0x4b;
    *(undefined2 *)(puVar8 + 8) = 0;
    *puVar8 = 1;
    uVar14 = DAT_00152ea8;
    *(undefined2 *)(param_1 + 0x1b2) = 0;
    *(undefined2 *)(param_1 + 0x1b4) = 0;
    *(short *)(param_1 + 0x36) = (short)uVar14;
    *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1b0) = 0;
    *(short *)(*(int *)(param_2 + 0x7f68) + 0x1d6) = (short)DAT_00152eac;
    FUN_003655d0(0,0x32);
    FUN_003725e0(param_2);
  case 2:
    uVar14 = DAT_00152eb0;
    *(float *)(iVar17 + 0x28) = fVar4;
    *(undefined4 *)(iVar17 + 0x30) = uVar14;
    *(undefined4 *)(iVar17 + 0x6c) = uVar6;
    uVar14 = DAT_00152eb4;
    *(undefined2 *)(iVar17 + 0x36) = 0;
    *(undefined2 *)(iVar17 + 0xbe) = 0;
    *(undefined4 *)(param_1 + 0xfc0) = uVar14;
    uVar14 = DAT_00152ebc;
    *(undefined4 *)(param_1 + 0xfc4) = DAT_00152eb8;
    *(float *)(param_1 + 0xfc8) = fVar4;
    *(undefined4 *)(param_1 + 0xfcc) = *(undefined4 *)(iVar17 + 0x28);
    *(undefined4 *)(param_1 + 0xfd0) = uVar14;
    *(undefined4 *)(param_1 + 0xfd4) = uVar6;
    uVar14 = DAT_00152ec0;
    if (*(short *)(param_1 + 0x1da) == 0) {
      *(undefined2 *)(param_1 + 0xfb8) = 3;
      *(undefined2 *)(param_1 + 0x1b2) = 0;
    }
    else if (*(short *)(param_1 + 0x1da) < 0x4b) {
      local_90 = DAT_00152ec4;
      local_8c = DAT_00152ec8;
      local_88 = *(undefined4 *)(param_1 + 0xfc8);
      fVar24 = (float)FUN_00371e50(DAT_00152ecc);
      FUN_00368a98(uVar6,uVar14,DAT_00152ed0,fVar24 + fVar26,param_2,&local_90);
    }
    if (*(short *)(param_1 + 0x1da) == 0x3c) {
      local_90 = DAT_00152ed8;
      local_8c = DAT_00152ed4;
      FUN_0037547c(DAT_00152ee0,DAT_00152edc,4,DAT_00152ed8);
    }
    break;
  case 3:
    FUN_00373500(param_1 + 0x1064);
    puVar11 = (undefined4 *)(DAT_001532a8 + *(short *)(param_1 + 0xfbc) * 0xc);
    *(undefined4 *)(param_1 + 0x22c) = *puVar11;
    *(undefined4 *)(param_1 + 0x230) = puVar11[1];
    *(undefined4 *)(param_1 + 0x234) = puVar11[2];
    iVar10 = (int)(short)(*(short *)(param_1 + 0x1b2) * 0x500);
    if (*(short *)(param_1 + 0xfbc) == 5) {
      fVar22 = (float)FUN_002cfca0(iVar10);
      fVar22 = fVar22 * fVar25;
    }
    else {
      fVar22 = (float)FUN_002cfca0(iVar10);
      fVar22 = fVar22 * DAT_001532ac;
    }
    fVar27 = *(float *)(param_1 + 0x22c) - *(float *)(param_1 + 0xfc0);
    fVar22 = (*(float *)(param_1 + 0x230) - *(float *)(param_1 + 0xfc4)) + fVar22;
    fVar25 = *(float *)(param_1 + 0x234) - *(float *)(param_1 + 0xfc8);
    fVar23 = (float)FUN_003696ec(fVar27,fVar25);
    fVar28 = fVar27 * fVar27 + fVar25 * fVar25;
    fVar27 = (float)FUN_003696ec(fVar22,SQRT(fVar28));
    fVar25 = DAT_001532b0;
    FUN_00370084(param_1 + 0x36,(int)(short)(int)(fVar23 * DAT_001532b0),5,
                 (int)(short)(int)*(float *)(param_1 + 0x1060));
    FUN_00370084(param_1 + 0x34,(int)(short)(int)(fVar27 * fVar25),5,
                 (int)(short)(int)*(float *)(param_1 + 0x1060));
    if (*(short *)(param_1 + 0x1b2) == 0x96) {
      *(float *)(param_1 + 0x1008) = ABS(*(float *)(param_1 + 0xfcc) - *(float *)(iVar17 + 0x28));
      *(float *)(param_1 + 0x100c) = ABS(*(float *)(param_1 + 0xfd0) - *(float *)(iVar17 + 0x2c));
      *(float *)(param_1 + 0x1010) = ABS(*(float *)(param_1 + 0xfd4) - *(float *)(iVar17 + 0x30));
LAB_00153070:
      FUN_00373500(*(undefined4 *)(iVar17 + 0x28),fVar5,
                   *(float *)(param_1 + 0x1008) * *(float *)(param_1 + 0x1044),local_7c);
      FUN_00373500(*(float *)(iVar17 + 0x2c) + DAT_00152ed0,fVar5,
                   *(float *)(param_1 + 0x100c) * *(float *)(param_1 + 0x1044),param_1 + 0xfd0);
      FUN_00373500(*(undefined4 *)(iVar17 + 0x30),fVar5,
                   *(float *)(param_1 + 0x1010) * *(float *)(param_1 + 0x1044),local_74);
      FUN_00373500(DAT_001532b8,uVar7,DAT_001532b4,local_78);
    }
    else if (0x95 < *(short *)(param_1 + 0x1b2)) goto LAB_00153070;
    if (*(short *)(param_1 + 0x1b2) == 0xbe) {
      local_90 = DAT_00152ed8;
      local_8c = DAT_00152ed4;
      FUN_0037547c(DAT_00152ee0,DAT_00152edc,4,DAT_00152ed8);
    }
    uVar13 = DAT_00152ec0;
    if ((int)*(short *)(param_1 + 0x1b2) - 0x97U < 0x1d) {
      local_90 = *(float *)(param_1 + 0xfc0) + DAT_001532bc;
      local_8c = DAT_00152ec8;
      local_88 = *(undefined4 *)(param_1 + 0xfc8);
      fVar25 = (float)FUN_00371e50(DAT_00152ecc);
      FUN_00368a98(uVar6,uVar13,DAT_00152ed0,fVar25 + fVar26,param_2,&local_90);
    }
    iVar10 = (int)*(short *)(param_1 + 0x1b2);
    uVar13 = uVar6;
    uVar18 = DAT_001532c0;
    fVar26 = fVar5;
    if (((0x94 < iVar10 - 0x65U) && (uVar13 = DAT_001532c4, fVar26 = DAT_001532c8, iVar10 < 0x17d))
       && (uVar13 = DAT_001532cc, fVar26 = fVar5, 0xfa < iVar10)) {
      uVar13 = DAT_001532d0;
      uVar18 = DAT_001532d8;
      fVar26 = DAT_001532d4;
    }
    if (0x118 < iVar10) {
      FUN_00373500(DAT_001532dc,uVar7,uVar7,param_1 + 0x1e0);
    }
    uVar1 = DAT_001532e4;
    uVar2 = DAT_001532e0;
    if ((*(short *)(param_1 + 0xfbc) < 5) &&
       (uVar1 = uVar18, uVar2 = uVar13, (int)SQRT(fVar28 + fVar22 * fVar22) < DAT_00152e9c)) {
      *(short *)(param_1 + 0xfbc) = *(short *)(param_1 + 0xfbc) + 1;
      *(undefined4 *)(param_1 + 0x1060) = uVar6;
    }
    FUN_00373500(uVar2,uVar7,fVar26,param_1 + 0x6c);
    FUN_00373500(uVar1,uVar7,DAT_001532e8,param_1 + 0x1060);
    if (*(short *)(param_1 + 0x1b2) == 0x22b) {
      FUN_0036e980(param_2,param_1,0x68);
      FUN_0035af04(iVar17,1);
    }
    if (*(short *)(param_1 + 0x1b2) <= DAT_001532ec) {
      *(short *)(*(int *)(param_2 + 0x7f68) + 0x1c6) = (short)DAT_00153668;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1e8) = uVar6;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1e0) = uVar14;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1e4) = uVar16;
      break;
    }
    *(undefined2 *)(param_1 + 0xfb8) = 4;
    FUN_0036e980(param_2,param_1,8);
    uVar13 = DAT_001532f0;
    *(undefined1 *)(*(int *)(param_2 + 0x7f68) + 0x229) = 1;
    *(float *)(iVar17 + 0x28) = fVar4;
    *(undefined4 *)(iVar17 + 0x30) = uVar13;
    *(undefined2 *)(iVar17 + 0x36) = 0x8000;
    *(undefined2 *)(iVar17 + 0xbe) = 0x8000;
    *(undefined4 *)(param_1 + 0x1064) = uVar6;
    *(float *)(*(int *)(param_2 + 0x7f68) + 0x1fc) = DAT_001532f4;
    fVar26 = DAT_00153650;
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    *(float *)(param_1 + 0xfb4) = fVar26;
    *(undefined2 *)(param_1 + 0x1da) = 300;
    iVar17 = *(int *)(param_2 + 0x7f68);
    uVar13 = *(undefined4 *)(iVar17 + 0x2c);
    uVar18 = *(undefined4 *)(iVar17 + 0x30);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar17 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = uVar13;
    *(undefined4 *)(param_1 + 0x30) = uVar18;
    *(undefined2 *)(param_1 + 0x1b0) = 0x15;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(uint *)(*(int *)(param_2 + 0x7f68) + 4) = *(uint *)(*(int *)(param_2 + 0x7f68) + 4) | 1;
  case 4:
    uVar18 = DAT_00153668;
    uVar13 = DAT_00153654;
    fVar25 = DAT_00153650;
    fVar26 = DAT_001532f4;
    bVar19 = *(short *)(param_1 + 0x1da) < 0xf0;
    if (!bVar19) {
      *(float *)(param_1 + 0xfc0) = DAT_001532f4;
      uVar1 = DAT_00153658;
      *(float *)(param_1 + 0xfc4) = fVar25;
      *(undefined4 *)(param_1 + 0xfc8) = uVar1;
      *(undefined4 *)(param_1 + 0xfcc) = DAT_0015365c;
      *(undefined4 *)(param_1 + 0xfd0) = DAT_00153660;
      fVar22 = DAT_00153664;
      *(float *)(param_1 + 0xfd4) = DAT_00153664;
      *(short *)(*(int *)(param_2 + 0x7f68) + 0x1c6) = (short)uVar18;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1e8) = uVar6;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1e0) = uVar14;
      *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x1e4) = uVar16;
      if (*(short *)(param_1 + 0x1da) == 0xf0) {
        *(float *)(param_1 + 0x1014) = fVar26;
        fVar23 = DAT_0015366c;
        *(float *)(param_1 + 0x1018) = fVar25;
        fVar27 = DAT_00153670;
        *(float *)(param_1 + 0x101c) = fVar23;
        *(float *)(param_1 + 0x102c) = fVar27;
        *(float *)(param_1 + 0x1030) = fVar24;
        *(float *)(param_1 + 0x1034) = fVar22;
        bVar19 = true;
        *(float *)(param_1 + 0xffc) = ABS(*(float *)(param_1 + 0xfc0) - fVar26) * fVar5;
        uVar14 = DAT_001532b4;
        *pfVar15 = ABS(*(float *)(param_1 + 0xfc4) - fVar25) * fVar5;
        *(float *)(param_1 + 0x1004) = ABS(*(float *)(param_1 + 0xfc8) - fVar23) * fVar5;
        *(float *)(param_1 + 0x1008) = ABS(*(float *)(param_1 + 0xfcc) - fVar27) * fVar5;
        *(float *)(param_1 + 0x100c) = ABS(*(float *)(param_1 + 0xfd0) - fVar24) * fVar5;
        *(float *)(param_1 + 0x1010) = ABS(*(float *)(param_1 + 0xfd4) - fVar22) * fVar5;
        *(float *)(param_1 + 0x1040) = fVar5;
        *(float *)(param_1 + 0x103c) = fVar5;
        *(float *)(param_1 + 0x1038) = fVar5;
        *(float *)(param_1 + 0x1028) = fVar5;
        *(float *)(param_1 + 0x1024) = fVar5;
        *(float *)(param_1 + 0x1020) = fVar5;
        *(undefined4 *)(param_1 + 0x1044) = uVar6;
        *(undefined4 *)(param_1 + 0x1048) = uVar13;
        *(undefined4 *)(param_1 + 0xdbc) = uVar14;
        *(undefined4 *)(param_1 + 0xdc0) = uVar6;
      }
    }
    if (*(short *)(param_1 + 0x1da) == 0x4b) {
      *(undefined2 *)(param_1 + 0xfb8) = 5;
      *(undefined2 *)(param_1 + 0x1da) = 0xa5;
      *(float *)(param_1 + 0x1014) = fVar21;
      fVar24 = DAT_00153674;
      *(float *)(param_1 + 0x1018) = fVar3;
      fVar26 = DAT_00153678;
      *(float *)(param_1 + 0x101c) = fVar24;
      fVar25 = DAT_0015367c;
      *(float *)(param_1 + 0x102c) = fVar26;
      fVar22 = DAT_00153680;
      *(float *)(param_1 + 0x1030) = fVar25;
      *(float *)(param_1 + 0x1034) = fVar22;
      *(float *)(param_1 + 0xffc) = ABS(*(float *)(param_1 + 0xfc0) - fVar21) * fVar5;
      *pfVar15 = ABS(*(float *)(param_1 + 0xfc4) - fVar3) * fVar5;
      *(float *)(param_1 + 0x1004) = ABS(*(float *)(param_1 + 0xfc8) - fVar24) * fVar5;
      *(float *)(param_1 + 0x1008) = ABS(*(float *)(param_1 + 0xfcc) - fVar26) * fVar5;
      *(float *)(param_1 + 0x100c) = ABS(*(float *)(param_1 + 0xfd0) - fVar25) * fVar5;
      fVar24 = DAT_00153684;
      *(float *)(param_1 + 0x1010) = ABS(*(float *)(param_1 + 0xfd4) - fVar22) * fVar5;
      *(float *)(param_1 + 0x1024) = fVar24;
      *(float *)(param_1 + 0x103c) = fVar24;
      *(undefined4 *)(param_1 + 0x1044) = uVar6;
      *(undefined4 *)(param_1 + 0x1048) = uVar13;
    }
    if (*(short *)(param_1 + 0x1da) == 0xe1) {
      FUN_0036ec40(0,DAT_00153688);
      iVar17 = FUN_0035b164();
      if ((iVar17 != 0) && (iVar17 = FUN_0035b0a0(), iVar17 == 0)) {
        if (((*DAT_0015368c & 1) == 0) && (iVar17 = FUN_003679b4(DAT_0015368c), iVar17 != 0)) {
          FUN_0036788c(DAT_00153690);
        }
        FUN_003542c4(DAT_0015369c,1);
      }
    }
    if (*(short *)(param_1 + 0x1da) == 0xc3) {
      local_90 = 2.52234e-43;
      local_8c = 0x100;
      local_88 = 0x40;
      FUN_00354248(uVar6,param_2,param_2 + 0x224c,*(undefined4 *)(DAT_001536a0 + param_1),200);
      *(ushort *)(DAT_001536a4 + 0xfa) = *(ushort *)(DAT_001536a4 + 0xfa) | 0x10;
    }
    break;
  case 5:
    *(float *)(param_1 + 0x1014) = DAT_00152e7c;
    fVar24 = DAT_00153674;
    *(float *)(param_1 + 0x1018) = fVar3;
    *(float *)(param_1 + 0x101c) = fVar24;
    bVar19 = true;
    *(float *)(param_1 + 0x102c) = DAT_00153678;
    *(float *)(param_1 + 0x1030) = DAT_0015367c;
    *(float *)(param_1 + 0x1034) = DAT_00153680;
    if (*(short *)(param_1 + 0x1da) == 0x96) {
      *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1b0) = 0x65;
      *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x1d6) = 0x4b;
    }
    if (*(short *)(param_1 + 0x1da) == 0x1e) {
      iVar17 = FUN_0036c5bc(param_2,0);
      uVar14 = local_80[1];
      uVar16 = local_80[2];
      *(undefined4 *)(iVar17 + 0x8c) = *local_80;
      *(undefined4 *)(iVar17 + 0x90) = uVar14;
      *(undefined4 *)(iVar17 + 0x94) = uVar16;
      uVar14 = local_80[1];
      uVar16 = local_80[2];
      *(undefined4 *)(iVar17 + 0xa4) = *local_80;
      *(undefined4 *)(iVar17 + 0xa8) = uVar14;
      *(undefined4 *)(iVar17 + 0xac) = uVar16;
      uVar14 = local_7c[1];
      uVar16 = local_7c[2];
      *(undefined4 *)(iVar17 + 0x80) = *local_7c;
      *(undefined4 *)(iVar17 + 0x84) = uVar14;
      *(undefined4 *)(iVar17 + 0x88) = uVar16;
      FUN_0036e9b8(param_2,(int)*(short *)(param_1 + 0xfba),0);
      *(undefined2 *)(param_1 + 0xfba) = 0;
      *(undefined2 *)(param_1 + 0xfb8) = 0;
      FUN_00367374(param_2,local_70);
      FUN_0036e980(param_2,param_1,7);
      *DAT_00152ea4 = 0;
    }
  }
  if (*(short *)(*(int *)(param_2 + 0x7f68) + 0x1b0) == 0) {
    *(float *)(*(int *)(param_2 + 0x7f68) + 0x28) = fVar4;
    *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x30) = DAT_00153a40;
    iVar17 = *(int *)(param_2 + 0x7f68);
    *(undefined4 *)(iVar17 + 0x108) = *(undefined4 *)(iVar17 + 0x28);
    *(undefined4 *)(iVar17 + 0x10c) = *(undefined4 *)(iVar17 + 0x2c);
    *(undefined4 *)(iVar17 + 0x110) = *(undefined4 *)(iVar17 + 0x30);
    *(undefined4 *)(*(int *)(param_2 + 0x7f68) + 0x6c) = uVar6;
    *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0xbe) =
         *(undefined2 *)(*(int *)(param_2 + 0x7f68) + 0x92);
  }
  if (*(short *)(param_1 + 0xfba) != 0) {
    if (bVar19) {
      FUN_00373500(*(undefined4 *)(param_1 + 0x1014),*(undefined4 *)(param_1 + 0x1020),
                   *(float *)(param_1 + 0xffc) * *(float *)(param_1 + 0x1044),param_1 + 0xfc0);
      FUN_00373500(*(undefined4 *)(param_1 + 0x1018),*(undefined4 *)(param_1 + 0x1024),
                   *pfVar15 * *(float *)(param_1 + 0x1044),param_1 + 0xfc4);
      FUN_00373500(*(undefined4 *)(param_1 + 0x101c),*(undefined4 *)(param_1 + 0x1028),
                   *(float *)(param_1 + 0x1004) * *(float *)(param_1 + 0x1044),param_1 + 0xfc8);
      FUN_00373500(*(undefined4 *)(param_1 + 0x102c),*(undefined4 *)(param_1 + 0x1038),
                   *(float *)(param_1 + 0x1008) * *(float *)(param_1 + 0x1044),local_7c);
      FUN_00373500(*(undefined4 *)(param_1 + 0x1030),*(undefined4 *)(param_1 + 0x103c),
                   *(float *)(param_1 + 0x100c) * *(float *)(param_1 + 0x1044),param_1 + 0xfd0);
      FUN_00373500(*(undefined4 *)(param_1 + 0x1034),*(undefined4 *)(param_1 + 0x1040),
                   *(float *)(param_1 + 0x1010) * *(float *)(param_1 + 0x1044),local_74);
      FUN_00373500(uVar7,uVar7,*(undefined4 *)(param_1 + 0x1048),local_78);
    }
    else if (*(short *)(param_1 + 0xfb8) < 4) {
      FUN_00365860(param_1);
      *(float *)(param_1 + 0xfc0) = *(float *)(param_1 + 0xfc0) + *(float *)(param_1 + 0x60);
      *(float *)(param_1 + 0xfc4) = *(float *)(param_1 + 0xfc4) + *(float *)(param_1 + 100);
      *(float *)(param_1 + 0xfc8) = *(float *)(param_1 + 0xfc8) + *(float *)(param_1 + 0x68);
    }
    fVar24 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b4),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar24 = (float)FUN_003727f0(fVar24 * DAT_00153684);
    local_90 = (float)(param_1 + 0xfd8);
    fVar24 = fVar24 * DAT_00153a44 * *(float *)(param_1 + 0x1064);
    *(float *)(param_1 + 0xfe0) = fVar24;
    *(float *)(param_1 + 0xfd8) = fVar24;
    *(undefined4 *)(param_1 + 0xfdc) = uVar7;
    FUN_0035b1cc(param_2,(int)*(short *)(param_1 + 0xfba),local_7c,param_1 + 0xfc0);
    uVar14 = local_80[1];
    uVar16 = local_80[2];
    *(undefined4 *)(local_84 + 0x8c) = *local_80;
    *(undefined4 *)(local_84 + 0x90) = uVar14;
    *(undefined4 *)(local_84 + 0x94) = uVar16;
    uVar14 = local_80[1];
    uVar16 = local_80[2];
    *(undefined4 *)(local_84 + 0xa4) = *local_80;
    *(undefined4 *)(local_84 + 0xa8) = uVar14;
    *(undefined4 *)(local_84 + 0xac) = uVar16;
    uVar14 = local_7c[1];
    uVar16 = local_7c[2];
    *(undefined4 *)(local_84 + 0x80) = *local_7c;
    *(undefined4 *)(local_84 + 0x84) = uVar14;
    *(undefined4 *)(local_84 + 0x88) = uVar16;
    FUN_00354220(*(undefined4 *)(param_1 + 0xfb4),param_2,(int)*(short *)(param_1 + 0xfba));
  }
  iVar10 = (int)*(short *)(param_1 + 0xfb8);
  bVar20 = SBORROW4(iVar10,3);
  iVar17 = iVar10 + -3;
  bVar19 = iVar10 == 3;
  if (2 < iVar10) {
    iVar12 = (int)*(short *)(param_1 + 0x1b2);
    bVar20 = SBORROW4(iVar12,DAT_001532ec);
    iVar17 = iVar12 - DAT_001532ec;
    bVar19 = iVar12 == DAT_001532ec;
  }
  if (bVar19 || iVar17 < 0 != bVar20) {
    uVar14 = DAT_00153a4c;
    iVar17 = DAT_00152edc;
    if (iVar10 < 2) {
      return;
    }
  }
  else {
    uVar14 = DAT_00153a48;
    iVar17 = *(int *)(param_2 + 0x7f68) + 0x1068;
  }
  local_8c = DAT_00152ed4;
  local_90 = DAT_00152ed8;
  FUN_0037547c(uVar14,iVar17,4,DAT_00152ed8);
  return;
}
