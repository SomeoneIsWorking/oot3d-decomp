// OoT3D decomp @ 00377a04  name=FUN_00377a04  size=72

undefined4 FUN_00377a04(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;

  cVar1 = *(char *)(DAT_00377a4c + 0x9e);
  bVar2 = cVar1 != '\x14';
  if (bVar2) {
    cVar1 = *(char *)(DAT_00377a4c + 0x9f);
  }
  bVar3 = cVar1 != '\x14';
  if (bVar2 && bVar3) {
    cVar1 = *(char *)(DAT_00377a4c + 0xa0);
  }
  if (((bVar2 && bVar3) && cVar1 != '\x14') && (*(char *)(DAT_00377a4c + 0xa1) != '\x14')) {
    return 0;
  }
  return 1;
}
