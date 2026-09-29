// OoT3D decomp @ 00369b58  name=FUN_00369b58  size=140

void FUN_00369b58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;

  FUN_0036df4c(auStack_50);
  FUN_0036df4c(auStack_44,param_3);
  FUN_0036df4c(auStack_38,param_4);
  FUN_00363f20(auStack_2c,DAT_00369be4);
  FUN_00363f20(auStack_28,DAT_00369be8);
  local_20 = 0x23;
  local_24 = param_5;
  local_22 = param_6;
  local_1e = param_7;
  FUN_00342c10(param_1,4,0x80,auStack_50);
  return;
}
