// OoT3D decomp @ 0016f3d0  name=FUN_0016f3d0  size=1752

uint FUN_0016f3d0(int param_1,int param_2,float *param_3,int param_4)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  uint in_fpscr;
  float fVar13;
  float extraout_s0;
  float fVar14;
  float fVar15;
  undefined1 auStack_74 [4];
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;

  iVar9 = DAT_0016f7cc;
  fVar15 = DAT_0016f7c8;
  local_48 = DAT_0016f7c8;
  local_44 = DAT_0016f7c8;
  local_40 = DAT_0016f7c8;
  if (((*(uint *)(DAT_0016f7cc + 0x20) & 1) == 0) &&
     (iVar8 = FUN_003679b4(DAT_0016f7cc + 0x20), pfVar10 = DAT_0016f7d0, iVar8 != 0)) {
    *DAT_0016f7d0 = fVar15;
    pfVar10[1] = fVar15;
    pfVar10[2] = fVar15;
  }
  if (((*(uint *)(iVar9 + 0x1c) & 1) == 0) &&
     (iVar8 = FUN_003679b4(DAT_0016f7d4), pfVar10 = DAT_0016f7dc, fVar13 = DAT_0016f7d8, iVar8 != 0)
     ) {
    *DAT_0016f7dc = fVar15;
    pfVar10[1] = fVar15;
    pfVar10[2] = fVar13;
  }
  uVar5 = DAT_0016f7e8;
  uVar4 = DAT_0016f7e4;
  uVar3 = DAT_0016f7e0;
  if (((*(uint *)(iVar9 + 0x18) & 1) == 0) &&
     (iVar8 = FUN_003679b4(DAT_0016f7ec), puVar6 = DAT_0016f7f0, iVar8 != 0)) {
    *DAT_0016f7f0 = uVar3;
    puVar6[1] = uVar4;
    puVar6[2] = uVar5;
  }
  uVar7 = DAT_0016f7f4;
  if (((*(uint *)(iVar9 + 0x14) & 1) == 0) &&
     (iVar8 = FUN_003679b4(DAT_0016f7f8), puVar6 = DAT_0016f7fc, iVar8 != 0)) {
    *DAT_0016f7fc = uVar3;
    puVar6[1] = uVar7;
    puVar6[2] = uVar5;
  }
  uVar3 = DAT_0016f800;
  if (((*(uint *)(iVar9 + 0x10) & 1) == 0) &&
     (iVar8 = FUN_003679b4(DAT_0016f804), puVar6 = DAT_0016f808, iVar8 != 0)) {
    *DAT_0016f808 = uVar3;
    puVar6[1] = uVar4;
    puVar6[2] = uVar5;
  }
  if (((*(uint *)(iVar9 + 0xc) & 1) == 0) &&
     (iVar8 = FUN_003679b4(DAT_0016f80c), puVar6 = DAT_0016f810, iVar8 != 0)) {
    *DAT_0016f810 = uVar3;
    puVar6[1] = uVar7;
    puVar6[2] = uVar5;
  }
  fVar13 = DAT_0016f814;
  if (((*(uint *)(iVar9 + 8) & 1) == 0) &&
     (iVar8 = FUN_003679b4(DAT_0016f818), pfVar10 = DAT_0016f81c, iVar8 != 0)) {
    *DAT_0016f81c = fVar13;
    pfVar10[1] = fVar15;
    pfVar10[2] = fVar15;
  }
  uVar3 = DAT_0016f820;
  uVar11 = *(uint *)(iVar9 + 4);
  if (((*(uint *)(iVar9 + 4) & 1) == 0) &&
     (iVar9 = FUN_003679b4(DAT_0016f824), puVar6 = DAT_0016f828, uVar11 = 0, iVar9 != 0)) {
    *DAT_0016f828 = uVar3;
    puVar6[1] = fVar15;
    puVar6[2] = fVar15;
    uVar11 = DAT_0016f824;
  }
  local_60 = uVar3;
  local_54 = fVar13;
  local_50 = fVar15;
  local_4c = fVar15;
  local_5c = fVar15;
  local_58 = fVar15;
  if (param_2 == 2) {
    pfVar10 = (float *)(param_4 + 0x4a8);
    FUN_003735ac(pfVar10,param_3,DAT_0016f7d0);
    FUN_003735ac(param_4 + 0x4b4,param_3,DAT_0016f7dc);
    if (2 < *(short *)(param_4 + 0x4e4)) {
      local_70 = 0;
      local_40 = *(float *)(param_4 + 0x58) * (*(float *)(param_4 + 0x4d4) + fVar13) * DAT_0016f82c;
      FUN_003735ac(param_4 + 0x4c0,param_3,&local_48);
      iVar9 = FUN_00369f9c(param_1 + 0xa98,pfVar10,param_4 + 0x4c0,&local_6c,&local_70,1,1,0,1,
                           auStack_74);
      if (iVar9 == 1) {
        fVar13 = local_68 - *(float *)(param_4 + 0x4ac);
        fVar14 = local_64 - *(float *)(param_4 + 0x4b0);
        *(float *)(param_4 + 0x4d4) =
             SQRT((local_6c - *pfVar10) * (local_6c - *pfVar10) + fVar13 * fVar13 + fVar14 * fVar14)
             - DAT_0016f830;
        *(undefined2 *)(param_4 + 0x4e4) = 4;
        *(float *)(param_4 + 0x4c0) = local_6c;
        *(float *)(param_4 + 0x4c4) = local_68;
        *(float *)(param_4 + 0x4c8) = local_64;
      }
      if (*(float *)(param_4 + 0x4d4) != fVar15) {
        local_58 = DAT_0016f834;
        if (DAT_0016f838 < *(int *)(param_4 + 0x58)) {
          local_58 = DAT_0016f83c;
        }
        fVar14 = *(float *)(param_4 + 0x4c0) - *pfVar10;
        fVar15 = *(float *)(param_4 + 0x4c4) - *(float *)(param_4 + 0x4ac);
        fVar13 = *(float *)(param_4 + 0x4c8) - *(float *)(param_4 + 0x4b0);
        local_58 = SQRT(fVar14 * fVar14 + fVar15 * fVar15 + fVar13 * fVar13) * local_58;
        local_4c = local_58;
        FUN_003735ac(param_4 + 0x5ac,param_3,DAT_0016f81c);
        FUN_003735ac(param_4 + 0x5a0,param_3,DAT_0016f828);
        FUN_003735ac(param_4 + 0x594,param_3,&local_54);
        FUN_003735ac(param_4 + 0x588,param_3,&local_60);
        FUN_0035479c(param_4 + 0x548,param_4 + 0x588,param_4 + 0x594,param_4 + 0x5a0,param_4 + 0x5ac
                    );
      }
    }
    FUN_003735ac(param_4 + 0x614,param_3,DAT_0016f7f0);
    FUN_003735ac(param_4 + 0x608,param_3,DAT_0016f7fc);
    FUN_003735ac(param_4 + 0x62c,param_3,DAT_0016f808);
    FUN_003735ac(param_4 + 0x620,param_3,DAT_0016f810);
    uVar11 = FUN_0035479c(param_4 + 0x5c8,param_4 + 0x608,param_4 + 0x614,param_4 + 0x620,
                          param_4 + 0x62c);
  }
  else if (param_2 == 5) {
    local_6c = *(float *)(param_4 + 0x4a8);
    local_68 = *(float *)(param_4 + 0x4ac);
    local_64 = *(float *)(param_4 + 0x4b0);
    param_3[1] = 0.0;
    *param_3 = 1.0;
    param_3[2] = 0.0;
    param_3[4] = 0.0;
    param_3[5] = 1.0;
    fVar13 = DAT_0016fb20;
    param_3[3] = local_6c;
    param_3[6] = 0.0;
    param_3[8] = 0.0;
    param_3[7] = local_68;
    param_3[9] = 0.0;
    param_3[10] = 1.0;
    param_3[0xb] = local_64;
    uVar12 = (uint)*(short *)(param_4 + 0x4dc);
    sVar1 = *(short *)(param_4 + 0x4d8);
    sVar2 = *(short *)(param_4 + 0x4da);
    fVar14 = (float)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = fVar14 * fVar13;
    uVar11 = in_fpscr & 0xfffffff | (uint)(fVar14 == fVar15) << 0x1e;
    if (!SUB41(uVar11 >> 0x1e,0)) {
      fVar15 = (float)FUN_003727f0(fVar14);
      uVar12 = FUN_00372674(fVar14);
      fVar14 = *param_3;
      *param_3 = fVar14 * extraout_s0 + param_3[1] * fVar15;
      param_3[1] = param_3[1] * extraout_s0 - fVar14 * fVar15;
      fVar14 = param_3[4];
      param_3[4] = fVar14 * extraout_s0 + param_3[5] * fVar15;
      param_3[5] = param_3[5] * extraout_s0 - fVar14 * fVar15;
      fVar14 = param_3[8];
      param_3[8] = fVar14 * extraout_s0 + param_3[9] * fVar15;
      param_3[9] = param_3[9] * extraout_s0 - fVar14 * fVar15;
    }
    if (sVar2 != 0) {
      fVar15 = (float)VectorSignedToFloat((int)sVar2,(byte)(uVar11 >> 0x15) & 3);
      uVar12 = FUN_003735e8(fVar15 * fVar13,param_3,1);
    }
    if (sVar1 != 0) {
      fVar15 = (float)VectorSignedToFloat((int)sVar1,(byte)(uVar11 >> 0x15) & 3);
      uVar12 = FUN_00369014(fVar15 * fVar13,param_3,1);
    }
    fVar15 = *(float *)(param_4 + 0x4cc) * DAT_0016fb24;
    fVar13 = *(float *)(param_4 + 0x4d4) * DAT_0016fb28;
    *param_3 = *param_3 * fVar15;
    param_3[4] = param_3[4] * fVar15;
    param_3[8] = param_3[8] * fVar15;
    param_3[1] = param_3[1] * fVar15;
    param_3[5] = param_3[5] * fVar15;
    param_3[9] = param_3[9] * fVar15;
    param_3[2] = param_3[2] * fVar13;
    param_3[6] = param_3[6] * fVar13;
    param_3[10] = param_3[10] * fVar13;
    return uVar12;
  }
  return uVar11;
}
