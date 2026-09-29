// OoT3D decomp @ 001b56c0  name=FUN_001b56c0  size=296

void FUN_001b56c0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int local_68;
  float local_64;
  int local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_2c [4];

  local_2c[0] = *DAT_001b57e8;
  local_2c[1] = DAT_001b57e8[1];
  local_2c[2] = DAT_001b57e8[2];
  local_2c[3] = DAT_001b57e8[3];
  FUN_0035e3a4(param_1 + 0x240,0,local_2c[*(byte *)(param_1 + 0x956)]);
  FUN_0035e330(param_1 + 0x240);
  FUN_00372224(&local_5c,param_1 + 0x148);
  iVar1 = DAT_001b57ec;
  fVar3 = (float)FUN_00372674(*(float *)(param_1 + 0x1f8) * DAT_001b57f0);
  fVar2 = DAT_001b57f4;
  local_68 = iVar1;
  local_64 = fVar3 * DAT_001b57f4 - DAT_001b57f4;
  local_60 = iVar1;
  FUN_00372070(&local_5c,&local_5c,&local_68);
  local_5c = local_5c * fVar2;
  local_4c = local_4c * fVar2;
  local_3c = local_3c * fVar2;
  local_58 = local_58 * fVar2;
  local_48 = local_48 * fVar2;
  local_38 = local_38 * fVar2;
  local_54 = local_54 * fVar2;
  local_44 = local_44 * fVar2;
  local_34 = local_34 * fVar2;
  local_64 = 0.0;
  local_68 = param_1;
  FUN_0035e240(param_1 + 0x1bc,&local_5c,0);
  return;
}
