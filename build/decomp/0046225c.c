// OoT3D decomp @ 0046225c  name=FUN_0046225c  size=232

void FUN_0046225c(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  bool bVar4;

  iVar1 = DAT_00462344;
  if (*(char *)(DAT_00462344 + 0x33) == '\x01') {
    if (*(char *)(DAT_00462344 + 0x32) != *(char *)(DAT_00462344 + 0x31)) {
      FUN_00355fac(0,0,*(char *)(DAT_00462344 + 0x31),10);
      *(undefined1 *)(iVar1 + 0x32) = *(undefined1 *)(iVar1 + 0x31);
      *(undefined1 *)(iVar1 + 0x34) = 1;
    }
    *(undefined1 *)(iVar1 + 0x33) = 0;
  }
  else {
    cVar2 = *(char *)(DAT_00462344 + 0x34);
    bVar4 = cVar2 == '\x01';
    if (bVar4) {
      cVar2 = *(char *)(DAT_00462344 + 7);
    }
    if (bVar4 && cVar2 == '\0') {
      FUN_00355fac(0,0,0x7f,10);
      *(undefined1 *)(iVar1 + 0x32) = 0x7f;
      *(undefined1 *)(iVar1 + 0x34) = 0;
    }
  }
  if ((((*(char *)(iVar1 + 6) != '\0') && (iVar3 = FUN_0032c800(0), iVar3 != 0)) &&
      (cVar2 = *(char *)(iVar1 + 6) + -1, *(char *)(iVar1 + 6) = cVar2, cVar2 == '\0')) &&
     (cVar2 = *(char *)(DAT_00462348 + 7), *(char *)(iVar1 + 0x35) != cVar2)) {
    FUN_00355fac(0,0,cVar2,2);
    *(char *)(iVar1 + 0x35) = cVar2;
  }
  return;
}
