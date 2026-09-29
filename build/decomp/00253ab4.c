// OoT3D decomp @ 00253ab4  name=FUN_00253ab4  size=716

void FUN_00253ab4(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;

  fVar1 = DAT_00253d84;
  iVar4 = *(int *)(param_2 + 0x20ac);
  if ((*(uint *)(DAT_00253d80 + iVar4) & 0x100000) != 0) {
    return;
  }
  local_60 = *(undefined4 *)(iVar4 + 0x2340);
  *(undefined4 *)(param_1 + 0x28) = local_60;
  local_58 = *(float *)(iVar4 + 0x2348);
  *(float *)(param_1 + 0x30) = local_58;
  local_5c = *(float *)(iVar4 + 0x2344);
  fVar6 = local_5c - *(float *)(param_1 + 0x2c);
  if ((uint)fVar6 < 0xc0000001) {
    if ((int)fVar6 < 0x40000001) {
      local_5c = *(float *)(param_1 + 0x2c);
      goto LAB_00253b28;
    }
    local_5c = local_5c - fVar1;
  }
  else {
    local_5c = local_5c + fVar1;
  }
  *(float *)(param_1 + 0x2c) = local_5c;
LAB_00253b28:
  fVar6 = DAT_00253d88;
  local_34 = *(float *)(param_1 + 0x54);
  local_30 = *(float *)(param_1 + 0x58);
  local_2c = *(float *)(param_1 + 0x5c);
  local_54 = local_34 * 1.0;
  local_44 = local_34 * 0.0;
  local_34 = local_34 * 0.0;
  local_50 = local_30 * 0.0;
  local_40 = local_30 * 1.0;
  local_30 = local_30 * 0.0;
  local_4c = local_2c * 0.0;
  local_3c = local_2c * 0.0;
  local_2c = local_2c * 1.0;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fVar8 * DAT_00253d8c;
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar8 == DAT_00253d88) << 0x1e;
  local_48 = local_60;
  local_38 = local_5c;
  local_28 = local_58;
  if (!SUB41(uVar5 >> 0x1e,0)) {
    fVar7 = (float)FUN_003727f0(fVar8);
    fVar8 = (float)FUN_00372674(fVar8);
    fVar9 = local_54 * fVar7;
    local_54 = local_54 * fVar8 - local_4c * fVar7;
    local_4c = fVar9 + local_4c * fVar8;
    fVar9 = local_44 * fVar7;
    local_44 = local_44 * fVar8 - local_3c * fVar7;
    local_3c = fVar9 + local_3c * fVar8;
    fVar9 = local_34 * fVar7;
    local_34 = local_34 * fVar8 - local_2c * fVar7;
    local_2c = fVar9 + local_2c * fVar8;
  }
  iVar2 = FUN_003695f8();
  iVar4 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1bc) + 0xc);
  if (iVar2 == 0) {
    *(float *)(iVar3 + 0xc) = fVar1;
  }
  else {
    *(float *)(iVar3 + 0xc) = fVar6;
  }
  fVar1 = DAT_00253d90;
  if (0 < *(int *)(**(int **)(*(int *)(param_1 + 0x1c0) + 8) + 8)) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1bc) + 0x10);
      FUN_00333abc(iVar3,iVar4,auStack_64);
      local_58 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x1a6),(byte)(uVar5 >> 0x15) & 3);
      local_58 = local_58 * fVar1;
      FUN_00333a38(iVar3,iVar4,auStack_64);
      iVar2 = iVar4 + 1;
      *(undefined1 *)(*(int *)(iVar3 + 4) + iVar4 * 0x124) = 1;
      iVar4 = iVar2;
    } while (iVar2 < *(int *)(**(int **)(*(int *)(param_1 + 0x1c0) + 8) + 8));
  }
  *(undefined1 *)(*(int *)(param_1 + 0x1bc) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1bc),&local_54);
  iVar4 = *(int *)(param_1 + 0x1bc);
  *(undefined4 *)(iVar4 + 0x24) = local_48;
  *(float *)(iVar4 + 0x28) = local_38;
  *(float *)(iVar4 + 0x2c) = local_28;
  *(undefined1 *)(*(int *)(param_1 + 0x1bc) + 0xad) = 1;
  FUN_00372170(*(undefined4 *)(param_1 + 0x1bc),1);
  return;
}
