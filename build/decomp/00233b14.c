// OoT3D decomp @ 00233b14  name=FUN_00233b14  size=148

void FUN_00233b14(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [48];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_18 = DAT_00233ba8;
  local_14 = DAT_00233bac;
  local_10 = DAT_00233bb0;
  if (param_2 == 0xd) {
    FUN_003735ac(param_4 + 0x918,param_3,&local_18);
    FUN_00372224(auStack_48,param_3);
    local_54 = local_18;
    local_50 = local_14;
    local_4c = local_10;
    FUN_00372070(auStack_48,auStack_48,&local_54);
    FUN_00357750(1,param_4 + 0x8a8,auStack_48);
  }
  return;
}
