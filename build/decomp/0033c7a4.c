// OoT3D decomp @ 0033c7a4  name=FUN_0033c7a4  size=388

void FUN_0033c7a4(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  bool bVar10;

  uVar8 = 0;
  iVar4 = FUN_00366684(0);
  if (iVar4 != -1) {
    uVar5 = iVar4 + DAT_0033c928;
    if (0x54 < uVar5) {
      uVar5 = 0;
    }
    if ((*(byte *)(DAT_0033c92c + uVar5) & 0x80) != 0) {
      return;
    }
  }
  puVar9 = (ushort *)(DAT_0033c930 + param_1 * 0x68);
  uVar2 = *puVar9;
  uVar3 = puVar9[1];
  iVar4 = FUN_00366684(0);
  if (iVar4 == DAT_0033c934) {
    if (*DAT_0033c938 != '\x01') {
      FUN_0036ec40(3,DAT_0033c934 + -0x35,0);
    }
  }
  else if (iVar4 != DAT_0033c93c) {
    uVar6 = FUN_00366684(0);
    *(undefined4 *)(DAT_0033c940 + 0xb8) = uVar6;
    FUN_003655d0(0);
    FUN_0034bdb8(0);
    uVar5 = 0;
    do {
      if ((1 << uVar5 & (uint)uVar2) != 0) {
        FUN_0047d868(uVar5,(1 << uVar5 & (uint)uVar3) == 0);
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 0x10);
    FUN_0033c98c(0x7f,0);
    FUN_002d01e8(0x7f,0);
  }
  while( true ) {
    bVar1 = *(byte *)((int)puVar9 + uVar8 + 4);
    bVar10 = 0xfe < bVar1;
    if (bVar1 != 0xff) {
      bVar10 = 99 < uVar8;
    }
    if (bVar10) break;
    uVar5 = uVar8 + 1 & 0xff;
    uVar7 = uVar5 + 1 & 0xff;
    uVar8 = uVar7 + 1 & 0xff;
    FUN_002d0190(bVar1,*(undefined1 *)((int)puVar9 + uVar5 + 4),
                 *(undefined1 *)((int)puVar9 + uVar7 + 4));
  }
  return;
}
