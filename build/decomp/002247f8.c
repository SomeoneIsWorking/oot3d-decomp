// OoT3D decomp @ 002247f8  name=FUN_002247f8  size=796

void FUN_002247f8(int param_1)

{
  float fVar1;
  short sVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;

  FUN_00372224(&local_58,param_1 + 0x148);
  fVar4 = DAT_00224b1c;
  fVar1 = DAT_00224b18;
  piVar3 = DAT_00224b14;
  fVar7 = *(float *)(param_1 + 0x1d0);
  fVar10 = *(float *)(param_1 + 0x1d4);
  fVar11 = *(float *)(param_1 + 0x1d8);
  local_58 = local_58 * fVar7;
  local_48 = local_48 * fVar7;
  local_38 = local_38 * fVar7;
  local_54 = local_54 * fVar10;
  local_44 = local_44 * fVar10;
  local_34 = local_34 * fVar10;
  local_50 = local_50 * fVar11;
  local_40 = local_40 * fVar11;
  local_30 = local_30 * fVar11;
  sVar2 = *(short *)(param_1 + 0x1c0);
  iVar5 = (int)(short)(*(short *)(*DAT_00224b14 + 0x1474) + 0x4000);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00224b14 + 0x1478),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 * DAT_00224b18;
  uVar6 = in_fpscr & 0xfffffff | (uint)(fVar7 == DAT_00224b1c) << 0x1e;
  if (!SUB41(uVar6 >> 0x1e,0)) {
    fVar8 = (float)FUN_003727f0(fVar7);
    fVar9 = (float)FUN_00372674(fVar7);
    fVar7 = local_54 * fVar8;
    local_54 = local_54 * fVar9 - local_58 * fVar8;
    fVar10 = local_44 * fVar8;
    local_44 = local_44 * fVar9 - local_48 * fVar8;
    fVar11 = local_34 * fVar8;
    local_34 = local_34 * fVar9 - local_38 * fVar8;
    local_58 = local_58 * fVar9 + fVar7;
    local_48 = local_48 * fVar9 + fVar10;
    local_38 = local_38 * fVar9 + fVar11;
  }
  if (sVar2 != 0) {
    fVar7 = (float)VectorSignedToFloat((int)sVar2,(byte)(uVar6 >> 0x15) & 3);
    fVar7 = fVar7 * fVar1;
    uVar6 = uVar6 & 0xfffffff | (uint)(fVar7 == fVar4) << 0x1e;
    if (!SUB41(uVar6 >> 0x1e,0)) {
      fVar10 = (float)FUN_003727f0(fVar7);
      fVar7 = (float)FUN_00372674(fVar7);
      fVar11 = local_58 * fVar10;
      local_58 = local_58 * fVar7 - local_50 * fVar10;
      local_50 = fVar11 + local_50 * fVar7;
      fVar11 = local_48 * fVar10;
      local_48 = local_48 * fVar7 - local_40 * fVar10;
      local_40 = fVar11 + local_40 * fVar7;
      fVar11 = local_38 * fVar10;
      local_38 = local_38 * fVar7 - local_30 * fVar10;
      local_30 = fVar11 + local_30 * fVar7;
    }
  }
  if (iVar5 != 0) {
    fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
    fVar7 = fVar7 * fVar1;
    uVar6 = uVar6 & 0xfffffff | (uint)(fVar7 == fVar4) << 0x1e;
    if (!SUB41(uVar6 >> 0x1e,0)) {
      fVar11 = (float)FUN_003727f0(fVar7);
      fVar8 = (float)FUN_00372674(fVar7);
      fVar1 = local_50 * fVar11;
      local_50 = local_50 * fVar8 - local_54 * fVar11;
      fVar7 = local_40 * fVar11;
      local_40 = local_40 * fVar8 - local_44 * fVar11;
      fVar10 = local_30 * fVar11;
      local_30 = local_30 * fVar8 - local_34 * fVar11;
      local_54 = local_54 * fVar8 + fVar1;
      local_44 = local_44 * fVar8 + fVar7;
      local_34 = local_34 * fVar8 + fVar10;
    }
  }
  iVar5 = *piVar3;
  local_64 = VectorSignedToFloat((int)*(short *)(iVar5 + 0x1480),(byte)(uVar6 >> 0x15) & 3);
  local_5c = VectorSignedToFloat((int)*(short *)(iVar5 + 0x1484),(byte)(uVar6 >> 0x15) & 3);
  local_60 = VectorSignedToFloat((int)*(short *)(iVar5 + 0x1482),(byte)(uVar6 >> 0x15) & 3);
  FUN_00372070(&local_58,&local_58,&local_64);
  fVar1 = DAT_00224b20;
  iVar5 = FUN_003695f8();
  if (iVar5 != 0) {
    fVar1 = fVar4;
  }
  *(float *)(*(int *)(param_1 + 0x1e0) + 0xc) = fVar1;
  FUN_00373bec(*(undefined4 *)(param_1 + 0x1e0));
  if (*(int *)(param_1 + 0x1dc) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1dc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1dc),&local_58);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1dc),0);
  }
  return;
}
