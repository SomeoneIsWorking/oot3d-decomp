// OoT3D decomp @ 0019f304  name=FUN_0019f304  size=72

void FUN_0019f304(int param_1,undefined4 param_2)

{
  int iVar1;

  FUN_003731e0(param_1 + 0x1a4);
  iVar1 = FUN_0036bc98(param_1,param_2);
  if (iVar1 == 0) {
    FUN_0036bb28(DAT_0019f350,param_1,param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0x568) = DAT_0019f34c;
  return;
}
