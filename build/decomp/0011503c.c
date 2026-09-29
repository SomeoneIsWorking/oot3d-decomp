// OoT3D decomp @ 0011503c  name=FUN_0011503c  size=2328

void FUN_0011503c(undefined4 param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;

  iVar6 = DAT_00115444;
  fVar5 = DAT_00115440;
  fVar4 = DAT_0011543c;
  fVar3 = DAT_00115438;
  iVar15 = 0;
  pbVar13 = *(byte **)(DAT_00115434 + param_2);
  pbVar14 = pbVar13;
  do {
    if (*pbVar14 == 1) {
      local_dc = *(undefined4 *)(pbVar14 + 4);
      local_cc = *(undefined4 *)(pbVar14 + 8);
      local_bc = *(undefined4 *)(pbVar14 + 0xc);
      local_e8 = 1.0;
      local_e4 = 0.0;
      local_d0 = 0.0;
      local_e0 = 0.0;
      local_d8 = 0.0;
      local_d4 = 1.0;
      local_c8 = 0.0;
      local_c4 = 0.0;
      local_c0 = 1.0;
      local_70 = local_dc;
      local_6c = local_cc;
      local_68 = local_bc;
      FUN_00371fac(&local_e8,param_2 + 0x2fc);
      fVar16 = *(float *)(pbVar14 + 0x30);
      local_e8 = local_e8 * fVar16;
      local_d8 = local_d8 * fVar16;
      local_c8 = local_c8 * fVar16;
      local_e4 = local_e4 * fVar16;
      local_d4 = local_d4 * fVar16;
      local_c4 = local_c4 * fVar16;
      local_e0 = local_e0 * fVar16;
      local_d0 = local_d0 * fVar16;
      local_c0 = local_c0 * fVar16;
      if (*(int *)(pbVar14 + 0x44) != 0) {
        fVar16 = (float)VectorUnsignedToFloat((uint)pbVar14[0x28],(byte)(in_fpscr >> 0x15) & 3);
        fVar17 = (float)VectorUnsignedToFloat((uint)pbVar14[0x29],(byte)(in_fpscr >> 0x15) & 3);
        sVar1 = *(short *)(pbVar14 + 2);
        iVar12 = *(int *)(pbVar14 + 0x44);
        fVar18 = (float)VectorUnsignedToFloat((uint)pbVar14[0x2a],(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(iVar12 + 0x10) = fVar16 * fVar5;
        fVar23 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(iVar12 + 0x14) = fVar17 * fVar5;
        *(float *)(iVar12 + 0x18) = fVar18 * fVar5;
        *(float *)(iVar12 + 0x1c) = fVar23 * fVar5;
        *(undefined4 *)(iVar12 + 0x30) = 0;
        *(undefined4 *)(iVar12 + 0x38) = 0;
        *(undefined1 *)(iVar12 + 0xc) = 1;
        iVar12 = *(int *)(pbVar14 + 0x44);
        *(float *)(iVar12 + 0x20) = fVar16 * fVar5;
        *(float *)(iVar12 + 0x24) = fVar17 * fVar5;
        *(float *)(iVar12 + 0x28) = fVar18 * fVar5;
        *(float *)(iVar12 + 0x2c) = fVar23 * fVar5;
        *(undefined4 *)(iVar12 + 0x3c) = 0;
        *(undefined4 *)(iVar12 + 0x34) = 4;
        *(undefined1 *)(iVar12 + 0xd) = 1;
        FUN_003710bc(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(pbVar14 + 0x44),&local_e8);
      }
    }
    uVar7 = DAT_0011544c;
    fVar16 = DAT_00115448;
    iVar15 = iVar15 + 1;
    pbVar14 = pbVar14 + 0x48;
  } while (iVar15 < 0x96);
  iVar15 = 0;
  pbVar14 = pbVar13;
  do {
    if ((*pbVar14 == 3) && (*(int *)(pbVar14 + 0x44) != 0)) {
      local_dc = *(undefined4 *)(pbVar14 + 4);
      local_cc = *(undefined4 *)(pbVar14 + 8);
      local_bc = *(undefined4 *)(pbVar14 + 0xc);
      local_e0 = 0.0;
      local_e4 = 0.0;
      local_e8 = 1.0;
      local_d8 = 0.0;
      local_d4 = 1.0;
      local_d0 = 0.0;
      local_c8 = 0.0;
      local_c4 = 0.0;
      local_c0 = 1.0;
      local_7c = local_dc;
      local_78 = local_cc;
      local_74 = local_bc;
      FUN_00371fac(&local_e8,param_2 + 0x2fc);
      fVar17 = *(float *)(pbVar14 + 0x30);
      local_e8 = local_e8 * fVar17;
      local_d8 = local_d8 * fVar17;
      local_c8 = local_c8 * fVar17;
      local_e4 = local_e4 * fVar17;
      local_d4 = local_d4 * fVar17;
      local_c4 = local_c4 * fVar17;
      local_e0 = local_e0 * fVar17;
      local_d0 = local_d0 * fVar17;
      local_c0 = local_c0 * fVar17;
      sVar1 = *(short *)(pbVar14 + 2);
      iVar12 = *(int *)(pbVar14 + 0x44);
      *(float *)(iVar12 + 0x10) = fVar16;
      fVar17 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(iVar12 + 0x14) = uVar7;
      *(float *)(iVar12 + 0x18) = fVar3;
      *(float *)(iVar12 + 0x1c) = fVar17 * fVar5;
      *(undefined4 *)(iVar12 + 0x30) = 0;
      *(undefined4 *)(iVar12 + 0x38) = 0;
      *(undefined1 *)(iVar12 + 0xc) = 1;
      iVar12 = *(int *)(pbVar14 + 0x44);
      *(float *)(iVar12 + 0x20) = fVar16;
      *(undefined4 *)(iVar12 + 0x24) = uVar7;
      *(float *)(iVar12 + 0x28) = fVar3;
      *(float *)(iVar12 + 0x2c) = fVar17 * fVar5;
      *(undefined4 *)(iVar12 + 0x3c) = 0;
      *(undefined4 *)(iVar12 + 0x34) = 4;
      *(undefined1 *)(iVar12 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(pbVar14 + 0x44),&local_e8);
    }
    uVar8 = DAT_00115450;
    iVar15 = iVar15 + 1;
    pbVar14 = pbVar14 + 0x48;
  } while (iVar15 < 0x96);
  iVar15 = 0;
  pbVar14 = pbVar13;
  do {
    if ((*pbVar14 == 2) && (*(int *)(pbVar14 + 0x44) != 0)) {
      local_dc = *(undefined4 *)(pbVar14 + 4);
      local_cc = *(undefined4 *)(pbVar14 + 8);
      local_bc = *(undefined4 *)(pbVar14 + 0xc);
      local_e8 = 1.0;
      local_d8 = 0.0;
      local_d4 = 1.0;
      local_e4 = 0.0;
      local_e0 = 0.0;
      local_d0 = 0.0;
      local_c8 = 0.0;
      local_c4 = 0.0;
      local_c0 = 1.0;
      local_88 = local_dc;
      local_84 = local_cc;
      local_80 = local_bc;
      FUN_00371fac(&local_e8,param_2 + 0x2fc);
      fVar17 = *(float *)(pbVar14 + 0x30);
      local_e8 = local_e8 * fVar17;
      local_d8 = local_d8 * fVar17;
      local_c8 = local_c8 * fVar17;
      local_e4 = local_e4 * fVar17;
      local_d4 = local_d4 * fVar17;
      local_c4 = local_c4 * fVar17;
      local_e0 = local_e0 * fVar17;
      local_d0 = local_d0 * fVar17;
      local_c0 = local_c0 * fVar17;
      sVar1 = *(short *)(pbVar14 + 2);
      iVar12 = *(int *)(pbVar14 + 0x44);
      *(float *)(iVar12 + 0x10) = fVar3;
      fVar17 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(iVar12 + 0x14) = uVar8;
      *(float *)(iVar12 + 0x18) = fVar4;
      *(float *)(iVar12 + 0x1c) = fVar17 * fVar5;
      *(undefined4 *)(iVar12 + 0x30) = 0;
      *(undefined4 *)(iVar12 + 0x38) = 0;
      *(undefined1 *)(iVar12 + 0xc) = 1;
      iVar12 = *(int *)(pbVar14 + 0x44);
      *(float *)(iVar12 + 0x20) = fVar3;
      *(undefined4 *)(iVar12 + 0x24) = uVar8;
      *(float *)(iVar12 + 0x28) = fVar4;
      *(float *)(iVar12 + 0x2c) = fVar17 * fVar5;
      *(undefined4 *)(iVar12 + 0x3c) = 0;
      *(undefined4 *)(iVar12 + 0x34) = 4;
      *(undefined1 *)(iVar12 + 0xd) = 1;
      FUN_003710bc(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(pbVar14 + 0x44),&local_e8);
    }
    uVar11 = DAT_001158c8;
    fVar17 = DAT_001158c4;
    uVar10 = DAT_001158c0;
    uVar9 = DAT_001158bc;
    uVar22 = DAT_001158b8;
    iVar15 = iVar15 + 1;
    pbVar14 = pbVar14 + 0x48;
  } while (iVar15 < 0x96);
  iVar15 = 0;
  pbVar14 = pbVar13;
  do {
    if (*pbVar14 == 4) {
      local_dc = *(undefined4 *)(pbVar14 + 4);
      local_cc = *(undefined4 *)(pbVar14 + 8);
      local_bc = *(undefined4 *)(pbVar14 + 0xc);
      local_e4 = 0.0;
      local_e0 = 0.0;
      local_e8 = 1.0;
      local_d8 = 0.0;
      local_d4 = 1.0;
      local_d0 = 0.0;
      local_c8 = 0.0;
      local_c4 = 0.0;
      local_c0 = 1.0;
      local_94 = local_dc;
      local_90 = local_cc;
      local_8c = local_bc;
      FUN_00371fac(&local_e8,param_2 + 0x2fc);
      if (*(short *)(pbVar14 + 0x2e) == 0) {
        local_a0 = fVar4;
        local_9c = fVar4;
        local_98 = uVar22;
        FUN_00372070(&local_e8,&local_e8,&local_a0);
      }
      else {
        local_ac = fVar4;
        local_a8 = fVar4;
        local_a4 = fVar4;
        FUN_00372070(&local_e8,&local_e8,&local_ac);
      }
      fVar18 = *(float *)(pbVar14 + 0x38);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar18 == fVar4) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar19 = (float)FUN_003727f0(fVar18);
        fVar20 = (float)FUN_00372674(fVar18);
        fVar18 = local_e4 * fVar19;
        local_e4 = local_e4 * fVar20 - local_e8 * fVar19;
        fVar23 = local_d4 * fVar19;
        local_d4 = local_d4 * fVar20 - local_d8 * fVar19;
        fVar21 = local_c4 * fVar19;
        local_c4 = local_c4 * fVar20 - local_c8 * fVar19;
        local_e8 = local_e8 * fVar20 + fVar18;
        local_d8 = local_d8 * fVar20 + fVar23;
        local_c8 = local_c8 * fVar20 + fVar21;
      }
      fVar18 = (float)FUN_003727f0(uVar9);
      fVar23 = (float)FUN_00372674(uVar9);
      fVar19 = local_e4 * fVar23 + local_e0 * fVar18;
      fVar20 = local_d4 * fVar23 + local_d0 * fVar18;
      fVar24 = local_c4 * fVar23 + local_c0 * fVar18;
      fVar21 = *(float *)(pbVar14 + 0x30);
      local_e8 = local_e8 * fVar21;
      local_d8 = local_d8 * fVar21;
      local_c8 = local_c8 * fVar21;
      local_e0 = (local_e0 * fVar23 - local_e4 * fVar18) * fVar21;
      local_d0 = (local_d0 * fVar23 - local_d4 * fVar18) * fVar21;
      local_c0 = (local_c0 * fVar23 - local_c4 * fVar18) * fVar21;
      local_e4 = fVar19;
      local_d4 = fVar20;
      local_c4 = fVar24;
      if (*(int *)(pbVar14 + 0x44) != 0) {
        if (*(short *)(pbVar14 + 0x2c) == 1) {
          fVar21 = (float)VectorSignedToFloat((int)*(short *)(pbVar14 + 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
          uVar2 = uVar10;
          fVar18 = fVar4;
          fVar23 = fVar3;
        }
        else {
          fVar21 = (float)VectorSignedToFloat((int)*(short *)(pbVar14 + 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
          uVar2 = uVar11;
          fVar18 = fVar3;
          fVar23 = fVar17;
        }
        iVar12 = *(int *)(pbVar14 + 0x44);
        *(float *)(iVar12 + 0x10) = fVar23;
        *(undefined4 *)(iVar12 + 0x14) = uVar2;
        *(float *)(iVar12 + 0x18) = fVar18;
        *(float *)(iVar12 + 0x1c) = fVar21 * fVar5;
        *(undefined4 *)(iVar12 + 0x30) = 0;
        *(undefined4 *)(iVar12 + 0x38) = 0;
        *(undefined1 *)(iVar12 + 0xc) = 1;
        iVar12 = *(int *)(pbVar14 + 0x44);
        *(float *)(iVar12 + 0x20) = fVar23;
        *(undefined4 *)(iVar12 + 0x24) = uVar2;
        *(float *)(iVar12 + 0x28) = fVar18;
        *(float *)(iVar12 + 0x2c) = fVar21 * fVar5;
        *(undefined4 *)(iVar12 + 0x3c) = 0;
        *(undefined4 *)(iVar12 + 0x34) = 4;
        *(undefined1 *)(iVar12 + 0xd) = 1;
        FUN_003710bc(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(pbVar14 + 0x44),&local_e8);
      }
    }
    iVar15 = iVar15 + 1;
    pbVar14 = pbVar14 + 0x48;
  } while (iVar15 < 0x96);
  FUN_003fdc98(DAT_001158cc);
  iVar15 = 0;
  do {
    if (5 < *pbVar13) {
      local_dc = *(undefined4 *)(pbVar13 + 4);
      local_cc = *(undefined4 *)(pbVar13 + 8);
      local_bc = *(undefined4 *)(pbVar13 + 0xc);
      local_e0 = 0.0;
      local_e4 = 0.0;
      local_e8 = 1.0;
      local_d8 = 0.0;
      local_d4 = 1.0;
      local_d0 = 0.0;
      local_c8 = 0.0;
      local_c4 = 0.0;
      local_c0 = 1.0;
      local_b8 = local_dc;
      local_b4 = local_cc;
      local_b0 = local_bc;
      FUN_00371fac(&local_e8,param_2 + 0x2fc);
      fVar17 = *(float *)(pbVar13 + 0x30);
      local_e8 = local_e8 * fVar17;
      local_d8 = local_d8 * fVar17;
      local_c8 = local_c8 * fVar17;
      local_e4 = local_e4 * fVar17;
      local_d4 = local_d4 * fVar17;
      local_c4 = local_c4 * fVar17;
      local_e0 = local_e0 * fVar17;
      local_d0 = local_d0 * fVar17;
      local_c0 = local_c0 * fVar17;
      if (*(int *)(pbVar13 + 0x44) != 0) {
        if (*(short *)(pbVar13 + 0x2c) == 0) {
          fVar23 = (float)VectorSignedToFloat((int)*(short *)(pbVar13 + 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
          uVar22 = uVar7;
          fVar17 = fVar16;
          fVar18 = fVar3;
        }
        else {
          fVar23 = (float)VectorSignedToFloat((int)*(short *)(pbVar13 + 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
          uVar22 = uVar8;
          fVar17 = fVar3;
          fVar18 = fVar4;
        }
        iVar12 = *(int *)(pbVar13 + 0x44);
        *(float *)(iVar12 + 0x10) = fVar17;
        *(undefined4 *)(iVar12 + 0x14) = uVar22;
        *(float *)(iVar12 + 0x18) = fVar18;
        *(float *)(iVar12 + 0x1c) = fVar23 * fVar5;
        *(undefined4 *)(iVar12 + 0x30) = 0;
        *(undefined4 *)(iVar12 + 0x38) = 0;
        *(undefined1 *)(iVar12 + 0xc) = 1;
        iVar12 = *(int *)(pbVar13 + 0x44);
        *(float *)(iVar12 + 0x20) = fVar17;
        *(undefined4 *)(iVar12 + 0x24) = uVar22;
        *(float *)(iVar12 + 0x28) = fVar18;
        *(float *)(iVar12 + 0x2c) = fVar23 * fVar5;
        *(undefined4 *)(iVar12 + 0x3c) = 0;
        *(undefined4 *)(iVar12 + 0x34) = 4;
        *(undefined1 *)(iVar12 + 0xd) = 1;
        FUN_003710bc(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(pbVar13 + 0x44),&local_e8);
      }
    }
    iVar15 = iVar15 + 1;
    pbVar13 = pbVar13 + 0x48;
  } while (iVar15 < 0x96);
  return;
}
