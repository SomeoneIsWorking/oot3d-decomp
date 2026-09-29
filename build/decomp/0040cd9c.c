// OoT3D decomp @ 0040cd9c  name=FUN_0040cd9c  size=56

void FUN_0040cd9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;

  if (*(int *)(param_1 + 4) == 0) {
    local_10 = param_4;
    FUN_003351b4(DAT_0040cdd4);
  }
  local_10 = *(undefined4 *)(param_1 + 4);
  FUN_00400394(&local_10,param_2);
  return;
}
