// OoT3D decomp @ 001304d8  name=FUN_001304d8  size=1600

void FUN_001304d8(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;

  fVar2 = DAT_001308b8;
  fVar12 = DAT_001308b4;
  uVar1 = DAT_001308b0;
  fVar11 = DAT_001308ac;
  fVar14 = DAT_001308a8;
  fVar10 = DAT_001308a4;
  fVar15 = DAT_001308a0;
  sVar5 = 0;
  pcVar3 = *(char **)(DAT_0013089c + param_2);
  do {
    if (*pcVar3 == '\x01') {
      local_68 = *(float *)(pcVar3 + 4);
      local_58 = *(undefined4 *)(pcVar3 + 8);
      local_48 = *(float *)(pcVar3 + 0xc);
      local_74 = fVar15 * 1.0;
      local_64 = fVar15 * 0.0;
      local_54 = fVar15 * 0.0;
      local_70 = fVar15 * 0.0;
      local_60 = fVar15 * 1.0;
      local_50 = fVar15 * 0.0;
      local_6c = fVar15 * 0.0;
      local_5c = fVar15 * 0.0;
      local_4c = fVar15 * 1.0;
      fVar16 = *(float *)(pcVar3 + 0x40);
      if (fVar16 != fVar2) {
        fVar7 = (float)FUN_003727f0(fVar16);
        fVar16 = (float)FUN_00372674(fVar16);
        fVar13 = local_74 * fVar7;
        local_74 = local_74 * fVar16 - local_6c * fVar7;
        local_6c = fVar13 + local_6c * fVar16;
        fVar13 = local_64 * fVar7;
        local_64 = local_64 * fVar16 - local_5c * fVar7;
        local_5c = fVar13 + local_5c * fVar16;
        fVar13 = local_54 * fVar7;
        local_54 = local_54 * fVar16 - local_4c * fVar7;
        local_4c = fVar13 + local_4c * fVar16;
      }
      fVar16 = *(float *)(pcVar3 + 0x3c);
      if (fVar16 != fVar2) {
        fVar8 = (float)FUN_003727f0(fVar16);
        fVar9 = (float)FUN_00372674(fVar16);
        fVar16 = local_6c * fVar8;
        local_6c = local_6c * fVar9 - local_70 * fVar8;
        fVar7 = local_5c * fVar8;
        local_5c = local_5c * fVar9 - local_60 * fVar8;
        fVar13 = local_4c * fVar8;
        local_4c = local_4c * fVar9 - local_50 * fVar8;
        local_70 = local_70 * fVar9 + fVar16;
        local_60 = local_60 * fVar9 + fVar7;
        local_50 = local_50 * fVar9 + fVar13;
      }
      if (*(int *)(param_1 + 0x34c) != 0) {
        FUN_00373bec();
      }
      if (*(int *)(param_1 + 0x348) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x348) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x348),&local_74);
        FUN_00372170(*(undefined4 *)(param_1 + 0x348),1);
      }
      fVar16 = fVar10;
      if (*(char *)(param_2 + 0x3235) != '\x01' && *(char *)(param_2 + 0x3235) != '\x02') {
        fVar16 = fVar14;
      }
      local_68 = *(float *)(pcVar3 + 4) + (*(float *)(pcVar3 + 8) - fVar11);
      local_48 = (*(float *)(pcVar3 + 0xc) - fVar12) + (*(float *)(pcVar3 + 8) - fVar11);
      local_70 = 0.0;
      local_74 = 1.0;
      local_6c = 0.0;
      local_64 = 0.0;
      local_60 = 1.0;
      local_50 = 0.0;
      local_4c = 1.0;
      local_5c = 0.0;
      local_54 = 0.0;
      local_58 = uVar1;
      if (fVar16 != fVar2) {
        fVar7 = (float)FUN_003727f0(fVar16);
        fVar16 = (float)FUN_00372674(fVar16);
        fVar13 = local_74 * fVar7;
        local_74 = local_74 * fVar16 - local_6c * fVar7;
        local_6c = fVar13 + local_6c * fVar16;
        fVar13 = local_64 * fVar7;
        local_64 = local_64 * fVar16 - local_5c * fVar7;
        local_5c = fVar13 + local_5c * fVar16;
        fVar13 = local_54 * fVar7;
        local_54 = local_54 * fVar16 - local_4c * fVar7;
        local_4c = fVar13 + local_4c * fVar16;
      }
      local_70 = fVar2;
      local_60 = fVar2;
      local_50 = fVar2;
      if (*(int *)(param_1 + 0x350) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x350) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x350),&local_74);
        FUN_00372170(*(undefined4 *)(param_1 + 0x350),1);
      }
    }
    sVar5 = sVar5 + 1;
  } while (sVar5 < 1);
  iVar4 = 0;
  do {
    if (*pcVar3 == '\x02') {
      local_68 = *(float *)(pcVar3 + 4);
      local_58 = *(undefined4 *)(pcVar3 + 8);
      local_48 = *(float *)(pcVar3 + 0xc);
      local_4c = *(float *)(pcVar3 + 0x34);
      local_74 = local_4c * 1.0;
      local_64 = local_4c * 0.0;
      local_54 = local_4c * 0.0;
      local_70 = local_4c * 0.0;
      local_60 = local_4c * 1.0;
      local_50 = local_4c * 0.0;
      local_6c = local_4c * 0.0;
      local_5c = local_4c * 0.0;
      local_4c = local_4c * 1.0;
      fVar15 = *(float *)(pcVar3 + 0x40);
      if (fVar15 != fVar2) {
        fVar10 = (float)FUN_003727f0(fVar15);
        fVar15 = (float)FUN_00372674(fVar15);
        fVar14 = local_74 * fVar10;
        local_74 = local_74 * fVar15 - local_6c * fVar10;
        local_6c = fVar14 + local_6c * fVar15;
        fVar14 = local_64 * fVar10;
        local_64 = local_64 * fVar15 - local_5c * fVar10;
        local_5c = fVar14 + local_5c * fVar15;
        fVar14 = local_54 * fVar10;
        local_54 = local_54 * fVar15 - local_4c * fVar10;
        local_4c = fVar14 + local_4c * fVar15;
      }
      fVar15 = *(float *)(pcVar3 + 0x3c);
      if (fVar15 != fVar2) {
        fVar11 = (float)FUN_003727f0(fVar15);
        fVar12 = (float)FUN_00372674(fVar15);
        fVar15 = local_6c * fVar11;
        local_6c = local_6c * fVar12 - local_70 * fVar11;
        fVar10 = local_5c * fVar11;
        local_5c = local_5c * fVar12 - local_60 * fVar11;
        fVar14 = local_4c * fVar11;
        local_4c = local_4c * fVar12 - local_50 * fVar11;
        local_70 = local_70 * fVar12 + fVar15;
        local_60 = local_60 * fVar12 + fVar10;
        local_50 = local_50 * fVar12 + fVar14;
      }
      fVar15 = *(float *)(pcVar3 + 0x38);
      if (fVar15 != fVar2) {
        fVar11 = (float)FUN_003727f0(fVar15);
        fVar12 = (float)FUN_00372674(fVar15);
        fVar15 = local_70 * fVar11;
        local_70 = local_70 * fVar12 - local_74 * fVar11;
        fVar10 = local_60 * fVar11;
        local_60 = local_60 * fVar12 - local_64 * fVar11;
        fVar14 = local_50 * fVar11;
        local_50 = local_50 * fVar12 - local_54 * fVar11;
        local_74 = local_74 * fVar12 + fVar15;
        local_64 = local_64 * fVar12 + fVar10;
        local_54 = local_54 * fVar12 + fVar14;
      }
      iVar6 = param_1 + iVar4 * 4;
      if (*(int *)(iVar6 + 0x6f4) != 0) {
        *(undefined1 *)(*(int *)(iVar6 + 0x6f4) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar6 + 0x6f4),&local_74);
        FUN_00372170(*(undefined4 *)(iVar6 + 0x6f4),0);
      }
    }
    pcVar3 = pcVar3 + 0x44;
    iVar4 = (int)(short)((short)iVar4 + 1);
  } while (iVar4 < 100);
  return;
}
