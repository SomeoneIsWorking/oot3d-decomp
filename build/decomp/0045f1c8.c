// OoT3D decomp @ 0045f1c8  name=FUN_0045f1c8  size=824

void FUN_0045f1c8(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined2 uVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;

  iVar10 = DAT_0045f500;
  iVar12 = DAT_0045f500 + 0x8c;
  uVar2 = *(undefined1 *)(DAT_0045f500 + 0x85);
  uVar3 = *(undefined1 *)(DAT_0045f500 + 0x86);
  uVar4 = *(undefined1 *)(DAT_0045f500 + 0x87);
  uVar5 = *(undefined1 *)(DAT_0045f500 + 0x88);
  puVar1 = (undefined1 *)(DAT_0045f500 + 0x81);
  uVar6 = *(undefined1 *)(DAT_0045f500 + 0x82);
  uVar7 = *(undefined1 *)(DAT_0045f500 + 0x83);
  bVar8 = *(byte *)(DAT_0045f500 + 0x84);
  uVar9 = *(undefined2 *)(DAT_0045f500 + 0x8a);
  if (*(int *)(DAT_0045f500 + 4) == 0) {
    *(undefined1 *)(DAT_0045f500 + 0x60) = *(undefined1 *)(DAT_0045f500 + 0x80);
    *(undefined1 *)(iVar10 + 0x61) = *puVar1;
    *(undefined1 *)(iVar10 + 0x65) = uVar2;
    *(undefined1 *)(iVar10 + 0x62) = uVar6;
    *(undefined1 *)(iVar10 + 0x66) = uVar3;
    *(undefined1 *)(iVar10 + 99) = uVar7;
    *(undefined1 *)(iVar10 + 0x67) = uVar4;
    *(byte *)(iVar10 + 100) = bVar8;
    *(undefined1 *)(iVar10 + 0x68) = uVar5;
    *(undefined2 *)(iVar10 + 0x6a) = uVar9;
    uVar13 = (uint)*(byte *)(iVar10 + 0x54);
    if (uVar13 == 0xff) goto LAB_0045f4b0;
    *(byte *)(iVar10 + 0x80) = *(byte *)(iVar10 + 0x54);
    uVar14 = uVar13 - 0x14;
    bVar16 = 0xb < uVar14;
    bVar15 = uVar14 == 0xc;
    if (0xc < uVar14) {
      bVar16 = 0x15 < uVar13 - 0x21;
      bVar15 = uVar13 - 0x21 == 0x16;
    }
    if (!bVar16 || bVar15) {
      *(undefined1 *)(iVar10 + 0x80) = *(undefined1 *)((uint)bVar8 + iVar12);
    }
    *(undefined1 *)(iVar10 + 0x81) = *(undefined1 *)(iVar10 + 0x55);
    *(undefined1 *)(iVar10 + 0x85) = *(undefined1 *)(iVar10 + 0x59);
    uVar13 = *(byte *)(iVar10 + 0x81) - 0x14;
    bVar16 = 0xb < uVar13;
    bVar15 = uVar13 == 0xc;
    if (0xc < uVar13) {
      uVar13 = *(byte *)(iVar10 + 0x81) - 0x21;
      bVar16 = 0x15 < uVar13;
      bVar15 = uVar13 == 0x16;
    }
    if (!bVar16 || bVar15) {
      *(undefined1 *)(iVar10 + 0x81) = *(undefined1 *)((uint)*(byte *)(iVar10 + 0x85) + iVar12);
    }
    *(undefined1 *)(iVar10 + 0x82) = *(undefined1 *)(iVar10 + 0x56);
    *(undefined1 *)(iVar10 + 0x86) = *(undefined1 *)(iVar10 + 0x5a);
    uVar13 = *(byte *)(iVar10 + 0x82) - 0x14;
    bVar16 = 0xb < uVar13;
    bVar15 = uVar13 == 0xc;
    if (0xc < uVar13) {
      uVar13 = *(byte *)(iVar10 + 0x82) - 0x21;
      bVar16 = 0x15 < uVar13;
      bVar15 = uVar13 == 0x16;
    }
    if (!bVar16 || bVar15) {
      *(undefined1 *)(iVar10 + 0x82) = *(undefined1 *)((uint)*(byte *)(iVar10 + 0x86) + iVar12);
    }
    *(undefined1 *)(iVar10 + 0x83) = *(undefined1 *)(iVar10 + 0x57);
    *(undefined1 *)(iVar10 + 0x87) = *(undefined1 *)(iVar10 + 0x5b);
    uVar13 = *(byte *)(iVar10 + 0x83) - 0x14;
    bVar16 = 0xb < uVar13;
    bVar15 = uVar13 == 0xc;
    if (0xc < uVar13) {
      uVar13 = *(byte *)(iVar10 + 0x83) - 0x21;
      bVar16 = 0x15 < uVar13;
      bVar15 = uVar13 == 0x16;
    }
    if (!bVar16 || bVar15) {
      *(undefined1 *)(iVar10 + 0x83) = *(undefined1 *)((uint)*(byte *)(iVar10 + 0x87) + iVar12);
    }
    *(undefined1 *)(iVar10 + 0x84) = *(undefined1 *)(iVar10 + 0x58);
    *(undefined1 *)(iVar10 + 0x88) = *(undefined1 *)(iVar10 + 0x5c);
    uVar13 = *(byte *)(iVar10 + 0x84) - 0x14;
    bVar16 = 0xb < uVar13;
    bVar15 = uVar13 == 0xc;
    if (0xc < uVar13) {
      uVar13 = *(byte *)(iVar10 + 0x84) - 0x21;
      bVar16 = 0x15 < uVar13;
      bVar15 = uVar13 == 0x16;
    }
    if (!bVar16 || bVar15) {
      *(undefined1 *)(iVar10 + 0x84) = *(undefined1 *)((uint)*(byte *)(iVar10 + 0x88) + iVar12);
    }
    uVar11 = *(ushort *)(iVar10 + 0x5e) & 0xfff0;
    *(ushort *)(iVar10 + 0x8a) = uVar11;
    uVar11 = uVar11 | 1;
  }
  else {
    *(undefined1 *)(DAT_0045f500 + 0x54) = 0x3b;
    *(undefined1 *)(iVar10 + 0x55) = *puVar1;
    *(undefined1 *)(iVar10 + 0x59) = uVar2;
    *(undefined1 *)(iVar10 + 0x56) = uVar6;
    *(undefined1 *)(iVar10 + 0x5a) = uVar3;
    *(undefined1 *)(iVar10 + 0x57) = uVar7;
    *(undefined1 *)(iVar10 + 0x5b) = uVar4;
    *(byte *)(iVar10 + 0x58) = bVar8;
    *(undefined1 *)(iVar10 + 0x5c) = uVar5;
    *(undefined2 *)(iVar10 + 0x5e) = uVar9;
    uVar13 = (uint)*(byte *)(iVar10 + 0x60);
    if (uVar13 != 0xff) {
      *(byte *)(iVar10 + 0x80) = *(byte *)(iVar10 + 0x60);
      uVar14 = uVar13 - 0x14;
      bVar16 = 0xb < uVar14;
      bVar15 = uVar14 == 0xc;
      if (0xc < uVar14) {
        bVar16 = 0x15 < uVar13 - 0x21;
        bVar15 = uVar13 - 0x21 == 0x16;
      }
      if (!bVar16 || bVar15) {
        *(undefined1 *)(iVar10 + 0x80) = *(undefined1 *)((uint)bVar8 + iVar12);
      }
      *(undefined1 *)(iVar10 + 0x81) = *(undefined1 *)(iVar10 + 0x61);
      *(undefined1 *)(iVar10 + 0x85) = *(undefined1 *)(iVar10 + 0x65);
      uVar13 = *(byte *)(iVar10 + 0x81) - 0x14;
      bVar16 = 0xb < uVar13;
      bVar15 = uVar13 == 0xc;
      if (0xc < uVar13) {
        uVar13 = *(byte *)(iVar10 + 0x81) - 0x21;
        bVar16 = 0x15 < uVar13;
        bVar15 = uVar13 == 0x16;
      }
      if (!bVar16 || bVar15) {
        *(undefined1 *)(iVar10 + 0x81) = *(undefined1 *)((uint)*(byte *)(iVar10 + 0x85) + iVar12);
      }
      *(undefined1 *)(iVar10 + 0x82) = *(undefined1 *)(iVar10 + 0x62);
      *(undefined1 *)(iVar10 + 0x86) = *(undefined1 *)(iVar10 + 0x66);
      uVar13 = *(byte *)(iVar10 + 0x82) - 0x14;
      bVar16 = 0xb < uVar13;
      bVar15 = uVar13 == 0xc;
      if (0xc < uVar13) {
        uVar13 = *(byte *)(iVar10 + 0x82) - 0x21;
        bVar16 = 0x15 < uVar13;
        bVar15 = uVar13 == 0x16;
      }
      if (!bVar16 || bVar15) {
        *(undefined1 *)(iVar10 + 0x82) = *(undefined1 *)((uint)*(byte *)(iVar10 + 0x86) + iVar12);
      }
      *(undefined1 *)(iVar10 + 0x83) = *(undefined1 *)(iVar10 + 99);
      *(undefined1 *)(iVar10 + 0x87) = *(undefined1 *)(iVar10 + 0x67);
      uVar13 = *(byte *)(iVar10 + 0x83) - 0x14;
      bVar16 = 0xb < uVar13;
      bVar15 = uVar13 == 0xc;
      if (0xc < uVar13) {
        uVar13 = *(byte *)(iVar10 + 0x83) - 0x21;
        bVar16 = 0x15 < uVar13;
        bVar15 = uVar13 == 0x16;
      }
      if (!bVar16 || bVar15) {
        *(undefined1 *)(iVar10 + 0x83) = *(undefined1 *)((uint)*(byte *)(iVar10 + 0x87) + iVar12);
      }
      *(undefined1 *)(iVar10 + 0x84) = *(undefined1 *)(iVar10 + 100);
      *(undefined1 *)(iVar10 + 0x88) = *(undefined1 *)(iVar10 + 0x68);
      uVar13 = *(byte *)(iVar10 + 0x84) - 0x14;
      bVar16 = 0xb < uVar13;
      bVar15 = uVar13 == 0xc;
      if (0xc < uVar13) {
        uVar13 = *(byte *)(iVar10 + 0x84) - 0x21;
        bVar16 = 0x15 < uVar13;
        bVar15 = uVar13 == 0x16;
      }
      if (!bVar16 || bVar15) {
        *(undefined1 *)(iVar10 + 0x84) = *(undefined1 *)((uint)*(byte *)(iVar10 + 0x88) + iVar12);
      }
      *(undefined2 *)(iVar10 + 0x8a) = *(undefined2 *)(iVar10 + 0x6a);
      goto LAB_0045f4b0;
    }
    *(undefined1 *)(iVar10 + 0x80) = 0x3c;
    if (*(char *)(iVar10 + 0x8d) == -1) {
      *(undefined1 *)(iVar10 + 0x85) = 0xff;
      *(undefined1 *)(iVar10 + 0x81) = 0xff;
    }
    else {
      *(undefined1 *)(iVar10 + 0x81) = 1;
      *(undefined1 *)(iVar10 + 0x85) = 1;
    }
    *(undefined1 *)(iVar10 + 0x82) = 2;
    *(undefined1 *)(iVar10 + 0x83) = *(undefined1 *)(iVar10 + 0x93);
    *(undefined1 *)(iVar10 + 0x86) = 2;
    *(undefined1 *)(iVar10 + 0x87) = 7;
    uVar11 = (ushort)DAT_0045f504;
  }
  *(ushort *)(iVar10 + 0x8a) = uVar11;
LAB_0045f4b0:
  uVar11 = *(ushort *)(DAT_0045f508 + 2) & *(ushort *)(iVar10 + 0x8a);
  if ((uVar11 != 0) &&
     ((*(uint *)(DAT_0045f510 + (uint)(uVar11 >> *(sbyte *)(DAT_0045f50c + 1)) * 4 + 0xc) &
      (uint)*(ushort *)(iVar10 + 0xb6)) == 0)) {
    *(ushort *)(iVar10 + 0x8a) = *(ushort *)(iVar10 + 0x8a) & *(ushort *)(DAT_0045f514 + 2);
  }
  return;
}
