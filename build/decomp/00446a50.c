// OoT3D decomp @ 00446a50  name=FUN_00446a50  size=148

void FUN_00446a50(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;

  piVar3 = DAT_00446aec;
  iVar4 = *(int *)(DAT_00446ae4 + 0x50);
  bVar6 = *(int *)(DAT_00446ae8 + 4) == 0;
  if (bVar6) {
    cVar1 = *(char *)(DAT_00446ae8 + iVar4 + 0x13a2);
  }
  else {
    cVar1 = *(char *)(DAT_00446ae8 + iVar4 + 0x138a);
  }
  iVar5 = *(int *)(DAT_00446ae4 + 0x54);
  if (bVar6) {
    cVar2 = *(char *)(DAT_00446ae8 + iVar5 + 0x13a2);
  }
  else {
    cVar2 = *(char *)(DAT_00446ae8 + iVar5 + 0x138a);
  }
  *DAT_00446aec = -1;
  if ((((iVar4 == 5 || iVar4 == 0x17) || iVar4 == 0xb) || iVar4 == 0x11) && (cVar2 != -1)) {
    *piVar3 = iVar4;
  }
  piVar3[1] = -1;
  if ((((iVar5 == 5 || iVar5 == 0x17) || iVar5 == 0xb) || iVar5 == 0x11) && (cVar1 != -1)) {
    piVar3[1] = iVar5;
  }
  return;
}
