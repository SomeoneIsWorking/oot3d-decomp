// OoT3D decomp @ 0040dbb0  name=FUN_0040dbb0  size=40

int FUN_0040dbb0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_10;

  local_10 = param_4;
  iVar1 = FUN_003043c0(param_1 + 0x14,&local_10,8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = local_10 + param_1;
  }
  return iVar2;
}
