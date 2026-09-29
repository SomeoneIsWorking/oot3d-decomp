// OoT3D decomp @ 0032b770  name=FUN_0032b770  size=2792

void FUN_0032b770(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110 [8];
  float local_f0 [8];
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
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  char local_58 [12];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;

  uVar2 = DAT_0032bb8c;
  fVar18 = DAT_0032bb88;
  fVar19 = DAT_0032bb84;
  fVar15 = DAT_0032bb7c;
  fVar1 = DAT_0032bb44;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_64 = DAT_0032bb44;
  local_60 = DAT_0032bb44;
  local_5c = DAT_0032bb44;
  local_88 = DAT_0032bb48;
  local_84 = DAT_0032bb4c;
  local_80 = DAT_0032bb44;
  local_94 = DAT_0032bb50;
  local_90 = DAT_0032bb54;
  local_8c = DAT_0032bb44;
  local_a0 = DAT_0032bb58;
  local_9c = DAT_0032bb5c;
  local_98 = DAT_0032bb44;
  local_ac = DAT_0032bb60;
  local_a8 = DAT_0032bb64;
  local_a4 = DAT_0032bb44;
  local_b8 = DAT_0032bb68;
  local_b4 = DAT_0032bb54;
  local_b0 = DAT_0032bb44;
  local_c4 = DAT_0032bb6c;
  local_c0 = DAT_0032bb70;
  local_bc = DAT_0032bb44;
  local_d0 = DAT_0032bb48;
  local_cc = DAT_0032bb74;
  local_c8 = DAT_0032bb44;
  local_f0[0] = *DAT_0032bb78;
  local_f0[1] = DAT_0032bb78[1];
  local_f0[2] = DAT_0032bb78[2];
  local_f0[3] = DAT_0032bb78[3];
  local_f0[4] = DAT_0032bb78[4];
  local_f0[5] = DAT_0032bb78[5];
  local_f0[6] = DAT_0032bb78[6];
  local_f0[7] = DAT_0032bb78[7];
  local_110[0] = DAT_0032bb78[8];
  local_110[1] = DAT_0032bb78[9];
  local_110[2] = DAT_0032bb78[10];
  local_110[3] = DAT_0032bb78[0xb];
  local_110[4] = DAT_0032bb78[0xc];
  local_110[5] = DAT_0032bb78[0xd];
  local_110[6] = DAT_0032bb78[0xe];
  local_110[7] = DAT_0032bb78[0xf];
  local_120 = DAT_0032bb7c;
  local_11c = DAT_0032bb7c;
  local_118 = DAT_0032bb7c;
  local_114 = DAT_0032bb7c;
  iVar11 = 0;
  local_130 = DAT_0032bb80;
  local_12c = DAT_0032bb80;
  local_128 = DAT_0032bb80;
  local_124 = DAT_0032bb7c;
  local_140 = DAT_0032bb7c;
  local_13c = DAT_0032bb7c;
  local_138 = DAT_0032bb7c;
  local_134 = DAT_0032bb7c;
  local_150 = DAT_0032bb44;
  local_14c = DAT_0032bb44;
  local_148 = DAT_0032bb44;
  local_144 = DAT_0032bb44;
  iVar12 = *(int *)(param_1 + 0x130);
  fVar16 = DAT_0032bb44;
  do {
    if (*(int *)(param_1 + 0x17c) <= iVar12) break;
    iVar7 = iVar11 * 3;
    iVar10 = iVar11 * 0xf + 2;
    iVar13 = param_1 + iVar11 * 0xc;
    local_64 = *(float *)(iVar13 + 0x52c);
    local_5c = *(float *)(iVar13 + 0x534);
    local_60 = *(float *)(iVar13 + 0x530) + fVar16;
    if (*(int *)(param_1 + 400) == iVar11) {
      local_140 = local_130;
      local_13c = local_12c;
      local_138 = local_128;
      iVar13 = *(int *)(param_1 + 0x4e0);
      *(float *)(iVar13 + 0x3c) = local_d0 + local_64;
      *(float *)(iVar13 + 0x40) = local_cc + local_60;
      *(float *)(iVar13 + 0x44) = local_c8 + local_5c;
      local_60 = local_60 + fVar19;
    }
    else {
      local_140 = local_120;
      local_13c = local_11c;
      local_138 = local_118;
    }
    iVar13 = param_1 + iVar11 * 8;
    local_134 = *(float *)(iVar13 + 0x570);
    iVar9 = param_1 + iVar10 * 4;
    if (*(float *)(iVar13 + 0x56c) < local_134) {
      local_134 = *(float *)(iVar13 + 0x56c);
    }
    local_70 = local_94 + local_64;
    local_6c = local_90 + local_60;
    local_68 = local_8c + local_5c;
    if (*(int *)(param_1 + 400) == iVar11) {
      local_6c = local_6c - fVar19;
    }
    iVar3 = *(int *)(iVar9 + 0x424);
    *(float *)(iVar3 + 0x3c) = local_70;
    *(float *)(iVar3 + 0x40) = local_6c;
    *(float *)(iVar3 + 0x44) = local_68;
    FUN_003429c8(*(undefined4 *)(iVar9 + 0x424),0,&local_140);
    local_70 = local_88 + local_64;
    local_6c = local_84 + local_60;
    local_68 = local_80 + local_5c;
    iVar3 = *(int *)(iVar9 + 0x428);
    *(float *)(iVar3 + 0x3c) = local_70;
    *(float *)(iVar3 + 0x40) = local_6c;
    *(float *)(iVar3 + 0x44) = local_68;
    iVar3 = *(int *)(iVar9 + 0x42c);
    *(float *)(iVar3 + 0x3c) = local_70;
    *(float *)(iVar3 + 0x40) = local_6c;
    *(float *)(iVar3 + 0x44) = local_68;
    FUN_003429c8(*(undefined4 *)(iVar9 + 0x42c),0,&local_140);
    local_70 = local_70 + (fVar18 - local_88);
    iVar3 = *(int *)(iVar9 + 0x43c);
    *(float *)(iVar3 + 0x3c) = local_70;
    *(float *)(iVar3 + 0x40) = local_6c;
    *(float *)(iVar3 + 0x44) = local_68;
    iVar3 = *(int *)(iVar9 + 0x43c);
    *(float *)(iVar3 + 0xf0) = local_140;
    *(float *)(iVar3 + 0xf4) = local_13c;
    *(float *)(iVar3 + 0xf8) = local_138;
    *(float *)(iVar3 + 0xfc) = local_134;
    iVar3 = 0;
    do {
      fStack_74 = local_68;
      local_7c = local_70 + local_f0[iVar3];
      local_78 = local_6c + local_110[iVar3];
      iVar5 = param_1 + (iVar10 + iVar3) * 4;
      iVar8 = *(int *)(iVar5 + 0x440);
      iVar3 = iVar3 + 1;
      *(float *)(iVar8 + 0x3c) = local_7c;
      *(float *)(iVar8 + 0x40) = local_78;
      *(float *)(iVar8 + 0x44) = local_68;
      iVar5 = *(int *)(iVar5 + 0x440);
      *(undefined4 *)(iVar5 + 0xf0) = uVar2;
      *(undefined4 *)(iVar5 + 0xf4) = uVar2;
      *(undefined4 *)(iVar5 + 0xf8) = uVar2;
      *(float *)(iVar5 + 0xfc) = local_134;
    } while (iVar3 < 8);
    if (*(int *)(param_1 + 300) == iVar12) {
      local_70 = local_a0;
      local_68 = local_98;
      local_6c = local_9c + fVar16;
      iVar10 = *(int *)(param_1 + 0x508);
      *(float *)(iVar10 + 0x3c) = local_a0;
      *(float *)(iVar10 + 0x40) = local_6c;
      *(float *)(iVar10 + 0x44) = local_98;
      iVar10 = *(int *)(param_1 + 0x50c);
      *(float *)(iVar10 + 0x3c) = local_a0;
      *(float *)(iVar10 + 0x40) = local_6c;
      *(float *)(iVar10 + 0x44) = local_98;
    }
    iVar10 = param_1 + iVar12;
    if ((*(byte *)(iVar10 + 0x15c) & 1) == 0) {
      local_70 = local_b8 + local_64;
      local_6c = local_b4 + local_60;
      local_68 = local_b0 + local_5c;
      iVar3 = *(int *)(iVar9 + 0x434);
      *(float *)(iVar3 + 0x3c) = local_70;
      *(float *)(iVar3 + 0x40) = local_6c;
      *(float *)(iVar3 + 0x44) = local_68;
      FUN_003429c8(*(undefined4 *)(iVar9 + 0x434),0,&local_140);
      local_58[iVar7 + 1] = '\x01';
    }
    else if (*(int *)(param_1 + 0x104) != 0) {
      local_70 = local_ac + local_64;
      local_6c = local_a8 + local_60;
      local_68 = local_a4 + local_5c;
      iVar3 = *(int *)(iVar9 + 0x430);
      *(float *)(iVar3 + 0x3c) = local_70;
      *(float *)(iVar3 + 0x40) = local_6c;
      *(float *)(iVar3 + 0x44) = local_68;
      FUN_003429c8(*(undefined4 *)(iVar9 + 0x430),0,&local_140);
      local_58[iVar7] = '\x01';
    }
    if ((*(byte *)(iVar10 + 0x15c) & 2) != 0) {
      local_70 = local_c4 + local_64;
      local_6c = local_c0 + local_60;
      local_68 = local_bc + local_5c;
      iVar3 = *(int *)(iVar9 + 0x438);
      *(float *)(iVar3 + 0x3c) = local_70;
      *(float *)(iVar3 + 0x40) = local_6c;
      *(float *)(iVar3 + 0x44) = local_68;
      FUN_003429c8(*(undefined4 *)(iVar9 + 0x438),0,&local_140);
      local_58[iVar7 + 2] = '\x01';
    }
    if (*(int *)(param_1 + 0x104) == 0) {
      uVar4 = (uint)*(byte *)(iVar10 + 0x13c);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x128);
    }
    pfVar6 = (float *)(DAT_0032c1bc + uVar4 * 0xc);
    local_150 = *pfVar6;
    local_14c = pfVar6[1];
    local_148 = pfVar6[2];
    local_144 = *(float *)(DAT_0032c1c0 + uVar4 * 4);
    FUN_003429c8(*(undefined4 *)(iVar9 + 0x428),0,&local_140);
    FUN_003429c8(*(undefined4 *)(iVar9 + 0x428),1,&local_150);
    iVar7 = FUN_003331ec(*(undefined4 *)(iVar9 + 0x274));
    iVar11 = iVar11 + 1;
    *(undefined4 *)(iVar7 + 0xc) = *(undefined4 *)(iVar13 + 0x56c);
    *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar13 + 0x56c);
    iVar12 = iVar12 + 1;
    *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(iVar13 + 0x570);
    *(undefined4 *)(iVar7 + 0x3c) = *(undefined4 *)(iVar13 + 0x570);
    fVar16 = fVar16 + DAT_0032c1c4;
  } while (iVar11 < 3);
  local_40 = *(float *)(param_1 + 0x584);
  local_4c = fVar15;
  local_48 = fVar15;
  local_44 = fVar15;
  FUN_003429c8(*(undefined4 *)(param_1 + 0x508),0,&local_4c);
  local_40 = *(float *)(param_1 + 0x584) * *(float *)(param_1 + 0x588);
  local_4c = fVar15;
  local_48 = fVar15;
  local_44 = fVar15;
  FUN_003429c8(*(undefined4 *)(param_1 + 0x50c),0,&local_4c);
  fVar18 = DAT_0032c1d0;
  fVar19 = DAT_0032c1cc;
  fVar15 = DAT_0032c1c8;
  iVar12 = *(int *)(param_1 + 400);
  iVar7 = *(int *)(param_1 + 0x4f0);
  fVar17 = *(float *)(param_1 + 0x558);
  fVar16 = *(float *)(param_1 + 0x554) + DAT_0032c1d0;
  *(float *)(iVar7 + 0x3c) = *(float *)(param_1 + 0x550) + DAT_0032c1c8;
  *(float *)(iVar7 + 0x40) = fVar16;
  *(float *)(iVar7 + 0x44) = fVar17 + fVar1;
  iVar7 = *(int *)(param_1 + 0x4f4);
  fVar16 = *(float *)(param_1 + 0x554);
  fVar15 = *(float *)(param_1 + 0x550) + fVar15;
  if (iVar12 == 3) {
    fVar17 = *(float *)(param_1 + 0x558);
    *(float *)(iVar7 + 0x3c) = fVar15;
    *(float *)(iVar7 + 0x40) = fVar16 + fVar19;
    *(float *)(iVar7 + 0x44) = fVar17 + fVar1;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x4f0),0,&local_130);
    FUN_003429c8(*(undefined4 *)(param_1 + 0x4f4),0,&local_130);
  }
  else {
    fVar17 = *(float *)(param_1 + 0x558);
    *(float *)(iVar7 + 0x3c) = fVar15;
    *(float *)(iVar7 + 0x40) = fVar16 + fVar18;
    *(float *)(iVar7 + 0x44) = fVar17 + fVar1;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x4f0),0,&local_120);
    FUN_003429c8(*(undefined4 *)(param_1 + 0x4f4),0,&local_120);
  }
  fVar15 = DAT_0032c1d4;
  iVar12 = *(int *)(param_1 + 400);
  iVar7 = *(int *)(param_1 + 0x4fc);
  fVar16 = *(float *)(param_1 + 0x554);
  fVar17 = *(float *)(param_1 + 0x558);
  *(float *)(iVar7 + 0x3c) = *(float *)(param_1 + 0x550) + DAT_0032c1d4;
  *(float *)(iVar7 + 0x40) = fVar16 + fVar18;
  *(float *)(iVar7 + 0x44) = fVar17 + fVar1;
  iVar7 = *(int *)(param_1 + 0x500);
  fVar16 = *(float *)(param_1 + 0x554);
  fVar15 = *(float *)(param_1 + 0x550) + fVar15;
  if (iVar12 == 4) {
    fVar18 = *(float *)(param_1 + 0x558);
    *(float *)(iVar7 + 0x3c) = fVar15;
    *(float *)(iVar7 + 0x40) = fVar16 + fVar19;
    *(float *)(iVar7 + 0x44) = fVar18 + fVar1;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x4fc),0,&local_130);
    FUN_003429c8(*(undefined4 *)(param_1 + 0x500),0,&local_130);
  }
  else {
    fVar19 = *(float *)(param_1 + 0x558);
    *(float *)(iVar7 + 0x3c) = fVar15;
    *(float *)(iVar7 + 0x40) = fVar16 + fVar18;
    *(float *)(iVar7 + 0x44) = fVar19 + fVar1;
    FUN_003429c8(*(undefined4 *)(param_1 + 0x4fc),0,&local_120);
    FUN_003429c8(*(undefined4 *)(param_1 + 0x500),0,&local_120);
  }
  FUN_003243a8(param_1);
  iVar12 = 0;
  if (0 < iVar11) {
    do {
      iVar7 = iVar12 * 0xf + 2;
      iVar13 = param_1 + iVar7 * 4;
      (**(code **)(**(int **)(iVar13 + 0x424) + 0xc))();
      (**(code **)(**(int **)(iVar13 + 0x428) + 0xc))();
      (**(code **)(**(int **)(iVar13 + 0x42c) + 0xc))();
      if (*(int *)(param_1 + 400) == iVar12) {
        (**(code **)(**(int **)(param_1 + 0x4e0) + 0xc))();
      }
      iVar10 = iVar12 * 3;
      if (local_58[iVar10] != '\0') {
        (**(code **)(**(int **)(iVar13 + 0x430) + 0xc))();
      }
      if (local_58[iVar10 + 1] != '\0') {
        (**(code **)(**(int **)(iVar13 + 0x434) + 0xc))();
      }
      if (local_58[iVar10 + 2] != '\0') {
        (**(code **)(**(int **)(iVar13 + 0x438) + 0xc))();
      }
      iVar10 = 0;
      do {
        (**(code **)(**(int **)(param_1 + (iVar7 + iVar10) * 4 + 0x440) + 0xc))();
        iVar10 = iVar10 + 1;
      } while (iVar10 < 8);
      (**(code **)(**(int **)(iVar13 + 0x43c) + 0xc))();
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar11);
  }
  iVar11 = *(int *)(param_1 + 0x118);
  bVar14 = iVar11 == 0;
  if (bVar14) {
    iVar11 = *(int *)(param_1 + 0x11c);
  }
  if ((bVar14 && iVar11 == 0) && (*(float *)(param_1 + 0x584) != fVar1)) {
    (**(code **)(**(int **)(param_1 + 0x508) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x50c) + 0xc))();
  }
  if (2 < *(int *)(param_1 + 0x130)) {
    (**(code **)(**(int **)(param_1 + 0x4f0) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x4f4) + 0xc))();
    if (*(int *)(param_1 + 400) == 3) {
      (**(code **)(**(int **)(param_1 + 0x4f8) + 0xc))();
    }
  }
  if (*(int *)(param_1 + 0x130) + 3 < *(int *)(param_1 + 0x17c)) {
    (**(code **)(**(int **)(param_1 + 0x4fc) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x500) + 0xc))();
    if (*(int *)(param_1 + 400) == 4) {
      (**(code **)(**(int **)(param_1 + 0x504) + 0xc))();
    }
  }
  return;
}
