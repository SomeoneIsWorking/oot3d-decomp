// OoT3D decomp @ 00394300  name=FUN_00394300  size=476

undefined4 FUN_00394300(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float local_20;
  float local_1c;

  fVar5 = DAT_003944e4;
  fVar1 = DAT_003944dc;
  if (param_2 == 7) {
    FUN_0036c258(*(float *)(param_4 + 0x63c) * DAT_003944e0 * DAT_003944e8 * DAT_003944ec *
                 DAT_003944e8,&local_4c,&local_50);
    fVar2 = DAT_003944f0 - local_50;
    fVar4 = DAT_003944f0 / SQRT(fVar1 * fVar1 + fVar1 * fVar1 + fVar5 * fVar5);
    fVar6 = fVar1 * fVar4;
    fVar3 = fVar1 * fVar4;
    fVar5 = fVar5 * fVar4;
    local_44 = fVar2 * fVar6 * fVar3;
    local_34 = local_50 + fVar2 * fVar3 * fVar3;
    local_48 = local_50 + fVar2 * fVar6 * fVar6;
    local_40 = fVar2 * fVar6 * fVar5;
    local_20 = local_50 + fVar2 * fVar5 * fVar5;
    local_38 = local_44 + local_4c * fVar5;
    local_44 = local_44 - local_4c * fVar5;
    fVar5 = fVar2 * fVar3 * fVar5;
    local_28 = local_40 - local_4c * fVar3;
    local_40 = local_40 + local_4c * fVar3;
    local_24 = fVar5 + local_4c * fVar6;
    local_3c = fVar1;
    local_30 = fVar5 - local_4c * fVar6;
    local_2c = fVar1;
    local_1c = fVar1;
    FUN_0036c174(param_3,param_3,&local_48);
  }
  else if (param_2 == 4) {
    local_54 = *(float *)(param_4 + 0x638) * DAT_003944f4;
    local_50 = *(float *)(param_4 + 0x634) * DAT_003944f4;
    local_4c = *(float *)(param_4 + 0x630) * DAT_003944e0;
    FUN_0032e438(&local_48,&local_54);
    FUN_0036c174(param_3,param_3,&local_48);
  }
  else if (param_2 == 6) {
    local_54 = *(float *)(param_4 + 0x62c) * DAT_003944e0;
    local_50 = *(float *)(param_4 + 0x628) * DAT_003944e0;
    local_4c = *(float *)(param_4 + 0x624) * DAT_003944e0;
    FUN_0032e438(&local_48,&local_54);
    FUN_0036c174(param_3,param_3,&local_48);
  }
  return 0;
}
