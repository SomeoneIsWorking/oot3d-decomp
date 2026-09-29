// OoT3D decomp @ 002fc258  name=FUN_002fc258  size=152

void FUN_002fc258(int param_1,int param_2,undefined4 param_3)

{
  undefined1 auStack_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  param_1 = param_1 + 0x7320;
  FUN_0032471c();
  FUN_00372224(auStack_50,param_2 + 0x40);
  local_18 = DAT_002fc2f0;
  local_1c = DAT_002fc2f0;
  local_20 = DAT_002fc2f0;
  local_14 = DAT_002fc2f4;
  FUN_003246ec(param_1,param_2,auStack_50);
  FUN_003246bc(param_1,param_2 + 0xa0);
  FUN_00307c80(param_1,param_2 + 0x70);
  FUN_003135e8(param_1,param_3,4);
  FUN_002f9c74(param_1);
  *DAT_002fc2fc = (short)DAT_002fc2f8;
  return;
}
