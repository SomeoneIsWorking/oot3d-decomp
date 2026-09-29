// OoT3D decomp @ 00408d1c  name=FUN_00408d1c  size=264

void FUN_00408d1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5
                 )

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  local_48 = FUN_00308474(*(undefined2 *)(*param_4 + 6));
  local_44 = FUN_003083fc(*(undefined2 *)(*param_4 + 4));
  local_40 = FUN_00308390(*(undefined2 *)(*param_4 + 8));
  local_3c = FUN_00308390(*(undefined2 *)(*param_4 + 10));
  FUN_0030835c(&local_48,local_44,*(uint *)(*param_4 + 0xc) & 0xffff);
  FUN_00308328(&local_48,local_44,(int)*(short *)(*param_5 + 4));
  FUN_0030828c(*(undefined4 *)(*param_4 + 0x10),&local_48);
  local_2c = param_5[2];
  local_28 = *(undefined2 *)(*param_5 + 8);
  local_26 = *(undefined2 *)(*param_5 + 10);
  local_24 = FUN_00308200(param_2,param_3);
  local_20 = FUN_0030807c(*(undefined2 *)(*param_5 + 0xc),*(undefined2 *)(*param_5 + 0xe));
  local_1c = *(undefined4 *)(*param_4 + 0x14);
  FUN_00307e50(param_1,param_2,&local_48);
  return;
}
