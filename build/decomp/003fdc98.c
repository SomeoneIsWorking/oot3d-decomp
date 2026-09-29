// OoT3D decomp @ 003fdc98  name=FUN_003fdc98  size=1624

void FUN_003fdc98(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;

  uVar5 = DAT_003fe098;
  fVar15 = DAT_003fe094;
  fVar4 = DAT_003fe090;
  iVar3 = DAT_003fe08c;
  if (*(char *)(param_1 + 0x74) != '\0') {
    iVar12 = DAT_003fe08c + 0xe;
    iVar11 = *(int *)(*(int *)(param_1 + 0x70) + 0x20ac);
    uVar8 = 0;
    do {
      iVar9 = *(int *)(param_1 + uVar8 * 4);
      uVar6 = FUN_003478bc(*(undefined4 *)(iVar11 + 0x27c),(int)*(char *)(iVar3 + uVar8));
      FUN_00372224(&local_b0,uVar6);
      fVar16 = *(float *)(param_1 + uVar8 * 4 + 0x34) * *(float *)(param_1 + 0x6c);
      fVar17 = *(float *)(iVar12 + uVar8 * 4) * *(float *)(param_1 + 0x6c);
      if (uVar8 == 9) {
        fVar18 = *(float *)(iVar3 + -0x202) * fVar4;
        if (fVar18 != fVar15) {
          fVar13 = (float)FUN_003727f0(fVar18);
          fVar14 = (float)FUN_00372674(fVar18);
          fVar18 = local_ac * fVar13;
          local_ac = local_ac * fVar14 - local_b0 * fVar13;
          fVar1 = local_9c * fVar13;
          local_9c = local_9c * fVar14 - local_a0 * fVar13;
          fVar2 = local_8c * fVar13;
          local_8c = local_8c * fVar14 - local_90 * fVar13;
          local_b0 = local_b0 * fVar14 + fVar18;
          local_a0 = local_a0 * fVar14 + fVar1;
          local_90 = local_90 * fVar14 + fVar2;
        }
        local_b0 = local_b0 * fVar16;
        local_a0 = local_a0 * fVar16;
        local_90 = local_90 * fVar16;
        local_ac = local_ac * fVar17;
        local_9c = local_9c * fVar17;
        local_8c = local_8c * fVar17;
        local_a8 = local_a8 * fVar16;
        local_98 = local_98 * fVar16;
        local_88 = local_88 * fVar16;
        local_50 = *(undefined4 *)(iVar3 + -0x1fa);
        local_4c = *(undefined4 *)(iVar3 + -0x1fe);
        local_48 = *(undefined4 *)(iVar3 + -0x1f6);
        FUN_00372070(&local_b0,&local_b0,&local_50);
      }
      else {
        if (uVar8 == 0xc) {
          fVar18 = *(float *)(iVar3 + -0x1e2) * fVar4;
          if (fVar18 != fVar15) {
            fVar13 = (float)FUN_003727f0(fVar18);
            fVar14 = (float)FUN_00372674(fVar18);
            fVar18 = local_a8 * fVar13;
            local_a8 = local_a8 * fVar14 - local_ac * fVar13;
            fVar1 = local_98 * fVar13;
            local_98 = local_98 * fVar14 - local_9c * fVar13;
            fVar2 = local_88 * fVar13;
            local_88 = local_88 * fVar14 - local_8c * fVar13;
            local_ac = local_ac * fVar14 + fVar18;
            local_9c = local_9c * fVar14 + fVar1;
            local_8c = local_8c * fVar14 + fVar2;
          }
          local_b0 = local_b0 * fVar16;
          pfVar7 = &local_5c;
          local_a0 = local_a0 * fVar16;
          local_90 = local_90 * fVar16;
          local_ac = local_ac * fVar17;
          local_9c = local_9c * fVar17;
          local_8c = local_8c * fVar17;
          local_a8 = local_a8 * fVar16;
          local_98 = local_98 * fVar16;
          local_88 = local_88 * fVar16;
          local_58 = *(undefined4 *)(iVar3 + -0x1de);
          local_5c = fVar15;
          local_54 = fVar15;
        }
        else if (uVar8 == 6) {
          fVar18 = *(float *)(iVar3 + -0x1f2) * fVar4;
          if (fVar18 != fVar15) {
            fVar13 = (float)FUN_003727f0(fVar18);
            fVar14 = (float)FUN_00372674(fVar18);
            fVar18 = local_ac * fVar13;
            local_ac = local_ac * fVar14 - local_b0 * fVar13;
            fVar1 = local_9c * fVar13;
            local_9c = local_9c * fVar14 - local_a0 * fVar13;
            fVar2 = local_8c * fVar13;
            local_8c = local_8c * fVar14 - local_90 * fVar13;
            local_b0 = local_b0 * fVar14 + fVar18;
            local_a0 = local_a0 * fVar14 + fVar1;
            local_90 = local_90 * fVar14 + fVar2;
          }
          local_b0 = local_b0 * fVar16;
          pfVar7 = &local_68;
          local_a0 = local_a0 * fVar16;
          local_90 = local_90 * fVar16;
          local_ac = local_ac * fVar17;
          local_9c = local_9c * fVar17;
          local_8c = local_8c * fVar17;
          local_a8 = local_a8 * fVar16;
          local_98 = local_98 * fVar16;
          local_88 = local_88 * fVar16;
          local_68 = *(float *)(iVar3 + -0x1ea);
          local_64 = *(undefined4 *)(iVar3 + -0x1ee);
          local_60 = *(undefined4 *)(iVar3 + -0x1e6);
        }
        else if (uVar8 < 2) {
          fVar18 = *(float *)(iVar3 + -0x1da) * fVar4;
          if (fVar18 != fVar15) {
            fVar13 = (float)FUN_003727f0(fVar18);
            fVar14 = (float)FUN_00372674(fVar18);
            fVar18 = local_ac * fVar13;
            local_ac = local_ac * fVar14 - local_b0 * fVar13;
            fVar1 = local_9c * fVar13;
            local_9c = local_9c * fVar14 - local_a0 * fVar13;
            fVar2 = local_8c * fVar13;
            local_8c = local_8c * fVar14 - local_90 * fVar13;
            local_b0 = local_b0 * fVar14 + fVar18;
            local_a0 = local_a0 * fVar14 + fVar1;
            local_90 = local_90 * fVar14 + fVar2;
          }
          local_b0 = local_b0 * fVar16;
          pfVar7 = &local_74;
          local_a0 = local_a0 * fVar16;
          local_90 = local_90 * fVar16;
          local_ac = local_ac * fVar17;
          local_9c = local_9c * fVar17;
          local_8c = local_8c * fVar17;
          local_a8 = local_a8 * fVar16;
          local_98 = local_98 * fVar16;
          local_88 = local_88 * fVar16;
          local_74 = *(float *)(iVar3 + -0x1d6);
          local_70 = *(undefined4 *)(iVar3 + -0x1d2);
          local_6c = *(undefined4 *)(iVar3 + -0x1ce);
        }
        else {
          fVar13 = (float)FUN_003727f0(uVar5);
          fVar14 = (float)FUN_00372674(uVar5);
          pfVar7 = &local_80;
          fVar1 = local_b0 * fVar13;
          fVar2 = local_a0 * fVar13;
          fVar18 = local_8c * fVar13;
          local_b0 = (local_b0 * fVar14 + local_ac * fVar13) * fVar16;
          local_a0 = (local_a0 * fVar14 + local_9c * fVar13) * fVar16;
          local_8c = (local_8c * fVar14 - local_90 * fVar13) * fVar17;
          local_90 = (local_90 * fVar14 + fVar18) * fVar16;
          local_ac = (local_ac * fVar14 - fVar1) * fVar17;
          local_9c = (local_9c * fVar14 - fVar2) * fVar17;
          local_a8 = local_a8 * fVar16;
          local_98 = local_98 * fVar16;
          local_88 = local_88 * fVar16;
          local_7c = *(undefined4 *)(iVar3 + -0x206);
          local_80 = fVar15;
          local_78 = fVar15;
        }
        FUN_00372070(&local_b0,&local_b0,pfVar7);
      }
      if (iVar9 != 0) {
        iVar10 = *(int *)(iVar9 + 4);
        *(undefined1 *)(iVar10 + 0xac) = 1;
        FUN_003721e0(iVar10,&local_b0);
        FUN_00372170(iVar10,0);
        if (*(char *)(iVar9 + 0xe) != '\0') {
          FUN_00373bec(iVar9 + 0x40);
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 0xd);
  }
  return;
}
