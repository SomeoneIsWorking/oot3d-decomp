// OoT3D decomp @ 002d0190  name=FUN_002d0190  size=60

void FUN_002d0190(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_10;

  local_10 = param_4;
  FUN_0030ee14(&local_10,DAT_002d01cc + param_1 * 4);
  if (local_10 != 0) {
    FUN_0030c198(local_10,param_2,param_3);
  }
  FUN_0030ede0(&local_10);
  return;
}
