// OoT3D decomp @ 0040d4c8  name=FUN_0040d4c8  size=84

int FUN_0040d4c8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;

  local_18 = 0xffffffff;
  local_14 = -1;
  local_10 = 0;
  iVar1 = FUN_002c29a0(param_1,param_2,&local_18);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10c);
    iVar1 = FUN_003046b8(param_1 + 0x110);
    iVar2 = iVar1 + local_14 + iVar2;
  }
  return iVar2;
}
