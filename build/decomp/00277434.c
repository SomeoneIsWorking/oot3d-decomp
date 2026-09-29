// OoT3D decomp @ 00277434  name=FUN_00277434  size=584

void FUN_00277434(int param_1)

{
  float fVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined1 auStack_4c [48];

  FUN_00372224(auStack_4c,param_1 + 0x148);
  if (*(int *)(param_1 + 0x278) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x278) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x278),auStack_4c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x278),0);
  }
  FUN_00372224(&local_7c,param_1 + 0x148);
  fVar1 = DAT_0027767c;
  iVar2 = FUN_003695f8();
  local_70 = *(undefined4 *)(param_1 + 0x28);
  if (iVar2 != 0) {
    fVar1 = DAT_00277680;
  }
  local_60 = (*(float *)(param_1 + 0x2c) + DAT_00277684) - DAT_00277688;
  local_50 = *(undefined4 *)(param_1 + 0x30);
  local_78 = 0.0;
  local_7c = 1.0;
  local_74 = 0.0;
  local_6c = 0.0;
  local_68 = 1.0;
  local_58 = 0.0;
  local_54 = 1.0;
  local_64 = 0.0;
  local_5c = 0.0;
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * DAT_0027768c;
  if (fVar4 != DAT_00277680) {
    fVar3 = (float)FUN_003727f0(fVar4);
    fVar4 = (float)FUN_00372674(fVar4);
    fVar5 = local_7c * fVar3;
    local_7c = local_7c * fVar4 - local_74 * fVar3;
    local_74 = fVar5 + local_74 * fVar4;
    fVar5 = local_6c * fVar3;
    local_6c = local_6c * fVar4 - local_64 * fVar3;
    local_64 = fVar5 + local_64 * fVar4;
    fVar5 = local_5c * fVar3;
    local_5c = local_5c * fVar4 - local_54 * fVar3;
    local_54 = fVar5 + local_54 * fVar4;
  }
  local_7c = local_7c * DAT_00277690;
  local_6c = local_6c * DAT_00277690;
  local_5c = local_5c * DAT_00277690;
  local_78 = local_78 * DAT_00277694;
  local_68 = local_68 * DAT_00277694;
  local_58 = local_58 * DAT_00277694;
  local_74 = local_74 * DAT_00277690;
  local_64 = local_64 * DAT_00277690;
  local_54 = local_54 * DAT_00277690;
  local_8c = *DAT_00277698;
  uStack_88 = DAT_00277698[1];
  uStack_84 = DAT_00277698[2];
  uStack_80 = DAT_00277698[3];
  FUN_00358778(*(undefined4 *)(param_1 + 0x274),0,0,&local_8c,0);
  if (*(int *)(param_1 + 0x274) != 0) {
    *(float *)(*(int *)(*(int *)(param_1 + 0x274) + 0xc) + 0xc) = fVar1;
    *(undefined1 *)(*(int *)(param_1 + 0x274) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x274),&local_7c);
    FUN_00372170(*(undefined4 *)(param_1 + 0x274),0);
  }
  return;
}
