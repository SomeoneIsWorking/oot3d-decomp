// OoT3D decomp @ 00233910  name=FUN_00233910  size=488

undefined4 FUN_00233910(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;

  if ((param_2 == 0) &&
     (*(char *)(param_4 + 0x444) == '\x01' || *(char *)(param_4 + 0x444) == '\x05')) {
    FUN_00372224(&local_40,param_3);
    fVar2 = DAT_00233af8;
    local_40 = local_40 * DAT_00233af8;
    local_30 = local_30 * DAT_00233af8;
    local_20 = local_20 * DAT_00233af8;
    local_3c = local_3c * DAT_00233af8;
    local_2c = local_2c * DAT_00233af8;
    local_1c = local_1c * DAT_00233af8;
    local_38 = local_38 * DAT_00233af8;
    local_28 = local_28 * DAT_00233af8;
    local_18 = local_18 * DAT_00233af8;
    FUN_00369014(*(float *)(param_4 + 0x47c) * DAT_00233afc,&local_40,1);
    FUN_003735e8(*(float *)(param_4 + 0x47c) * DAT_00233b00,&local_40,1);
    FUN_00371234(*(float *)(param_4 + 0x47c) * DAT_00233b04,&local_40,1);
    fVar1 = fVar2 - *(float *)(param_4 + 0x484);
    fVar2 = *(float *)(param_4 + 0x484) + fVar2;
    local_40 = local_40 * fVar1;
    local_30 = local_30 * fVar1;
    local_20 = local_20 * fVar1;
    local_3c = local_3c * fVar2;
    local_2c = local_2c * fVar2;
    local_1c = local_1c * fVar2;
    local_38 = local_38 * fVar1;
    local_28 = local_28 * fVar1;
    local_18 = local_18 * fVar1;
    FUN_00371234(*(float *)(param_4 + 0x47c) * DAT_00233b08,&local_40,1);
    FUN_003735e8(*(float *)(param_4 + 0x47c) * DAT_00233b0c,&local_40,1);
    FUN_00369014(*(float *)(param_4 + 0x47c) * DAT_00233b10,&local_40,1);
    return 1;
  }
  return 0;
}
