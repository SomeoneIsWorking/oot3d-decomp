// OoT3D decomp @ 00367d74  name=FUN_00367d74  size=128

int FUN_00367d74(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xa58) == 0) {
    iVar1 = 1;
  }
  else if (*(int *)(param_1 + 0xa5c) == 0) {
    iVar1 = 2;
  }
  else {
    if (*(int *)(param_1 + 0xa60) != 0) {
      return -1;
    }
    iVar1 = 3;
  }
  iVar2 = param_1 + iVar1 * 4;
  iVar3 = param_1 + iVar1 * 0x1bc + 0x364;
  *(int *)(iVar2 + 0xa54) = iVar3;
  FUN_002e5724(iVar3,param_1 + 0x188,param_1 + 0xa98,param_1);
  *(short *)(*(int *)(iVar2 + 0xa54) + 0x1ac) = (short)iVar1;
  return iVar1;
}

