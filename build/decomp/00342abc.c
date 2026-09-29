// OoT3D decomp @ 00342abc  name=FUN_00342abc  size=60

undefined4 FUN_00342abc(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  bVar1 = *(byte *)(param_2 + 0x11);
  iVar2 = *(int *)(param_1 + 0x20ac);
  bVar4 = (bVar1 & 8) != 0;
  iVar3 = iVar2;
  if (bVar4) {
    iVar3 = iVar2 + 0x2200;
    bVar1 = *(byte *)(iVar2 + 0x2227);
  }
  if ((bVar4 && bVar1 != 0) && (*(char *)(iVar3 + 0x26) == '\x16')) {
    return 1;
  }
  return 0;
}
