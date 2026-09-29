// OoT3D decomp @ 0028b8ac  name=FUN_0028b8ac  size=828

void FUN_0028b8ac(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined1 auStack_64 [48];

  FUN_00372224(auStack_64,param_1 + 0x148);
  FUN_00357750(0,param_1 + 0x1c0,auStack_64);
  FUN_00357fd0(*(undefined4 *)(DAT_0028bbe8 + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  if (*(int *)(param_1 + 0x1bc) == DAT_0028bbec) {
    FUN_00372224(&local_94,param_1 + 0x148);
    fVar5 = DAT_0028bc00;
    fVar4 = DAT_0028bbfc;
    fVar3 = DAT_0028bbf8;
    fVar2 = DAT_0028bbf4;
    iVar1 = DAT_0028bbf0;
    iVar8 = 0;
    do {
      iVar6 = param_1 + iVar8 * 0x1c;
      pfVar7 = (float *)(iVar1 + iVar8 * 0x18);
      local_a0 = *pfVar7 + *(float *)(iVar6 + 0x238);
      local_9c = pfVar7[1] + *(float *)(iVar6 + 0x23c);
      local_98 = pfVar7[2] + *(float *)(iVar6 + 0x240);
      local_8c = 0.0;
      local_90 = 0.0;
      local_94 = 1.0;
      local_84 = 0.0;
      local_80 = 1.0;
      local_70 = 0.0;
      local_6c = 1.0;
      local_7c = 0.0;
      local_74 = 0.0;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x252),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * fVar3;
      uVar9 = in_fpscr & 0xfffffff | (uint)(fVar10 == fVar2) << 0x1e;
      local_88 = local_a0;
      local_78 = local_9c;
      local_68 = local_98;
      if (!SUB41(uVar9 >> 0x1e,0)) {
        fVar11 = (float)FUN_003727f0(fVar10);
        fVar10 = (float)FUN_00372674(fVar10);
        fVar14 = local_94 * fVar11;
        local_94 = local_94 * fVar10 - local_8c * fVar11;
        local_8c = fVar14 + local_8c * fVar10;
        fVar14 = local_84 * fVar11;
        local_84 = local_84 * fVar10 - local_7c * fVar11;
        local_7c = fVar14 + local_7c * fVar10;
        fVar14 = local_74 * fVar11;
        local_74 = local_74 * fVar10 - local_6c * fVar11;
        local_6c = fVar14 + local_6c * fVar10;
      }
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x250),(byte)(uVar9 >> 0x15) & 3);
      fVar10 = fVar10 * fVar3;
      in_fpscr = uVar9 & 0xfffffff | (uint)(fVar10 == fVar2) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar12 = (float)FUN_003727f0(fVar10);
        fVar13 = (float)FUN_00372674(fVar10);
        fVar10 = local_8c * fVar12;
        local_8c = local_8c * fVar13 - local_90 * fVar12;
        fVar11 = local_7c * fVar12;
        local_7c = local_7c * fVar13 - local_80 * fVar12;
        fVar14 = local_6c * fVar12;
        local_6c = local_6c * fVar13 - local_70 * fVar12;
        local_90 = local_90 * fVar13 + fVar10;
        local_80 = local_80 * fVar13 + fVar11;
        local_70 = local_70 * fVar13 + fVar14;
      }
      local_94 = local_94 * fVar4;
      local_84 = local_84 * fVar4;
      local_74 = local_74 * fVar4;
      local_90 = local_90 * fVar4;
      local_80 = local_80 * fVar4;
      local_70 = local_70 * fVar4;
      local_8c = local_8c * fVar4;
      local_7c = local_7c * fVar4;
      local_6c = local_6c * fVar4;
      local_ac = *pfVar7 * fVar5;
      local_a4 = pfVar7[2] * fVar5;
      local_a8 = pfVar7[1] * fVar5;
      FUN_00372070(&local_94,&local_94,&local_ac);
      iVar6 = param_1 + iVar8 * 4;
      if (*(int *)(iVar6 + 0x3a8) != 0) {
        *(undefined1 *)(*(int *)(iVar6 + 0x3a8) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar6 + 0x3a8),&local_94);
        FUN_00372170(*(undefined4 *)(iVar6 + 0x3a8),0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0xd);
  }
  else {
    FUN_00372224(&local_94,param_1 + 0x148);
    if (*(int *)(param_1 + 0x3a4) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x3a4) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x3a4),&local_94);
      FUN_00372170(*(undefined4 *)(param_1 + 0x3a4),0);
      return;
    }
  }
  return;
}
