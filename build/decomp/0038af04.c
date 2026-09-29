// OoT3D decomp @ 0038af04  name=FUN_0038af04  size=1080

void FUN_0038af04(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;

  iVar2 = DAT_0038b2cc;
  puVar1 = DAT_0038b2c8;
  local_4c = DAT_0038b2bc;
  local_48 = DAT_0038b2c0;
  local_44 = DAT_0038b2c4;
  if (*(short *)(param_1 + 0x1c) != -1) {
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1dc),param_1 + 0x148);
    *(undefined1 *)(*(int *)(param_1 + 0x1dc) + 0xac) = 1;
    if (((*puVar1 & 1) == 0) && (iVar11 = FUN_003679b4(DAT_0038b2c8), iVar11 != 0)) {
      FUN_0036788c(DAT_0038b30c);
    }
    FUN_00330b98(iVar2,*(undefined4 *)(param_1 + 0x1dc),0);
    return;
  }
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1dc),param_1 + 0x148);
  *(undefined1 *)(*(int *)(param_1 + 0x1dc) + 0xac) = 1;
  if (((*puVar1 & 1) == 0) && (iVar11 = FUN_003679b4(puVar1), iVar11 != 0)) {
    FUN_0036788c(iVar2 + -0x180);
  }
  FUN_00330b98(iVar2,*(undefined4 *)(param_1 + 0x1dc),0);
  FUN_003735ac(&local_58,param_1 + 0x148,&local_4c);
  *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x28) = local_58;
  *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x2c) = local_54;
  *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x30) = local_50;
  local_4c = -local_4c;
  FUN_003735ac(&local_58,param_1 + 0x148,&local_4c);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x128) + 0x128) + 0x28) = local_58;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x128) + 0x128) + 0x2c) = local_54;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x128) + 0x128) + 0x30) = local_50;
  iVar11 = DAT_0038b2f0;
  fVar4 = DAT_0038b2e0;
  pfVar3 = DAT_0038b2dc;
  iVar12 = *(int *)(DAT_0038b2d8 + 0x4e8);
  if (iVar12 != 0xc) {
    if (iVar12 < 4) {
      bVar16 = *(int *)(DAT_0038b2e4 + 4) != 0;
      iVar13 = 0;
      iVar14 = 0;
      if (bVar16) {
        iVar14 = (int)*(short *)(param_1 + 0xbc);
        iVar13 = iVar14 + 0x2000;
      }
      if (iVar13 < 0 == (bVar16 && SCARRY4(iVar14,0x2000))) {
        *DAT_0038b2dc = DAT_0038b2e0;
        return;
      }
    }
    fVar17 = DAT_0038b2e8;
    if (iVar12 < 4) {
      fVar17 = (float)VectorSignedToFloat(-(*(short *)(param_1 + 0xbc) + 0x2000),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar17 = fVar17 * DAT_0038b2ec;
    }
    *DAT_0038b2dc = fVar17;
    sVar10 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(iVar11 + param_2) * 4 + 0xa54));
    uVar9 = DAT_0038b308;
    uVar8 = DAT_0038b304;
    uVar7 = DAT_0038b300;
    uVar6 = DAT_0038b2fc;
    uVar5 = DAT_0038b2f8;
    fVar17 = (float)VectorSignedToFloat((int)(short)(sVar10 + -0x8000),(byte)(in_fpscr >> 0x15) & 3)
    ;
    iVar11 = 0;
    fVar17 = fVar17 * DAT_0038b2f4;
    do {
      local_7c = uVar6;
      if (iVar11 == 0) {
        local_7c = uVar5;
      }
      local_80 = 0.0;
      local_84 = 0.0;
      local_88 = 1.0;
      local_78 = 0.0;
      local_74 = 1.0;
      local_70 = 0.0;
      local_68 = 0.0;
      local_6c = uVar7;
      local_64 = 0.0;
      local_60 = 1.0;
      local_5c = uVar8;
      if (fVar17 != fVar4) {
        fVar18 = (float)FUN_003727f0(fVar17);
        fVar19 = (float)FUN_00372674(fVar17);
        fVar20 = local_88 * fVar18;
        local_88 = local_88 * fVar19 - local_80 * fVar18;
        local_80 = fVar20 + local_80 * fVar19;
        fVar20 = local_78 * fVar18;
        local_78 = local_78 * fVar19 - local_70 * fVar18;
        local_70 = fVar20 + local_70 * fVar19;
        fVar20 = local_68 * fVar18;
        local_68 = local_68 * fVar19 - local_60 * fVar18;
        local_60 = fVar20 + local_60 * fVar19;
      }
      fVar18 = *pfVar3;
      local_88 = local_88 * fVar18;
      local_78 = local_78 * fVar18;
      local_68 = local_68 * fVar18;
      local_84 = local_84 * fVar18;
      local_74 = local_74 * fVar18;
      local_64 = local_64 * fVar18;
      local_80 = local_80 * fVar18;
      local_70 = local_70 * fVar18;
      local_60 = local_60 * fVar18;
      iVar12 = FUN_003695f8();
      iVar13 = *(int *)(param_1 + iVar11 * 0xc + 0x1e8);
      if (iVar12 == 0) {
        *(undefined4 *)(iVar13 + 0xc) = uVar9;
      }
      else {
        *(float *)(iVar13 + 0xc) = fVar4;
      }
      iVar12 = param_1 + iVar11 * 0xc;
      FUN_00373bec(*(undefined4 *)(iVar12 + 0x1e8));
      FUN_003721e0(*(undefined4 *)(iVar12 + 0x1e0),&local_88);
      *(undefined1 *)(*(int *)(iVar12 + 0x1e0) + 0xac) = 1;
      uVar15 = *(undefined4 *)(iVar12 + 0x1e0);
      if (((*puVar1 & 1) == 0) && (iVar12 = FUN_003679b4(DAT_0038b2c8), iVar12 != 0)) {
        FUN_0036788c(DAT_0038b30c);
      }
      FUN_00330b98(iVar2,uVar15,0);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 2);
  }
  return;
}
