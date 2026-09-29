// OoT3D decomp @ 00449a18  name=FUN_00449a18  size=824

void FUN_00449a18(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 extraout_r1;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;

  puVar2 = DAT_00449d54;
  FUN_00343280(DAT_00449d54 + 0xc,DAT_00449d50);
  iVar8 = DAT_00449d60;
  iVar5 = DAT_00449d5c;
  puVar9 = DAT_00449d58;
  piVar4 = DAT_00449d58 + 9;
  *piVar4 = DAT_00449d5c;
  iVar10 = 1;
  iVar12 = 4;
  *puVar9 = 0;
  do {
    iVar12 = iVar12 + -1;
    iVar13 = iVar10 * DAT_00449d64;
    iVar10 = iVar10 + 2;
    piVar4[1] = iVar5 + iVar13 * 8;
    puVar9[1] = 0;
    piVar4 = piVar4 + 2;
    *piVar4 = iVar8 + iVar13 * 8;
    puVar9 = puVar9 + 2;
    *puVar9 = 0;
  } while (iVar12 != 0);
  puVar2[5] = 0;
  uVar7 = DAT_00449d68;
  puVar2[6] = 0;
  FUN_00371738(puVar2 + 0xc,uVar7,0x50);
  FUN_0034338c(puVar2 + 0x20,DAT_00449d6c,0xc);
  FUN_00371738(puVar2 + 0x23,DAT_00449d70,0x60);
  iVar5 = DAT_00449d74;
  *(undefined2 *)(DAT_00449d74 + 0xd8) = *(undefined2 *)(DAT_00449d78 + 2);
  *(undefined2 *)(iVar5 + -0x9c) = 0x51;
  *(short *)(iVar5 + -0x9a) = (short)DAT_00449d7c;
  *(undefined2 *)(iVar5 + -0x98) = 0x48;
  *(short *)(iVar5 + -0x96) = (short)DAT_00449d80;
  *(short *)(iVar5 + -0x94) = (short)DAT_00449d84;
  *(ushort *)(iVar5 + -0x4f0) = *(ushort *)(iVar5 + -0x4f0) | 0x5009;
  *(ushort *)(iVar5 + -0x514) = *(ushort *)(iVar5 + -0x514) | 0x123f;
  *(ushort *)(iVar5 + -0x504) = *(ushort *)(iVar5 + -0x504) | 1;
  *(ushort *)(iVar5 + -0x4fc) = *(ushort *)(iVar5 + -0x4fc) | 0x10;
  if (puVar2[1] != 0) {
    *(undefined1 *)(puVar2 + 0x20) = 0x3b;
    FUN_0033187c(0,1);
    if (*(int *)(iVar5 + 0xdc) == 0xff) {
      *(undefined1 *)((int)puVar2 + 0x81) = 6;
      *(undefined1 *)((int)puVar2 + 0x85) = 6;
      FUN_0033187c(1);
    }
  }
  *(undefined4 *)(iVar5 + 0xdc) = 0;
  FUN_002eb05c();
  uVar7 = extraout_r1;
  if (((*DAT_00449d88 & 1) == 0) &&
     (uVar14 = FUN_003679b4(DAT_00449d88), uVar7 = (int)((ulonglong)uVar14 >> 0x20),
     (int)uVar14 != 0)) {
    FUN_0036788c(DAT_00449d8c);
    uVar7 = DAT_00449d94;
  }
  iVar5 = FUN_002e2424(DAT_00449d98,uVar7);
  if (iVar5 == 0) {
    bVar3 = FUN_003062f8(DAT_00449d9c);
    *(byte *)(puVar2 + 0xb) = bVar3;
    FUN_0034338c(puVar2 + 7,DAT_00449d9c,(uint)bVar3 << 1);
  }
  else {
    bVar3 = FUN_003062f8(DAT_00449da0);
    *(byte *)(puVar2 + 0xb) = bVar3;
    FUN_0034338c(puVar2 + 7,DAT_00449da0,(uint)bVar3 << 1);
  }
  uVar11 = *(uint *)(DAT_00449da4 + 0x54);
  *puVar2 = DAT_00449da8;
  puVar2[0x2f] = puVar2[0x2f] | uVar11;
  *(undefined1 *)((int)puVar2 + 0x46) = 0;
  puVar2[0x5f] = 0x40000000;
  iVar5 = 0xd;
  puVar6 = DAT_00449dac;
  do {
    iVar5 = iVar5 + -1;
    puVar6[1] = 0xff;
    puVar6 = puVar6 + 2;
    *puVar6 = 0xff;
  } while (iVar5 != 0);
  iVar5 = 0xc;
  puVar6 = DAT_00449db0;
  do {
    iVar5 = iVar5 + -1;
    puVar6[1] = 0xff;
    puVar6 = puVar6 + 2;
    *puVar6 = 0xff;
  } while (iVar5 != 0);
  iVar5 = 0xc;
  puVar6 = DAT_00449db4;
  do {
    iVar5 = iVar5 + -1;
    puVar6[1] = 0xff;
    puVar6 = puVar6 + 2;
    *puVar6 = 0xff;
  } while (iVar5 != 0);
  *(undefined1 *)((int)puVar2 + 0x2d) = 1;
  FUN_0033c25c(0);
  if (puVar2[1] == 0) {
    uVar7 = FUN_0033c20c(3);
    FUN_0033c1b8(uVar7,5);
  }
  else {
    uVar7 = FUN_0033c20c(6);
    FUN_0033c1b8(uVar7,5);
  }
  uVar7 = FUN_0033c20c(2);
  FUN_0033c1b8(uVar7,0xb);
  uVar7 = FUN_0033c20c(0);
  FUN_0033c1b8(uVar7,0x11);
  iVar5 = DAT_0033c208;
  iVar8 = 0;
  do {
    if ((uint)*(byte *)((int)puVar2 + iVar8 + 0x138a) == *(byte *)(DAT_00449db8 + 0x15) + 1) {
      iVar8 = iVar8 + DAT_0033c208;
      if (*(int *)(DAT_0033c208 + 4) == 0) {
        uVar1 = *(undefined1 *)(iVar8 + 0x13a2);
        *(undefined1 *)(iVar8 + 0x13a2) = *(undefined1 *)(DAT_0033c208 + 0x13b9);
      }
      else {
        uVar1 = *(undefined1 *)(iVar8 + 0x138a);
        *(undefined1 *)(iVar8 + 0x138a) = *(undefined1 *)(DAT_0033c208 + 0x13a1);
      }
      if (*(int *)(iVar5 + 4) == 0) {
        *(undefined1 *)(iVar5 + 0x13b9) = uVar1;
      }
      else {
        *(undefined1 *)(iVar5 + 0x13a1) = uVar1;
      }
      FUN_0033c25c(1);
      return;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x18);
  return;
}
