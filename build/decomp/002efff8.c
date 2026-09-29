// OoT3D decomp @ 002efff8  name=FUN_002efff8  size=132

undefined4 FUN_002efff8(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint extraout_r3;
  uint uVar4;
  bool bVar5;

  puVar2 = DAT_002f007c;
  iVar3 = FUN_00374be8(*DAT_002f007c,6);
  if (iVar3 == 0) {
    cVar1 = *(char *)(*(byte *)(DAT_002f0080 + 7) + DAT_002f0084);
    uVar4 = extraout_r3;
    if (cVar1 != '\a') {
      uVar4 = (uint)*(byte *)(*(byte *)(DAT_002f0080 + 8) + DAT_002f0084);
    }
    if (cVar1 != '\a' && uVar4 != 8) {
      return 2;
    }
    uVar4 = (uint)*(byte *)(DAT_002f0088 + 0x575);
    bVar5 = uVar4 == 0;
    if (bVar5) {
      uVar4 = puVar2[0x1c];
    }
    if (bVar5 && uVar4 == 0) {
      uVar4 = DAT_002f0084;
      if (cVar1 != '\a') {
        uVar4 = (uint)*(byte *)(*(byte *)(DAT_002f0080 + 8) + DAT_002f0084);
      }
      if (cVar1 == '\a' || uVar4 == 8) {
        return 1;
      }
    }
  }
  return 0;
}
