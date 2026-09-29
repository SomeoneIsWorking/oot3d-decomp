// OoT3D decomp @ 00200d54  name=FUN_00200d54  size=1440

undefined4 FUN_00200d54(int *param_1)

{
  int iVar1;
  char cVar2;
  float fVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  float extraout_r3;
  int iVar18;
  bool bVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 local_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  undefined1 auStack_a8 [20];
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined1 auStack_7c [14];
  ushort local_6e;
  short local_68 [2];
  short local_64 [2];
  float local_60;
  short local_5a;
  float local_58;
  ushort local_52;
  undefined1 auStack_50 [20];

  FUN_00338790(auStack_7c,param_1[0x36]);
  iVar18 = param_1[0x36];
  iVar12 = 0xc80;
  *(undefined4 *)(DAT_00201118 + 0x14) = 0xc80;
  iVar14 = param_1[0x3c];
  if (iVar14 != 0) {
    iVar12 = *(int *)(iVar14 + 0x13c);
  }
  if (iVar14 == 0 || iVar12 == 0) {
    param_1[0x3c] = 0;
    FUN_00338864(param_1,0x3c,5);
    return 1;
  }
  FUN_00338790(auStack_50);
  FUN_00371738(param_1 + 0x3d,auStack_50,0x12);
  FUN_00372474(&local_58,param_1 + 0x3d,param_1 + 0x37);
  iVar12 = param_1[0x3c];
  *(uint *)(DAT_00201118 + 0x20) = (uint)*(byte *)(iVar12 + 2);
  FUN_00363a20(param_1[0x35],iVar12,local_64,local_68);
  fVar20 = (float)FUN_00338a90(param_1 + 0x3d,param_1 + 0x23);
  FUN_00372474(&local_60,auStack_7c,param_1 + 0x29);
  iVar10 = DAT_0020150c;
  iVar9 = DAT_002014ec;
  iVar13 = DAT_00201160;
  iVar14 = DAT_00201158;
  fVar8 = DAT_00201150;
  fVar7 = DAT_0020114c;
  fVar6 = DAT_00201148;
  iVar12 = DAT_00201140;
  puVar4 = DAT_00201130;
  uVar21 = DAT_0020112c;
  uVar17 = DAT_0020111c;
  local_94 = (int)(short)(local_5a - local_52);
  iVar15 = param_1[0x3c];
  cVar2 = *(char *)(iVar15 + 2);
  if (cVar2 == '\x02') {
    if (DAT_00201120 < (int)local_60) {
      *(short *)(DAT_00201124 + 0x2c) = (short)param_1[0x6a] + -1;
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if ((int)local_58 < DAT_00201120) {
    param_1[1] = (int)DAT_00201130;
    *param_1 = 4;
    uVar5 = DAT_00201134;
    if ((((local_64[0] < 0x15) || (299 < local_64[0])) || (local_68[0] < 0x29)) ||
       (199 < local_68[0])) {
      *puVar4 = 0x41;
      *(undefined4 *)(puVar4 + 0x10) = uVar21;
      *(undefined4 *)(puVar4 + 0x14) = uVar5;
      *(undefined4 *)(puVar4 + 0x18) = uVar21;
      *(undefined4 *)(puVar4 + 0x1c) = uVar17;
      uVar17 = DAT_00201138;
      *(undefined4 *)(puVar4 + 0x20) = uVar21;
      *(undefined4 *)(puVar4 + 0x24) = uVar17;
    }
    iVar12 = param_1[0x6a];
    *(short *)(puVar4 + 0x2c) = (short)iVar12 + -1;
    if (*(short *)((int)param_1 + 0x1aa) != 0) {
LAB_00201428:
      *param_1 = *param_1 + -2;
      goto LAB_0020145c;
    }
    sVar11 = *(short *)(puVar4 + 0x7c) + *(short *)(puVar4 + 0x54) + (short)iVar12;
  }
  else {
    bVar19 = SBORROW4((int)fVar20,DAT_0020113c);
    iVar1 = (int)fVar20 - DAT_0020113c;
    fVar3 = fVar20;
    if ((int)fVar20 < DAT_0020113c) {
      bVar19 = SBORROW4((int)local_60,DAT_00201120);
      iVar1 = (int)local_60 - DAT_00201120;
      fVar3 = local_60;
    }
    if (iVar1 < 0 == bVar19) {
      if ((DAT_00201144 <= (int)fVar20) || ((uint)DAT_00201150 < local_94 + 13999U)) {
        if (cVar2 == '\n') {
          *(short *)(DAT_002014ec + 4) = (short)param_1[0x6a] + -5;
          local_94 = 0;
          iVar12 = FUN_0026f30c(param_1[0x35],iVar15,&local_94);
          if ((iVar12 == 0) &&
             (local_94 = (int)*(short *)(param_1[0x3c] + 0xbe),
             (uint)(((short)local_52 - local_94) + ((int)DAT_002014f0 >> 1)) <= DAT_002014f0)) {
            local_94 = local_94 + -0x7fff;
          }
          if (*(short *)(param_1[0x3c] + 0xbe) == (short)local_94) {
            uVar21 = DAT_002014f4;
          }
          *(undefined4 *)(iVar9 + 0x3c) = uVar21;
          *(undefined4 *)(iVar9 + 0x20) = uVar21;
          *(undefined4 *)(iVar9 + 0x14) = uVar21;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        if ((int)local_58 < DAT_00201508) {
          *(float *)(DAT_0020150c + 0x18) = local_58 * DAT_00201510;
          *(float *)(iVar10 + 0x24) = local_58;
        }
        if ((int)local_58 < DAT_00201514) {
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        FUN_00367ef0(param_1[0x36]);
        *(short *)(iVar10 + 4) = (short)param_1[0x6a];
        FUN_00338790(auStack_a8,param_1[0x3c]);
        FUN_00371738(&local_90,auStack_a8,0x12);
        local_d0 = local_90;
        uStack_cc = uStack_8c;
        fStack_c8 = fStack_88;
        iVar12 = FUN_003553fc(param_1,auStack_7c,&local_d0);
        local_90 = local_d0;
        uStack_8c = uStack_cc;
        fStack_88 = fStack_c8;
        if (iVar12 == 0) {
          *(short *)(iVar10 + 0x2c) = (short)(int)(fVar20 * fVar7) + 8;
        }
        else {
          *(undefined2 *)(iVar10 + 0x2c) = 4;
          *(undefined1 *)(iVar10 + 0x28) = 0x8f;
        }
        param_1[1] = iVar10;
        *param_1 = 3;
        local_58 = fStack_c8;
        if (*(short *)((int)param_1 + 0x1aa) == 0) {
          *(short *)(param_1 + 0x6a) =
               *(short *)(iVar10 + 0x2c) + *(short *)(iVar10 + 0x54) + (short)param_1[0x6a];
          *(undefined2 *)(iVar10 + 0x2e) = 0;
          *(undefined2 *)(iVar10 + 6) = 0;
          goto LAB_0020145c;
        }
        if ((*(uint *)(param_1[0x35] + 0xf8) & 1) != 0) {
          *(short *)(iVar10 + 6) = -*(short *)(iVar10 + 6);
          *(short *)(iVar10 + 0x2e) = -*(short *)(iVar10 + 0x2e);
        }
        goto LAB_00201428;
      }
      uVar16 = (int)local_64[0] - 0x15;
      bVar19 = DAT_00201154 <= uVar16;
      if (!bVar19) {
        uVar16 = (int)local_68[0] - 0x29;
      }
      if ((bVar19 || 0x9e < uVar16) || ((int)local_60 <= DAT_00201120)) {
        *(float *)(DAT_00201160 + 0x18) = fVar20 * DAT_0020115c;
        *(float *)(iVar13 + 0x24) = fVar20 + fVar6;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      *(short *)(DAT_00201158 + 4) = (short)param_1[0x6a];
      param_1[1] = iVar14;
      *param_1 = 2;
      sVar11 = *(short *)((int)param_1 + 0x1aa);
      local_58 = fVar8;
      iVar12 = iVar14;
    }
    else {
      *(short *)(DAT_00201140 + 4) = (short)param_1[0x6a];
      param_1[1] = iVar12;
      *param_1 = 2;
      sVar11 = *(short *)((int)param_1 + 0x1aa);
      local_58 = fVar3;
    }
    if (sVar11 != 0) {
      *param_1 = 1;
      goto LAB_0020145c;
    }
    sVar11 = *(short *)(iVar12 + 0x2c) + (short)param_1[0x6a];
  }
  *(short *)(param_1 + 0x6a) = sVar11;
LAB_0020145c:
  iVar12 = DAT_00201118;
  if ((100 < (*(int *)(DAT_00201118 + 0x98) - *(int *)(param_1[0x35] + 0xf8)) + 0x32U) &&
     (param_1[0x5c] != 0)) {
    local_d0 = DAT_00201520;
    uStack_cc = DAT_0020151c;
    FUN_0037547c(param_1[0x5c],0,4,DAT_00201520);
    local_58 = extraout_r3;
  }
  iVar13 = param_1[0x35];
  iVar14 = *(int *)(iVar13 + 0xf8);
  *(int *)(iVar12 + 0x98) = iVar14;
  uVar16 = *(uint *)(param_1[0x36] + 0x1710);
  bVar19 = (uVar16 & 0x8000000) == 0;
  if (!bVar19) {
    local_58 = (float)(uint)*(byte *)(iVar18 + 0x1a7);
    uVar16 = iVar18 + 0x100;
  }
  if (bVar19 || local_58 == 1.4013e-45) {
    local_94 = (uint)local_6e - (uint)local_52;
    if (*(char *)(param_1[0x3c] + 2) == '\x02') {
      iVar14 = iVar14 - *(int *)(iVar12 + 0x2c);
      if ((*(uint *)(DAT_002015b8 + iVar18) & 0x800) == 0) {
        if (iVar14 < 0) {
          iVar14 = -iVar14;
        }
        if (DAT_002015bc < iVar14) {
          uVar17 = 0xc;
        }
        else {
          uVar17 = 0x45;
        }
      }
      else {
        uVar17 = 8;
      }
    }
    else {
      uVar17 = 1;
    }
    FUN_0036e980(iVar13,param_1[0x3c],uVar17);
  }
  else {
    *(uint *)(iVar18 + 0x1710) = *(uint *)(iVar18 + 0x1710) | 0x20000000;
    *(short *)(uVar16 + 0x18) = (short)param_1[0x6a];
  }
  *(undefined4 *)(iVar12 + 0x2c) = *(undefined4 *)(param_1[0x35] + 0xf8);
  FUN_00338864(param_1,0x3c,5);
  FUN_0023e11c(param_1);
  return 1;
}
