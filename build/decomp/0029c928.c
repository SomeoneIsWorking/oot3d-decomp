// OoT3D decomp @ 0029c928  name=FUN_0029c928  size=856

void FUN_0029c928(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;

  FUN_00372224(&local_54,param_1 + 0x148);
  iVar3 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c));
  fVar9 = DAT_0029cc88;
  if ((iVar3 == 0) && (*(short *)(param_1 + 0x1a4) == -1)) {
    FUN_003695cc(DAT_0029cc84,DAT_0029cc84,DAT_0029cc84,*(undefined4 *)(param_1 + 0x218),0,4);
  }
  else {
    FUN_003695cc(DAT_0029cc80,*(undefined4 *)(param_1 + 0x218),0,4);
  }
  fVar11 = DAT_0029cc8c;
  local_48 = *(undefined4 *)(param_1 + 0x28);
  local_38 = *(undefined4 *)(param_1 + 0x2c);
  local_28 = *(undefined4 *)(param_1 + 0x30);
  local_4c = 0.0;
  local_50 = 0.0;
  local_54 = 1.0;
  local_44 = 0.0;
  local_40 = 1.0;
  local_30 = 0.0;
  local_2c = 1.0;
  local_3c = 0.0;
  local_34 = 0.0;
  sVar1 = *(short *)(param_1 + 0x34);
  sVar2 = *(short *)(param_1 + 0x36);
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_0029cc8c;
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == fVar9) << 0x1e;
  if (!SUB41(uVar4 >> 0x1e,0)) {
    fVar6 = (float)FUN_003727f0(fVar5);
    fVar7 = (float)FUN_00372674(fVar5);
    fVar5 = local_50 * fVar6;
    local_50 = local_50 * fVar7 - local_54 * fVar6;
    fVar8 = local_40 * fVar6;
    local_40 = local_40 * fVar7 - local_44 * fVar6;
    fVar10 = local_30 * fVar6;
    local_30 = local_30 * fVar7 - local_34 * fVar6;
    local_54 = local_54 * fVar7 + fVar5;
    local_44 = local_44 * fVar7 + fVar8;
    local_34 = local_34 * fVar7 + fVar10;
  }
  if (sVar2 != 0) {
    fVar5 = (float)VectorSignedToFloat((int)sVar2,(byte)(uVar4 >> 0x15) & 3);
    fVar5 = fVar5 * fVar11;
    uVar4 = uVar4 & 0xfffffff | (uint)(fVar5 == fVar9) << 0x1e;
    if (!SUB41(uVar4 >> 0x1e,0)) {
      fVar8 = (float)FUN_003727f0(fVar5);
      fVar5 = (float)FUN_00372674(fVar5);
      fVar10 = local_54 * fVar8;
      local_54 = local_54 * fVar5 - local_4c * fVar8;
      local_4c = fVar10 + local_4c * fVar5;
      fVar10 = local_44 * fVar8;
      local_44 = local_44 * fVar5 - local_3c * fVar8;
      local_3c = fVar10 + local_3c * fVar5;
      fVar10 = local_34 * fVar8;
      local_34 = local_34 * fVar5 - local_2c * fVar8;
      local_2c = fVar10 + local_2c * fVar5;
    }
  }
  if (sVar1 != 0) {
    fVar5 = (float)VectorSignedToFloat((int)sVar1,(byte)(uVar4 >> 0x15) & 3);
    fVar5 = fVar5 * fVar11;
    if (fVar5 != fVar9) {
      fVar8 = (float)FUN_003727f0(fVar5);
      fVar10 = (float)FUN_00372674(fVar5);
      fVar9 = local_4c * fVar8;
      local_4c = local_4c * fVar10 - local_50 * fVar8;
      fVar11 = local_3c * fVar8;
      local_3c = local_3c * fVar10 - local_40 * fVar8;
      fVar5 = local_2c * fVar8;
      local_2c = local_2c * fVar10 - local_30 * fVar8;
      local_50 = local_50 * fVar10 + fVar9;
      local_40 = local_40 * fVar10 + fVar11;
      local_30 = local_30 * fVar10 + fVar5;
    }
  }
  fVar9 = *(float *)(param_1 + 0x54);
  fVar11 = *(float *)(param_1 + 0x58);
  fVar5 = *(float *)(param_1 + 0x5c);
  local_54 = local_54 * fVar9;
  local_44 = local_44 * fVar9;
  local_34 = local_34 * fVar9;
  local_50 = local_50 * fVar11;
  local_40 = local_40 * fVar11;
  local_30 = local_30 * fVar11;
  local_4c = local_4c * fVar5;
  local_3c = local_3c * fVar5;
  local_2c = local_2c * fVar5;
  if (*(int *)(param_1 + 0x218) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x218) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x218),&local_54);
    FUN_00372170(*(undefined4 *)(param_1 + 0x218),0);
  }
  return;
}
