// OoT3D decomp @ 001c4130  name=FUN_001c4130  size=152

undefined4 FUN_001c4130(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = DAT_001c41cc;
  uVar4 = (uint)*(byte *)(DAT_001c41c8 + 0x18);
  iVar3 = 0;
  while (*(char *)(uVar4 + iVar3 + DAT_001c41cc + 0x8c) != '\x18') {
    iVar3 = (int)(short)((short)iVar3 + 1);
    if (3 < iVar3) {
      return 0;
    }
  }
  if (*(char *)(DAT_001c41cc + 0x81) == '\x18') {
    *(undefined *)(DAT_001c41cc + 0x81) = 0x14;
    uVar4 = (uint)*(byte *)(iVar2 + 0x85);
    iVar3 = 0;
  }
  else {
    if (*(char *)(DAT_001c41cc + 0x82) == '\x18') {
      *(undefined *)(DAT_001c41cc + 0x82) = 0x14;
      bVar1 = *(byte *)(iVar2 + 0x86);
    }
    else {
      if (*(char *)(DAT_001c41cc + 0x83) != '\x18') goto LAB_001c419c;
      *(undefined *)(DAT_001c41cc + 0x83) = 0x14;
      bVar1 = *(byte *)(iVar2 + 0x87);
    }
    uVar4 = (uint)bVar1;
    iVar3 = 0;
  }
LAB_001c419c:
  *(undefined *)(iVar3 + uVar4 + iVar2 + 0x8c) = 0x14;
  return 1;
}

