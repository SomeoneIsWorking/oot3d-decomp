// OoT3D decomp @ 002ffb3c  name=FUN_002ffb3c  size=736

void FUN_002ffb3c(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float local_78 [6];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
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
  float local_1c;
  float local_18;
  float local_14;
  float local_10;

  iVar3 = *(int *)(param_1 + 0xfc);
  if (iVar3 == 0) {
    local_48 = DAT_002ffe2c;
    local_44 = DAT_002ffe2c;
    local_40 = DAT_002ffe2c;
    local_34 = 0.0;
    local_38 = 0.0;
    local_3c = 1.0;
    local_2c = 0.0;
    local_28 = 1.0;
    local_30 = DAT_002ffe2c;
    local_18 = 0.0;
    local_14 = 1.0;
    local_24 = 0.0;
    local_1c = 0.0;
    local_20 = DAT_002ffe2c;
    local_10 = DAT_002ffe2c;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xfc);
    fVar4 = *(float *)(iVar3 + 0x30) +
            (*(float *)(iVar3 + 0x3c) - *(float *)(iVar3 + 0x30)) * DAT_002ffe20;
    fVar5 = *(float *)(iVar3 + 0x34) +
            (*(float *)(iVar3 + 0x40) - *(float *)(iVar3 + 0x34)) * DAT_002ffe20;
    fVar6 = *(float *)(iVar3 + 0x38) +
            (*(float *)(iVar3 + 0x44) - *(float *)(iVar3 + 0x38)) * DAT_002ffe20;
    local_1c = fVar4 - *(float *)(iVar2 + 0x3c);
    local_18 = fVar5 - *(float *)(iVar2 + 0x40);
    local_14 = fVar6 - *(float *)(iVar2 + 0x44);
    fVar7 = DAT_002ffe1c / SQRT(local_1c * local_1c + local_18 * local_18 + local_14 * local_14);
    local_14 = local_14 * fVar7;
    local_1c = local_1c * fVar7;
    local_18 = local_18 * fVar7;
    local_3c = *(float *)(iVar2 + 0x4c) * local_14 - *(float *)(iVar2 + 0x50) * local_18;
    local_38 = *(float *)(iVar2 + 0x50) * local_1c - *(float *)(iVar2 + 0x48) * local_14;
    local_34 = *(float *)(iVar2 + 0x48) * local_18 - *(float *)(iVar2 + 0x4c) * local_1c;
    fVar7 = DAT_002ffe1c / SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
    local_34 = local_34 * fVar7;
    local_3c = local_3c * fVar7;
    local_38 = local_38 * fVar7;
    local_2c = local_18 * local_34 - local_14 * local_38;
    local_28 = local_14 * local_3c - local_1c * local_34;
    local_24 = local_1c * local_38 - local_18 * local_3c;
    local_30 = -(fVar4 * local_3c + fVar5 * local_38) + -(fVar6 * local_34);
    local_20 = -(fVar4 * local_2c + fVar5 * local_28) + -(fVar6 * local_24);
    local_10 = -(fVar4 * local_1c + fVar5 * local_18) + -(fVar6 * local_14);
    if (*(char *)(DAT_002ffe24 + 0xe) != '\0') {
      local_48 = DAT_002ffe28;
      local_44 = DAT_002ffe1c;
      local_40 = DAT_002ffe1c;
      local_78[3] = 0.0;
      local_78[4] = 0.0;
      local_78[0] = DAT_002ffe28;
      local_54 = 0;
      local_78[1] = 0.0;
      local_78[5] = DAT_002ffe1c;
      local_78[2] = 0.0;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_4c = 0;
      local_50 = DAT_002ffe1c;
      FUN_0036c174(&local_3c,local_78,&local_3c);
    }
  }
  puVar1 = DAT_002ffe30;
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 0xfc)) {
    iVar3 = *(int *)(param_1 + 0xfc);
    if (((*DAT_002ffe30 & 1) == 0) &&
       (uVar8 = FUN_003679b4(DAT_002ffe30), iVar3 = (int)((ulonglong)uVar8 >> 0x20), (int)uVar8 != 0
       )) {
      FUN_0031ff30(DAT_002ffe34);
      iVar3 = DAT_002ffe3c;
    }
    FUN_00437ff4(DAT_002ffe34,iVar3);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xfc);
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_002ffe30), iVar3 != 0)) {
    FUN_0031ff30(DAT_002ffe34);
  }
  FUN_00422524(DAT_002ffe34,&local_3c);
  return;
}
