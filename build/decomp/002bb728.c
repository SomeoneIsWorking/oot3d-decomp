// OoT3D decomp @ 002bb728  name=FUN_002bb728  size=104

void FUN_002bb728(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_002c0920(param_3);
  if (((iVar1 != 0) && (iVar1 = FUN_00359690(param_1,param_3), iVar1 != 0)) &&
     (FUN_0034aaf0(iVar1), (*(uint *)(param_2 + 4) & 0x4000000) != 0)) {
    *(byte *)(iVar1 + 0x1b8) = *(byte *)(iVar1 + 0x1b8) | 8;
    return;
  }
  return;
}

