// OoT3D decomp @ 002e70d4  name=FUN_002e70d4  size=196

int FUN_002e70d4(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;

  iVar4 = *(int *)(DAT_002e7198 + 0xc);
  cVar1 = *(char *)(iVar4 + 0x100);
  bVar5 = cVar1 != '\x03';
  if (!bVar5) {
    cVar1 = *(char *)(iVar4 + 0x101);
  }
  if ((bVar5 || cVar1 != '\x02') || (iVar4 == 0)) {
    return 0;
  }
  uVar3 = DAT_002e7198;
  if (*(int *)(DAT_002e7198 + 0x18) == 1) {
    if (((*DAT_002e719c & 1) == 0) &&
       (uVar6 = FUN_003679b4(DAT_002e719c), uVar3 = (uint)((ulonglong)uVar6 >> 0x20),
       (int)uVar6 != 0)) {
      FUN_0036788c(DAT_002e71a0);
      uVar3 = DAT_002e71a8;
    }
    if ((0xc < *(byte *)(*(int *)(DAT_002e71ac + 0x2d4) + 8) - 3) &&
       (uVar6 = FUN_0043c1ec(), uVar3 = (uint)((ulonglong)uVar6 >> 0x20), (int)uVar6 == 0)) {
      iVar2 = 1;
      goto LAB_002e7180;
    }
  }
  iVar2 = 0;
LAB_002e7180:
  if (iVar2 != 0) {
    uVar3 = (uint)*(byte *)(DAT_002e71b0 + iVar4);
  }
  if (iVar2 != 0 && uVar3 != 0) {
    iVar2 = 2;
  }
  return iVar2;
}
