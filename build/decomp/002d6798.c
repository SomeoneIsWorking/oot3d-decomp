// OoT3D decomp @ 002d6798  name=FUN_002d6798  size=660

void FUN_002d6798(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined uVar7;
  uint uVar8;
  uint extraout_r1;
  uint uVar9;
  bool bVar10;
  
  iVar2 = DAT_002d6a2c;
  uVar5 = *(uint *)(DAT_002d6a2c + 0x94);
  bVar10 = uVar5 != 0;
  if (bVar10) {
    uVar5 = (uint)*(byte *)(DAT_002d6a2c + 0x2d);
  }
  if (bVar10 && uVar5 != 0) {
    *(char *)(DAT_002d6a2c + 0x2d) = (char)uVar5 + -1;
    return;
  }
  *(undefined *)(DAT_002d6a2c + 0x13) = 0;
  uVar5 = *(uint *)(iVar2 + 0xdc);
  if ((*(uint *)(iVar2 + 0xe0) != 0) && ((*(uint *)(iVar2 + 0xe0) & 0xf80) == (uVar5 & 0xf80))) {
    return;
  }
  *(undefined4 *)(iVar2 + 0xe0) = 0;
  *(undefined *)(iVar2 + 0x16) = 0xff;
  *(undefined *)(iVar2 + 0x18) = 0xff;
  uVar8 = DAT_002d6a30 & uVar5;
  uVar9 = uVar8 & ~*(uint *)(iVar2 + 0xe4);
  if (uVar9 == 0) {
    if ((*(uint *)(iVar2 + 0xe8) & uVar8) == 0) {
      *(undefined4 *)(iVar2 + 0xe8) = 0;
    }
  }
  else {
    *(uint *)(iVar2 + 0xe8) = uVar9 & uVar8;
  }
  iVar6 = DAT_002d6a2c;
  if (uVar8 == 0) {
    *(undefined4 *)(iVar2 + 0xe8) = 0;
  }
  uVar8 = *(uint *)(iVar2 + 0xe8);
  cVar1 = *(char *)(iVar6 + 0x24);
  if ((uVar8 & 0x80) == 0) {
    if ((uVar8 & 0x200) != 0) {
      *(undefined *)(iVar2 + 0x16) = 5;
      uVar7 = 1;
LAB_002d6884:
      *(undefined *)(iVar2 + 0x18) = uVar7;
      goto LAB_002d68a4;
    }
    if ((uVar8 & 0x800) != 0) {
      *(undefined *)(iVar2 + 0x16) = 9;
      *(undefined *)(iVar2 + 0x18) = 2;
      goto LAB_002d68a4;
    }
    if ((uVar8 & 0x400) != 0) {
      *(undefined *)(iVar2 + 0x16) = 0xb;
      uVar7 = 3;
      goto LAB_002d6884;
    }
    if ((uVar8 & 0x100) != 0) {
      *(undefined *)(iVar2 + 0x16) = 0xe;
      *(undefined *)(iVar2 + 0x18) = 4;
      goto LAB_002d68a4;
    }
LAB_002d68f8:
    if (cVar1 == '\x02') {
LAB_002d6994:
      uVar4 = DAT_002d6a40;
      *(undefined *)(iVar2 + 0x1a) = 0;
      *(undefined4 *)(iVar2 + 0x8c) = uVar4;
      *(undefined *)(iVar2 + 0x1c) = 0;
      goto LAB_002d69a4;
    }
  }
  else {
    *(undefined *)(iVar2 + 0x16) = 2;
    *(undefined *)(iVar2 + 0x18) = 0;
LAB_002d68a4:
    if ((uVar5 & 2) != 0 && cVar1 != '\x02') {
      *(char *)(iVar2 + 0x18) = *(char *)(iVar2 + 0x18) + -0x80;
      *(char *)(iVar2 + 0x16) = *(char *)(iVar2 + 0x16) + '\x01';
    }
    uVar8 = (uint)*(byte *)(iVar2 + 0x16);
    bVar10 = uVar8 == 0xff;
    if (!bVar10) {
      bVar10 = (uVar5 & 1) == 0;
    }
    if (bVar10) goto LAB_002d68f8;
    if (cVar1 == '\x02') goto LAB_002d6994;
    *(char *)(iVar2 + 0x18) = *(char *)(iVar2 + 0x18) + '@';
    *(byte *)(iVar2 + 0x16) = *(byte *)(iVar2 + 0x16) - 1;
  }
  pcVar3 = DAT_002d6a34;
  iVar6 = (int)DAT_002d6a34[1];
  *(char *)(iVar2 + 0x1a) = DAT_002d6a34[1];
  if (iVar6 < 0x41) {
    if (iVar6 + 0x40 < 0 == SCARRY4(iVar6,0x40)) {
      if (iVar6 < 0) {
        iVar6 = (int)(char)((int)(iVar6 * 0x80 + ((uint)(iVar6 * 0x80 >> 0x1f) >> 0x1a)) >> 6);
      }
      else {
        iVar6 = (int)(char)((int)(iVar6 * 0x7f + ((uint)(iVar6 * 0x7f >> 0x1f) >> 0x1a)) >> 6);
      }
    }
    else {
      iVar6 = -0x80;
    }
  }
  else {
    iVar6 = 0x7f;
  }
  *(undefined4 *)(iVar2 + 0x8c) = *(undefined4 *)(DAT_002d6a38 + iVar6 * 4 + 0x200);
  iVar6 = (int)*pcVar3;
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  *(char *)(iVar2 + 0x1c) = (char)(iVar6 >> 2);
  FUN_002cfe00(DAT_002d6a3c,iVar6 >> 2 & 0xff);
  uVar8 = extraout_r1;
LAB_002d69a4:
  uVar5 = (uint)*(byte *)(iVar2 + 0x16);
  if (uVar5 != 0xff) {
    uVar8 = (uint)*(byte *)(iVar2 + 0x17);
  }
  if (uVar5 == 0xff || uVar8 == uVar5) {
    if ((*(char *)(iVar2 + 0x17) != -1) && (uVar5 == 0xff)) {
      FUN_0048961c(DAT_002d6a4c);
      return;
    }
  }
  else if (*(char *)(DAT_002d6a44 + 5) == '\0') {
    FUN_002cfd24(DAT_002d6a3c,*(char *)(iVar2 + 0x15) + -1);
    FUN_002cfd74(DAT_002d6a3c,DAT_002d6a48 + -4);
    FUN_002cfcf0(DAT_002d6a3c,*(undefined *)(iVar2 + 0x16));
    FUN_002cfe00(DAT_002d6a3c,0);
    return;
  }
  return;
}

