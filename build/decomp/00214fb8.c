// OoT3D decomp @ 00214fb8  name=FUN_00214fb8  size=804

void FUN_00214fb8(int param_1)

{
  uint in_fpscr;
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;

  FUN_00372224(&local_4c,param_1 + 0x148);
  fVar8 = DAT_002152e4;
  fVar6 = DAT_002152e0;
  local_58 = *(float *)(param_1 + 0x28);
  local_54 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x58) * DAT_002152dc;
  local_50 = *(float *)(param_1 + 0x30);
  local_44 = 0.0;
  local_48 = 0.0;
  local_4c = 1.0;
  local_3c = 0.0;
  local_38 = 1.0;
  local_28 = 0.0;
  local_24 = 1.0;
  local_34 = 0.0;
  local_2c = 0.0;
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = fVar2 * DAT_002152e4;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar2 == DAT_002152e0) << 0x1e;
  local_40 = local_58;
  local_30 = local_54;
  local_20 = local_50;
  if (!SUB41(uVar1 >> 0x1e,0)) {
    fVar3 = (float)FUN_003727f0(fVar2);
    fVar2 = (float)FUN_00372674(fVar2);
    fVar7 = local_4c * fVar3;
    local_4c = local_4c * fVar2 - local_44 * fVar3;
    local_44 = fVar7 + local_44 * fVar2;
    fVar7 = local_3c * fVar3;
    local_3c = local_3c * fVar2 - local_34 * fVar3;
    local_34 = fVar7 + local_34 * fVar2;
    fVar7 = local_2c * fVar3;
    local_2c = local_2c * fVar2 - local_24 * fVar3;
    local_24 = fVar7 + local_24 * fVar2;
  }
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbc),(byte)(uVar1 >> 0x15) & 3);
  fVar2 = fVar2 * fVar8;
  uVar1 = uVar1 & 0xfffffff | (uint)(fVar2 == fVar6) << 0x1e;
  if (!SUB41(uVar1 >> 0x1e,0)) {
    fVar4 = (float)FUN_003727f0(fVar2);
    fVar5 = (float)FUN_00372674(fVar2);
    fVar2 = local_44 * fVar4;
    local_44 = local_44 * fVar5 - local_48 * fVar4;
    fVar3 = local_34 * fVar4;
    local_34 = local_34 * fVar5 - local_38 * fVar4;
    fVar7 = local_24 * fVar4;
    local_24 = local_24 * fVar5 - local_28 * fVar4;
    local_48 = local_48 * fVar5 + fVar2;
    local_38 = local_38 * fVar5 + fVar3;
    local_28 = local_28 * fVar5 + fVar7;
  }
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc0),(byte)(uVar1 >> 0x15) & 3);
  fVar2 = fVar2 * fVar8;
  if (fVar2 != fVar6) {
    fVar7 = (float)FUN_003727f0(fVar2);
    fVar4 = (float)FUN_00372674(fVar2);
    fVar8 = local_48 * fVar7;
    local_48 = local_48 * fVar4 - local_4c * fVar7;
    fVar2 = local_38 * fVar7;
    local_38 = local_38 * fVar4 - local_3c * fVar7;
    fVar3 = local_28 * fVar7;
    local_28 = local_28 * fVar4 - local_2c * fVar7;
    local_4c = local_4c * fVar4 + fVar8;
    local_3c = local_3c * fVar4 + fVar2;
    local_2c = local_2c * fVar4 + fVar3;
  }
  local_54 = *(float *)(param_1 + 0x58) * DAT_002152e8;
  local_58 = fVar6;
  local_50 = fVar6;
  FUN_00372070(&local_4c,&local_4c,&local_58);
  fVar6 = *(float *)(param_1 + 0x54);
  fVar8 = *(float *)(param_1 + 0x58);
  fVar2 = *(float *)(param_1 + 0x5c);
  local_4c = local_4c * fVar6;
  local_3c = local_3c * fVar6;
  local_2c = local_2c * fVar6;
  local_48 = local_48 * fVar8;
  local_38 = local_38 * fVar8;
  local_28 = local_28 * fVar8;
  local_44 = local_44 * fVar2;
  local_34 = local_34 * fVar2;
  local_24 = local_24 * fVar2;
  if (*(int *)(param_1 + 0x21c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x21c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x21c),&local_4c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x21c),0);
  }
  FUN_00357750(0,param_1 + 0x1a8,&local_4c);
  return;
}
