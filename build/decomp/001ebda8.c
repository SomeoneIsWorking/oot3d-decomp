// OoT3D decomp @ 001ebda8  name=FUN_001ebda8  size=176

undefined4 FUN_001ebda8(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [48];

  if (param_2 == 1) {
    local_44 = DAT_001ebe58;
    local_40 = DAT_001ebe58;
    local_3c = DAT_001ebe5c;
    FUN_003625f8(*(float *)(param_4 + 0x2268) * DAT_001ebe64,auStack_38,&local_44);
    FUN_0036c174(param_3,param_3,auStack_38);
  }
  else if (param_2 == 2) {
    local_44 = DAT_001ebe58;
    local_40 = DAT_001ebe58;
    local_3c = DAT_001ebe5c;
    FUN_003625f8(*(float *)(param_4 + 0x2268) * DAT_001ebe60,auStack_38,&local_44);
    FUN_0036c174(param_3,param_3,auStack_38);
  }
  return 0;
}
