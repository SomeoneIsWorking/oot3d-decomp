// OoT3D decomp @ 00178728  name=FUN_00178728  size=376

void FUN_00178728(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_60;
  float local_5c;
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

  fVar7 = DAT_001788ac;
  fVar8 = DAT_001788a8;
  fVar2 = DAT_001788a4;
  fVar1 = DAT_001788a0;
  local_30 = DAT_001788a0;
  local_2c = DAT_001788a0;
  local_28 = DAT_001788a0;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x36),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_001788a4 * DAT_001788a8;
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == DAT_001788a0) << 0x1e;
  local_60 = DAT_001788ac;
  local_58 = DAT_001788a0;
  if (!SUB41(uVar4 >> 0x1e,0)) {
    fVar6 = (float)FUN_003727f0(fVar5);
    local_60 = (float)FUN_00372674(fVar5);
    local_58 = fVar6;
  }
  local_5c = fVar1;
  local_54 = fVar1;
  local_40 = -local_58;
  local_4c = fVar7;
  local_50 = fVar1;
  local_48 = fVar1;
  local_44 = fVar1;
  local_3c = fVar1;
  local_34 = fVar1;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x34),(byte)(uVar4 >> 0x15) & 3);
  fVar8 = fVar7 * fVar2 * fVar8;
  local_38 = local_60;
  if (fVar8 != fVar1) {
    fVar7 = (float)FUN_003727f0(fVar8);
    fVar5 = (float)FUN_00372674(fVar8);
    fVar1 = local_58 * fVar7;
    local_58 = local_58 * fVar5 - local_5c * fVar7;
    fVar2 = local_48 * fVar7;
    local_48 = local_48 * fVar5 - local_4c * fVar7;
    fVar8 = local_38 * fVar7;
    local_38 = local_38 * fVar5 - local_3c * fVar7;
    local_5c = local_5c * fVar5 + fVar1;
    local_4c = local_4c * fVar5 + fVar2;
    local_3c = local_3c * fVar5 + fVar8;
  }
  local_28 = (float)DAT_001788b0;
  FUN_003735ac(param_1 + 0x60,&local_60,&local_30);
  uVar3 = DAT_001788b4;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  return;
}
