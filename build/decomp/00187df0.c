// OoT3D decomp @ 00187df0  name=FUN_00187df0  size=1360

void FUN_00187df0(int param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 auStack_bc [48];
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;

  fVar8 = DAT_001881d0;
  fVar14 = DAT_001881cc;
  fVar7 = DAT_001881c0;
  fVar6 = DAT_001881bc;
  fVar5 = DAT_001881b8;
  fVar4 = DAT_001881b4;
  fVar18 = DAT_001881b0;
  fVar17 = DAT_001881ac;
  iVar11 = DAT_001881a8;
  fVar3 = DAT_001881a4;
  pfVar12 = (float *)(param_1 + 0x8bc);
  fVar13 = *(float *)(param_1 + 0x1e0);
  iVar9 = *(int *)(param_1 + 0x6a0);
  fVar15 = fVar3;
  if (iVar9 == DAT_001881a8) {
    lVar2 = (ulonglong)(uint)*(byte *)(param_1 + 0x6a4) * (ulonglong)DAT_001881c4;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x24);
    iVar9 = -((uint)*(byte *)(param_1 + 0x6a4) + uVar1 * -0x14);
    iVar10 = iVar9 + 0x1e;
    if (0xe < iVar10) {
      iVar10 = iVar9 + 0xf;
    }
    fVar14 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = (float)FUN_003727f0(fVar14 * DAT_001881b0,iVar10,uVar1 * -5,(int)lVar2);
    fVar14 = fVar3 - fVar14 * fVar6;
  }
  else if (iVar9 == DAT_001881c8) {
    fVar15 = (float)FUN_003727f0(fVar13 * DAT_001881b0);
    fVar14 = fVar3 - fVar15 * fVar14;
    fVar15 = fVar3 - fVar15 * fVar8;
  }
  else {
    if (iVar9 == DAT_001881d4) {
      fVar15 = (float)FUN_00372674(fVar13 * DAT_001881ac);
      fVar14 = fVar3 - fVar15 * fVar14;
      fVar15 = fVar15 * fVar8;
    }
    else {
      if (iVar9 != DAT_001881d8) {
        fVar14 = fVar13;
        if (DAT_001881dc <= (int)fVar13) {
          fVar14 = fVar13 - DAT_001881b8;
        }
        fVar14 = (float)FUN_003727f0(fVar14 * DAT_001881c0);
        fVar14 = fVar3 - fVar14 * fVar6;
        goto LAB_00187f38;
      }
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x6a6),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar15 = (float)FUN_003727f0(fVar14 * DAT_001881b0);
      fVar15 = fVar15 * fVar4;
      fVar14 = fVar3 + fVar15;
    }
    fVar15 = fVar3 - fVar15;
  }
