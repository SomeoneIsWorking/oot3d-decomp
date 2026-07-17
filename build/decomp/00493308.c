// OoT3D decomp @ 00493308  name=FUN_00493308  size=244

void FUN_00493308(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  ushort uVar5;
  bool bVar6;
  
  iVar3 = iRam004933fc;
  cVar1 = *(char *)(iRam004933fc + 0x2e);
  if (cVar1 == '\0') {
    sVar2 = *(short *)(iRam004933fc + 0x48);
    *(short *)(iRam004933fc + 0x48) = sVar2 + -1;
    if (sVar2 == 0) {
      if (*(byte *)(iVar3 + 0x2f) < 7) {
        *(undefined1 *)(iVar3 + 0x2e) = 1;
      }
      else {
        *(undefined1 *)(iVar3 + 0x2e) = 3;
        func_0x003523dc(0);
      }
      *(undefined2 *)(iVar3 + 0x48) = 0x4b0;
      return;
    }
  }
  else {
    if (cVar1 == '\x01') {
      func_0x00347cc4(0);
      func_0x003523dc(*(undefined1 *)(iVar3 + 0x2f));
      pcVar4 = pcRam00493400;
      *(char **)(iVar3 + 0xa8) = pcRam00493400;
      *(undefined1 *)(iVar3 + 0x1d) = 1;
      *(undefined4 *)(iVar3 + 0x98) = 0;
      *(undefined1 *)(iVar3 + 0x1e) = 0xff;
      *(undefined2 *)(iVar3 + 0x42) = 0;
      *(undefined2 *)(iVar3 + 0x44) = 0;
      cVar1 = *pcVar4;
      while (cVar1 == -1) {
        uVar5 = *(short *)(iVar3 + 0x42) + 1;
        *(ushort *)(iVar3 + 0x42) = uVar5;
        cVar1 = pcVar4[(uint)uVar5 * 8];
      }
      *(char *)(iVar3 + 0x2e) = *(char *)(iVar3 + 0x2e) + '\x01';
      *(char *)(iVar3 + 0x2f) = *(char *)(iVar3 + 0x2f) + '\x01';
      return;
    }
    bVar6 = cVar1 == '\x02';
    if (bVar6) {
      cVar1 = *(char *)(iRam004933fc + 0x59);
    }
    if (bVar6 && cVar1 == '\0') {
      *(undefined1 *)(iRam004933fc + 0x2e) = 0;
    }
  }
  return;
}

