// OoT3D decomp @ 00258020  name=FUN_00258020  size=152

void FUN_00258020(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined2 param_6,undefined4 param_7)

{
  int local_54;
  undefined1 auStack_50 [12];
  undefined4 local_44;
  undefined1 auStack_40 [12];
  undefined2 local_34;
  undefined2 local_32;
  ushort local_30;
  undefined2 local_2e;
  undefined4 local_2c;

  FUN_0036df4c(auStack_50,param_5);
  FUN_0036df4c(auStack_40,param_4 + 0x60);
  local_32 = 0;
  local_34 = 0xf;
  local_2c = param_7;
  local_54 = param_4;
  local_44 = param_1;
  local_30 = (ushort)(param_2 != 0x3f800000);
  local_2e = param_6;
  FUN_00342c10(param_3,0x1c,0x80,&local_54);
  return;
}
