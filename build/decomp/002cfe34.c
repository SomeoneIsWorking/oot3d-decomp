// OoT3D decomp @ 002cfe34  name=FUN_002cfe34  size=844

void FUN_002cfe34(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  
  iVar1 = DAT_002d0180;
  cVar3 = -1;
  if (*(char *)(DAT_002d0180 + 0x24) == '\x01') {
    iVar8 = *(int *)(DAT_002d0180 + 0xb0);
  }
  else {
    iVar8 = *(int *)(DAT_002d0180 + 0xb4);
  }
  *(undefined1 *)(iVar8 + (uint)*(byte *)(DAT_002d0180 + 0x25) * 8) =
       *(undefined1 *)(DAT_002d0180 + 0x26);
  *(short *)(iVar8 + (uint)*(byte *)(iVar1 + 0x25) * 8 + 2) =
       (short)*(undefined4 *)(iVar1 + 0xd8) - (short)*(undefined4 *)(iVar1 + 0xac);
  *(undefined1 *)(iVar8 + (uint)*(byte *)(iVar1 + 0x25) * 8 + 4) = *(undefined1 *)(iVar1 + 0x27);
  *(undefined1 *)(iVar8 + (uint)*(byte *)(iVar1 + 0x25) * 8 + 5) = *(undefined1 *)(iVar1 + 0x28);
  *(undefined1 *)(iVar8 + (uint)*(byte *)(iVar1 + 0x25) * 8 + 6) = *(undefined1 *)(iVar1 + 0x29);
  *(byte *)(iVar8 + (uint)*(byte *)(iVar1 + 0x25) * 8 + 7) = *(byte *)(iVar1 + 0x2a) & 0xc0;
  *(undefined1 *)(iVar1 + 0x26) = *(undefined1 *)(iVar1 + 0x16);
  *(undefined1 *)(iVar1 + 0x27) = *(undefined1 *)(iVar1 + 0x1b);
  *(undefined1 *)(iVar1 + 0x28) = *(undefined1 *)(iVar1 + 0x1c);
  *(undefined1 *)(iVar1 + 0x29) = *(undefined1 *)(iVar1 + 0x1a);
  *(undefined1 *)(iVar1 + 0x2a) = *(undefined1 *)(iVar1 + 0x18);
  bVar4 = *(char *)(iVar1 + 0x25) + 1;
  uVar5 = (uint)bVar4;
  *(byte *)(iVar1 + 0x25) = bVar4;
  uVar10 = uVar5;
  if ((uVar5 != 0x6b) && (param_1 == 0)) {
    return;
  }
  while ((uVar10 != 0 && (cVar3 == -1))) {
    uVar10 = uVar10 - 1 & 0xffff;
    cVar3 = *(char *)(iVar8 + uVar10 * 8);
  }
  if (uVar5 != uVar10 + 1) {
    *(char *)(iVar1 + 0x25) = (char)(uVar10 + 2);
    *(undefined2 *)(iVar8 + (uVar10 + 2 & 0xff) * 8 + -6) = 0;
  }
  *(undefined2 *)(iVar8 + (uint)*(byte *)(iVar1 + 0x25) * 8 + 2) = 0;
  if ((*(char *)(iVar1 + 0x24) == '\x02') && (7 < *(byte *)(iVar1 + 0x3e))) {
    if (*(byte *)(iVar1 + 0x25) != 0) {
      if ((*(byte *)(iVar1 + 0x25) & 1) != 0) {
        FUN_002f48d4(iVar8,iVar8 + 8);
        iVar8 = iVar8 + 8;
      }
      for (uVar10 = (uint)(*(byte *)(iVar1 + 0x25) >> 1); uVar10 != 0; uVar10 = uVar10 - 1) {
        FUN_002f48d4(iVar8);
        FUN_002f48d4(iVar8 + 8,iVar8 + 0x10);
        iVar8 = iVar8 + 0x10;
      }
    }
    iVar8 = DAT_002d0184;
    uVar10 = 0;
    uVar5 = 0;
    iVar7 = DAT_002d0184 + 0x400;
    iVar9 = DAT_002d0184 + 0x410;
    do {
      uVar6 = (uint)*(byte *)(iVar8 + uVar5 * 8);
      uVar5 = uVar5 + 1 & 0xff;
      if (uVar6 != 0xff) {
        iVar11 = iVar9 + uVar10;
        uVar10 = uVar10 + 1 & 0xff;
        *(undefined1 *)(iVar11 + 0x6d) = *(undefined1 *)(iVar7 + uVar6);
      }
      iVar11 = DAT_002d0188;
    } while (uVar10 < 8 && uVar5 < 0x10);
    uVar10 = 0;
    do {
      uVar6 = 0;
      uVar5 = (uint)*(byte *)(iVar9 + uVar10 * 9);
      if (0 < (int)(9 - uVar5)) {
        do {
          for (uVar2 = 0;
              ((uVar2 < uVar5 && (uVar2 + uVar6 < 8)) &&
              (*(char *)(uVar10 * 9 + iVar9 + uVar2 + 1) == *(char *)(uVar2 + uVar6 + iVar9 + 0x6d))
              ); uVar2 = uVar2 + 1 & 0xff) {
          }
          if (uVar5 == uVar2) goto LAB_002d00cc;
          uVar6 = uVar6 + 1 & 0xff;
        } while ((int)uVar6 < (int)(9 - uVar5));
      }
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < 0xc);
    uVar10 = 1;
    do {
      if (*(char *)(iVar8 + 0x47d) != *(char *)(iVar9 + uVar10 + 0x6d)) goto LAB_002d00dc;
      uVar10 = uVar10 + 1 & 0xffff;
    } while (uVar10 < 8);
    if (uVar10 == 8) {
LAB_002d00cc:
      *(undefined1 *)(iVar1 + 0x24) = 0xff;
      *(undefined1 *)(iVar11 + 0x78c) = 0xff;
      return;
    }
LAB_002d00dc:
    if (*(byte *)(iVar1 + 0x25) != 0) {
      iVar7 = DAT_002d018c + -0xa0;
      iVar8 = DAT_002d018c;
      if ((*(byte *)(iVar1 + 0x25) & 1) != 0) {
        iVar8 = DAT_002d018c + 8;
        iVar7 = DAT_002d018c + -0x98;
        FUN_002f48d4(iVar7,iVar8);
      }
      FUN_002f48d4(auStack_2c,iVar8 + 8);
      uVar10 = (uint)(*(byte *)(iVar1 + 0x25) >> 1);
      if (uVar10 != 0) {
        do {
          FUN_002f48d4(auStack_34,iVar8 + 0x10);
          FUN_002f48d4(iVar7 + 8,auStack_2c);
          FUN_002f48d4(auStack_2c,iVar8 + 0x18);
          iVar7 = iVar7 + 0x10;
          FUN_002f48d4(iVar7,auStack_34);
          uVar10 = uVar10 - 1;
          iVar8 = iVar8 + 0x10;
        } while (uVar10 != 0);
      }
    }
    *(undefined1 *)(iVar1 + 0x14) = 0;
  }
  *(undefined1 *)(iVar1 + 0x24) = 0;
  return;
}

