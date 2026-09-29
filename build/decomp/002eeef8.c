// OoT3D decomp @ 002eeef8  name=FUN_002eeef8  size=112

undefined4 FUN_002eeef8(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar3 = *(int *)(DAT_002eef68 + 0xc);
  cVar1 = *(char *)(iVar3 + 0x100);
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)(iVar3 + 0x101);
  }
  if ((bVar4 && cVar1 == '\x02') && (iVar3 != 0)) {
    iVar2 = 0;
    do {
      if ((int)*(short *)(iVar3 + 0x104) == iVar2 + 0x51) {
        if ((*(uint *)(DAT_002eef70 + iVar2 * 4) & *(uint *)(DAT_002eef6c + 0xf50)) != 0) {
          return 1;
        }
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x14);
    return 1;
  }
  return 0;
}
