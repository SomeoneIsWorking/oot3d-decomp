// OoT3D decomp @ 002e78f8  name=FUN_002e78f8  size=452

void FUN_002e78f8(undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined1 auStack_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  float local_40 [6];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  local_b0 = param_2[1] + param_2[9];
  local_b0 = local_b0 + (param_2[1] - local_b0) * param_2[10];
  local_ac = param_2[1] + param_2[9];
  local_ac = local_ac + ((param_2[1] + param_2[3]) - local_ac) * param_2[10];
  local_a8 = *param_2 + param_2[8];
  local_a8 = local_a8 + (*param_2 - local_a8) * param_2[10];
  local_a4 = *param_2 + param_2[8];
  local_a4 = local_a4 + ((*param_2 + param_2[2]) - local_a4) * param_2[10];
  local_40[0] = param_2[6] * DAT_002e7abc;
  local_40[5] = param_2[7] * DAT_002e7ac0;
  local_64 = param_2[4] * DAT_002e7abc;
  local_54 = param_2[5] * DAT_002e7ac0;
  local_40[1] = 0.0;
  local_28 = 0;
  local_40[3] = 0.0;
  local_40[2] = 0.0;
  local_14 = 0;
  local_18 = DAT_002e7ac4;
  local_40[4] = 0.0;
  local_20 = 0;
  local_24 = 0;
  local_1c = 0;
  local_70 = 0x3f800000;
  local_60 = 0;
  uStack_5c = 0x3f800000;
  local_6c = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  uStack_48 = 0x3f800000;
  local_44 = DAT_002e7ac8;
  FUN_0036c174(auStack_a0,&local_70,local_40);
  if (((*DAT_002e7acc & 1) == 0) && (iVar1 = FUN_003679b4(DAT_002e7acc), iVar1 != 0)) {
    FUN_0036788c(DAT_002e7ad0);
  }
  FUN_003065d0(DAT_002e7adc,6,param_2 + 0xb,&local_b0,param_3,param_4,auStack_a0,0);
  return;
}
