// OoT3D decomp @ 002eb0d8  name=FUN_002eb0d8  size=216

undefined4 FUN_002eb0d8(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;

  iVar2 = *(int *)(DAT_002eb1b0 + 0x50);
  uVar5 = DAT_002eb1b4 + iVar2 + 0x1000;
  uVar8 = *(uint *)(DAT_002eb1b4 + 4);
  iVar4 = *(int *)(DAT_002eb1b0 + 0x54);
  if (uVar8 == 0) {
    uVar5 = (uint)*(byte *)(DAT_002eb1b4 + iVar2 + 0x13a2);
  }
  if (uVar8 == 0) {
    bVar1 = *(byte *)(DAT_002eb1b4 + iVar4 + 0x13a2);
  }
  else {
    uVar5 = (uint)*(byte *)(uVar5 + 0x38a);
    bVar1 = *(byte *)(DAT_002eb1b4 + iVar4 + 0x138a);
  }
  uVar6 = (uint)*(byte *)(DAT_002eb1b4 + uVar5 + 0x8c);
  uVar7 = (uint)*(byte *)(DAT_002eb1b4 + (uint)bVar1 + 0x8c);
  if ((((bVar1 == 0xff) || (((iVar2 != 5 && iVar2 != 0x17) && iVar2 != 0xb) && iVar2 != 0x11)) ||
      ((uVar3 = (uint)*(byte *)(DAT_002eb1b8 + uVar7), uVar3 == 9 || uVar8 == uVar3 &&
       (uVar7 != 0x2c)))) &&
     (((uVar5 == 0xff || (((iVar4 != 5 && iVar4 != 0x17) && iVar4 != 0xb) && iVar4 != 0x11)) ||
      ((uVar5 = (uint)*(byte *)(DAT_002eb1b8 + uVar6), uVar5 == 9 || uVar8 == uVar5 &&
       (uVar6 != 0x2c)))))) {
    return 1;
  }
  return 0;
}
