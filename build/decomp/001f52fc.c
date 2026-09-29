// OoT3D decomp @ 001f52fc  name=FUN_001f52fc  size=1216

void FUN_001f52fc(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  float *pfVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
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
  undefined4 uStack_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 uStack_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 uStack_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  float fStack_64;
  float fStack_60;
  float local_5c;
  undefined4 local_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  undefined4 local_48;

  if (*(char *)(param_1 + 0x1e) == *(char *)(param_1 + 0x3ed)) {
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_001f53c0);
    iVar10 = DAT_001f53c4;
    if (*(short *)(param_1 + 0x36) != 0) {
      puVar9 = (undefined1 *)(DAT_001f53c4 + *(char *)(param_1 + 0x3ee) * 2);
      if (*(short *)(param_1 + 0x36) < 1) {
        FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),*puVar9);
        uVar8 = *(undefined4 *)(param_1 + 0x1cc);
        uVar3 = *(undefined1 *)(iVar10 + *(char *)(param_1 + 0x3ee) * 2 + 1);
      }
      else {
        FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),puVar9[1]);
        uVar8 = *(undefined4 *)(param_1 + 0x1cc);
        uVar3 = *(undefined1 *)(iVar10 + *(char *)(param_1 + 0x3ee) * 2);
      }
      FUN_0036932c(uVar8,uVar3);
    }
    fVar4 = DAT_0033a44c;
    iVar10 = (int)*(short *)(param_1 + 1000);
    if (iVar10 != 0) {
      piVar11 = (int *)(param_1 + 0x3cc);
      local_c8 = *(float *)(param_1 + 0x148);
      local_c4 = *(float *)(param_1 + 0x14c);
      local_c0 = *(float *)(param_1 + 0x150);
      pfVar13 = (float *)(DAT_0033a444 + *piVar11 * 0x1c);
      fVar24 = pfVar13[4];
      fVar19 = DAT_0033a448 / SQRT(local_c8 * local_c8 + local_c4 * local_c4 + local_c0 * local_c0);
      local_c8 = local_c8 * fVar19;
      local_c4 = local_c4 * fVar19;
      local_c0 = local_c0 * fVar19;
      local_bc = *(float *)(param_1 + 0x158);
      local_b8 = *(float *)(param_1 + 0x15c);
      local_b4 = *(float *)(param_1 + 0x160);
      fVar19 = DAT_0033a448 / SQRT(local_bc * local_bc + local_b8 * local_b8 + local_b4 * local_b4);
      local_bc = local_bc * fVar19;
      local_b8 = local_b8 * fVar19;
      local_b4 = local_b4 * fVar19;
      local_b0 = *(float *)(param_1 + 0x168);
      local_ac = *(float *)(param_1 + 0x16c);
      local_a8 = *(float *)(param_1 + 0x170);
      fVar19 = DAT_0033a448 / SQRT(local_b0 * local_b0 + local_ac * local_ac + local_a8 * local_a8);
      local_b0 = local_b0 * fVar19;
      local_ac = local_ac * fVar19;
      local_a8 = local_a8 * fVar19;
      local_d8 = pfVar13[5];
      local_e0 = DAT_0033a44c;
      local_dc = DAT_0033a44c;
      FUN_0034e0f0(&local_d4,&local_c8,&local_e0);
      FUN_003713fc(local_d4,local_d0,local_cc,&local_74,0);
      FUN_0036c174(&local_74,&local_74,(float *)(param_1 + 0x148));
      FUN_003713fc(fVar4,pfVar13[2],DAT_0033a450,&local_74,1);
      if (*(int *)(param_1 + 0x3d4) != 0) {
        local_f8 = local_68;
        local_f4 = local_58;
        local_f0 = local_48;
        uVar8 = FUN_003687a8(*(undefined4 *)(param_1 + 0x3d4));
        FUN_00357fd0(*(undefined4 *)(DAT_0033a454 + param_2),uVar8,&local_f8);
      }
      fVar14 = (float)FUN_003727f0(*pfVar13 - fVar24);
      fVar19 = DAT_0033a45c;
      fVar14 = fVar14 * DAT_0033a458;
      fVar22 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar20 = pfVar13[1];
      fVar22 = DAT_0033a45c - fVar22;
      fVar15 = (float)FUN_00372674(*pfVar13 - fVar24);
      fVar7 = DAT_0033a468;
      fVar6 = DAT_0033a464;
      fVar5 = DAT_0033a460;
      fVar21 = pfVar13[1];
      fVar15 = fVar15 * DAT_0033a460;
      fVar23 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      uVar12 = 0;
      do {
        if (piVar11[uVar12 + 2] != 0) {
          in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar24 == fVar4) << 0x1e;
          local_a4 = local_74;
          local_a0 = fStack_70;
          local_9c = fStack_6c;
          uStack_98 = local_68;
          local_94 = fStack_64;
          local_90 = fStack_60;
          local_8c = local_5c;
          uStack_88 = local_58;
          local_84 = fStack_54;
          local_80 = fStack_50;
          local_7c = local_4c;
          uStack_78 = local_48;
          if (!SUB41(in_fpscr >> 0x1e,0)) {
            fVar16 = (float)FUN_003727f0(fVar24);
            fVar17 = (float)FUN_00372674(fVar24);
            fVar18 = local_a0 * fVar16;
            local_a0 = local_a0 * fVar17 - local_a4 * fVar16;
            fVar1 = local_90 * fVar16;
            local_90 = local_90 * fVar17 - local_94 * fVar16;
            fVar2 = local_80 * fVar16;
            local_80 = local_80 * fVar17 - local_84 * fVar16;
            local_a4 = local_a4 * fVar17 + fVar18;
            local_94 = local_94 * fVar17 + fVar1;
            local_84 = local_84 * fVar17 + fVar2;
          }
          local_e4 = fVar4;
          local_ec = fVar14 * fVar20 * fVar22;
          local_e8 = fVar15 * fVar21 * (fVar19 - fVar23);
          FUN_00372070(&local_a4,&local_a4,&local_ec);
          fVar18 = pfVar13[3];
          if (fVar18 != 1.0) {
            local_a4 = local_a4 * fVar18;
            local_94 = local_94 * fVar18;
            local_84 = local_84 * fVar18;
            local_a0 = local_a0 * fVar18;
            local_90 = local_90 * fVar18;
            local_80 = local_80 * fVar18;
            local_9c = local_9c * fVar18;
            local_8c = local_8c * fVar18;
            local_7c = local_7c * fVar18;
          }
          FUN_003721e0(piVar11[uVar12 + 2],&local_a4);
          *(undefined1 *)(piVar11[uVar12 + 2] + 0xac) = 1;
          FUN_00372170(piVar11[uVar12 + 2],0);
          if ((uVar12 & 1) == 0) {
            fVar18 = fVar7 - *pfVar13 * fVar6;
          }
          else {
            fVar18 = *pfVar13 * fVar6;
          }
          fVar24 = fVar18 + fVar24;
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < 4);
      fVar19 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar19 = fVar19 * fVar5;
      if ((fVar4 < fVar19) && (*(int *)(param_1 + 0x3d0) != 0)) {
        local_a4 = local_74;
        local_a0 = fStack_70;
        local_9c = fStack_6c;
        uStack_98 = local_68;
        local_94 = fStack_64;
        local_90 = fStack_60;
        local_8c = local_5c;
        uStack_88 = local_58;
        local_84 = fStack_54;
        local_80 = fStack_50;
        local_7c = local_4c;
        uStack_78 = local_48;
        FUN_00371348(fVar19,fVar19,fVar19,&local_a4,1);
        FUN_003721e0(*(undefined4 *)(param_1 + 0x3d0),&local_a4);
        *(undefined1 *)(*(int *)(param_1 + 0x3d0) + 0xac) = 1;
        FUN_00372170(*(undefined4 *)(param_1 + 0x3d0),0);
      }
      return;
    }
  }
  return;
}
