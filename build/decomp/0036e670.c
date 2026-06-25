// OoT3D decomp @ 0036e670  name=FUN_0036e670  size=156

void FUN_0036e670(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined *param_4,
                 undefined param_5,undefined2 param_6)

{
  undefined auStack_30 [12];
  undefined local_24;
  undefined local_23;
  undefined2 local_22;
  undefined local_20;
  undefined local_1f;
  undefined local_1e;
  undefined local_1d;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  local_23 = FUN_0036df4c(auStack_30);
  local_24 = param_5;
  if (param_3 == (undefined *)0x0) {
    local_23 = 0;
  }
  local_22 = param_6;
  if (param_3 != (undefined *)0x0) {
    local_20 = *param_3;
    local_1f = param_3[1];
    local_1e = param_3[2];
    local_1d = param_3[3];
    local_1c = *param_4;
    local_1b = param_4[1];
    local_1a = param_4[2];
    local_19 = param_4[3];
    local_23 = 1;
  }
  FUN_00342c10(param_1,10,0x80,auStack_30);
  return;
}

