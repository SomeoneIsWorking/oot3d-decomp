// OoT3D decomp @ 0040cc18  name=FUN_0040cc18  size=32

char FUN_0040cc18(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;

  cVar1 = *(char *)(DAT_0040cc38 + 0x80);
  bVar2 = cVar1 == ';';
  bVar3 = cVar1 == '<';
  bVar4 = cVar1 != '=';
  if ((bVar2 || bVar3) || !bVar4) {
    cVar1 = '\x01';
  }
  if ((!bVar2 && !bVar3) && bVar4) {
    cVar1 = '\0';
  }
  return cVar1;
}
