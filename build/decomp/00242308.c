// OoT3D decomp @ 00242308  name=FUN_00242308  size=1796

void FUN_00242308(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  undefined1 auStack_84 [48];

  FUN_00354570();
  local_94 = 0.0;
  FUN_0035e240(param_1 + 0x1a8,param_1 + 0x148,DAT_00242674,DAT_00242670,param_1);
  fVar1 = DAT_00242678;
  *(undefined4 *)(param_1 + 0xc20) = *(undefined4 *)(param_1 + 0xc2c);
  *(float *)(param_1 + 0xc24) = *(float *)(param_1 + 0xc30) + fVar1;
  *(undefined4 *)(param_1 + 0xc28) = *(undefined4 *)(param_1 + 0xc34);
  FUN_001e1ef8(param_1,param_2);
  iVar9 = DAT_0024267c;
  uVar13 = *(undefined4 *)(param_1 + 0x2c);
  uVar14 = *(undefined4 *)(param_1 + 0x30);
  iVar10 = *(int *)(DAT_0024267c + 0x44);
  *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar10 + 0x2c) = uVar13;
  *(undefined4 *)(iVar10 + 0x30) = uVar14;
  iVar10 = *(int *)(iVar9 + 0x44);
  uVar13 = *(undefined4 *)(param_1 + 0xb4c);
  uVar14 = *(undefined4 *)(param_1 + 0xb50);
  *(undefined4 *)(iVar10 + 0x172c) = *(undefined4 *)(param_1 + 0xb48);
  *(undefined4 *)(iVar10 + 0x1730) = uVar13;
  *(undefined4 *)(iVar10 + 0x1734) = uVar14;
  iVar10 = *(int *)(iVar9 + 0x44);
  uVar13 = *(undefined4 *)(param_1 + 0xb58);
  uVar14 = *(undefined4 *)(param_1 + 0xb5c);
  *(undefined4 *)(iVar10 + 0x1738) = *(undefined4 *)(param_1 + 0xb54);
  *(undefined4 *)(iVar10 + 0x173c) = uVar13;
  *(undefined4 *)(iVar10 + 0x1740) = uVar14;
  iVar10 = *(int *)(iVar9 + 0x44);
  uVar13 = *(undefined4 *)(param_1 + 0xb64);
  uVar14 = *(undefined4 *)(param_1 + 0xb68);
  *(undefined4 *)(iVar10 + 0x1744) = *(undefined4 *)(param_1 + 0xb60);
  *(undefined4 *)(iVar10 + 0x1748) = uVar13;
  *(undefined4 *)(iVar10 + 0x174c) = uVar14;
  iVar9 = *(int *)(iVar9 + 0x44);
  uVar13 = *(undefined4 *)(param_1 + 0xb70);
  uVar14 = *(undefined4 *)(param_1 + 0xb74);
  *(undefined4 *)(iVar9 + 0x1750) = *(undefined4 *)(param_1 + 0xb6c);
  *(undefined4 *)(iVar9 + 0x1754) = uVar13;
  *(undefined4 *)(iVar9 + 0x1758) = uVar14;
  FUN_001938e4(param_1,param_2);
  fVar2 = DAT_00242684;
  fVar1 = DAT_00242680;
  if (DAT_00242680 < *(float *)(param_1 + 0xb88)) {
    FUN_003713fc(*(undefined4 *)(param_1 + 0xb94),*(undefined4 *)(param_1 + 0xb98),
                 *(undefined4 *)(param_1 + 0xb9c),auStack_84,0);
    FUN_00371fac(auStack_84,param_2 + 0x2fc);
    uVar13 = *(undefined4 *)(param_1 + 0xb88);
    FUN_00371348(uVar13,uVar13,uVar13,auStack_84,1);
    FUN_00371234(*(undefined4 *)(param_1 + 0xb8c),auStack_84,1);
    *(undefined1 *)(*(int *)(param_1 + 0x4f0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x4f0),auStack_84);
    FUN_00372170(*(undefined4 *)(param_1 + 0x4f0),0);
    FUN_003713fc(*(undefined4 *)(param_1 + 0xb94),auStack_84,0);
    fVar16 = *(float *)(param_1 + 0xb88) * DAT_00242688;
    FUN_00371348(fVar16,fVar2,fVar16,auStack_84,1);
    *(undefined1 *)(*(int *)(param_1 + 0x5dc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x5dc),auStack_84);
    FUN_00372170(*(undefined4 *)(param_1 + 0x5dc),0);
  }
  FUN_0016dc98(param_1,param_2);
  fVar7 = DAT_002426b0;
  fVar6 = DAT_002426ac;
  fVar19 = DAT_002426a8;
  uVar5 = DAT_002426a4;
  uVar4 = DAT_002426a0;
  uVar14 = DAT_0024269c;
  uVar13 = DAT_00242698;
  fVar3 = DAT_00242694;
  fVar18 = DAT_00242690;
  fVar16 = DAT_0024268c;
  puVar15 = (undefined4 *)(param_1 + 0xc0c);
  if (fVar1 < *(float *)(param_1 + 0xb04)) {
    FUN_003695cc(fVar2,*(float *)(param_1 + 0xb08) * DAT_002426b0,fVar2,
                 *(float *)(param_1 + 0xb04) * DAT_002426b0,*(undefined4 *)(param_1 + 0x5e4),0,4);
    FUN_003695cc(fVar2,fVar2,*(float *)(param_1 + 0xb20) * fVar7,fVar2,
                 *(undefined4 *)(param_1 + 0x5e4),0,0);
    fVar17 = DAT_002426b4;
    if (*(short *)(param_1 + 0xada) == 0) {
      iVar9 = *(int *)(param_2 + 0x20ac);
      uVar11 = *(undefined4 *)(iVar9 + 0x23c8);
      uVar12 = *(undefined4 *)(iVar9 + 0x23cc);
      *puVar15 = *(undefined4 *)(iVar9 + 0x23c4);
      *(undefined4 *)(param_1 + 0xc10) = uVar11;
      *(undefined4 *)(param_1 + 0xc14) = uVar12;
      *(float *)(param_1 + 0xc0c) = *(float *)(param_1 + 0xc0c) + fVar16;
      *(float *)(param_1 + 0xc10) = *(float *)(param_1 + 0xc10) + fVar3;
      fVar17 = *(float *)(param_1 + 0xc14) + fVar18;
LAB_0024261c:
      *(float *)(param_1 + 0xc14) = fVar17;
    }
    else if (*(short *)(param_1 + 0xada) == 1) {
      iVar9 = *(int *)(DAT_0024267c + 0x4c);
      uVar11 = *(undefined4 *)(iVar9 + 0x1034);
      uVar12 = *(undefined4 *)(iVar9 + 0x1038);
      *puVar15 = *(undefined4 *)(iVar9 + 0x1030);
      *(undefined4 *)(param_1 + 0xc10) = uVar11;
      *(undefined4 *)(param_1 + 0xc14) = uVar12;
      fVar8 = DAT_002426b8;
      *(float *)(param_1 + 0xc0c) = *(float *)(param_1 + 0xc0c) + fVar17;
      *(float *)(param_1 + 0xc10) = *(float *)(param_1 + 0xc10) + fVar8;
      fVar17 = *(float *)(param_1 + 0xc14) + fVar3;
      goto LAB_0024261c;
    }
    FUN_003713fc(*(undefined4 *)(param_1 + 0xc0c),*(undefined4 *)(param_1 + 0xc10),
                 *(undefined4 *)(param_1 + 0xc14),auStack_84,0);
    if (*(short *)(param_1 + 0xada) == 0) {
      FUN_00369014(uVar13,auStack_84,1);
      FUN_00371234(fVar6,auStack_84,1);
    }
    else if (*(short *)(param_1 + 0xada) == 1) {
      FUN_003735e8(uVar14,auStack_84,1);
      FUN_00369014(uVar4,auStack_84,1);
      FUN_00371234(uVar5,auStack_84,1);
    }
    else {
      FUN_00371fac(auStack_84,param_2 + 0x2fc);
    }
    fVar17 = *(float *)(param_1 + 0xb0c) * fVar19;
    FUN_00371348(fVar17,fVar17,fVar2,auStack_84,1);
    *(undefined1 *)(*(int *)(param_1 + 0x5e4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x5e4),auStack_84);
    FUN_00372170(*(undefined4 *)(param_1 + 0x5e4),0);
  }
  if (*(float *)(param_1 + 0xb18) <= fVar1) goto LAB_00242964;
  FUN_003695cc(fVar1,fVar1,fVar1,*(float *)(param_1 + 0xb18) * fVar7,
               *(undefined4 *)(param_1 + 0x5e8),0,0);
  fVar17 = DAT_00242a58;
  if (*(short *)(param_1 + 0xada) == 0) {
    iVar9 = *(int *)(param_2 + 0x20ac);
    uVar11 = *(undefined4 *)(iVar9 + 0x23c8);
    uVar12 = *(undefined4 *)(iVar9 + 0x23cc);
    *puVar15 = *(undefined4 *)(iVar9 + 0x23c4);
    *(undefined4 *)(param_1 + 0xc10) = uVar11;
    *(undefined4 *)(param_1 + 0xc14) = uVar12;
    *(float *)(param_1 + 0xc0c) = *(float *)(param_1 + 0xc0c) + fVar16;
    *(float *)(param_1 + 0xc10) = *(float *)(param_1 + 0xc10) + fVar3;
    fVar18 = *(float *)(param_1 + 0xc14) + fVar18;
LAB_002427f8:
    *(float *)(param_1 + 0xc14) = fVar18;
  }
  else if (*(short *)(param_1 + 0xada) == 1) {
    iVar9 = *(int *)(DAT_0024267c + 0x4c);
    uVar11 = *(undefined4 *)(iVar9 + 0x1034);
    uVar12 = *(undefined4 *)(iVar9 + 0x1038);
    *puVar15 = *(undefined4 *)(iVar9 + 0x1030);
    *(undefined4 *)(param_1 + 0xc10) = uVar11;
    *(undefined4 *)(param_1 + 0xc14) = uVar12;
    *(float *)(param_1 + 0xc10) = *(float *)(param_1 + 0xc10) + fVar17;
    fVar18 = *(float *)(param_1 + 0xc14) + fVar6;
    goto LAB_002427f8;
  }
  FUN_003713fc(*(undefined4 *)(param_1 + 0xc0c),*(undefined4 *)(param_1 + 0xc10),
               *(undefined4 *)(param_1 + 0xc14),auStack_84,0);
  if (*(short *)(param_1 + 0xada) == 0) {
    FUN_00369014(uVar13,auStack_84,1);
    FUN_00371234(fVar6,auStack_84,1);
  }
  else if (*(short *)(param_1 + 0xada) == 1) {
    FUN_003735e8(uVar14,auStack_84,1);
    FUN_00369014(uVar4,auStack_84,1);
    FUN_00371234(uVar5,auStack_84,1);
  }
  else {
    FUN_00371fac(auStack_84,param_2 + 0x2fc);
  }
  fVar19 = *(float *)(param_1 + 0xb1c) * fVar19;
  FUN_00371348(fVar19,fVar19,fVar2,auStack_84,1);
  *(undefined1 *)(*(int *)(param_1 + 0x5e8) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x5e8),auStack_84);
  FUN_00372170(*(undefined4 *)(param_1 + 0x5e8),0);
  local_94 = fVar2;
  local_90 = fVar2;
  fVar16 = (DAT_00242a5c - *(float *)(param_1 + 0xb18)) * fVar7;
  local_88 = fVar2 - fVar16 * fVar16;
  local_8c = DAT_00242a60;
  if (((*DAT_00242a64 & 1) == 0) && (iVar9 = FUN_003679b4(DAT_00242a64), iVar9 != 0)) {
    FUN_0036788c(DAT_00242a68);
  }
  FUN_003339e8(DAT_00242a74,4,&local_94,0);
LAB_00242964:
  if (fVar1 < *(float *)(param_1 + 0xb10)) {
    FUN_003695cc(fVar2,fVar2,fVar2,*(float *)(param_1 + 0xb10) * fVar7,
                 *(undefined4 *)(param_1 + 0x59c),0,0,2);
    uVar13 = DAT_00242a78;
    if (*(short *)(param_1 + 0x1000) == 0x15) {
      FUN_003713fc(DAT_00242a8c,DAT_00242a88,DAT_00242a84,auStack_84,0);
      FUN_003735e8(DAT_00242a90,auStack_84,1);
      FUN_00369014(uVar13,auStack_84,1);
    }
    else {
      FUN_003713fc(fVar1,DAT_00242a80,DAT_00242a7c,auStack_84,0);
      FUN_00369014(uVar13,auStack_84,1);
    }
    uVar13 = *(undefined4 *)(param_1 + 0xb14);
    FUN_00371348(uVar13,uVar13,uVar13,auStack_84,1);
    *(undefined1 *)(*(int *)(param_1 + 0x59c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x59c),auStack_84);
    FUN_00372170(*(undefined4 *)(param_1 + 0x59c),0);
  }
  return;
}