LAB_00187f38:
  FUN_00372224(&local_8c,param_1 + 0x148);
  FUN_00371348(fVar15 * *pfVar12,fVar14 * *(float *)(param_1 + 0x8c0),
               fVar15 * *(float *)(param_1 + 0x8c4),&local_8c,1);
  *(undefined1 *)(*(int *)(param_1 + 0x80c) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x80c),&local_8c);
  FUN_00372170(*(undefined4 *)(param_1 + 0x80c),0);
  local_8c = *(undefined4 *)(param_1 + 0x148);
  uStack_88 = *(undefined4 *)(param_1 + 0x14c);
  uStack_84 = *(undefined4 *)(param_1 + 0x150);
  uStack_80 = *(undefined4 *)(param_1 + 0x154);
  uStack_7c = *(undefined4 *)(param_1 + 0x158);
  uStack_78 = *(undefined4 *)(param_1 + 0x15c);
  local_74 = *(undefined4 *)(param_1 + 0x160);
  local_70 = *(undefined4 *)(param_1 + 0x164);
  uStack_6c = *(undefined4 *)(param_1 + 0x168);
  uStack_68 = *(undefined4 *)(param_1 + 0x16c);
  uStack_64 = *(undefined4 *)(param_1 + 0x170);
  uStack_60 = *(undefined4 *)(param_1 + 0x174);
  fVar15 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  fVar16 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar14 = DAT_001881e0;
  local_c0 = DAT_001881e0;
  local_c4 = DAT_001881e0;
  local_c8 = DAT_001881e0;
  FUN_003735ac(&local_d4,&local_8c,&local_c8);
  FUN_003713fc(local_d4,local_d0,local_cc,auStack_bc,0);
  FUN_00371fac(auStack_bc,param_2 + 0x2fc);
  fVar8 = DAT_001881e4;
  FUN_00371348(*pfVar12 * DAT_001881e4,*(float *)(param_1 + 0x8c0) * DAT_001881e4,
               *(float *)(param_1 + 0x8c4) * DAT_001881e4,auStack_bc,1);
  *(undefined1 *)(*(int *)(param_1 + 0x814) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x814),auStack_bc);
  FUN_00372170(*(undefined4 *)(param_1 + 0x814),0);
  FUN_003713fc(fVar15 * DAT_001881ec + fVar16 * DAT_001881e8,DAT_001881f0,
               fVar15 * DAT_001881e8 - fVar16 * DAT_001881ec,&local_8c,1);
  FUN_003735ac(&local_d4,&local_8c,&local_c8);
  FUN_003713fc(local_d4,local_d0,local_cc,auStack_bc,0);
  FUN_00371fac(auStack_bc,param_2 + 0x2fc);
  FUN_00371348(*pfVar12 * fVar8,*(float *)(param_1 + 0x8c0) * fVar8,
               *(float *)(param_1 + 0x8c4) * fVar8,auStack_bc,1);
  *(undefined1 *)(*(int *)(param_1 + 0x818) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x818),auStack_bc);
  FUN_00372170(*(undefined4 *)(param_1 + 0x818),0);
  FUN_003713fc(fVar15 * DAT_001881fc - fVar16 * DAT_00188200,DAT_00188204,
               fVar15 * DAT_001881f4 + fVar16 * DAT_001881f8,&local_8c,1);
  FUN_003735ac(&local_d4,&local_8c,&local_c8);
  FUN_003713fc(local_d4,local_d0,local_cc,auStack_bc,0);
  FUN_00371fac(auStack_bc,param_2 + 0x2fc);
  FUN_00371348(*pfVar12 * fVar8,*(float *)(param_1 + 0x8c0) * fVar8,
               *(float *)(param_1 + 0x8c4) * fVar8,auStack_bc,1);
  *(undefined1 *)(*(int *)(param_1 + 0x81c) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x81c),auStack_bc);
  FUN_00372170(*(undefined4 *)(param_1 + 0x81c),0);
  fVar15 = DAT_001883a8;
  fVar8 = DAT_001883a4;
  local_8c = *(undefined4 *)(param_1 + 0x148);
  uStack_88 = *(undefined4 *)(param_1 + 0x14c);
  uStack_84 = *(undefined4 *)(param_1 + 0x150);
  uStack_80 = *(undefined4 *)(param_1 + 0x154);
  uStack_7c = *(undefined4 *)(param_1 + 0x158);
  uStack_78 = *(undefined4 *)(param_1 + 0x15c);
  local_74 = *(undefined4 *)(param_1 + 0x160);
  local_70 = *(undefined4 *)(param_1 + 0x164);
  uStack_6c = *(undefined4 *)(param_1 + 0x168);
  uStack_68 = *(undefined4 *)(param_1 + 0x16c);
  uStack_64 = *(undefined4 *)(param_1 + 0x170);
  uStack_60 = *(undefined4 *)(param_1 + 0x174);
  iVar9 = *(int *)(param_1 + 0x6a0);
  fVar16 = fVar3;
  if (iVar9 == iVar11) {
    lVar2 = (ulonglong)(uint)*(byte *)(param_1 + 0x6a4) * (ulonglong)DAT_001881c4;
    uVar1 = (uint)((ulonglong)lVar2 >> 0x24);
    iVar11 = -((uint)*(byte *)(param_1 + 0x6a4) + uVar1 * -0x14);
    iVar9 = iVar11 + 0x1e;
    if (0xe < iVar9) {
      iVar9 = iVar11 + 0xf;
    }
    fVar17 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = (float)FUN_003727f0(fVar17 * fVar18,iVar9,uVar1 * -5,(int)lVar2);
    fVar17 = fVar3 - fVar17 * fVar8;
  }
  else if (iVar9 == DAT_001881c8) {
    fVar18 = (float)FUN_003727f0(fVar13 * fVar18);
    fVar17 = fVar3 - fVar18 * fVar15;
    fVar16 = fVar3 - fVar18 * fVar6;
  }
  else if (iVar9 == DAT_001881d4) {
    fVar18 = (float)FUN_00372674(fVar13 * fVar17);
    fVar17 = fVar3 - fVar18 * fVar15;
    fVar16 = fVar3 - fVar18 * fVar6;
  }
  else if (iVar9 == DAT_001881d8) {
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x6a6),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar18 = (float)FUN_003727f0(fVar17 * fVar18);
    fVar18 = fVar18 * fVar4;
    fVar17 = fVar3 - fVar18;
    fVar16 = fVar3 + fVar18;
  }
  else {
    if (DAT_001881dc <= (int)fVar13) {
      fVar13 = fVar13 - fVar5;
    }
    fVar17 = (float)FUN_003727f0(fVar13 * fVar7);
    fVar17 = fVar3 - fVar17 * fVar8;
  }
  FUN_00371348(fVar16 * *pfVar12,fVar17 * *(float *)(param_1 + 0x8c0),
               fVar16 * *(float *)(param_1 + 0x8c4),&local_8c,1);
  *(undefined1 *)(*(int *)(param_1 + 0x810) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x810),&local_8c);
  FUN_00372170(*(undefined4 *)(param_1 + 0x810),0);
  iVar11 = FUN_003695f8();
  if (iVar11 == 0) {
    fVar14 = fVar3;
  }
  *(float *)(param_1 + 0x82c) = fVar14;
  FUN_00373bec(param_1 + 0x820);
  return;
}
