// OoT3D decomp @ 002fc300  name=FUN_002fc300  size=148

void FUN_002fc300(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined1 auStack_4c [48];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  param_1 = param_1 + 0x7320;
  FUN_0032471c();
  FUN_00372224(auStack_4c,param_2 + 0x40);
  local_14 = DAT_002fc394;
  local_18 = DAT_002fc394;
  local_1c = DAT_002fc394;
  local_10 = DAT_002fc398;
  FUN_003246ec(param_1,param_2,auStack_4c);
  FUN_003246bc(param_1,param_2 + 0xa0);
  FUN_00307c80(param_1,param_2 + 0x70);
  FUN_002f9c74(param_1);
  if (*(char *)(DAT_002fc39c + 0xe) == '\0') {
    uVar1 = (undefined2)DAT_002fc3a0;
  }
  else {
    uVar1 = 0x900;
  }
  *DAT_002fc3a4 = uVar1;
  return;
}
