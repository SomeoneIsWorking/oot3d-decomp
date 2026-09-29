// OoT3D decomp @ 002808cc  name=FUN_002808cc  size=708

void FUN_002808cc(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  float local_20;

  fVar6 = DAT_00280b94;
  fVar4 = DAT_00280b90;
  local_40 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x1c8);
  local_30 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x1cc);
  local_20 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x1d0);
  local_44 = 0.0;
  local_48 = 0.0;
  local_4c = 1.0;
  local_3c = 0.0;
  local_38 = 1.0;
  local_28 = 0.0;
  local_24 = 1.0;
  local_34 = 0.0;
  local_2c = 0.0;
  fVar7 = *(float *)(param_1 + 0x1b0) * DAT_00280b94;
  if (fVar7 != DAT_00280b90) {
    fVar1 = (float)FUN_003727f0(fVar7);
    fVar2 = (float)FUN_00372674(fVar7);
    fVar7 = local_44 * fVar1;
    local_44 = local_44 * fVar2 - local_48 * fVar1;
    fVar3 = local_34 * fVar1;
    local_34 = local_34 * fVar2 - local_38 * fVar1;
    fVar5 = local_24 * fVar1;
    local_24 = local_24 * fVar2 - local_28 * fVar1;
    local_48 = local_48 * fVar2 + fVar7;
    local_38 = local_38 * fVar2 + fVar3;
    local_28 = local_28 * fVar2 + fVar5;
  }
  fVar7 = *(float *)(param_1 + 0x1b4) * fVar6;
  if (fVar7 != fVar4) {
    fVar3 = (float)FUN_003727f0(fVar7);
    fVar7 = (float)FUN_00372674(fVar7);
    fVar5 = local_4c * fVar3;
    local_4c = local_4c * fVar7 - local_44 * fVar3;
    local_44 = fVar5 + local_44 * fVar7;
    fVar5 = local_3c * fVar3;
    local_3c = local_3c * fVar7 - local_34 * fVar3;
    local_34 = fVar5 + local_34 * fVar7;
    fVar5 = local_2c * fVar3;
    local_2c = local_2c * fVar7 - local_24 * fVar3;
    local_24 = fVar5 + local_24 * fVar7;
  }
  fVar6 = *(float *)(param_1 + 0x1b8) * fVar6;
  if (fVar6 != fVar4) {
    fVar3 = (float)FUN_003727f0(fVar6);
    fVar5 = (float)FUN_00372674(fVar6);
    fVar4 = local_48 * fVar3;
    local_48 = local_48 * fVar5 - local_4c * fVar3;
    fVar6 = local_38 * fVar3;
    local_38 = local_38 * fVar5 - local_3c * fVar3;
    fVar7 = local_28 * fVar3;
    local_28 = local_28 * fVar5 - local_2c * fVar3;
    local_4c = local_4c * fVar5 + fVar4;
    local_3c = local_3c * fVar5 + fVar6;
    local_2c = local_2c * fVar5 + fVar7;
  }
  fVar4 = *(float *)(param_1 + 0x54);
  fVar6 = *(float *)(param_1 + 0x58);
  fVar7 = *(float *)(param_1 + 0x5c);
  local_4c = local_4c * fVar4;
  local_3c = local_3c * fVar4;
  local_2c = local_2c * fVar4;
  local_48 = local_48 * fVar6;
  local_38 = local_38 * fVar6;
  local_28 = local_28 * fVar6;
  local_44 = local_44 * fVar7;
  local_34 = local_34 * fVar7;
  local_24 = local_24 * fVar7;
  *(undefined1 *)(*(int *)(param_1 + 0x244) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x244),&local_4c);
  FUN_00372170(*(undefined4 *)(param_1 + 0x244),0);
  return;
}
