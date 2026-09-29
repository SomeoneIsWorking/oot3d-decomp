// OoT3D decomp @ 001bf194  name=FUN_001bf194  size=2364

void FUN_001bf194(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  short *psVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  float *pfVar15;
  uint in_fpscr;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_138;
  float local_134;
  float local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 auStack_cc [4];
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 auStack_bc [12];
  float local_b0;
  undefined1 auStack_ac [12];
  float local_a0;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [48];
  undefined4 *local_5c;
  undefined4 *local_58;

  fVar19 = DAT_001bf598;
  fVar3 = DAT_001bf594;
  local_5c = param_1;
  local_58 = param_2;
  if (*(char *)(param_1 + 9) == '\x06') {
    FUN_003713fc(*param_1,param_1[1],param_1[2],auStack_8c,0);
    fVar22 = DAT_001bf5a0;
    psVar4 = DAT_001bf59c;
    fVar16 = (float)VectorSignedToFloat((int)DAT_001bf59c[1],(byte)(in_fpscr >> 0x15) & 3);
    FUN_003735e8(fVar16 * fVar19 * DAT_001bf5a0,auStack_8c,1);
    fVar16 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00369014(fVar16 * fVar19 * fVar22,auStack_8c,1);
    fVar16 = (float)VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(fVar16 * fVar19 * fVar22,auStack_8c,1);
    uVar17 = param_1[0xc];
    FUN_00371348(uVar17,uVar17,uVar17,auStack_8c,1);
    FUN_003713fc(DAT_001bf5a4,auStack_8c,1);
    FUN_00369014(DAT_001bf5a8,auStack_8c,1);
    *(undefined1 *)(*(int *)(param_3 + 0x484) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_3 + 0x484),auStack_8c);
    FUN_00372170(*(undefined4 *)(param_3 + 0x484),0);
  }
  pfVar5 = DAT_001bf5ac;
  pfVar15 = DAT_001bf5ac + 0x200;
  iVar13 = 0;
  fVar25 = DAT_001bf5ac[1] + fVar3 * DAT_001bf5ac[3];
  fVar24 = *DAT_001bf5ac + fVar3 * DAT_001bf5ac[2];
  local_e0 = DAT_001bf5ac[0x201] + fVar3 * DAT_001bf5ac[0x203];
  local_e8 = *pfVar15 + fVar3 * DAT_001bf5ac[0x202];
  local_108 = fVar25 * local_e0;
  local_f8 = fVar24 * local_e0;
  local_e0 = fVar25 * local_e0;
  local_104 = fVar24 * fVar25 * local_e8 - fVar25 * fVar24;
  local_f0 = fVar25 * fVar24 * local_e8 - fVar24 * fVar25;
  fVar26 = fVar24 * fVar24;
  local_100 = fVar26 + fVar25 * fVar25 * local_e8;
  local_f4 = fVar25 * fVar25 + fVar26 * local_e8;
  local_e8 = -local_e8;
  local_dc = 0;
  local_fc = 0;
  local_ec = 0;
  local_e4 = local_f8;
  FUN_0035619c(local_58,auStack_9c,auStack_cc,0xff,0xff,0xff,0xff,0x96,0x96,0x96);
  FUN_00342988(*(undefined4 *)(param_3 + 0x870),auStack_cc,0xffffffff);
  FUN_0035619c(local_58,auStack_ac,auStack_cc,0xff,0xff,0xff,0xff,0x9b,0x9b,0x9b);
  FUN_00342988(*(undefined4 *)(param_3 + 0x864),auStack_cc,1);
  FUN_0035619c(local_58,auStack_bc,auStack_cc,0xb4,0xb4,0xb4,0xff,200,200,200);
  FUN_00342988(*(undefined4 *)(param_3 + 0x868),auStack_cc,1);
  fVar7 = DAT_001bf5c4;
  fVar6 = DAT_001bf5c0;
  fVar23 = DAT_001bf5bc;
  fVar16 = DAT_001bf5b8;
  fVar22 = DAT_001bf5b4;
  fVar19 = DAT_001bf5b0;
  sVar14 = 1;
  puVar11 = local_5c;
  do {
    puVar10 = puVar11 + 0x10;
    cVar1 = *(char *)(puVar11 + 0x19);
    if (cVar1 == '\x01') {
      local_a0 = (float)VectorSignedToFloat((int)*(short *)((int)puVar11 + 0x6a),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_a0 = local_a0 * fVar16;
      local_d8 = (float)puVar11[0x1c] * fVar6;
      local_d0 = (float)puVar11[0x1c] * fVar6;
      local_d4 = fVar6;
      FUN_003693b4(*(undefined4 *)(param_3 + 0x864),puVar10,0,&local_d8,auStack_ac,0);
      FUN_003693b4(*(undefined4 *)(param_3 + 0x864),puVar10,&local_108,&local_d8,auStack_ac,0);
    }
    else if (cVar1 == '\x02') {
      local_d0 = (float)puVar11[0x1c];
      local_d8 = local_d0 * fVar19;
      local_d4 = local_d0 * fVar19;
      local_d0 = local_d0 * fVar19;
      local_b0 = (float)VectorSignedToFloat((int)*(short *)((int)puVar11 + 0x6a),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_b0 = local_b0 * fVar16;
      FUN_003693b4(*(undefined4 *)(param_3 + 0x868),puVar10,0,&local_d8,auStack_bc,0);
    }
    else if (cVar1 == '\x03') {
      if (iVar13 < 0x1e) {
        FUN_003713fc(*puVar10,puVar11[0x11],puVar11[0x12],&local_138,0);
        FUN_00371fac(&local_138,param_2 + 0xbf);
        FUN_00371348(puVar11[0x1c],puVar11[0x1c],fVar7,&local_138,1);
        iVar12 = param_3 + iVar13 * 4;
        lVar2 = (ulonglong)(uint)*(byte *)((int)puVar11 + 0x65) * (ulonglong)DAT_001bfa40;
        iVar9 = *(int *)(*(int *)(iVar12 + 0x7e0) + 0xc);
        fVar18 = (float)VectorSignedToFloat((uint)*(byte *)((int)puVar11 + 0x65) +
                                            (uint)((ulonglong)lVar2 >> 0x24) * -0x1e,
                                            (byte)(in_fpscr >> 0x15) & 3);
        if (*DAT_001bfa44 == 0) {
          *(float *)(iVar9 + 8) = fVar18 * fVar22;
          FUN_003586ec(iVar9,0,(int)lVar2);
        }
        fVar18 = (float)VectorSignedToFloat((int)*(short *)((int)puVar11 + 0x6a),
                                            (byte)(in_fpscr >> 0x15) & 3);
        FUN_003695cc(fVar3,fVar3,fVar3,fVar18 * fVar16,*(undefined4 *)(iVar12 + 0x7e0),0,4,2);
        *(undefined1 *)(*(int *)(iVar12 + 0x7e0) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar12 + 0x7e0),&local_138);
        FUN_00372170(*(undefined4 *)(iVar12 + 0x7e0),0);
      }
      iVar13 = iVar13 + 1;
    }
    else if (cVar1 == '\x04') {
      local_d0 = (float)puVar11[0x1c];
      local_d8 = local_d0 * fVar23;
      local_d4 = local_d0 * fVar23;
      local_d0 = local_d0 * fVar23;
      FUN_003693b4(*(undefined4 *)(param_3 + 0x870),puVar10,0,&local_d8,auStack_9c,0);
    }
    sVar14 = sVar14 + 1;
    puVar11 = puVar10;
  } while (sVar14 < 100);
  iVar13 = *(int *)(*(int *)(param_3 + 0x864) + 8);
  if (*(int *)(iVar13 + 0x1fc) != 0) {
    FUN_00371eac(iVar13,0);
  }
  iVar13 = *(int *)(*(int *)(param_3 + 0x870) + 8);
  if (*(int *)(iVar13 + 0x1fc) != 0) {
    FUN_00371eac(iVar13,0);
  }
  iVar13 = *(int *)(*(int *)(param_3 + 0x868) + 8);
  if (*(int *)(iVar13 + 0x1fc) != 0) {
    FUN_00371eac(iVar13,0);
  }
  local_100 = pfVar5[0x201] + fVar3 * pfVar5[0x203];
  local_108 = *pfVar15 + fVar3 * pfVar5[0x202];
  local_128 = fVar25 * local_100;
  local_118 = fVar24 * local_100;
  local_100 = fVar25 * local_100;
  local_124 = fVar24 * fVar25 * local_108 - fVar25 * fVar24;
  local_110 = fVar25 * fVar24 * local_108 - fVar24 * fVar25;
  local_120 = fVar26 + fVar25 * fVar25 * local_108;
  local_114 = fVar25 * fVar25 + fVar26 * local_108;
  local_108 = -local_108;
  local_11c = 0;
  local_fc = 0;
  local_10c = 0;
  local_104 = local_118;
  FUN_0035619c(local_58,auStack_9c,auStack_bc,0xff,0xff,0xff,0x82,0x9b,0x9b,0x9b);
  FUN_00342988(*(undefined4 *)(param_3 + 0x87c),auStack_bc,1);
  FUN_003a93cc(local_58,auStack_ac,0xff,0xff,0xff,0xff);
  FUN_00342988(*(undefined4 *)(param_3 + 0x87c),auStack_bc,1);
  uVar8 = DAT_001bfa3c;
  uVar17 = DAT_001bfa38;
  sVar14 = 0x1e;
  puVar11 = local_5c + 0x1e0;
  do {
    cVar1 = *(char *)(puVar11 + 9);
    if (cVar1 == '\x05') {
      FUN_003713fc(*puVar11,puVar11[1],puVar11[2],&local_f8,0);
      FUN_003735e8(puVar11[0xe],&local_f8,1);
      FUN_00369014(puVar11[0xd],&local_f8,1);
      FUN_00371234(puVar11[0xf],&local_f8,1);
      FUN_00371348(uVar8,uVar8,uVar17,&local_f8,1);
      FUN_00371f1c(*(undefined4 *)(param_3 + 0x85c),0,&local_f8,0,0,0);
    }
    else if (cVar1 == '\a') {
      local_c0 = (float)puVar11[0xc];
      local_c8 = local_c0 * fVar6;
      local_c4 = local_c0 * fVar6;
      local_c0 = local_c0 * fVar6;
      FUN_003693b4(*(undefined4 *)(param_3 + 0x87c),puVar11,0,&local_c8,auStack_9c,0);
      FUN_003693b4(*(undefined4 *)(param_3 + 0x87c),puVar11,&local_128,&local_c8,auStack_9c,0);
    }
    else if (cVar1 == '\b') {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar14 = sVar14 + 1;
    puVar11 = puVar11 + 0x10;
  } while (sVar14 < 0x82);
  iVar13 = *(int *)(*(int *)(param_3 + 0x87c) + 8);
  if (*(int *)(iVar13 + 0x1fc) != 0) {
    FUN_00371eac(iVar13,0);
  }
  iVar13 = *(int *)(*(int *)(param_3 + 0x880) + 8);
  if (*(int *)(iVar13 + 0x1fc) != 0) {
    FUN_00371eac(iVar13,0);
  }
  if (*(int *)(*(int *)(param_3 + 0x85c) + 0x1fc) != 0) {
    iVar13 = FUN_0035bfb4(param_2 + 0x29c,*local_58);
    FUN_0035bf50(iVar13,param_2[0x29c],0);
    local_12c = DAT_001bfa54;
    fVar3 = DAT_001bfa48;
    fVar19 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar13 + 8),(byte)(in_fpscr >> 0x15) & 3);
    uVar17 = VectorFloatToUnsigned(fVar19 * (float)param_2[0xc87],3);
    *(char *)(iVar13 + 8) = (char)uVar17;
    fVar19 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar13 + 9),(byte)(in_fpscr >> 0x15) & 3);
    uVar20 = VectorFloatToUnsigned(fVar19 * (float)param_2[0xc87],3);
    *(char *)(iVar13 + 9) = (char)uVar20;
    fVar19 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar13 + 10),(byte)(in_fpscr >> 0x15) & 3)
    ;
    uVar21 = VectorFloatToUnsigned(fVar19 * (float)param_2[0xc87],3);
    *(char *)(iVar13 + 10) = (char)uVar21;
    fVar23 = (float)VectorUnsignedToFloat(*(byte *)(iVar13 + 8) + 0x6e,(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar22 = (float)VectorUnsignedToFloat((uVar20 & 0xff) + 0x6e,(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorUnsignedToFloat((uVar21 & 0xff) + 0x6e,(byte)(in_fpscr >> 0x15) & 3);
    if (DAT_001bfa4c < (int)fVar23) {
      fVar23 = fVar3;
    }
    if (DAT_001bfa4c < (int)fVar22) {
      fVar22 = fVar3;
    }
    if (DAT_001bfa4c < (int)fVar19) {
      fVar19 = fVar3;
    }
    local_138 = DAT_001bfa50 * fVar23 * fVar16;
    local_134 = fVar7 * fVar22 * fVar16;
    local_130 = fVar7 * fVar19 * fVar16;
    iVar13 = *(int *)(param_3 + 0x85c);
    *(float *)(iVar13 + 0xf0) = local_138;
    *(float *)(iVar13 + 0xf4) = local_134;
    *(float *)(iVar13 + 0xf8) = local_130;
    *(undefined4 *)(iVar13 + 0xfc) = local_12c;
    FUN_00371eac(*(undefined4 *)(param_3 + 0x85c),0);
  }
  return;
}
