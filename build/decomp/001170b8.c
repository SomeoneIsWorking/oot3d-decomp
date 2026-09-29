// OoT3D decomp @ 001170b8  name=FUN_001170b8  size=488

void FUN_001170b8(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 uStack_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 uStack_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 uStack_20;
  float local_1c;
  float local_18;
  undefined4 local_14;

  uVar3 = *(ushort *)(param_1 + 0x1c) & 3;
  if ((*(ushort *)(param_1 + 0x1c) & 3) == 0) {
    local_1c = *(float *)(param_1 + 0x28) - DAT_001172a4;
    local_18 = *(float *)(param_1 + 0x2c);
    local_14 = *(undefined4 *)(param_1 + 0x30);
    iVar2 = DAT_001172a0;
  }
  else if (uVar3 == 2) {
    local_1c = *(float *)(param_1 + 0x28) + DAT_001172ac;
    local_18 = *(float *)(param_1 + 0x2c);
    local_14 = *(undefined4 *)(param_1 + 0x30);
    iVar2 = DAT_001172a8;
  }
  else {
    iVar2 = param_1 + 0xbc;
    FUN_0036df4c(&local_1c,param_1 + 0x28);
  }
  local_18 = local_18 + DAT_001172b0;
  FUN_003679d0(local_1c,local_18,local_14,&local_4c,iVar2);
  pfVar1 = (float *)(DAT_001172b4 + uVar3 * 0xc);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  local_4c = local_4c * fVar4;
  local_3c = local_3c * fVar4;
  local_2c = local_2c * fVar4;
  local_48 = local_48 * fVar5;
  local_38 = local_38 * fVar5;
  local_28 = local_28 * fVar5;
  local_44 = local_44 * fVar6;
  local_34 = local_34 * fVar6;
  local_24 = local_24 * fVar6;
  local_58 = DAT_001172b8;
  local_54 = DAT_001172b8;
  local_50 = DAT_001172bc;
  FUN_00372070(&local_4c,&local_4c,&local_58);
  iVar2 = *(int *)(param_1 + 0x22bc);
  if (iVar2 != 0) {
    *(float *)(iVar2 + 0xc) = local_4c;
    *(float *)(iVar2 + 0x10) = local_48;
    *(float *)(iVar2 + 0x14) = local_44;
    *(undefined4 *)(iVar2 + 0x18) = uStack_40;
    *(float *)(iVar2 + 0x1c) = local_3c;
    *(float *)(iVar2 + 0x20) = local_38;
    *(float *)(iVar2 + 0x24) = local_34;
    *(undefined4 *)(iVar2 + 0x28) = uStack_30;
    *(float *)(iVar2 + 0x2c) = local_2c;
    *(float *)(iVar2 + 0x30) = local_28;
    *(float *)(iVar2 + 0x34) = local_24;
    *(undefined4 *)(iVar2 + 0x38) = uStack_20;
    *(undefined4 *)(*(int *)(param_1 + 0x22bc) + 0x170) = 1;
    if (((*DAT_001172c0 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_001172c0), iVar2 != 0)) {
      FUN_0036788c(DAT_001172c4);
    }
    FUN_00367788(DAT_001172d0,*(undefined4 *)(param_1 + 0x22bc),1);
  }
  return;
}
