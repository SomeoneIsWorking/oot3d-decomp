// OoT3D decomp @ 002bff8c  name=FUN_002bff8c  size=104

int FUN_002bff8c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    param_1 = DAT_002bfff4;
  }
  iVar1 = 0;
  do {
    iVar2 = DAT_002bfff8 + iVar1 * 0xa0;
    iVar3 = *(int *)(iVar2 + 0x84);
    if ((iVar3 != 0) && (iVar3 == param_1)) {
      iVar2 = *(int *)(iVar2 + 0x9c);
      if (iVar2 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x9c);
      }
      if (iVar2 == param_2) {
        return DAT_002bfff8 + iVar1 * 0xa0;
      }
    }
    iVar1 = iVar1 + 1;
    if (0x1f < iVar1) {
      return 0;
    }
  } while( true );
}

