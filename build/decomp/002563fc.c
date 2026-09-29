// OoT3D decomp @ 002563fc  name=FUN_002563fc  size=340

undefined4 FUN_002563fc(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  float local_44;
  float local_40;
  float local_3c;
  undefined1 auStack_38 [48];

  if (param_2 == 7) {
    local_44 = DAT_00256550;
    local_40 = DAT_00256550;
    local_3c = (float)DAT_00256558;
    FUN_003625f8(*(float *)(param_4 + 0x65c) * DAT_00256554,auStack_38,&local_44);
    FUN_0036c174(param_3,param_3,auStack_38);
  }
  else if (param_2 == 8) {
    local_44 = DAT_00256550;
    local_40 = (float)DAT_0025655c;
    local_3c = DAT_00256550;
    FUN_003625f8(*(float *)(param_4 + 0x660) * DAT_00256554,auStack_38,&local_44);
    FUN_0036c174(param_3,param_3,auStack_38);
  }
  else if (param_2 == 4) {
    local_44 = *(float *)(param_4 + 0x658) * DAT_00256560;
    local_40 = *(float *)(param_4 + 0x654) * DAT_00256560;
    local_3c = *(float *)(param_4 + 0x650) * DAT_00256554;
    FUN_0032e438(auStack_38,&local_44);
    FUN_0036c174(param_3,param_3,auStack_38);
  }
  else if (param_2 == 6) {
    local_44 = *(float *)(param_4 + 0x64c) * DAT_00256554;
    local_40 = *(float *)(param_4 + 0x648) * DAT_00256554;
    local_3c = *(float *)(param_4 + 0x644) * DAT_00256554;
    FUN_0032e438(auStack_38,&local_44);
    FUN_0036c174(param_3,param_3,auStack_38);
  }
  return 0;
}
