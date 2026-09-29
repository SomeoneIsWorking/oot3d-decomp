// OoT3D decomp @ 00357540  name=FUN_00357540  size=164

void FUN_00357540(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_58;
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined2 local_28;
  undefined2 local_26;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  local_1c = *(undefined4 *)(DAT_003575e4 + 0xc);
  local_20 = *(undefined4 *)(DAT_003575e4 + 0x10);
  FUN_0036df4c(auStack_54,param_3);
  FUN_0036df4c(auStack_48,param_4);
  FUN_0036df4c(auStack_3c,param_5);
  FUN_00363f20(auStack_30,&local_1c);
  FUN_00363f20(auStack_2c,&local_20);
  local_28 = 100;
  local_26 = 5;
  local_24 = 0;
  local_58 = param_2;
  FUN_00342c10(param_1,5,0x80,&local_58);
  return;
}
