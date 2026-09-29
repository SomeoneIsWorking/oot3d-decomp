// OoT3D decomp @ 004b5e98  name=FUN_004b5e98  size=300

undefined8 FUN_004b5e98(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_r6;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *unaff_r11;
  int iVar16;
  int local_38;
  int local_30;
  int local_28;
  int local_20;

  uVar2 = FUN_004b477c();
  uVar3 = unaff_r11[-0x80];
  uVar4 = (uint)*(byte *)((int)unaff_r11 + 0x5ff);
  uVar1 = uVar3 >> 0x18;
  iVar8 = ((int)(uVar4 + uVar1 + 1) >> 1) + unaff_r6 * 2;
  iVar9 = iVar8 - uVar4;
  iVar5 = uVar4 * 4 + iVar9;
  local_38 = (uVar3 & 0xff) << 4;
  iVar6 = iVar5 + iVar9;
  uVar14 = uVar3 >> 8 & 0xff;
  local_30 = uVar14 << 4;
  iVar7 = iVar6 + iVar9;
  uVar4 = uVar3 >> 0x10 & 0xff;
  local_28 = uVar4 << 4;
  local_20 = (uVar3 >> 0x18) << 4;
  iVar15 = uVar1 << 2;
  iVar16 = 4;
  do {
    iVar15 = iVar15 + (iVar8 - uVar1);
    iVar10 = iVar15 + (uint)*(byte *)((int)unaff_r11 + -1) * -4;
    local_38 = local_38 + iVar5 + (uVar3 & 0xff) * -4;
    local_30 = local_30 + iVar6 + uVar14 * -4;
    local_28 = local_28 + iVar7 + uVar4 * -4;
    local_20 = local_20 + iVar7 + iVar9 + (uVar3 >> 0x18) * -4;
    iVar11 = (uint)*(byte *)((int)unaff_r11 + -1) * 0x10 + iVar10;
    iVar12 = iVar11 + iVar10;
    iVar13 = iVar12 + iVar10;
    *unaff_r11 = local_38 + iVar11 + 0x10 >> 5 | (local_30 + iVar12 + 0x10 >> 5) << 8 |
                 (local_28 + iVar13 + 0x10 >> 5) << 0x10 |
                 (local_20 + iVar13 + iVar10 + 0x10 >> 5) << 0x18;
    iVar16 = iVar16 + -1;
    unaff_r11 = unaff_r11 + 0x80;
  } while (iVar16 != 0);
  return uVar2;
}
