// OoT3D decomp @ 0035e4f4  name=FUN_0035e4f4  size=136

void FUN_0035e4f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined2 param_5,undefined4 param_6)

{
  undefined auStack_4c [12];
  undefined auStack_40 [12];
  undefined auStack_34 [12];
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  
  FUN_0036df4c(auStack_4c);
  FUN_0036df4c(auStack_40,DAT_0035e57c);
  FUN_0036df4c(auStack_34,DAT_0035e57c);
  local_24 = (undefined2)param_4;
  local_22 = param_5;
  local_20 = param_6;
  local_28 = param_3;
  if (param_4 == 0) {
    FUN_00342c10(param_1,0x23,100,auStack_4c);
    return;
  }
  FUN_00342c10(param_1,0x23,0x7f,auStack_4c);
  return;
}

