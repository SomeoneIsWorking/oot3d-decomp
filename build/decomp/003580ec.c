// OoT3D decomp @ 003580ec  name=FUN_003580ec  size=148

void FUN_003580ec(undefined4 param_1,int param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5,undefined2 param_6,undefined2 param_7,int param_8)

{
  int local_38;
  undefined1 auStack_34 [12];
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;

  FUN_0036df4c(auStack_34,param_3);
  local_24 = param_6;
  local_26 = param_5;
  local_22 = param_7;
  local_38 = param_2;
  local_28 = param_4;
  if (param_2 != 0 && param_8 != 0) {
    if (param_8 == 1) {
      FUN_00375bcc(param_2,DAT_00358184);
    }
    else if (param_8 == 2) {
      FUN_00375bcc(param_2,DAT_00358180);
    }
  }
  FUN_00342c10(param_1,0x1d,0x80,&local_38);
  return;
}
