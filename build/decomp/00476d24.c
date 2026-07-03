// OoT3D decomp @ 00476d24  name=FUN_00476d24  size=212

void FUN_00476d24(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  iVar3 = DAT_00476df8;
  cVar2 = *(char *)(DAT_00476df8 + 0x24);
  if ((cVar2 != '\0') && (2 < (uint)(*(int *)(DAT_00476df8 + 0xd8) - *(int *)(DAT_00476df8 + 0xac)))
     ) {
    if (*(char *)(DAT_00476df8 + 0x26) == *(char *)(DAT_00476df8 + 0x16)) {
      uVar4 = (uint)*(byte *)(DAT_00476df8 + 0x27);
      uVar5 = (uint)*(char *)(DAT_00476df8 + 0x1b);
      bVar6 = uVar4 == uVar5;
      if (bVar6) {
        uVar4 = (uint)*(byte *)(DAT_00476df8 + 0x28);
        uVar5 = (uint)*(char *)(DAT_00476df8 + 0x1c);
      }
      bVar7 = bVar6 && uVar4 == uVar5;
      if (bVar6 && uVar4 == uVar5) {
        bVar7 = *(char *)(DAT_00476df8 + 0x29) == *(char *)(DAT_00476df8 + 0x1a);
      }
      if (bVar7) {
        return;
      }
    }
    else {
      pcVar1 = (char *)(DAT_00476df8 + 0x3e);
      if (*(char *)(DAT_00476df8 + 0x16) == -1) {
        if (cVar2 == '\x02' && *pcVar1 == '\b') goto LAB_00476db0;
      }
      else {
        *(byte *)(DAT_00476df8 + 0x5b) = *(byte *)(DAT_00476df8 + 0x18) & 0x3f;
        *(char *)(iVar3 + 0x3e) = *pcVar1 + '\x01';
      }
      if (8 < *(byte *)(iVar3 + 0x3e)) {
        if (cVar2 == '\x02') {
LAB_00476db0:
          FUN_002cfe34(1);
          return;
        }
        *(undefined1 *)(iVar3 + 0x3e) = 1;
      }
    }
    FUN_002cfe34(0);
    *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar3 + 0xd8);
  }
  return;
}

