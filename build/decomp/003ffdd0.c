// OoT3D decomp @ 003ffdd0  name=FUN_003ffdd0  size=60

void FUN_003ffdd0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;

  local_10 = param_1[1];
  iVar1 = param_4;
  if (local_10 != 0) {
    FUN_004002ec(&local_10);
    iVar1 = local_10;
  }
  local_10 = iVar1;
  (**(code **)(*param_1 + 0x24))(param_1);
  FUN_0030eb68(DAT_003ffe0c,param_1);
  return;
}
