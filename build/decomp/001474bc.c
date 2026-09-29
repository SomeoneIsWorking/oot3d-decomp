// OoT3D decomp @ 001474bc  name=FUN_001474bc  size=4304

void FUN_001474bc(undefined4 param_1,float *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  short sVar14;
  int iVar15;
  undefined4 uVar16;
  uint in_fpscr;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;

  iVar12 = FUN_0036c5bc(param_3,(int)*(short *)(DAT_00147888 + 0xc));
  fVar7 = DAT_001478a0;
  fVar6 = DAT_0014789c;
  fVar5 = DAT_00147898;
  fVar4 = DAT_00147894;
  fVar3 = DAT_00147890;
  fVar21 = DAT_0014788c;
  sVar14 = 0;
  pfVar13 = param_2;
  do {
    if (*(char *)(pfVar13 + 9) == '\x01') {
      local_98 = *pfVar13;
      local_94 = pfVar13[1];
      local_90 = pfVar13[2];
      local_84 = 0.0;
      local_88 = 0.0;
      local_8c = 1.0;
      local_7c = 0.0;
      local_78 = 1.0;
      local_68 = 0.0;
      local_64 = 1.0;
      local_74 = 0.0;
      local_6c = 0.0;
      local_80 = local_98;
      local_70 = local_94;
      local_60 = local_90;
      FUN_00371fac(&local_8c,param_3 + 0x2fc);
      fVar18 = (float)VectorSignedToFloat((int)*(short *)((int)pfVar13 + 0x2e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar18 = fVar18 * fVar3 * fVar4;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar18 == fVar6) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar19 = (float)FUN_003727f0(fVar18);
        fVar20 = (float)FUN_00372674(fVar18);
        fVar18 = local_88 * fVar19;
        local_88 = local_88 * fVar20 - local_8c * fVar19;
        fVar29 = local_78 * fVar19;
        local_78 = local_78 * fVar20 - local_7c * fVar19;
        fVar22 = local_68 * fVar19;
        local_68 = local_68 * fVar20 - local_6c * fVar19;
        local_8c = local_8c * fVar20 + fVar18;
        local_7c = local_7c * fVar20 + fVar29;
        local_6c = local_6c * fVar20 + fVar22;
      }
      fVar18 = pfVar13[0x10] * fVar21;
      local_8c = local_8c * fVar18;
      local_7c = local_7c * fVar18;
      local_6c = local_6c * fVar18;
      local_88 = local_88 * fVar18;
      local_78 = local_78 * fVar18;
      local_68 = local_68 * fVar18;
      local_84 = local_84 * fVar18;
      local_74 = local_74 * fVar18;
      local_64 = local_64 * fVar18;
      if (pfVar13[0x16] != 0.0) {
        iVar15 = *(int *)((int)pfVar13[0x16] + 4);
        FUN_003687a8(iVar15);
        local_d8 = *DAT_001478a4;
        local_d4 = DAT_001478a4[1];
        local_d0 = DAT_001478a4[2];
        local_cc = (float)VectorSignedToFloat((int)*(short *)((int)pfVar13 + 0x36),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_cc = local_cc * fVar7;
        FUN_00358778(iVar15,0,4,&local_d8,0);
        *(undefined1 *)(iVar15 + 0xac) = 1;
        FUN_003721e0(iVar15,&local_8c);
        FUN_00372170(iVar15,0);
      }
    }
    piVar8 = DAT_001478a8;
    sVar14 = sVar14 + 1;
    pfVar13 = pfVar13 + 0x17;
  } while (sVar14 < 200);
  sVar14 = 0;
  pfVar13 = param_2;
  do {
    if (*(char *)(pfVar13 + 9) == '\x04') {
      local_a4 = *pfVar13;
      local_a0 = pfVar13[1];
      local_9c = pfVar13[2];
      local_88 = 0.0;
      local_8c = 1.0;
      local_84 = 0.0;
      local_7c = 0.0;
      local_78 = 1.0;
      local_68 = 0.0;
      local_64 = 1.0;
      local_74 = 0.0;
      local_6c = 0.0;
      local_80 = local_a4;
      local_70 = local_a0;
      local_60 = local_9c;
      FUN_00371fac(&local_8c,param_3 + 0x2fc);
      fVar21 = pfVar13[0x10];
      local_8c = local_8c * fVar21;
      local_7c = local_7c * fVar21;
      local_6c = local_6c * fVar21;
      local_88 = local_88 * fVar21;
      local_78 = local_78 * fVar21;
      local_68 = local_68 * fVar21;
      local_84 = local_84 * fVar21;
      local_74 = local_74 * fVar21;
      local_64 = local_64 * fVar21;
      fVar21 = (float)VectorSignedToFloat((int)*(short *)((int)pfVar13 + 0x2e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar21 = fVar21 * fVar3 * fVar4;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar21 == fVar6) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar22 = (float)FUN_003727f0(fVar21);
        fVar19 = (float)FUN_00372674(fVar21);
        fVar21 = local_88 * fVar22;
        local_88 = local_88 * fVar19 - local_8c * fVar22;
        fVar18 = local_78 * fVar22;
        local_78 = local_78 * fVar19 - local_7c * fVar22;
        fVar29 = local_68 * fVar22;
        local_68 = local_68 * fVar19 - local_6c * fVar22;
        local_8c = local_8c * fVar19 + fVar21;
        local_7c = local_7c * fVar19 + fVar18;
        local_6c = local_6c * fVar19 + fVar29;
      }
      fVar21 = pfVar13[0x16];
      if (fVar21 != 0.0) {
        sVar1 = *(short *)(pfVar13 + 10);
        *(float *)((int)fVar21 + 0x14) = fVar6;
        uVar23 = VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
        if (*piVar8 == 0) {
          *(undefined4 *)((int)fVar21 + 0x10) = uVar23;
          FUN_003586ec();
        }
        FUN_00373bec((int)fVar21 + 8);
        iVar15 = *(int *)((int)pfVar13[0x16] + 4);
        local_d8 = (float)VectorSignedToFloat((int)*(short *)(pfVar13 + 0xc),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_d8 = local_d8 * fVar7;
        local_d4 = (float)VectorSignedToFloat((int)*(short *)((int)pfVar13 + 0x32),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_d4 = local_d4 * fVar7;
        local_d0 = (float)VectorSignedToFloat((int)*(short *)(pfVar13 + 0xd),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_d0 = local_d0 * fVar7;
        local_cc = (float)VectorSignedToFloat((int)*(short *)((int)pfVar13 + 0x36),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_cc = local_cc * fVar7;
        FUN_00358778(iVar15,0,4,&local_d8,0);
        *(undefined1 *)(iVar15 + 0xac) = 1;
        FUN_003721e0(iVar15,&local_8c);
        FUN_00372170(iVar15,0);
      }
    }
    fVar21 = DAT_00147d58;
    uVar23 = DAT_00147d54;
    sVar14 = sVar14 + 1;
    pfVar13 = pfVar13 + 0x17;
  } while (sVar14 < 200);
  sVar14 = 0;
  pfVar13 = param_2;
  do {
    if (*(char *)(pfVar13 + 9) == '\x06') {
      local_b0 = *pfVar13;
      local_ac = pfVar13[1];
      local_a8 = pfVar13[2];
      local_8c = 1.0;
      local_88 = 0.0;
      local_78 = 1.0;
      local_84 = 0.0;
      local_6c = 0.0;
      local_64 = 1.0;
      local_7c = 0.0;
      local_74 = 0.0;
      local_68 = 0.0;
      local_80 = local_b0;
      local_70 = local_ac;
      local_60 = local_a8;
      if (*(short *)(pfVar13 + 10) == 2) {
        fVar19 = (float)FUN_003727f0(uVar23);
        fVar20 = (float)FUN_00372674(uVar23);
        fVar18 = local_84 * fVar19;
        local_84 = local_84 * fVar20 - local_88 * fVar19;
        fVar29 = local_74 * fVar19;
        local_74 = local_74 * fVar20 - local_78 * fVar19;
        fVar22 = local_64 * fVar19;
        local_64 = local_64 * fVar20 - local_68 * fVar19;
        local_88 = local_88 * fVar20 + fVar18;
        local_78 = local_78 * fVar20 + fVar29;
        local_68 = local_68 * fVar20 + fVar22;
      }
      else {
        FUN_00371fac(&local_8c,param_3 + 0x2fc);
      }
      fVar18 = pfVar13[0x10];
      local_8c = local_8c * fVar18;
      local_7c = local_7c * fVar18;
      local_6c = local_6c * fVar18;
      local_88 = local_88 * fVar18;
      local_78 = local_78 * fVar18;
      local_68 = local_68 * fVar18;
      if (pfVar13[0x16] != 0.0) {
        iVar15 = *(int *)((int)pfVar13[0x16] + 4);
        local_cc = (float)VectorSignedToFloat((int)*(short *)((int)pfVar13 + 0x36),
                                              (byte)(in_fpscr >> 0x15) & 3);
        if (DAT_00147d5c < (int)local_cc) {
          local_cc = fVar21;
        }
        local_d8 = *DAT_00147d60;
        local_d4 = DAT_00147d60[1];
        local_d0 = DAT_00147d60[2];
        local_cc = local_cc * fVar7;
        uVar16 = 0;
        local_e8 = DAT_00147d60[4];
        fStack_e4 = DAT_00147d60[5];
        fStack_e0 = DAT_00147d60[6];
        fStack_dc = DAT_00147d60[7];
        if (*(short *)(pfVar13 + 10) == 2) {
          FUN_00358778(iVar15,1,0,&local_e8,2);
          FUN_00358778(iVar15,1,4,&local_d8,2);
          FUN_0036932c(iVar15,0);
          FUN_0037266c(iVar15,1);
          uVar16 = *(undefined4 *)(DAT_00147888 + 0x30);
        }
        else {
          FUN_00358778(iVar15,0,0,&local_e8,2);
          FUN_00358778(iVar15,0,4,&local_d8,2);
          FUN_0037266c(iVar15,0);
          FUN_0036932c(iVar15,1);
        }
        *(undefined1 *)(iVar15 + 0xac) = 1;
        FUN_003721e0(iVar15,&local_8c);
        FUN_00372170(iVar15,uVar16);
      }
    }
    sVar14 = sVar14 + 1;
    pfVar13 = pfVar13 + 0x17;
  } while (sVar14 < 200);
  sVar14 = 0;
  pfVar13 = param_2;
  do {
    if ((*(char *)(pfVar13 + 9) == '\a') &&
       ((*(short *)(pfVar13 + 10) != 1 ||
        (fVar22 = *pfVar13 - *(float *)(iVar12 + 0x8c),
        fVar21 = pfVar13[2] - *(float *)(iVar12 + 0x94),
        fVar29 = *(float *)((int)pfVar13[0x15] + 0x28) - *(float *)(iVar12 + 0x8c),
        fVar18 = *(float *)((int)pfVar13[0x15] + 0x30) - *(float *)(iVar12 + 0x94),
        (int)(SQRT(fVar22 * fVar22 + fVar21 * fVar21) - SQRT(fVar29 * fVar29 + fVar18 * fVar18)) <
        DAT_00147d64)))) {
      local_bc = *pfVar13;
      local_b8 = pfVar13[1];
      local_b4 = pfVar13[2];
      local_64 = pfVar13[0x10];
      local_8c = local_64 * 1.0;
      local_7c = local_64 * 0.0;
      local_6c = local_64 * 0.0;
      local_88 = local_64 * 0.0;
      local_78 = local_64 * 1.0;
      local_68 = local_64 * 0.0;
      local_84 = local_64 * 0.0;
      local_74 = local_64 * 0.0;
      local_64 = local_64 * 1.0;
      if (pfVar13[0x16] != 0.0) {
        iVar15 = *(int *)((int)pfVar13[0x16] + 4);
        local_d8 = *DAT_00148190;
        local_d4 = DAT_00148190[1];
        local_d0 = DAT_00148190[2];
        local_cc = (float)VectorSignedToFloat((int)*(short *)((int)pfVar13 + 0x3e),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_cc = local_cc * fVar7;
        local_80 = local_bc;
        local_70 = local_b8;
        local_60 = local_b4;
        FUN_00358778(iVar15,0,4,&local_d8,2);
        *(undefined1 *)(iVar15 + 0xac) = 1;
        FUN_003721e0(iVar15,&local_8c);
        FUN_00372170(iVar15,0);
      }
    }
    fVar9 = DAT_001481ac;
    fVar20 = DAT_001481a8;
    fVar19 = DAT_001481a4;
    fVar22 = DAT_001481a0;
    fVar29 = DAT_0014819c;
    fVar18 = DAT_00148198;
    fVar21 = DAT_00148194;
    sVar14 = sVar14 + 1;
    pfVar13 = pfVar13 + 0x17;
  } while (sVar14 < 200);
  sVar14 = 0;
  pfVar13 = param_2;
  do {
    if (*(char *)(pfVar13 + 9) == '\b') {
      local_c8 = *pfVar13;
      local_c4 = pfVar13[1];
      local_c0 = pfVar13[2];
      local_8c = 1.0;
      local_88 = 0.0;
      local_84 = 0.0;
      local_7c = 0.0;
      local_78 = 1.0;
      local_74 = 0.0;
      local_68 = 0.0;
      local_64 = 1.0;
      local_6c = 0.0;
      sVar1 = *(short *)((int)pfVar13 + 0x2a);
      local_80 = local_c8;
      local_70 = local_c4;
      local_60 = local_c0;
      if (*(short *)(pfVar13 + 0xb) != 0) {
        fVar24 = (float)VectorSignedToFloat((int)*(short *)(pfVar13 + 0xb),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar24 = fVar24 * fVar9;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar24 == fVar6) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar25 = (float)FUN_003727f0(fVar24);
          fVar24 = (float)FUN_00372674(fVar24);
          fVar28 = local_8c * fVar25;
          local_8c = local_8c * fVar24 - local_84 * fVar25;
          local_84 = fVar28 + local_84 * fVar24;
          fVar28 = local_7c * fVar25;
          local_7c = local_7c * fVar24 - local_74 * fVar25;
          local_74 = fVar28 + local_74 * fVar24;
          fVar28 = local_6c * fVar25;
          local_6c = local_6c * fVar24 - local_64 * fVar25;
          local_64 = fVar28 + local_64 * fVar24;
        }
      }
      if (sVar1 != 0) {
        fVar24 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
        fVar24 = fVar24 * fVar9;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar24 == fVar6) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar26 = (float)FUN_003727f0(fVar24);
          fVar27 = (float)FUN_00372674(fVar24);
          fVar24 = local_84 * fVar26;
          local_84 = local_84 * fVar27 - local_88 * fVar26;
          fVar25 = local_74 * fVar26;
          local_74 = local_74 * fVar27 - local_78 * fVar26;
          fVar28 = local_64 * fVar26;
          local_64 = local_64 * fVar27 - local_68 * fVar26;
          local_88 = local_88 * fVar27 + fVar24;
          local_78 = local_78 * fVar27 + fVar25;
          local_68 = local_68 * fVar27 + fVar28;
        }
      }
      fVar24 = pfVar13[0x10];
      local_8c = local_8c * fVar24;
      local_7c = local_7c * fVar24;
      local_6c = local_6c * fVar24;
      local_88 = local_88 * fVar24;
      local_78 = local_78 * fVar24;
      local_68 = local_68 * fVar24;
      local_84 = local_84 * fVar24;
      local_74 = local_74 * fVar24;
      local_64 = local_64 * fVar24;
      fVar24 = pfVar13[0x12] * fVar21;
      uVar17 = in_fpscr & 0xfffffff | (uint)(fVar24 == fVar6) << 0x1e;
      if (!SUB41(uVar17 >> 0x1e,0)) {
        fVar26 = (float)FUN_003727f0(fVar24);
        fVar27 = (float)FUN_00372674(fVar24);
        fVar24 = local_84 * fVar26;
        local_84 = local_84 * fVar27 - local_88 * fVar26;
        fVar25 = local_74 * fVar26;
        local_74 = local_74 * fVar27 - local_78 * fVar26;
        fVar28 = local_64 * fVar26;
        local_64 = local_64 * fVar27 - local_68 * fVar26;
        local_88 = local_88 * fVar27 + fVar24;
        local_78 = local_78 * fVar27 + fVar25;
        local_68 = local_68 * fVar27 + fVar28;
      }
      fVar24 = pfVar13[0x12] * fVar18;
      in_fpscr = uVar17 & 0xfffffff | (uint)(fVar24 == fVar6) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar25 = (float)FUN_003727f0(fVar24);
        fVar24 = (float)FUN_00372674(fVar24);
        fVar28 = local_8c * fVar25;
        local_8c = local_8c * fVar24 - local_84 * fVar25;
        local_84 = fVar28 + local_84 * fVar24;
        fVar28 = local_7c * fVar25;
        local_7c = local_7c * fVar24 - local_74 * fVar25;
        local_74 = fVar28 + local_74 * fVar24;
        fVar28 = local_6c * fVar25;
        local_6c = local_6c * fVar24 - local_64 * fVar25;
        local_64 = fVar28 + local_64 * fVar24;
      }
      FUN_00371234(pfVar13[0x12] * fVar29,&local_8c,1);
      FUN_00371348(fVar5 - pfVar13[0x11],pfVar13[0x11] + fVar5,&local_8c,1);
      FUN_00371234(pfVar13[0x12] * fVar22,&local_8c,1);
      FUN_003735e8(pfVar13[0x12] * fVar19,&local_8c,1);
      FUN_00369014(pfVar13[0x12] * fVar20,&local_8c,1);
      if (pfVar13[0x16] != 0.0) {
        iVar12 = *(int *)((int)pfVar13[0x16] + 4);
        *(undefined1 *)(iVar12 + 0xac) = 1;
        FUN_003721e0(iVar12,&local_8c);
        FUN_00372170(iVar12,0);
      }
    }
    pfVar10 = DAT_001485d8;
    fVar24 = DAT_001485d4;
    sVar14 = sVar14 + 1;
    pfVar13 = pfVar13 + 0x17;
  } while (sVar14 < 200);
  sVar14 = 0;
  pfVar13 = param_2;
  do {
    if (*(char *)(pfVar13 + 9) == '\x02') {
      local_d4 = *pfVar13;
      local_d0 = pfVar13[1];
      local_cc = pfVar13[2];
      local_84 = 0.0;
      local_88 = 0.0;
      local_8c = 1.0;
      local_7c = 0.0;
      local_78 = 1.0;
      local_68 = 0.0;
      local_64 = 1.0;
      local_74 = 0.0;
      local_6c = 0.0;
      local_80 = local_d4;
      local_70 = local_d0;
      local_60 = local_cc;
      FUN_00371fac(&local_8c,param_3 + 0x2fc);
      fVar21 = (float)VectorSignedToFloat((int)*(short *)((int)pfVar13 + 0x2e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_00371234(fVar21 * fVar3 * fVar4,&local_8c,1);
      fVar21 = pfVar13[0x10] * fVar24;
      FUN_00371348(fVar21,fVar21,fVar21,&local_8c,1);
      if (pfVar13[0x16] != 0.0) {
        iVar12 = *(int *)((int)pfVar13[0x16] + 4);
        FUN_003687a8(iVar12);
        local_d8 = *pfVar10;
        local_d4 = pfVar10[1];
        local_d0 = pfVar10[2];
        local_cc = (float)VectorSignedToFloat((int)*(short *)((int)pfVar13 + 0x36),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_cc = local_cc * fVar7;
        FUN_00358778(iVar12,0,4,&local_d8,0);
        *(undefined1 *)(iVar12 + 0xac) = 1;
        FUN_003721e0(iVar12,&local_8c);
        FUN_00372170(iVar12,0);
      }
    }
    pfVar11 = DAT_001485dc;
    sVar14 = sVar14 + 1;
    pfVar13 = pfVar13 + 0x17;
  } while (sVar14 < 200);
  sVar14 = 0;
  pfVar13 = param_2;
  do {
    if (*(char *)(pfVar13 + 9) == '\x03') {
      local_d4 = *pfVar13;
      local_d0 = pfVar13[1];
      local_cc = pfVar13[2];
      local_84 = 0.0;
      local_88 = 0.0;
      local_8c = 1.0;
      local_7c = 0.0;
      local_78 = 1.0;
      local_68 = 0.0;
      local_64 = 1.0;
      local_74 = 0.0;
      local_6c = 0.0;
      fVar21 = (float)VectorSignedToFloat((int)*(short *)((int)pfVar13 + 0x2e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_80 = local_d4;
      local_70 = local_d0;
      local_60 = local_cc;
      FUN_00371234(fVar21 * fVar3 * fVar4,&local_8c,1);
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(pfVar13 + 0xb),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar21 * fVar3 * fVar4,&local_8c,1);
      FUN_00371348(pfVar13[0x10],pfVar13[0x10],fVar5,&local_8c,1);
      if (pfVar13[0x16] != 0.0) {
        iVar12 = *(int *)((int)pfVar13[0x16] + 4);
        FUN_003687a8(iVar12);
        local_d8 = *pfVar11;
        local_d4 = pfVar11[1];
        local_d0 = pfVar11[2];
        local_cc = (float)VectorSignedToFloat((int)*(short *)((int)pfVar13 + 0x36),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_cc = local_cc * fVar7;
        FUN_00358778(iVar12,0,4,&local_d8,2);
        *(undefined1 *)(iVar12 + 0xac) = 1;
        FUN_003721e0(iVar12,&local_8c);
        FUN_00372170(iVar12,0);
      }
    }
    pfVar10 = DAT_001485e0;
    sVar14 = sVar14 + 1;
    pfVar13 = pfVar13 + 0x17;
  } while (sVar14 < 200);
  sVar14 = 0;
  do {
    if (*(char *)(param_2 + 9) == '\x05') {
      local_d4 = *param_2;
      local_d0 = param_2[1];
      local_cc = param_2[2];
      local_84 = 0.0;
      local_88 = 0.0;
      local_8c = 1.0;
      local_7c = 0.0;
      local_78 = 1.0;
      local_68 = 0.0;
      local_64 = 1.0;
      local_74 = 0.0;
      local_6c = 0.0;
      sVar1 = *(short *)((int)param_2 + 0x2a);
      sVar2 = *(short *)(param_2 + 0xb);
      local_80 = local_d4;
      local_70 = local_d0;
      local_60 = local_cc;
      FUN_00371234(fVar6,&local_8c,1);
      if (sVar2 != 0) {
        fVar21 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x15) & 3);
        FUN_003735e8(fVar21 * fVar9,&local_8c,1);
      }
      if (sVar1 != 0) {
        fVar21 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00369014(fVar21 * fVar9,&local_8c,1);
      }
      fVar21 = param_2[0x10];
      FUN_00371348(fVar21,fVar21,fVar21,&local_8c,1);
      if (param_2[0x16] != 0.0) {
        iVar12 = *(int *)((int)param_2[0x16] + 4);
        FUN_003687a8(iVar12);
        local_d8 = *pfVar10;
        local_d4 = pfVar10[1];
        local_d0 = pfVar10[2];
        local_cc = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x36),
                                              (byte)(in_fpscr >> 0x15) & 3);
        local_cc = local_cc * fVar7;
        FUN_00358778(iVar12,0,4,&local_d8,2);
        *(undefined1 *)(iVar12 + 0xac) = 1;
        FUN_003721e0(iVar12,&local_8c);
        FUN_00372170(iVar12,0);
      }
    }
    sVar14 = sVar14 + 1;
    param_2 = param_2 + 0x17;
  } while (sVar14 < 200);
  return;
}
