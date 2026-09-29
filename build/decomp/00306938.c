// OoT3D decomp @ 00306938  name=FUN_00306938  size=88

void FUN_00306938(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int local_20;
  int local_1c;
  undefined4 uStack_4;

  local_1c = param_1;
  if (param_2 != 0) {
    local_1c = param_1 + param_2 * 2 + -2;
  }
  local_20 = param_1;
  uStack_4 = param_4;
  FUN_0044dbc8(param_3,&local_20,&uStack_4,DAT_00306990 + 0x306960);
  if (param_2 != 0) {
    local_1c = local_1c + 2;
    FUN_0044dc0c(0,&local_20);
  }
  return;
}
