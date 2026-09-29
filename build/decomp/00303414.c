// OoT3D decomp @ 00303414  name=FUN_00303414  size=120

uint FUN_00303414(uint *param_1,uint *param_2)

{
  char cVar1;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  char cVar2;
  char cVar3;

  uVar10 = *param_1;
  do {
    puVar8 = param_1 + 1;
    puVar9 = param_2 + 1;
    uVar12 = *param_2;
    param_1 = param_1 + 2;
    uVar13 = *puVar8;
    bVar4 = UnsignedSaturate((char)DAT_0030348c - (char)uVar10,0x10);
    cVar1 = (char)((uint)DAT_0030348c >> 8);
    uVar5 = UnsignedSaturate(cVar1 - (char)(uVar10 >> 8),0x10);
    cVar2 = (char)((uint)DAT_0030348c >> 0x10);
    uVar6 = UnsignedSaturate(cVar2 - (char)(uVar10 >> 0x10),0x10);
    cVar3 = (char)((uint)DAT_0030348c >> 0x18);
    uVar7 = UnsignedSaturate(cVar3 - (char)(uVar10 >> 0x18),0x10);
    uVar14 = (uint)uVar7 << 0x18 | (uint)uVar6 << 0x10 | (uint)uVar5 << 8 | (uint)bVar4;
    uVar11 = uVar10;
    if (uVar10 != uVar12 || uVar14 != 0) break;
    param_2 = param_2 + 2;
    uVar12 = *puVar9;
    uVar10 = *param_1;
    bVar4 = UnsignedSaturate((char)DAT_0030348c - (char)uVar13,0x10);
    uVar5 = UnsignedSaturate(cVar1 - (char)(uVar13 >> 8),0x10);
    uVar6 = UnsignedSaturate(cVar2 - (char)(uVar13 >> 0x10),0x10);
    uVar7 = UnsignedSaturate(cVar3 - (char)(uVar13 >> 0x18),0x10);
    uVar14 = (uint)uVar7 << 0x18 | (uint)uVar6 << 0x10 | (uint)uVar5 << 8 | (uint)bVar4;
    uVar11 = uVar13;
  } while (uVar13 == uVar12 && uVar14 == 0);
  bVar18 = uVar11 * 0x1000000 <= uVar12 * 0x1000000;
  uVar10 = uVar12 * 0x1000000 + uVar11 * -0x1000000;
  bVar15 = uVar10 == 0;
  if (bVar15) {
    bVar18 = (bool)((byte)(uVar14 >> 1) & 1);
  }
  bVar16 = (uVar14 & 1) == 0;
  bVar17 = bVar15 && bVar16;
  if (bVar15 && bVar16) {
    uVar10 = uVar12 * 0x10000 + uVar11 * -0x10000;
    bVar15 = uVar10 == 0;
    bVar18 = !bVar15 && uVar11 * 0x10000 <= uVar12 * 0x10000;
    bVar16 = (uVar14 & 0xff00) == 0;
    bVar17 = bVar15 && bVar16;
    if (bVar15 && bVar16) {
      uVar10 = uVar12 * 0x100 + uVar11 * -0x100;
      bVar15 = uVar10 == 0;
      bVar18 = !bVar15 && uVar11 * 0x100 <= uVar12 * 0x100;
      bVar16 = (uVar14 & 0xff0000) == 0;
      bVar17 = bVar15 && bVar16;
      if (bVar15 && bVar16) {
        bVar18 = uVar11 <= uVar12;
        uVar10 = uVar12 - uVar11;
        bVar17 = uVar10 == 0;
      }
    }
  }
  if (!bVar17) {
    uVar10 = (uint)bVar18 << 0x1f | uVar10 >> 1;
  }
  return uVar10;
}
