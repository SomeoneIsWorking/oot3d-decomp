// OoT3D decomp @ 0032fa9c  name=FUN_0032fa9c  size=44

int FUN_0032fa9c(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_3 * 8 + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x130);
  }
  return iVar1;
}

