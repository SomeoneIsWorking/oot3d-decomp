// OoT3D decomp @ 002eb210  name=FUN_002eb210  size=232

undefined4 FUN_002eb210(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;

  iVar4 = *(int *)(DAT_002eb2fc + 0x50) + DAT_002eb2f8;
  iVar6 = DAT_002eb2f8 + *(int *)(DAT_002eb2fc + 0x54);
  if (*(int *)(DAT_002eb2f8 + 4) == 0) {
    bVar1 = *(byte *)(iVar6 + 0x13a2);
    bVar2 = *(byte *)(iVar4 + 0x13a2);
  }
  else {
    bVar2 = *(byte *)(iVar4 + 0x138a);
    bVar1 = *(byte *)(iVar6 + 0x138a);
  }
  cVar3 = -1;
  cVar5 = -1;
  if (bVar2 != 0xff) {
    cVar3 = *(char *)(DAT_002eb2f8 + (uint)bVar2 + 0x8c);
  }
  if (bVar1 != 0xff) {
    cVar5 = *(char *)(DAT_002eb2f8 + (uint)bVar1 + 0x8c);
  }
  if (cVar3 == '\x03') {
    if (cVar5 != '\x03') {
      return 0;
    }
  }
  else if (cVar3 == '8') {
    if (cVar5 != '8') {
      return 0;
    }
  }
  else if (cVar3 == '9') {
    if (cVar5 != '9') {
      return 0;
    }
  }
  else if (cVar3 != ':' || cVar5 != ':') {
    return 0;
  }
  iVar4 = *(int *)(DAT_002eb300 + 4);
  bVar7 = iVar4 == 0;
  if (bVar7) {
    iVar4 = *(int *)(DAT_002eb300 + 8);
  }
  bVar8 = bVar7 && iVar4 == 0;
  if (bVar7 && iVar4 == 0) {
    bVar8 = *(int *)(DAT_002eb300 + 0xc) == 0;
  }
  if ((!bVar8) && (*(int *)(DAT_002eb2f8 + 4) == 0)) {
    return 1;
  }
  return 0;
}
