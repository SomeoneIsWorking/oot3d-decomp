// OoT3D decomp @ 00354f70  name=FUN_00354f70  size=568

undefined4 FUN_00354f70(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar4 = *(uint *)(param_1 + 0x16f8);
  uVar5 = *(uint *)(param_1 + 0x172c);
  bVar9 = false;
  *(undefined *)(param_1 + 0x29e0) = 1;
  puVar2 = DAT_003551a8;
  if ((uVar4 == 0) || (((~*(uint *)(uVar4 + 4) & 0x40001) != 0 && (*(char *)(uVar4 + 0x123) == -1)))
     ) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar6 = (int)*(short *)(param_1 + 0x1728);
  uVar8 = 0;
  if (bVar1 || iVar6 != 0) {
    if ((-1 < iVar6) || (bVar9 = (-iVar6 & 0xff00U) != 0x200, !bVar9)) {
      bVar9 = false;
    }
    uVar8 = uVar4;
    if ((!(bool)((bVar9 ^ 1U) & bVar1)) && (uVar8 = *(uint *)(param_1 + 0x1724), bVar9)) {
      uVar4 = 0;
      uVar5 = uVar4;
    }
  }
  if ((uVar5 | uVar8) == 0) {
    return 0;
  }
  if ((uVar4 != 0 && uVar4 != uVar5) && uVar4 != uVar8) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 0x1710);
  if ((uVar4 & 0x800) != 0) {
    uVar7 = *(uint *)(param_1 + 0x1224);
    if (uVar7 == 0) {
      return 0;
    }
    if ((!bVar9) && (uVar7 != uVar5 && uVar7 != uVar8)) {
      bVar10 = uVar5 == 0;
      if (!bVar10) {
        bVar10 = (*(uint *)(uVar5 + 4) & 0x10000) == 0;
      }
      if (bVar10) {
        return 0;
      }
    }
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
LAB_00355098:
    if ((uVar4 & 0x800000) == 0) {
      bVar10 = (uVar4 & 0x8000000) == 0;
      if (!bVar10) {
        uVar4 = (uint)*(byte *)(param_1 + 0x1a7);
      }
      if (bVar10 || uVar4 == 1) {
        return 0;
      }
      if ((*(uint *)(param_1 + 0x1714) & 0x400) != 0) {
        return 0;
      }
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x1714);
    bVar10 = (uVar7 & 0x400) != 0;
    if (bVar10) {
      uVar7 = (uint)*(byte *)(param_1 + 0x1a7);
    }
    if (bVar10 && uVar7 != 1) goto LAB_00355098;
  }
  if (uVar5 == 0) {
    if (uVar8 == 0) goto LAB_00355184;
  }
  else {
    *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 2;
    bVar10 = (*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & *puVar2) == 0;
    if (bVar10) {
      bVar10 = (*(uint *)(uVar5 + 4) & 0x10000) == 0;
    }
    if (!bVar10) goto LAB_00355184;
    if (uVar8 == 0) {
      return 0;
    }
  }
  if (!bVar9) {
    *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x200000;
  }
  iVar6 = FUN_003518bc();
  if ((iVar6 != 2) && (!bVar9)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x172c) = 0;
  if ((bVar9) || (!bVar1)) {
    sVar3 = *(short *)(param_1 + 0x1728);
    if (sVar3 < 0) {
      sVar3 = -sVar3;
    }
    *(short *)(DAT_003551ac + uVar8) = sVar3;
  }
  else if (*(byte *)(uVar8 + 0x123) != 0xff) {
    *(ushort *)(DAT_003551ac + uVar8) = *(byte *)(uVar8 + 0x123) + 0x600;
  }
  *(byte *)(param_1 + 0x29e3) = *(byte *)(param_1 + 0x29e3) | 2;
  uVar5 = uVar8;
LAB_00355184:
  *(char *)(param_1 + 0x1b7) = (char)*(undefined4 *)(DAT_003551b0 + 0x154);
  FUN_00336bbc(param_2,uVar5);
  return 1;
}

