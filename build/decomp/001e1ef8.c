// OoT3D decomp @ 001e1ef8  name=FUN_001e1ef8  size=2700

void FUN_001e1ef8(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short sVar20;
  uint in_fpscr;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  
  fVar1 = DAT_001e22c0;
  fVar25 = DAT_001e22bc;
  uVar24 = DAT_001e22b8;
  iVar16 = 0;
  sVar20 = 0;
  pcVar14 = *(char **)(DAT_001e22b4 + param_2);
  pcVar15 = pcVar14;
  do {
    if (*pcVar15 == '\t') {
      if ((*(ushort *)(pcVar15 + 2) & 7) == 0) {
        local_94 = fVar25;
        local_90 = fVar25;
        local_8c = fVar25;
      }
      else {
        local_94 = (float)VectorUnsignedToFloat
                                    ((uint)(byte)pcVar15[0x28],(byte)(in_fpscr >> 0x15) & 3);
        local_94 = local_94 * fVar1;
        local_90 = (float)VectorUnsignedToFloat
                                    ((uint)(byte)pcVar15[0x29],(byte)(in_fpscr >> 0x15) & 3);
        local_90 = local_90 * fVar1;
        local_8c = (float)VectorUnsignedToFloat
                                    ((uint)(byte)pcVar15[0x2a],(byte)(in_fpscr >> 0x15) & 3);
        local_8c = local_8c * fVar1;
      }
      local_88 = fVar25;
      iVar18 = param_1 + iVar16 * 4;
      FUN_00358778(*(undefined4 *)(iVar18 + 0x5ec),0,0,&local_94,1);
      FUN_003713fc(*(undefined4 *)(pcVar15 + 4),*(undefined4 *)(pcVar15 + 8),
                   *(undefined4 *)(pcVar15 + 0xc),&local_84,0);
      uVar21 = *(undefined4 *)(pcVar15 + 0x34);
      FUN_00371348(uVar21,uVar21,uVar21,&local_84,1);
      FUN_003735e8(*(undefined4 *)(pcVar15 + 0x48),&local_84,1);
      FUN_00369014(*(undefined4 *)(pcVar15 + 0x44),&local_84,1);
      FUN_00371348(uVar24,uVar24,uVar24,&local_84,1);
      *(undefined *)(*(int *)(iVar18 + 0x5ec) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar18 + 0x5ec),&local_84);
      FUN_00372170(*(undefined4 *)(iVar18 + 0x5ec),0);
      iVar16 = iVar16 + 1;
    }
    fVar2 = DAT_001e22c4;
    if (iVar16 == 100) break;
    sVar20 = sVar20 + 1;
    pcVar15 = pcVar15 + 0x4c;
  } while (sVar20 < 200);
  iVar16 = 0;
  sVar20 = 0;
  pcVar15 = pcVar14;
  do {
    if (*pcVar15 == '\x01') {
      iVar18 = param_1 + iVar16 * 4;
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(pcVar15 + 0x2c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003695cc(fVar2,fVar2,fVar2,fVar22 * fVar1,*(undefined4 *)(iVar18 + 0x77c),0,4,2);
      FUN_003713fc(*(undefined4 *)(pcVar15 + 4),*(undefined4 *)(pcVar15 + 8),
                   *(undefined4 *)(pcVar15 + 0xc),&uStack_b4,0);
      FUN_00371fac(&uStack_b4,param_2 + 0x2fc);
      FUN_00371348(*(undefined4 *)(pcVar15 + 0x34),*(undefined4 *)(pcVar15 + 0x34),&uStack_b4,1);
      FUN_00371234(*(undefined4 *)(pcVar15 + 0x3c),&uStack_b4,1);
      *(undefined *)(*(int *)(iVar18 + 0x77c) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar18 + 0x77c),&uStack_b4);
      FUN_00372170(*(undefined4 *)(iVar18 + 0x77c),0);
      iVar16 = iVar16 + 1;
    }
    uVar21 = DAT_001e22c8;
    if (iVar16 == 0xe) break;
    sVar20 = sVar20 + 1;
    pcVar15 = pcVar15 + 0x4c;
  } while (sVar20 < 0x96);
  iVar16 = 0;
  sVar20 = 0;
  pcVar15 = pcVar14;
  do {
    if (*pcVar15 == '\x02') {
      iVar18 = param_1 + iVar16 * 4;
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(pcVar15 + 0x2c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003695cc(fVar2,fVar2,fVar2,fVar22 * fVar1,*(undefined4 *)(iVar18 + 0x7b4),0,4,2);
      FUN_003713fc(*(undefined4 *)(pcVar15 + 4),*(undefined4 *)(pcVar15 + 8),
                   *(undefined4 *)(pcVar15 + 0xc),&local_84,0);
      FUN_003735e8(*(undefined4 *)(pcVar15 + 0x48),&local_84,1);
      FUN_00369014(*(undefined4 *)(pcVar15 + 0x44),&local_84,1);
      FUN_00371234(*(undefined4 *)(pcVar15 + 0x3c),&local_84,1);
      fVar22 = *(float *)(pcVar15 + 0x34);
      FUN_00371348(fVar22,fVar22,fVar22 * *(float *)(pcVar15 + 0x38),&local_84,1);
      FUN_00369014(uVar21,&local_84,1);
      *(undefined *)(*(int *)(iVar18 + 0x7b4) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar18 + 0x7b4),&local_84);
      FUN_00372170(*(undefined4 *)(iVar18 + 0x7b4),0);
      iVar16 = iVar16 + 1;
    }
    fVar22 = DAT_001e22dc;
    uVar6 = DAT_001e22d8;
    uVar5 = DAT_001e22d4;
    uVar4 = DAT_001e22d0;
    uVar3 = DAT_001e22cc;
    if (iVar16 == 0xe) break;
    sVar20 = sVar20 + 1;
    pcVar15 = pcVar15 + 0x4c;
  } while (sVar20 < 0x96);
  iVar16 = 0;
  sVar20 = 0;
  pcVar15 = pcVar14;
  do {
    if (*pcVar15 == '\x03') {
      uVar21 = *(undefined4 *)(param_1 + iVar16 * 4 + 0x7ec);
      fVar23 = (float)VectorSignedToFloat((int)*(short *)(pcVar15 + 0x2c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (*(short *)(pcVar15 + 0x2e) == 2) {
        FUN_003695cc(uVar4,fVar2,uVar3,fVar23 * fVar1,uVar21,0,0,1);
      }
      else {
        FUN_003695cc(uVar6,fVar25,uVar5,fVar23 * fVar1,uVar21,0,0,1);
      }
      FUN_003713fc(*(undefined4 *)(pcVar15 + 4),*(undefined4 *)(pcVar15 + 8),
                   *(undefined4 *)(pcVar15 + 0xc),&local_84,0);
      FUN_00371348(*(undefined4 *)(pcVar15 + 0x34),*(undefined4 *)(pcVar15 + 0x34),fVar25,&local_84,
                   1);
      FUN_00369014(*(float *)(pcVar15 + 0x3c) * fVar22,&local_84,1);
      FUN_00371234(*(undefined4 *)(pcVar15 + 0x3c),&local_84,1);
      FUN_00371348(uVar24,uVar24,uVar24,&local_84,1);
      iVar18 = param_1 + iVar16 * 4;
      *(undefined *)(*(int *)(iVar18 + 0x7ec) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar18 + 0x7ec),&local_84);
      FUN_00372170(*(undefined4 *)(iVar18 + 0x7ec),0);
      iVar16 = iVar16 + 1;
    }
    fVar12 = DAT_001e27b0;
    fVar11 = DAT_001e27ac;
    fVar10 = DAT_001e27a4;
    fVar9 = DAT_001e27a0;
    fVar8 = DAT_001e279c;
    fVar7 = DAT_001e2798;
    fVar23 = DAT_001e2794;
    if (iVar16 == 0x28) break;
    sVar20 = sVar20 + 1;
    pcVar15 = pcVar15 + 0x4c;
  } while (sVar20 < 0x96);
  iVar16 = 0;
  sVar20 = 0;
  pcVar15 = pcVar14;
  do {
    if (*pcVar15 == '\x04') {
      uVar13 = (uint)*(ushort *)(pcVar15 + 2);
      if (uVar13 == 0) {
        iVar18 = 0;
      }
      else {
        fVar22 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
        iVar18 = (int)(fVar10 + fVar22 * fVar8 * fVar9);
      }
      fVar22 = (float)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3);
      iVar18 = (int)(fVar22 * fVar23 * fVar7);
      if (0xc < iVar18) {
        iVar18 = 0xc;
      }
      if (uVar13 != 0) {
        fVar22 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
        uVar13 = (uint)(fVar10 + fVar22 * fVar8 * fVar9);
      }
      iVar18 = iVar18 * 3;
      iVar17 = uVar13 - 1;
      iVar19 = param_1 + iVar16 * 4;
      fVar22 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(DAT_001e27b4 + iVar18),(byte)(in_fpscr >> 0x15) & 3
                                );
      fVar26 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(DAT_001e27b4 + iVar18 + 1),
                                 (byte)(in_fpscr >> 0x15) & 3);
      fVar27 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(DAT_001e27b4 + iVar18 + 2),
                                 (byte)(in_fpscr >> 0x15) & 3);
      fVar28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(DAT_001e27b8 + iVar18),(byte)(in_fpscr >> 0x15) & 3
                                );
      local_98 = fVar2;
      fVar29 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(iVar18 + DAT_001e27b8 + 1),
                                 (byte)(in_fpscr >> 0x15) & 3);
      fVar30 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(iVar18 + DAT_001e27b8 + 2),
                                 (byte)(in_fpscr >> 0x15) & 3);
      local_a4 = fVar28 * fVar1;
      local_a0 = fVar29 * fVar1;
      local_9c = fVar30 * fVar1;
      local_94 = (fVar22 - fVar28) * fVar1;
      local_90 = (fVar26 - fVar29) * fVar1;
      local_8c = (fVar27 - fVar30) * fVar1;
      local_88 = fVar25;
      if (local_94 < fVar2) {
        local_a4 = local_a4 + local_94;
      }
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 <= local_8c) << 0x1d;
      if (local_90 < fVar2) {
        local_a0 = local_a0 + local_90;
      }
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        local_9c = local_9c + local_8c;
      }
      iVar18 = *(int *)(iVar19 + 0x8b8);
      *(float *)(iVar18 + 0xf0) = local_94;
      *(float *)(iVar18 + 0xf4) = local_90;
      *(float *)(iVar18 + 0xf8) = local_8c;
      *(float *)(iVar18 + 0xfc) = fVar25;
      FUN_003429c8(*(undefined4 *)(iVar19 + 0x8b8),1,&local_a4);
      iVar18 = *(int *)(DAT_001e27bc + 0x48);
      FUN_003713fc(*(undefined4 *)(iVar18 + 0xb94),*(undefined4 *)(iVar18 + 0xb98),
                   *(undefined4 *)(iVar18 + 0xb9c),&local_84,0);
      FUN_003735e8(*(undefined4 *)(pcVar15 + 0x48),&local_84,1);
      FUN_00371234(*(undefined4 *)(pcVar15 + 0x3c),&local_84,1);
      uVar24 = *(undefined4 *)(pcVar15 + 0x34);
      FUN_00371348(uVar24,uVar24,uVar24,&local_84,1);
      FUN_003735e8(*(undefined4 *)(pcVar15 + 0x44),&local_84,1);
      if (iVar17 < 0) {
        iVar17 = 0;
      }
      fVar22 = (float)VectorSignedToFloat((int)(iVar17 + ((uint)(iVar17 >> 0x1f) >> 0x1d)) >> 3,
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar26 = (float)VectorSignedToFloat(iVar17 % 8,(byte)(in_fpscr >> 0x15) & 3);
      FUN_003713fc(fVar26 * fVar12,fVar22 * fVar11,fVar2,&local_d4,0);
      iVar18 = *(int *)(iVar19 + 0x8b8);
      *(undefined4 *)(iVar18 + 0x54) = local_84;
      *(undefined4 *)(iVar18 + 0x58) = uStack_80;
      *(undefined4 *)(iVar18 + 0x5c) = uStack_7c;
      *(undefined4 *)(iVar18 + 0x60) = uStack_78;
      *(undefined4 *)(iVar18 + 100) = uStack_74;
      *(undefined4 *)(iVar18 + 0x68) = local_70;
      *(undefined4 *)(iVar18 + 0x6c) = uStack_6c;
      *(undefined4 *)(iVar18 + 0x70) = uStack_68;
      *(undefined4 *)(iVar18 + 0x74) = uStack_64;
      *(undefined4 *)(iVar18 + 0x78) = uStack_60;
      *(undefined4 *)(iVar18 + 0x7c) = local_5c;
      *(undefined4 *)(iVar18 + 0x80) = uStack_58;
      iVar18 = *(int *)(iVar19 + 0x8b8);
      *(undefined4 *)(iVar18 + 0x110) = local_d4;
      *(undefined4 *)(iVar18 + 0x114) = uStack_d0;
      *(undefined4 *)(iVar18 + 0x118) = uStack_cc;
      *(undefined4 *)(iVar18 + 0x11c) = uStack_c8;
      *(undefined4 *)(iVar18 + 0x120) = uStack_c4;
      *(undefined4 *)(iVar18 + 0x124) = local_c0;
      *(undefined4 *)(iVar18 + 0x128) = uStack_bc;
      *(undefined4 *)(iVar18 + 300) = uStack_b8;
      *(undefined4 *)(iVar18 + 0x130) = uStack_b4;
      *(undefined4 *)(iVar18 + 0x134) = uStack_b0;
      *(undefined4 *)(iVar18 + 0x138) = local_ac;
      *(undefined4 *)(iVar18 + 0x13c) = uStack_a8;
      FUN_00371eac(*(undefined4 *)(iVar19 + 0x8b8),0);
      iVar16 = iVar16 + 1;
    }
    fVar22 = DAT_001e27c0;
    if (iVar16 == 0xb) break;
    sVar20 = sVar20 + 1;
    pcVar15 = pcVar15 + 0x4c;
  } while (sVar20 < 0x96);
  iVar16 = 0;
  sVar20 = 0;
  pcVar15 = pcVar14;
  do {
    if (*pcVar15 == '\x05') {
      iVar18 = param_1 + iVar16 * 4;
      fVar25 = (float)VectorSignedToFloat((int)*(short *)(pcVar15 + 0x2c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003695cc(fVar2,fVar2,fVar2,fVar25 * fVar1 - fVar22,*(undefined4 *)(iVar18 + 0x8e4),0,4,2);
      FUN_003713fc(*(undefined4 *)(pcVar15 + 4),*(undefined4 *)(pcVar15 + 8),
                   *(undefined4 *)(pcVar15 + 0xc),&local_84,0);
      fVar25 = *(float *)(pcVar15 + 0x34);
      FUN_00371348(fVar25,fVar25 * *(float *)(pcVar15 + 0x40),fVar25,&local_84,1);
      *(undefined *)(*(int *)(iVar18 + 0x8e4) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar18 + 0x8e4),&local_84);
      FUN_00372170(*(undefined4 *)(iVar18 + 0x8e4),0);
      iVar16 = iVar16 + 1;
    }
    if (iVar16 == 2) break;
    sVar20 = sVar20 + 1;
    pcVar15 = pcVar15 + 0x4c;
  } while (sVar20 < 0x96);
  iVar16 = 0;
  sVar20 = 0;
  pcVar15 = pcVar14;
  do {
    if (*pcVar15 == '\x06') {
      iVar18 = param_1 + iVar16 * 4;
      fVar25 = (float)VectorSignedToFloat((int)*(short *)(pcVar15 + 0x2c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003695cc(fVar2,fVar2,fVar2,fVar25 * fVar1 - fVar22,*(undefined4 *)(iVar18 + 0x8ec),0,0,2);
      FUN_003713fc(*(undefined4 *)(pcVar15 + 4),*(undefined4 *)(pcVar15 + 8),
                   *(undefined4 *)(pcVar15 + 0xc),&local_84,0);
      fVar25 = *(float *)(pcVar15 + 0x34);
      FUN_00371348(fVar25,fVar25 * *(float *)(pcVar15 + 0x40),fVar25,&local_84,1);
      *(undefined *)(*(int *)(iVar18 + 0x8ec) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar18 + 0x8ec),&local_84);
      FUN_00372170(*(undefined4 *)(iVar18 + 0x8ec),0);
      iVar16 = iVar16 + 1;
    }
    fVar25 = DAT_001e29e0;
    if (iVar16 == 3) break;
    sVar20 = sVar20 + 1;
    pcVar15 = pcVar15 + 0x4c;
  } while (sVar20 < 0x96);
  iVar16 = 0;
  sVar20 = 0;
  pcVar15 = pcVar14;
  do {
    if (*pcVar15 == '\a') {
      iVar18 = param_1 + iVar16 * 4;
      fVar22 = (float)VectorSignedToFloat((int)*(short *)(pcVar15 + 0x2c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003695cc(fVar2,fVar2,fVar2,fVar22 * fVar1,*(undefined4 *)(iVar18 + 0x8f8),0,4,2);
      FUN_003713fc(*(undefined4 *)(pcVar15 + 4),*(undefined4 *)(pcVar15 + 8),
                   *(undefined4 *)(pcVar15 + 0xc),&local_84,0);
      fVar22 = *(float *)(pcVar15 + 0x34) * fVar25;
      FUN_00371348(fVar22,*(float *)(pcVar15 + 0x40) * fVar25,fVar22,&local_84,1);
      *(undefined *)(*(int *)(iVar18 + 0x8f8) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar18 + 0x8f8),&local_84);
      FUN_00372170(*(undefined4 *)(iVar18 + 0x8f8),0);
      iVar16 = iVar16 + 1;
    }
    if (iVar16 == 1) break;
    sVar20 = sVar20 + 1;
    pcVar15 = pcVar15 + 0x4c;
  } while (sVar20 < 0x96);
  sVar20 = 0;
  while( true ) {
    if (*pcVar14 == '\b') {
      iVar18 = param_1 + iVar16 * 4;
      fVar25 = (float)VectorSignedToFloat((int)*(short *)(pcVar14 + 0x2c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003695cc(fVar2,fVar2,fVar2,fVar25 * fVar1,*(undefined4 *)(iVar18 + 0x8fc),0,4,2);
      FUN_003713fc(*(undefined4 *)(pcVar14 + 4),*(undefined4 *)(pcVar14 + 8),
                   *(undefined4 *)(pcVar14 + 0xc),&local_84,0);
      FUN_00371fac(&local_84,param_2 + 0x2fc);
      uVar24 = *(undefined4 *)(pcVar14 + 0x34);
      FUN_00371348(uVar24,uVar24,uVar24,&local_84,1);
      *(undefined *)(*(int *)(iVar18 + 0x8fc) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar18 + 0x8fc),&local_84);
      FUN_00372170(*(undefined4 *)(iVar18 + 0x8fc),0);
      iVar16 = iVar16 + 1;
    }
    if (iVar16 == 0x1f) break;
    sVar20 = sVar20 + 1;
    pcVar14 = pcVar14 + 0x4c;
    if (0x95 < sVar20) {
      return;
    }
  }
  return;
}

