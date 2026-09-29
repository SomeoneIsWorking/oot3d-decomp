// OoT3D decomp @ 00133688  name=FUN_00133688  size=1956

void FUN_00133688(int param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  ushort uVar8;
  float fVar9;
  uint uVar10;
  undefined4 *puVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  uint in_fpscr;
  undefined4 uVar20;
  float fVar21;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined1 auStack_b4 [48];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [12];
  float local_6c [2];
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;

  pfVar4 = DAT_00133ad4;
  iVar3 = DAT_00133ad0;
  sVar1 = (short)(int)*(float *)(DAT_00133ad0 + 0xf0);
  iVar17 = *(int *)(param_1 + 0x20ac);
  if (*(char *)(DAT_00133ad0 + 0xb) != '\0') {
    fVar9 = *DAT_00133ad4;
    fVar12 = DAT_00133ad4[1];
    fVar14 = DAT_00133ad4[2];
    fVar15 = DAT_00133ad8[1];
    fVar16 = DAT_00133ad8[2];
    *DAT_00133ad4 = *DAT_00133ad8;
    pfVar4[1] = fVar15;
    pfVar4[2] = fVar16;
    FUN_0035c9b8(param_1,param_4);
    *pfVar4 = fVar9;
    pfVar4[1] = fVar12;
    pfVar4[2] = fVar14;
  }
  fVar14 = DAT_00133af8;
  iVar13 = DAT_00133af4;
  fVar12 = DAT_00133ae4;
  pfVar5 = DAT_00133ae0;
  fVar9 = DAT_00133adc;
  uVar8 = *(ushort *)(iVar3 + 0x1e);
  if (uVar8 == 4 || uVar8 == 5) {
    iVar13 = *(int *)(iVar3 + 0xcc);
    bVar18 = uVar8 == 5;
    fVar14 = *(float *)(iVar13 + 0x21c);
    fVar15 = *(float *)(iVar13 + 0x220);
    *pfVar4 = *(float *)(iVar13 + 0x218);
    pfVar4[1] = fVar14;
    pfVar4[2] = fVar15;
    if (bVar18) {
      uVar8 = (ushort)*(byte *)(iVar3 + 0x16);
    }
    if (bVar18 && uVar8 == 2) {
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar17 + 0xbe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      FUN_003735e8(fVar14 * DAT_00133ae8,auStack_b4,0);
      local_60 = DAT_00133aec;
      local_5c = fVar12;
      local_58 = fVar12;
      FUN_003735ac(local_6c,auStack_b4,&local_60);
      *pfVar4 = *pfVar4 + local_6c[0];
      pfVar4[2] = pfVar4[2] + local_64;
    }
  }
  else if (uVar8 == 0) {
    fVar15 = DAT_00133af0[1];
    fVar16 = DAT_00133af0[2];
    *pfVar4 = *DAT_00133af0;
    pfVar4[1] = fVar15;
    pfVar4[2] = fVar16;
    *pfVar5 = *(float *)(iVar13 + 0x148) + fVar14;
    fVar14 = *(float *)(iVar13 + 0x14c);
    bVar18 = false;
    if (*(float *)(iVar17 + 0x6c) == fVar12) {
      bVar18 = *(short *)(iVar3 + 0x34) == 0;
    }
    if (bVar18) {
      FUN_00373500(fVar14,DAT_00133afc,fVar9,pfVar5 + 1);
    }
    else {
      pfVar5[1] = fVar14;
    }
  }
  if (((*(uint *)(DAT_00133b00 + iVar17) & 0x100000) == 0) &&
     (iVar17 = FUN_00374be8(param_1,0x18), iVar17 == 0)) {
    if (*(char *)(iVar3 + 0x16) != '\x02') {
      FUN_003713fc(*pfVar4,pfVar4[1],pfVar4[2],auStack_b4,0);
      FUN_003735e8(pfVar5[1] + *(float *)(iVar3 + 0xd0),auStack_b4,1);
      FUN_00369014(*pfVar5,auStack_b4,1);
      FUN_00371348(DAT_00133b04,DAT_00133b04,DAT_00133b04,auStack_b4,1);
      FUN_003713fc(fVar12,fVar12,*(undefined4 *)(iVar3 + 0xd4),auStack_b4,1);
      uVar20 = DAT_00133b08;
      FUN_00371234(DAT_00133b08,auStack_b4,1);
      FUN_003735e8(uVar20,auStack_b4,1);
      *(undefined1 *)(*(int *)(param_4 + 0x488) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_4 + 0x488),auStack_b4);
      FUN_00372170(*(undefined4 *)(param_4 + 0x488),0);
      local_60 = DAT_00133b0c;
      local_5c = fVar12;
      local_58 = fVar12;
      FUN_003735ac(DAT_00133b10,auStack_b4,&local_60);
      local_60 = DAT_00133b14;
      local_58 = (float)DAT_00133b18;
      FUN_003735ac(auStack_84,auStack_b4,&local_60);
      FUN_0035c704(param_1,auStack_84,DAT_00133b1c,0,param_4);
      local_60 = DAT_00133b20;
      local_58 = DAT_00133b24;
      FUN_003735ac(auStack_78,auStack_b4,&local_60);
      FUN_0035c704(param_1,auStack_78,DAT_00133b28,1,param_4);
    }
    fVar14 = DAT_00133b30;
    pfVar5 = DAT_00133b2c;
    if (((*(uint *)(iVar3 + 0x80) & 1) == 0) &&
       (iVar17 = FUN_003679b4(DAT_00133b34), fVar15 = DAT_00133b38, iVar17 != 0)) {
      *pfVar5 = DAT_00133b38;
      pfVar5[1] = fVar15;
      pfVar5[2] = fVar15;
      pfVar5[3] = fVar14;
    }
    pfVar6 = DAT_00133b3c;
    if (((*(uint *)(iVar3 + 0x7c) & 1) == 0) &&
       (iVar17 = FUN_003679b4(DAT_00133b40), fVar15 = DAT_00133b44, iVar17 != 0)) {
      *pfVar6 = DAT_00133b44;
      pfVar6[1] = fVar15;
      pfVar6[2] = fVar15;
      pfVar6[3] = fVar14;
    }
    pfVar7 = DAT_00133b48;
    local_c4 = *pfVar5;
    local_c0 = pfVar5[1];
    local_bc = pfVar5[2];
    local_b8 = pfVar5[3];
    local_d4 = *pfVar6;
    local_d0 = pfVar6[1];
    local_cc = pfVar6[2];
    local_c8 = pfVar6[3];
    if (*(char *)(iVar3 + 8) != '\0') {
      if (((*(uint *)(iVar3 + 0x84) & 1) == 0) && (iVar17 = FUN_003679b4(DAT_00133b4c), iVar17 != 0)
         ) {
        *pfVar7 = fVar9;
        pfVar7[1] = fVar9;
        pfVar7[2] = fVar9;
        pfVar7[3] = fVar12;
      }
      local_c4 = local_c4 - *pfVar7;
      local_c0 = local_c0 - pfVar7[1];
      local_bc = local_bc - pfVar7[2];
      local_b8 = local_b8 - pfVar7[3];
      local_d4 = local_d4 - *pfVar7;
      local_d0 = local_d0 - pfVar7[1];
      local_cc = local_cc - pfVar7[2];
      local_c8 = local_c8 - pfVar7[3];
    }
    fVar9 = DAT_00133eac;
    iVar17 = *(int *)(*(int *)(param_4 + 0x7d8) + 8);
    *(float *)(iVar17 + 0xf0) = local_d4;
    *(float *)(iVar17 + 0xf4) = local_d0;
    *(float *)(iVar17 + 0xf8) = local_cc;
    *(float *)(iVar17 + 0xfc) = local_c8;
    iVar17 = *(int *)(*(int *)(param_4 + 0x7d8) + 8);
    *(float *)(iVar17 + 0x100) = local_c4;
    *(float *)(iVar17 + 0x104) = local_c0;
    *(float *)(iVar17 + 0x108) = local_bc;
    *(float *)(iVar17 + 0x10c) = local_b8;
    iVar17 = *(int *)(*(int *)(param_4 + 0x7dc) + 8);
    *(float *)(iVar17 + 0xf0) = local_d4;
    *(float *)(iVar17 + 0xf4) = local_d0;
    *(float *)(iVar17 + 0xf8) = local_cc;
    *(float *)(iVar17 + 0xfc) = local_c8;
    iVar17 = *(int *)(*(int *)(param_4 + 0x7dc) + 8);
    *(float *)(iVar17 + 0x100) = local_c4;
    *(float *)(iVar17 + 0x104) = local_c0;
    *(float *)(iVar17 + 0x108) = local_bc;
    *(float *)(iVar17 + 0x10c) = local_b8;
    uVar20 = DAT_00133eb4;
    pfVar5 = DAT_00133eb0;
    if (*(short *)(iVar3 + 0x1e) == 4) {
      cVar2 = *(char *)(iVar3 + 0x1a);
      bVar18 = cVar2 == '\0';
      if (bVar18) {
        cVar2 = *(char *)(iVar3 + 0x16);
      }
      if (!bVar18 || cVar2 != '\x02') {
        fVar21 = *pfVar4 - *DAT_00133eb0;
        fVar16 = pfVar4[1] - DAT_00133eb0[1];
        fVar15 = pfVar4[2] - DAT_00133eb0[2];
        uVar20 = FUN_003696ec(fVar21,fVar15);
        fVar12 = (float)FUN_003696ec(fVar16,SQRT(fVar21 * fVar21 + fVar15 * fVar15));
        FUN_003713fc(*pfVar5,pfVar5[1],pfVar5[2],auStack_b4,0);
        FUN_003735e8(uVar20,auStack_b4,1);
        FUN_00369014(-fVar12,auStack_b4,1);
        FUN_00371348(*(undefined4 *)(iVar3 + 0xf8),fVar14,
                     SQRT(fVar21 * fVar21 + fVar16 * fVar16 + fVar15 * fVar15) * fVar9,auStack_b4,1)
        ;
        FUN_003693b4(*(undefined4 *)(param_4 + 0x7d8),0,auStack_b4,0,0,0);
        FUN_00371eac(*(undefined4 *)(*(int *)(param_4 + 0x7d8) + 8),0);
        return;
      }
    }
    for (; iVar17 = (int)sVar1, iVar17 < 199; sVar1 = sVar1 + 1) {
      bVar18 = iVar17 == 0xc5;
      uVar10 = (int)sVar1 * (int)(short)DAT_00133eb8;
      iVar13 = ((int)uVar10 >> 0x13) - ((int)uVar10 >> 0x1f);
      if (bVar18) {
        uVar10 = (uint)*(byte *)(iVar3 + 0x16);
      }
      bVar19 = bVar18 && uVar10 == 0;
      if (bVar18 && uVar10 == 0) {
        bVar19 = *(short *)(iVar3 + 0x1e) == 3;
      }
      if (bVar19) {
        fVar21 = *DAT_00133b10 - *(float *)(param_2 + 0x93c);
        fVar16 = DAT_00133b10[1] - *(float *)(param_2 + 0x940);
        fVar15 = DAT_00133b10[2] - *(float *)(param_2 + 0x944);
        uVar20 = FUN_003696ec(fVar21,fVar15);
        fVar12 = (float)FUN_003696ec(fVar16,SQRT(fVar21 * fVar21 + fVar15 * fVar15));
        FUN_003713fc(*(float *)(param_2 + 0x93c),*(undefined4 *)(param_2 + 0x940),
                     *(undefined4 *)(param_2 + 0x944),auStack_b4,0);
        FUN_003735e8(uVar20,auStack_b4,1);
        FUN_00369014(-fVar12,auStack_b4,1);
        FUN_00371348(*(undefined4 *)(iVar3 + 0xf8),fVar14,
                     SQRT(fVar21 * fVar21 + fVar16 * fVar16 + fVar15 * fVar15) * fVar9,auStack_b4,1)
        ;
        FUN_003693b4(*(undefined4 *)(param_4 + iVar13 * 4 + 0x7d8),0,auStack_b4,0,0,0);
        break;
      }
      puVar11 = (undefined4 *)(param_2 + iVar17 * 0xc);
      FUN_003713fc(*puVar11,puVar11[1],puVar11[2],auStack_b4,0);
      puVar11 = (undefined4 *)(param_3 + iVar17 * 0xc);
      FUN_003735e8(puVar11[1],auStack_b4,1);
      FUN_00369014(*puVar11,auStack_b4,1);
      FUN_00371348(*(undefined4 *)(iVar3 + 0xf8),fVar14,uVar20,auStack_b4,1);
      FUN_003693b4(*(undefined4 *)(param_4 + iVar13 * 4 + 0x7d8),0,auStack_b4,0,0,0);
    }
    FUN_00371eac(*(undefined4 *)(*(int *)(param_4 + 0x7d8) + 8),0);
    FUN_00371eac(*(undefined4 *)(*(int *)(param_4 + 0x7dc) + 8),0);
  }
  return;
}
