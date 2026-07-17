// OoT3D decomp @ 00490dfc  name=FUN_00490dfc  size=80

void FUN_00490dfc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar1 = iRam00490e4c;
  iVar3 = 0;
  iVar2 = 0;
  do {
    pcVar4 = (char *)(iVar1 + iVar2 * 0x20);
    if (*pcVar4 == -1) {
      *pcVar4 = '\0';
      iVar3 = (int)(short)((short)iVar3 + 1);
      if (param_2 <= iVar3) {
        return;
      }
    }
    iVar2 = (int)(short)((short)iVar2 + 1);
  } while (iVar2 < 0xc);
  return;
}

