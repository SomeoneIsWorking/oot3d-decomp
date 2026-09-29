// OoT3D decomp @ 003b5290  name=FUN_003b5290  size=2024

void FUN_003b5290(float param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  bool bVar15;
  uint in_fpscr;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  float local_5c;
  float local_58;
  float local_54;
  undefined4 *local_50;

  local_50 = param_2 + 5;
  uVar6 = FUN_0035bfb4(param_2 + 0x29c,*param_2);
  FUN_0035bf50(uVar6,param_2[0x29c],0);
  FUN_00340f44(uVar6,*(undefined4 *)((int)param_1 + 0x480));
  FUN_0036879c(*(undefined4 *)((int)param_1 + 0x480));
  FUN_00368704(param_2[0x17f2],*(undefined4 *)((int)param_1 + 0x480));
  fVar21 = DAT_003b56cc;
  if ((DAT_003b56c8 <= (int)*(float *)((int)param_1 + 0xf4)) ||
     (in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(*(float *)((int)param_1 + 0xf4) + DAT_003b56cc <=
                       ABS(*(float *)((int)param_1 + 0xec))) << 0x1d, SUB41(in_fpscr >> 0x1d,0)))
  goto LAB_003b53bc;
  if (*(char *)(DAT_003b56d0 + 4) == '\x01') {
    FUN_0037266c(*(undefined4 *)((int)param_1 + 600),1);
    uVar6 = *(undefined4 *)((int)param_1 + 600);
    uVar8 = 2;
LAB_003b5360:
    FUN_0036932c(uVar6,uVar8);
  }
  else {
    if (*(char *)(DAT_003b56d0 + 4) == '\x02') {
      FUN_0037266c();
      uVar6 = *(undefined4 *)((int)param_1 + 600);
      uVar8 = 1;
      goto LAB_003b5360;
    }
    FUN_0036932c(*(undefined4 *)((int)param_1 + 600),2);
    FUN_0036932c(*(undefined4 *)((int)param_1 + 600),1);
  }
  FUN_0035e3a4((int)param_1 + 0x2b4,0,(int)*(short *)((int)param_1 + 0x1b8));
  FUN_0035e330((int)param_1 + 0x2b4);
  local_94 = 0.0;
  local_98 = param_1;
  FUN_0035e240((int)param_1 + 0x230,(int)param_1 + 0x148,DAT_003b56d8,DAT_003b56d4);
LAB_003b53bc:
  FUN_001c0310(param_2,param_1);
  FUN_001bf194(param_2[0x170a],param_2,param_1);
  fVar4 = DAT_003b56fc;
  fVar3 = DAT_003b56f8;
  fVar25 = DAT_003b56f4;
  fVar22 = DAT_003b56f0;
  fVar24 = DAT_003b56ec;
  fVar26 = DAT_003b56e0;
  if (*(char *)(DAT_003b56d0 + 0xd) == '\x01') {
    fVar26 = DAT_003b56e4;
  }
  uVar2 = *(ushort *)(DAT_003b56e8 + 0xc);
  iVar12 = 0;
  sVar14 = 0;
  pcVar10 = DAT_003b56dc;
  do {
    if (*pcVar10 != '\0') {
      if (uVar2 - 0x4aaa < 0x7000) {
        iVar9 = (int)param_1 + iVar12 * 4;
        iVar7 = *(int *)(*(int *)(iVar9 + 0x63c) + 0xc);
        if (*(char *)(iVar7 + 0x10) == '\0') {
          *(undefined1 *)(iVar7 + 0x10) = 1;
          iVar7 = *(int *)(*(int *)(iVar9 + 0x63c) + 0xc);
          uVar6 = FUN_00371e50(fVar21);
          if (*DAT_003b5700 == 0) {
            *(undefined4 *)(iVar7 + 8) = uVar6;
            FUN_003586ec(iVar7);
          }
        }
      }
      else {
        *(undefined1 *)(*(int *)(*(int *)((int)param_1 + iVar12 * 4 + 0x63c) + 0xc) + 0x10) = 0;
      }
      if (pcVar10[0x44] != '\0') {
        iVar7 = (int)param_1 + iVar12 * 4;
        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x63c) + 0xc) + 0xc) = param_2[0x1fd1];
        local_8c = *(float *)(pcVar10 + 4);
        local_88 = *(float *)(pcVar10 + 8);
        local_84 = *(float *)(pcVar10 + 0xc);
        local_78 = 0.0;
        local_7c = 0.0;
        local_70 = 0.0;
        local_68 = 0.0;
        local_60 = 0.0;
        local_5c = 0.0;
        local_80 = 1.0;
        local_6c = 1.0;
        local_58 = 1.0;
        fVar17 = (float)VectorSignedToFloat((int)*(short *)(pcVar10 + 0x3e),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar17 = fVar17 * fVar22 * fVar24;
        uVar16 = in_fpscr & 0xfffffff | (uint)(fVar17 == fVar4) << 0x1e;
        local_74 = local_8c;
        local_64 = local_88;
        local_54 = local_84;
        if (!SUB41(uVar16 >> 0x1e,0)) {
          fVar18 = (float)FUN_003727f0(fVar17);
          fVar17 = (float)FUN_00372674(fVar17);
          fVar23 = local_80 * fVar18;
          local_80 = local_80 * fVar17 - local_78 * fVar18;
          local_78 = fVar23 + local_78 * fVar17;
          fVar23 = local_70 * fVar18;
          local_70 = local_70 * fVar17 - local_68 * fVar18;
          local_68 = fVar23 + local_68 * fVar17;
          fVar23 = local_60 * fVar18;
          local_60 = local_60 * fVar17 - local_58 * fVar18;
          local_58 = fVar23 + local_58 * fVar17;
        }
        fVar17 = (float)VectorSignedToFloat((int)*(short *)(pcVar10 + 0x3c),
                                            (byte)(uVar16 >> 0x15) & 3);
        fVar17 = fVar17 * fVar22 * fVar25;
        in_fpscr = uVar16 & 0xfffffff | (uint)(fVar17 == fVar4) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          fVar19 = (float)FUN_003727f0(fVar17);
          fVar20 = (float)FUN_00372674(fVar17);
          fVar17 = local_78 * fVar19;
          local_78 = local_78 * fVar20 - local_7c * fVar19;
          fVar18 = local_68 * fVar19;
          local_68 = local_68 * fVar20 - local_6c * fVar19;
          fVar23 = local_58 * fVar19;
          local_58 = local_58 * fVar20 - local_5c * fVar19;
          local_7c = local_7c * fVar20 + fVar17;
          local_6c = local_6c * fVar20 + fVar18;
          local_5c = local_5c * fVar20 + fVar23;
        }
        fVar17 = *(float *)(pcVar10 + 0x2c) * fVar26;
        local_80 = local_80 * fVar17;
        local_70 = local_70 * fVar17;
        local_60 = local_60 * fVar17;
        local_7c = local_7c * fVar26;
        local_6c = local_6c * fVar26;
        local_5c = local_5c * fVar26;
        local_78 = local_78 * fVar26;
        local_68 = local_68 * fVar26;
        local_58 = local_58 * fVar26;
        *(undefined1 *)(*(int *)(iVar7 + 0x63c) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar7 + 0x63c),&local_80);
        FUN_00372170(*(undefined4 *)(iVar7 + 0x63c),0);
        iVar12 = iVar12 + 1;
      }
    }
    iVar7 = DAT_003b56d0;
    sVar14 = sVar14 + 1;
    pcVar10 = pcVar10 + 0x48;
  } while (sVar14 < 0x3c);
  if ((*(short *)(DAT_003b56d0 + 0x2e) != 0) &&
     (sVar14 = *(short *)(DAT_003b56d0 + 0x2e) + -1, *(short *)(DAT_003b56d0 + 0x2e) = sVar14,
     iVar12 = DAT_003b5ab4, sVar14 == 0)) {
    iVar9 = DAT_003b5ab4 + 0xe;
    if (*(char *)(iVar7 + 0xd) == '\x01') {
      FUN_0036ec40(0,iVar9,0);
    }
    else {
      FUN_0036ec40(0,DAT_003b5ab4,0);
    }
    if (*(char *)(iVar7 + 0xd) == '\x01') {
      FUN_0036ec40(0,iVar9,0);
    }
    else {
      FUN_0036ec40(0,iVar12,0);
    }
  }
  bVar15 = *(short *)(iVar7 + 0x30) != 0;
  cVar1 = '\0';
  if (bVar15) {
    cVar1 = *(char *)(iVar7 + 2);
  }
  if (bVar15 && cVar1 != '\0') {
    FUN_003cc884(param_2,param_1);
    iVar12 = DAT_003b5abc;
    iVar9 = 0xc6;
    local_5c = fVar4;
    local_58 = fVar4;
    local_54 = DAT_003b5ab8;
    iVar13 = (int)(short)(int)*(float *)(iVar7 + 0xf0);
    if (iVar13 < 0xc6) {
      do {
        pfVar11 = (float *)(iVar12 + iVar9 * 0xc);
        fVar26 = *pfVar11 - pfVar11[3];
        fVar21 = pfVar11[1];
        fVar24 = pfVar11[4];
        fVar25 = pfVar11[2] - pfVar11[5];
        fVar22 = (float)FUN_003675f8(fVar25,fVar26);
        fVar25 = (float)FUN_003675f8(SQRT(fVar26 * fVar26 + fVar25 * fVar25),fVar21 - fVar24);
        fVar25 = -fVar25;
        fVar21 = fVar3;
        fVar24 = fVar4;
        if (fVar22 != fVar4) {
          fVar24 = (float)FUN_003727f0(fVar22);
          fVar21 = (float)FUN_00372674(fVar22);
        }
        local_94 = fVar4;
        local_78 = -fVar24;
        local_8c = fVar4;
        local_84 = fVar3;
        local_88 = fVar4;
        local_80 = fVar4;
        local_7c = fVar4;
        local_74 = fVar4;
        local_6c = fVar4;
        local_98 = fVar21;
        local_90 = fVar24;
        local_70 = fVar21;
        if (fVar25 != fVar4) {
          fVar26 = (float)FUN_003727f0(fVar25);
          fVar25 = (float)FUN_00372674(fVar25);
          fVar21 = local_90 * fVar26;
          local_90 = local_90 * fVar25 - local_94 * fVar26;
          fVar24 = local_80 * fVar26;
          local_80 = local_80 * fVar25 - local_84 * fVar26;
          fVar22 = local_70 * fVar26;
          local_70 = local_70 * fVar25 - local_74 * fVar26;
          local_94 = local_94 * fVar25 + fVar21;
          local_84 = local_84 * fVar25 + fVar24;
          local_74 = local_74 * fVar25 + fVar22;
        }
        FUN_003735ac(&local_68,&local_98,&local_5c);
        iVar9 = (int)(short)((short)iVar9 + -1);
        *pfVar11 = pfVar11[3] + local_68;
        pfVar11[1] = pfVar11[4] + local_64;
        pfVar11[2] = pfVar11[5] + local_60;
      } while (iVar13 < iVar9);
    }
    local_98 = DAT_003b5ac0;
    FUN_00134dbc(param_2,(int)DAT_003b5ac0 + -0x12cc);
    FUN_00133688(param_2,DAT_003b5ac4 + -0x960,DAT_003b5ac4,param_1);
    *(short *)(iVar7 + 0x20) = (short)(int)(float)local_50[10];
    *(short *)(iVar7 + 0x22) = (short)(int)(float)local_50[0xb];
  }
  uVar5 = DAT_003b5ad0;
  uVar8 = DAT_003b5acc;
  uVar6 = DAT_003b5ac8;
  *(undefined1 *)(iVar7 + 2) = 1;
  FUN_003713fc(uVar5,uVar8,uVar6,&local_80,0);
  FUN_00371348(DAT_003b5adc,DAT_003b5ad8,DAT_003b5ad4,&local_80,1);
  iVar12 = FUN_003695f8();
  iVar9 = *(int *)(*(int *)((int)param_1 + 0x49c) + 0xc);
  if (iVar12 == 0) {
    *(float *)(iVar9 + 0xc) = fVar3;
  }
  else {
    *(float *)(iVar9 + 0xc) = fVar4;
  }
  *(undefined1 *)(*(int *)((int)param_1 + 0x49c) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)((int)param_1 + 0x49c),&local_80);
  FUN_00372170(*(undefined4 *)((int)param_1 + 0x49c),0);
  if ((*(short *)(iVar7 + 0x30) != 0) && (*(char *)(iVar7 + 0x16) == '\x02')) {
    FUN_0035c9b8(param_2,param_1);
    return;
  }
  return;
}
