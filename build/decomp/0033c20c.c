// OoT3D decomp @ 0033c20c  name=FUN_0033c20c  size=72

int FUN_0033c20c(int param_1)

{
  char cVar1;
  int iVar2;

  iVar2 = 0;
  while( true ) {
    if (*(int *)(DAT_0033c254 + 4) == 0) {
      cVar1 = *(char *)(DAT_0033c254 + iVar2 + 0x13a2);
    }
    else {
      cVar1 = *(char *)(DAT_0033c254 + iVar2 + 0x138a);
    }
    if (cVar1 == *(char *)(DAT_0033c258 + param_1)) break;
    iVar2 = iVar2 + 1;
    if (0x17 < iVar2) {
      return 0xff;
    }
  }
  return iVar2;
}
