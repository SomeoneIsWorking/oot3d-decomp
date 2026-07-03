// OoT3D decomp @ 00415908  name=FUN_00415908  size=408

void FUN_00415908(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar1 = DAT_00415aa0;
  iVar9 = 0;
  do {
    iVar2 = iVar9 + 0x400;
    bVar11 = param_1 != iVar2;
    if (bVar11) {
      iVar2 = param_1 + -0x400;
    }
    iVar10 = 0;
    if (!bVar11 || iVar2 == 2) {
      iVar8 = iVar1 + iVar9 * 4;
      iVar4 = *(int *)(iVar8 + 0x128);
      iVar2 = *(int *)(iVar4 + 8);
      if (iVar2 == DAT_00415aa4) {
        uVar3 = 2;
        uVar5 = 3;
      }
      else if (DAT_00415aa4 < iVar2) {
        if (iVar2 - DAT_00415aa4 == 1) {
          uVar3 = 4;
          uVar5 = 0;
        }
        else {
          if (iVar2 - DAT_00415aa4 != 0xd0b) goto LAB_004159ac;
          uVar3 = 2;
          uVar5 = uVar3;
        }
      }
      else if (iVar2 == 0x8051) {
        uVar3 = 3;
        uVar5 = 1;
      }
      else if (iVar2 == 0x8056) {
        uVar3 = 2;
        uVar5 = 4;
      }
      else {
LAB_004159ac:
        uVar3 = 0;
        uVar5 = 0;
      }
      if (*(int *)(iVar4 + 0x14) == 0x10000) {
        uVar7 = 0x100;
      }
      else {
        uVar7 = 0x300;
      }
      uVar7 = uVar7 | uVar5;
      if (iVar9 == 0) {
        uVar5 = 0x40;
      }
      else {
        uVar5 = 0;
      }
      uVar5 = uVar5 | uVar7;
      uVar6 = uVar5;
      if ((((iVar9 == 0) && (iVar2 = *(int *)(iVar1 + 0x164), iVar2 != 0x700)) &&
          (uVar6 = uVar7, iVar2 != 0x701)) && (uVar6 = uVar5, iVar2 == 0x702)) {
        iVar2 = *(int *)(iVar1 + 0x130);
        iVar10 = uVar3 * (*(int *)(iVar2 + 0xc) *
                          ((*(int *)(iVar2 + 0x10) - *(int *)(iVar1 + 8)) - *(int *)(iVar1 + 0x148))
                         + *(int *)(iVar1 + 0x13c)) + *(int *)(iVar2 + 4);
        uVar6 = uVar7 | 0x20;
      }
      FUN_00415aa8(iVar9,*(undefined4 *)(iVar8 + 0x14c),
                   uVar3 * (*(int *)(iVar4 + 0xc) *
                            ((*(int *)(iVar4 + 0x10) - *(int *)(iVar8 + 8)) -
                            *(int *)(iVar8 + 0x140)) + *(int *)(iVar8 + 0x134)) +
                   *(int *)(iVar4 + 4),iVar10,*(int *)(iVar4 + 0xc) * uVar3,uVar6,
                   *(undefined4 *)(iVar8 + 0x14c));
      iVar2 = 1 - *(uint *)(iVar8 + 0x14c);
      if (1 < *(uint *)(iVar8 + 0x14c)) {
        iVar2 = 0;
      }
      *(int *)(iVar8 + 0x14c) = iVar2;
    }
    iVar9 = iVar9 + 1;
    if (1 < iVar9) {
      return;
    }
  } while( true );
}

