// OoT3D decomp @ 0047af90  name=FUN_0047af90  size=388

void FUN_0047af90(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;

  iVar12 = DAT_0047b114;
  iVar3 = DAT_003371b4;
  if ((*(uint *)(DAT_0047b114 + 0xdc) & 4) != 0 && (*(uint *)(DAT_0047b114 + 0xdc) & 0xf80) != 0) {
    uVar8 = *(uint *)(DAT_0047b114 + 0x94) & 0xffff;
    cVar1 = *(char *)(DAT_003371ac + 0x78c);
    if ((cVar1 != -1) && (DAT_003371b0 == uVar8 * 0x100000)) {
      uVar8 = uVar8 | 0x1000;
    }
    if ((((uVar8 == 0xcfff) && (uVar10 = DAT_003371b8, cVar1 != -1)) ||
        ((uVar8 == 0xfff && (uVar10 = DAT_003371bc, cVar1 != -1)))) ||
       (uVar10 = uVar8, uVar8 != 0xffff)) {
      *(uint *)(DAT_003371b4 + 0x94) = uVar10 + 0x80000000;
      *(undefined1 *)(iVar3 + 0x3c) = 0;
      *(undefined1 *)(iVar3 + 0x3d) = 0xe;
      if (uVar10 != 0xa000) {
        *(undefined1 *)(iVar3 + 0x3d) = 0xd;
      }
      *(ushort *)(iVar3 + 0x50) = (ushort)uVar10 & 0x3fff;
      *(undefined1 *)(iVar3 + 0x2c) = 8;
      iVar12 = DAT_003371c0;
      *(undefined1 *)(iVar3 + 0x3b) = 0;
      *(undefined1 *)(iVar3 + 0x2b) = 0;
      if (uVar10 + 0x80000000 == 0) {
        uVar6 = 0xff;
      }
      else {
        uVar6 = 0xfe;
      }
      *(undefined1 *)(iVar3 + 0x3e) = 0;
      *(undefined1 *)(iVar12 + 1) = uVar6;
      *(undefined1 *)(iVar3 + 0x14) = 1;
      uVar4 = DAT_003371c4;
      *(undefined2 *)(iVar3 + 0x46) = 0;
      FUN_0032b184(uVar4,0x1c);
      FUN_0032b184(DAT_003371c8,0x1c);
      FUN_0032b184(DAT_003371cc,0x1c);
      FUN_00343280(DAT_003371d0,0xe);
      if ((uVar10 & 0x8000) != 0) {
        *(undefined1 *)(iVar3 + 0x2c) = 0;
      }
      if ((uVar10 & 0x4000) != 0) {
        *(undefined1 *)(iVar3 + 0x3a) = 0;
      }
      iVar3 = DAT_003371d4;
      if ((uVar10 & 0xd000) != 0) {
        uVar8 = 0;
        uVar10 = 0;
        iVar12 = DAT_003371d4 + 0x4a0;
        do {
          uVar11 = (uint)*(byte *)(iVar3 + uVar10 * 8);
          uVar10 = uVar10 + 1 & 0xff;
          if (uVar11 != 0xff) {
            iVar9 = iVar3 + uVar8;
            uVar8 = uVar8 + 1 & 0xff;
            *(undefined1 *)(iVar9 + 0x51d) = *(undefined1 *)(iVar12 + uVar11);
          }
        } while (uVar8 < 8 && uVar10 < 0x10);
      }
    }
    else {
      *(undefined4 *)(DAT_003371b4 + 0x94) = 0;
      *(undefined1 *)(iVar3 + 0x14) = 0;
    }
    return;
  }
  cVar1 = *(char *)(DAT_0047b114 + 0x16);
  if (cVar1 == -1) {
    if (*(char *)(DAT_0047b114 + 0x3b) == '\0') {
      return;
    }
  }
  else if (*(char *)(DAT_0047b114 + 0x3b) == '\0') {
    *(undefined1 *)(DAT_0047b114 + 0x3b) = 1;
    *(undefined1 *)(iVar12 + 0x19) = 0xff;
  }
  iVar3 = DAT_0047b118;
  if (*(char *)(iVar12 + 0x17) != cVar1 && cVar1 != -1) {
    bVar7 = *(char *)(iVar12 + 0x3e) + 1;
    *(byte *)(iVar12 + 0x3e) = bVar7;
    if (8 < bVar7) {
      *(undefined1 *)(iVar12 + 0x3e) = 1;
    }
    if (*(char *)(iVar12 + 0x3a) == '\b') {
      FUN_0034338c(DAT_0047b118,iVar3 + 1,7);
    }
    else {
      *(char *)(iVar12 + 0x3a) = *(char *)(iVar12 + 0x3a) + '\x01';
    }
    iVar9 = (uint)*(byte *)(iVar12 + 0x3a) + iVar3;
    if ((int)*(char *)(iVar12 + 0x1a) + 0x14U < 0x29) {
      *(char *)(iVar9 + -1) = cVar1;
    }
    else {
      *(undefined1 *)(iVar9 + -1) = 0xff;
    }
    iVar5 = DAT_0047b120;
    iVar9 = DAT_0047b11c;
    uVar8 = (uint)*(byte *)(iVar12 + 0x3c);
    if (uVar8 < *(byte *)(iVar12 + 0x3d)) {
      do {
        if ((1 << uVar8 & 0xffffU & (uint)*(ushort *)(iVar12 + 0x50)) != 0) {
          uVar10 = 0;
          uVar11 = (uint)*(byte *)(iVar5 + uVar8 * 9);
          bVar2 = false;
          while (((uVar10 < uVar11 && (!bVar2)) && (uVar11 <= *(byte *)(iVar12 + 0x3a)))) {
            if (*(char *)(iVar9 + (uint)*(byte *)(uVar8 * 9 + iVar5 + uVar10 + 1)) ==
                *(char *)(iVar3 + (*(byte *)(iVar12 + 0x3a) - uVar11) + uVar10)) {
              uVar10 = uVar10 + 1 & 0xff;
            }
            else {
              bVar2 = true;
            }
          }
          if (uVar11 == uVar10) {
            *(char *)(iVar12 + 0x2b) = (char)uVar8 + '\x01';
            *(undefined1 *)(iVar12 + 0x14) = 0;
            *(undefined4 *)(iVar12 + 0x94) = 0;
          }
        }
        uVar8 = uVar8 + 1 & 0xff;
      } while (uVar8 < *(byte *)(iVar12 + 0x3d));
    }
  }
  return;
}
