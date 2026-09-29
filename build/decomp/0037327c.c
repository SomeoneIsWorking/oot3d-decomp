// OoT3D decomp @ 0037327c  name=FUN_0037327c  size=628

void FUN_0037327c(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined1 auStack_3c [12];
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;

  fVar11 = DAT_003734f8;
  fVar10 = DAT_003734f4;
  local_74 = *(undefined4 *)(param_1 + 0x28);
  local_64 = *(float *)(param_1 + 0x2c) + DAT_003734f0;
  local_54 = *(undefined4 *)(param_1 + 0x30);
  local_78 = 0.0;
  local_7c = 0.0;
  local_80 = 1.0;
  local_70 = 0.0;
  local_6c = 1.0;
  local_68 = 0.0;
  local_60 = 0.0;
  local_5c = 0.0;
  local_58 = 1.0;
  sVar2 = *(short *)(param_1 + 0xbc);
  sVar3 = *(short *)(param_1 + 0xbe);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc0),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * DAT_003734f8;
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 == DAT_003734f4) << 0x1e;
  local_30 = local_74;
  local_2c = local_64;
  local_28 = local_54;
  if (!SUB41(uVar5 >> 0x1e,0)) {
    fVar7 = (float)FUN_003727f0(fVar6);
    fVar8 = (float)FUN_00372674(fVar6);
    fVar6 = local_7c * fVar7;
    local_7c = local_7c * fVar8 - local_80 * fVar7;
    fVar1 = local_6c * fVar7;
    local_6c = local_6c * fVar8 - local_70 * fVar7;
    fVar9 = local_5c * fVar7;
    local_5c = local_5c * fVar8 - local_60 * fVar7;
    local_80 = local_80 * fVar8 + fVar6;
    local_70 = local_70 * fVar8 + fVar1;
    local_60 = local_60 * fVar8 + fVar9;
  }
  if (sVar3 != 0) {
    fVar6 = (float)VectorSignedToFloat((int)sVar3,(byte)(uVar5 >> 0x15) & 3);
    FUN_003735e8(fVar6 * fVar11,&local_80,1);
  }
  if (sVar2 != 0) {
    fVar6 = (float)VectorSignedToFloat((int)sVar2,(byte)(uVar5 >> 0x15) & 3);
    fVar6 = fVar6 * fVar11;
    if (fVar6 != fVar10) {
      fVar9 = (float)FUN_003727f0(fVar6);
      fVar7 = (float)FUN_00372674(fVar6);
      fVar11 = local_78 * fVar9;
      local_78 = local_78 * fVar7 - local_7c * fVar9;
      fVar6 = local_68 * fVar9;
      local_68 = local_68 * fVar7 - local_6c * fVar9;
      fVar1 = local_58 * fVar9;
      local_58 = local_58 * fVar7 - local_5c * fVar9;
      local_7c = local_7c * fVar7 + fVar11;
      local_6c = local_6c * fVar7 + fVar6;
      local_5c = local_5c * fVar7 + fVar1;
    }
  }
  local_44 = fVar10;
  local_48 = fVar10;
  local_40 = DAT_003734fc;
  FUN_003735ac(param_1 + 0x2e0,&local_80,&local_48);
  iVar4 = FUN_00369f9c(param_2 + 0xa98,&local_30,param_1 + 0x2e0,auStack_3c,auStack_50,1,0,0,1,
                       auStack_4c);
  if (iVar4 != 0) {
    FUN_0036df4c(param_1 + 0x2e0,auStack_3c);
  }
  fVar11 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x2e0);
  fVar10 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x2e8);
  *(float *)(param_1 + 0x2ec) = fVar11 * fVar11 + fVar10 * fVar10;
  return;
}
