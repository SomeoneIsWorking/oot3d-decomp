// OoT3D decomp @ 0025bf08  name=FUN_0025bf08  size=1820

undefined4 FUN_0025bf08(int *param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  int iVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  int extraout_s1;
  int extraout_s1_00;
  int extraout_s1_01;
  float fVar17;
  int extraout_s2;
  int extraout_s2_00;
  int extraout_s2_01;
  float fVar18;
  float fVar19;
  undefined4 local_8c;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  int local_80;
  int local_7c;
  undefined1 auStack_78 [4];
  float local_74;
  undefined2 local_6c;
  short local_6a;
  int local_64;
  undefined4 local_60;
  short local_5c;
  short local_5a;
  float local_58;
  short local_54;
  short local_52;
  float local_50;
  float local_4c;
  int iStack_48;
  int *local_44;
  int *local_40;

  pfVar8 = (float *)(param_1 + 0x23);
  local_40 = param_1 + 0x20;
  pfVar11 = (float *)(param_1 + 0x29);
  local_44 = param_1 + 0x67;
  fVar15 = (float)FUN_00367ef0(param_1[0x36]);
  fVar19 = DAT_0025c28c;
  iVar13 = param_1[0x36];
  *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xffef;
  fVar3 = DAT_0025c29c;
  fVar2 = DAT_0025c298;
  pfVar12 = (float *)(param_1 + 0x37);
  pfVar10 = (float *)(param_1 + 3);
  piVar9 = param_1 + 6;
  sVar1 = *(short *)((int)param_1 + 0x1a6);
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0025c290 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar18 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0025c290 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar19 = (DAT_0025c298 + fVar18 * DAT_0025c294) - (fVar19 / fVar15) * fVar17 * DAT_0025c294;
  if ((sVar1 == 0 || sVar1 == 10) || sVar1 == 0x14) {
    psVar6 = *(short **)
              (*(int *)(DAT_0025c2a0 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
              (short)param_1[99] * 8 + 4);
    fVar17 = (float)VectorSignedToFloat((int)*psVar6,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar10 = fVar17 * DAT_0025c294 * fVar15 * fVar19;
    iVar16 = VectorSignedToFloat((int)psVar6[2],(byte)(in_fpscr >> 0x15) & 3);
    param_1[4] = iVar16;
    local_7c = 0;
    *(short *)(param_1 + 5) = psVar6[4];
    uVar5 = param_1[0x35];
    bVar14 = *(short *)(uVar5 + 0x104) == 4;
    if (bVar14) {
      uVar5 = (uint)*(byte *)(uVar5 + 0x4c30);
    }
    if ((bVar14 && uVar5 == 6) &&
       (iVar16 = FUN_0032d870(DAT_0025c2b8,DAT_0025c2b4,DAT_0025c2b0,DAT_0025c2ac,DAT_0025c2a8,
                              DAT_0025c2a4,iVar13 + 0x28), iVar16 != 0)) {
      local_7c = 1;
      param_1[0x24] = DAT_0025c2bc;
    }
    fVar18 = *(float *)(iVar13 + 0x28) - *pfVar8;
    fVar17 = *(float *)(iVar13 + 0x30) - (float)param_1[0x25];
    fVar17 = fVar18 * fVar18 + fVar17 * fVar17;
    bVar14 = fVar17 == DAT_0025c2c0;
    if ((int)DAT_0025c2c0 <= (int)fVar17) {
      bVar14 = local_7c == 0;
    }
    if (!bVar14) {
      local_80 = (int)(short)(*(short *)((int)param_1 + 0xea) + -0x7fff);
      fVar17 = (float)FUN_002cfca0();
      *pfVar8 = *pfVar8 + fVar17 * fVar3;
      fVar17 = (float)FUN_00338f60(local_80);
      param_1[0x25] = (int)((float)param_1[0x25] + fVar17 * fVar3);
    }
    *(undefined1 *)((int)param_1 + 0x1a) = 0;
  }
  if (*param_1 == 0) {
    FUN_00371738(auStack_78,pfVar12,0x12);
    local_74 = local_74 + *pfVar10 + fVar15;
    local_6c = 0;
  }
  else {
    FUN_00331764(&local_8c);
    FUN_00371738(auStack_78,&local_8c,0x12);
  }
  FUN_00372474(&local_60,local_40,pfVar8);
  fVar17 = DAT_0025c2cc;
  uVar4 = DAT_0025c2c8;
  *(int *)(DAT_0025c2c4 + 0x14) = (int)(short)param_1[5];
  uVar5 = DAT_0025c2d0;
  switch(*(undefined2 *)((int)param_1 + 0x1a6)) {
  case 0:
    *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xfff9;
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    if (uVar5 < (uint)(((int)*(short *)((int)param_1 + 0xea) - (int)local_6a) + ((int)uVar5 >> 1)))
    {
      local_6a = local_6a + -0x7fff;
    }
    *(short *)piVar9 = local_6a;
    break;
  case 1:
    break;
  case 2:
    goto switchD_0025c174_caseD_2;
  case 3:
    goto switchD_0025c174_caseD_3;
  case 4:
    goto switchD_0025c174_caseD_4;
  default:
    goto switchD_0025c174_default;
  }
  sVar1 = *(short *)((int)param_1 + 6) + -1;
  *(short *)((int)param_1 + 6) = sVar1;
  if (sVar1 < 1) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 2;
    if ((*(ushort *)(param_1 + 5) & 1) == 0) {
      local_54 = (short)DAT_0025c688;
      local_58 = fVar19 * DAT_0025c690;
      if ((*(uint *)(param_1[0x35] + 0xf8) & 1) == 0) {
        local_64 = -1;
      }
      else {
        local_64 = 1;
      }
      local_64 = local_64 * DAT_0025c68c;
      local_52 = (short)*piVar9 + (short)local_64;
      FUN_00372448(param_1 + 0x20,&local_58);
      *pfVar11 = extraout_s0;
      param_1[0x2a] = extraout_s1;
      param_1[0x2b] = extraout_s2;
      *pfVar8 = *pfVar11;
      param_1[0x24] = param_1[0x2a];
      param_1[0x25] = param_1[0x2b];
      local_50 = *pfVar8;
      local_4c = (float)param_1[0x24];
      iStack_48 = param_1[0x25];
      local_8c = 0;
      iVar16 = FUN_003723c0(param_1[0x35] + 0xa98,&local_50,pfVar12,auStack_84,&local_8c,1,1,1,0,
                            auStack_88);
      if (iVar16 != 0) {
        fVar19 = (float)FUN_0021827c(local_8c,&local_50);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar17 <= fVar19) << 0x1d;
        if (!SUB41(in_fpscr >> 0x1d,0)) {
          local_52 = (short)*piVar9 - (short)local_64;
          FUN_00372448(param_1 + 0x20,&local_58);
          *pfVar11 = extraout_s0_00;
          param_1[0x2a] = extraout_s1_00;
          param_1[0x2b] = extraout_s2_00;
          *pfVar8 = *pfVar11;
          param_1[0x24] = param_1[0x2a];
          param_1[0x25] = param_1[0x2b];
        }
      }
    }
    else {
      psVar6 = (short *)FUN_00338c5c(param_1[0x35] + 0xa98,(int)(short)param_1[100],0x32);
      fVar19 = (float)VectorSignedToFloat((int)*psVar6,(byte)(in_fpscr >> 0x15) & 3);
      iVar16 = VectorSignedToFloat((int)psVar6[1],(byte)(in_fpscr >> 0x15) & 3);
      iVar7 = VectorSignedToFloat((int)psVar6[2],(byte)(in_fpscr >> 0x15) & 3);
      *pfVar11 = fVar19;
      param_1[0x2a] = iVar16;
      param_1[0x2b] = iVar7;
      *pfVar8 = *pfVar11;
      param_1[0x24] = param_1[0x2a];
      param_1[0x25] = param_1[0x2b];
      if (-1 < psVar6[8]) {
        *(undefined1 *)((int)param_1 + 0x1b6) = 0;
        fVar19 = (float)VectorSignedToFloat((int)psVar6[8],(byte)(in_fpscr >> 0x15) & 3);
        fVar19 = fVar19 * DAT_0025c2d4;
        param_1[0x34] = (int)fVar19;
        if ((int)fVar19 < 0x34000001) {
          fVar19 = DAT_0025c2d8;
        }
        param_1[0x34] = (int)fVar19;
      }
    }
switchD_0025c174_caseD_2:
    local_50 = *pfVar12;
    iStack_48 = param_1[0x39];
    local_4c = (float)param_1[0x38] + *pfVar10 + fVar15;
    FUN_00367df4(DAT_0025c694,DAT_0025c694,uVar4,&local_50,local_40);
    sVar1 = (short)param_1[2] + -1;
    *(short *)(param_1 + 2) = sVar1;
    if (sVar1 < 1) {
      *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
      *(short *)piVar9 = (short)*piVar9 + -0x7fff;
switchD_0025c174_caseD_3:
      fVar19 = DAT_0025c698;
      local_50 = *pfVar12;
      iStack_48 = param_1[0x39];
      local_4c = (float)param_1[0x38] + *pfVar10 + fVar15;
      FUN_00367df4(DAT_0025c698,DAT_0025c698,uVar4,&local_50,local_40);
      local_54 = (short)DAT_0025c68c;
      iVar7 = (int)(short)(local_54 - local_5c);
      iVar16 = iVar7;
      if (iVar7 < 0) {
        iVar16 = -iVar7;
      }
      fVar18 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
      if (9 < iVar16) {
        local_54 = local_5c + (short)(int)(fVar19 + fVar18 * DAT_0025c69c);
      }
      local_52 = (short)*piVar9;
      iVar7 = (int)(short)(local_52 - local_5a);
      iVar16 = iVar7;
      if (iVar7 < 0) {
        iVar16 = -iVar7;
      }
      fVar18 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
      if (9 < iVar16) {
        local_52 = local_5a + (short)(int)(fVar19 + fVar18 * DAT_0025c69c);
      }
      local_58 = (float)FUN_00355780(fVar3,local_60,DAT_0025c69c,fVar2);
      FUN_00372448(local_40,&local_58);
      *pfVar11 = extraout_s0_01;
      param_1[0x2a] = extraout_s1_01;
      param_1[0x2b] = extraout_s2_01;
      *pfVar8 = *pfVar11;
      param_1[0x24] = param_1[0x2a];
      param_1[0x25] = param_1[0x2b];
      sVar1 = *(short *)((int)param_1 + 10) + -1;
      *(short *)((int)param_1 + 10) = sVar1;
      if (sVar1 < 1) {
        *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
switchD_0025c174_caseD_4:
        *(char *)((int)param_1 + 0x1a) = *(char *)((int)param_1 + 0x1a) + '\x01';
        *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
switchD_0025c174_default:
        *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) | 0x410;
        *(undefined4 *)(DAT_0025c2c4 + 0x14) = 0;
        fVar19 = *(float *)(iVar13 + 0x60);
        if (fVar19 < fVar17) {
          fVar19 = -fVar19;
        }
        if ((int)fVar19 <= DAT_0025c6a0) {
          fVar19 = *(float *)(iVar13 + 100);
          if (fVar19 < fVar17) {
            fVar19 = -fVar19;
          }
          if ((int)fVar19 <= DAT_0025c6a0) {
            fVar19 = *(float *)(iVar13 + 0x68);
            if (fVar19 < fVar17) {
              fVar19 = -fVar19;
            }
            if ((int)fVar19 <= DAT_0025c6a0) {
              uVar5 = FUN_003389e0();
              bVar14 = uVar5 == 0;
              if (bVar14) {
                uVar5 = (uint)*(ushort *)(param_1 + 5);
              }
              if (bVar14 && (uVar5 & 8) == 0) goto LAB_0025c624;
            }
          }
        }
        FUN_00338864(param_1,(int)(short)*local_44,2);
        *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) | 6;
      }
    }
  }
LAB_0025c624:
  local_50 = *pfVar12;
  iStack_48 = param_1[0x39];
  local_4c = (float)param_1[0x38] + fVar15;
  iVar13 = FUN_00338a90(&local_50,pfVar8);
  param_1[0x49] = iVar13;
  param_1[0x4b] = (int)((float)param_1[0x20] - *pfVar12);
  param_1[0x4c] = (int)((float)param_1[0x21] - (float)param_1[0x38]);
  param_1[0x4d] = (int)((float)param_1[0x22] - (float)param_1[0x39]);
  return 1;
}
