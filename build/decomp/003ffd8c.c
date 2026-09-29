// OoT3D decomp @ 003ffd8c  name=FUN_003ffd8c  size=64

void FUN_003ffd8c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 local_18;

  if (*(int *)(param_1 + 4) == 0) {
    local_18 = param_4;
    FUN_003351b4(DAT_003ffdcc);
    param_2 = extraout_r1;
  }
  local_18 = *(undefined4 *)(param_1 + 4);
  FUN_004003d0(&local_18,param_2,param_3,param_4);
  return;
}
