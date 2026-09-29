// OoT3D decomp @ 0040d778  name=FUN_0040d778  size=36

int FUN_0040d778(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;

  local_8 = param_4;
  iVar1 = FUN_003043c0(param_1,&local_8,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)(char)((uint)local_8 >> 8);
  }
  return iVar2;
}
