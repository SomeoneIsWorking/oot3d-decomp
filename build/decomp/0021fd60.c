// OoT3D decomp @ 0021fd60  name=FUN_0021fd60  size=1304

void FUN_0021fd60(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [12];

  fVar12 = DAT_00220154;
  iVar3 = DAT_00220150;
  if (((*(uint *)(DAT_00220150 + 0x20) & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_00220150 + 0x20), pfVar1 = DAT_00220158, iVar2 != 0)) {
    *DAT_00220158 = fVar12;
    pfVar1[1] = fVar12;
    pfVar1[2] = fVar12;
  }
  fVar7 = DAT_0022015c;
  if (((*(uint *)(iVar3 + 0x1c) & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_00220160), pfVar1 = DAT_00220164, iVar2 != 0)) {
    *DAT_00220164 = fVar12;
    pfVar1[1] = fVar12;
    pfVar1[2] = fVar7;
  }
  fVar10 = DAT_00220168;
  if (((*(uint *)(iVar3 + 0x18) & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_0022016c), pfVar1 = DAT_00220170, iVar2 != 0)) {
    *DAT_00220170 = fVar12;
    pfVar1[1] = fVar7;
    pfVar1[2] = fVar10;
  }
  fVar13 = DAT_00220174;
  if (((*(uint *)(iVar3 + 0x14) & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_00220178), pfVar1 = DAT_0022017c, iVar2 != 0)) {
    *DAT_0022017c = fVar12;
    pfVar1[1] = fVar13;
    pfVar1[2] = fVar10;
  }
  fVar10 = DAT_00220180;
  if (((*(uint *)(iVar3 + 0x10) & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_00220184), pfVar1 = DAT_00220188, iVar2 != 0)) {
    *DAT_00220188 = fVar12;
    pfVar1[1] = fVar7;
    pfVar1[2] = fVar10;
  }
  if (((*(uint *)(iVar3 + 0xc) & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_0022018c), pfVar1 = DAT_00220190, iVar3 != 0)) {
    *DAT_00220190 = fVar12;
    pfVar1[1] = fVar13;
    pfVar1[2] = fVar10;
  }
  iVar3 = *(int *)(DAT_00220194 + param_2);
  if (*(int *)(iVar3 + 0x140) != 0) {
    uVar4 = iVar3 + 0x1000;
    uVar5 = *(uint *)(iVar3 + 0x1714);
    bVar6 = (uVar5 & 0x20000000) == 0;
    if (bVar6) {
      uVar5 = (uint)*(byte *)(iVar3 + 0x1b5);
    }
    if (bVar6 && uVar5 == 0xf) {
      bVar6 = (*(uint *)(DAT_00220198 + iVar3) & 2) != 0;
      if (bVar6) {
        uVar4 = (uint)*(byte *)(iVar3 + 0x1749);
      }
      if (!bVar6 || uVar4 == 2) {
        if ((*(int *)(param_1 + 0x284) == DAT_0022019c) && (0 < *(short *)(param_1 + 0x280))) {
          FUN_003735ac(param_1 + 600,param_1 + 0x148,DAT_00220164);
          FUN_003735ac(auStack_40,param_1 + 0x148,DAT_00220188);
          FUN_003735ac(auStack_4c,param_1 + 0x148,DAT_00220190);
        }
        else {
          FUN_003735ac(param_1 + 600,param_1 + 0x148,DAT_00220158);
          FUN_003735ac(auStack_40,param_1 + 0x148,DAT_00220170);
          FUN_003735ac(auStack_4c,param_1 + 0x148,DAT_0022017c);
          *(undefined4 *)(param_1 + 0x224) = 0;
        }
        FUN_0033a480(param_2,param_1 + 0x1a4,param_1 + 0x224,auStack_40,auStack_4c);
        *(undefined1 *)(*(int *)(param_1 + 0x28c) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x28c),param_1 + 0x148);
        FUN_00372170(*(undefined4 *)(param_1 + 0x28c),0);
        local_70 = *(undefined4 *)(param_1 + 0x28);
        local_60 = *(undefined4 *)(param_1 + 0x2c);
        local_50 = *(undefined4 *)(param_1 + 0x30);
        local_74 = 0.0;
        local_78 = 0.0;
        local_7c = 1.0;
        local_6c = 0.0;
        local_68 = 1.0;
        local_58 = 0.0;
        local_54 = 1.0;
        local_64 = 0.0;
        local_5c = 0.0;
        fVar7 = *(float *)(iVar3 + 0x1240) - *(float *)(param_1 + 0x28);
        fVar13 = *(float *)(iVar3 + 0x1244) - *(float *)(param_1 + 0x2c);
        fVar10 = *(float *)(iVar3 + 0x1248) - *(float *)(param_1 + 0x30);
        fVar10 = fVar7 * fVar7 + fVar10 * fVar10;
        fVar7 = (float)FUN_003696ec();
        if (fVar7 != fVar12) {
          fVar8 = (float)FUN_003727f0(fVar7);
          fVar7 = (float)FUN_00372674(fVar7);
          fVar11 = local_7c * fVar8;
          local_7c = local_7c * fVar7 - local_74 * fVar8;
          local_74 = fVar11 + local_74 * fVar7;
          fVar11 = local_6c * fVar8;
          local_6c = local_6c * fVar7 - local_64 * fVar8;
          local_64 = fVar11 + local_64 * fVar7;
          fVar11 = local_5c * fVar8;
          local_5c = local_5c * fVar7 - local_54 * fVar8;
          local_54 = fVar11 + local_54 * fVar7;
        }
        fVar7 = (float)FUN_003696ec(-fVar13,SQRT(fVar10));
        if (fVar7 != fVar12) {
          fVar11 = (float)FUN_003727f0(fVar7);
          fVar9 = (float)FUN_00372674(fVar7);
          fVar12 = local_74 * fVar11;
          local_74 = local_74 * fVar9 - local_78 * fVar11;
          fVar7 = local_64 * fVar11;
          local_64 = local_64 * fVar9 - local_68 * fVar11;
          fVar8 = local_54 * fVar11;
          local_54 = local_54 * fVar9 - local_58 * fVar11;
          local_78 = local_78 * fVar9 + fVar12;
          local_68 = local_68 * fVar9 + fVar7;
          local_58 = local_58 * fVar9 + fVar8;
        }
        fVar12 = SQRT(fVar10 + fVar13 * fVar13) * DAT_002202cc;
        local_7c = local_7c * DAT_002202c8;
        local_6c = local_6c * DAT_002202c8;
        local_5c = local_5c * DAT_002202c8;
        local_78 = local_78 * DAT_002202c8;
        local_68 = local_68 * DAT_002202c8;
        local_58 = local_58 * DAT_002202c8;
        local_74 = local_74 * fVar12;
        local_64 = local_64 * fVar12;
        local_54 = local_54 * fVar12;
        *(undefined1 *)(*(int *)(param_1 + 0x290) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(param_1 + 0x290),&local_7c);
        FUN_00372170(*(undefined4 *)(param_1 + 0x290),0);
      }
    }
  }
  return;
}
