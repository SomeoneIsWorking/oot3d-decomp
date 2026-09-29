// OoT3D decomp @ 0035e710  name=FUN_0035e710  size=160

void FUN_0035e710(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  int local_80;
  undefined1 auStack_7c [12];
  undefined4 local_70;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined2 local_48;

  local_80 = param_3;
  FUN_0036df4c(auStack_7c,param_4);
  local_53 = param_6;
  local_50 = param_9;
  local_52 = param_7;
  local_4f = param_10;
  local_51 = param_8;
  local_4e = param_11;
  uVar1 = extraout_r1;
  if (param_3 != 0) {
    uVar1 = DAT_0035e7b0;
  }
  local_48 = 0;
  local_70 = param_1;
  local_54 = param_5;
  if (param_3 != 0) {
    FUN_00375bcc(param_3,uVar1);
  }
  FUN_00342c10(param_2,0x1b,0x50,&local_80);
  return;
}
