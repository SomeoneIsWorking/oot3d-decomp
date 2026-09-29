// OoT3D decomp @ 0031f38c  name=FUN_0031f38c  size=532

void FUN_0031f38c(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;

  sVar3 = *(short *)(param_1 + 0x1c4);
  sVar4 = *(short *)(param_1 + 0x1c6);
  sVar5 = *(short *)(param_1 + 0x1c8);
  FUN_00372224(&local_54,param_1 + 0x148);
  fVar2 = DAT_0031f5a4;
  fVar1 = DAT_0031f5a0;
  fVar7 = (float)VectorSignedToFloat((int)sVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 * DAT_0031f5a0;
  uVar6 = in_fpscr & 0xfffffff | (uint)(fVar7 == DAT_0031f5a4) << 0x1e;
  if (!SUB41(uVar6 >> 0x1e,0)) {
    fVar8 = (float)FUN_003727f0(fVar7);
    fVar9 = (float)FUN_00372674(fVar7);
    fVar7 = local_50 * fVar8;
    local_50 = local_50 * fVar9 - local_54 * fVar8;
    fVar10 = local_40 * fVar8;
    local_40 = local_40 * fVar9 - local_44 * fVar8;
    fVar11 = local_30 * fVar8;
    local_30 = local_30 * fVar9 - local_34 * fVar8;
    local_54 = local_54 * fVar9 + fVar7;
    local_44 = local_44 * fVar9 + fVar10;
    local_34 = local_34 * fVar9 + fVar11;
  }
  if (sVar4 != 0) {
    fVar7 = (float)VectorSignedToFloat((int)sVar4,(byte)(uVar6 >> 0x15) & 3);
    fVar7 = fVar7 * fVar1;
    uVar6 = uVar6 & 0xfffffff | (uint)(fVar7 == fVar2) << 0x1e;
    if (!SUB41(uVar6 >> 0x1e,0)) {
      fVar10 = (float)FUN_003727f0(fVar7);
      fVar7 = (float)FUN_00372674(fVar7);
      fVar11 = local_54 * fVar10;
      local_54 = local_54 * fVar7 - local_4c * fVar10;
      local_4c = fVar11 + local_4c * fVar7;
      fVar11 = local_44 * fVar10;
      local_44 = local_44 * fVar7 - local_3c * fVar10;
      local_3c = fVar11 + local_3c * fVar7;
      fVar11 = local_34 * fVar10;
      local_34 = local_34 * fVar7 - local_2c * fVar10;
      local_2c = fVar11 + local_2c * fVar7;
    }
  }
  if (sVar3 != 0) {
    fVar7 = (float)VectorSignedToFloat((int)sVar3,(byte)(uVar6 >> 0x15) & 3);
    fVar7 = fVar7 * fVar1;
    if (fVar7 != fVar2) {
      fVar10 = (float)FUN_003727f0(fVar7);
      fVar11 = (float)FUN_00372674(fVar7);
      fVar1 = local_4c * fVar10;
      local_4c = local_4c * fVar11 - local_50 * fVar10;
      fVar2 = local_3c * fVar10;
      local_3c = local_3c * fVar11 - local_40 * fVar10;
      fVar7 = local_2c * fVar10;
      local_2c = local_2c * fVar11 - local_30 * fVar10;
      local_50 = local_50 * fVar11 + fVar1;
      local_40 = local_40 * fVar11 + fVar2;
      local_30 = local_30 * fVar11 + fVar7;
    }
  }
  *(undefined1 *)(param_3 + 0xac) = 1;
  FUN_003721e0(param_3,&local_54);
  FUN_00372170(param_3,0);
  return;
}
