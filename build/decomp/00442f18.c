// OoT3D decomp @ 00442f18  name=FUN_00442f18  size=600

void FUN_00442f18(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  uVar4 = FUN_0033b5ec();
  iVar1 = DAT_00443170;
  if ((uVar4 & 2) == 0) {
    uVar4 = FUN_0033b5d0();
    iVar3 = DAT_00443178;
    uVar2 = DAT_00443174;
    bVar6 = (uVar4 & 0x40) != 0;
    iVar5 = 0;
    if (bVar6) {
      iVar5 = *(int *)(iVar1 + 0x30);
    }
    if (bVar6 && 0 < iVar5) {
      if ((*(int *)(DAT_00443178 + iVar5 * 4 + -4) == 0) || (4 < iVar5)) {
        if (iVar5 - 6U < 2) {
          FUN_0037547c(DAT_00443174,0,4,DAT_00443180,DAT_00443180,DAT_0044317c);
          *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + -1;
        }
      }
      else {
        FUN_0037547c(DAT_00443174,0,4,DAT_00443180,DAT_00443180,DAT_0044317c);
        iVar5 = *(int *)(iVar1 + 0x30);
        *(int *)(iVar1 + 0x30) = iVar5 + -1;
        FUN_002e666c(iVar5 + 2);
      }
    }
    uVar4 = FUN_0033b5d0();
    if ((uVar4 & 0x80) != 0) {
      iVar5 = *(int *)(iVar1 + 0x30);
      if (iVar5 < 4) {
        if (*(int *)(iVar3 + iVar5 * 4 + 4) != 0) {
          FUN_0037547c(uVar2,0,4,DAT_00443180,DAT_00443180,DAT_0044317c);
          iVar5 = *(int *)(iVar1 + 0x30);
          *(int *)(iVar1 + 0x30) = iVar5 + 1;
          FUN_002e666c(iVar5 + 4);
        }
      }
      else if (iVar5 - 5U < 2) {
        FUN_0037547c(uVar2,0,4,DAT_00443180,DAT_00443180,DAT_0044317c);
        *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
      }
    }
    uVar4 = FUN_0033b5ec();
    if (((uVar4 & 0x20) != 0) && (*(int *)(iVar1 + 0x30) < 5)) {
      FUN_0037547c(uVar2,0,4,DAT_00443180,DAT_00443180,DAT_0044317c);
      *(undefined4 *)(iVar1 + 0x30) = 5;
    }
    uVar4 = FUN_0033b5ec();
    if (((uVar4 & 0x10) != 0) && (4 < *(int *)(iVar1 + 0x30))) {
      iVar5 = 0;
      do {
        if (*(int *)(iVar3 + iVar5 * 4) != 0) {
          FUN_0037547c(uVar2,0,4,DAT_00443180,DAT_00443180,DAT_0044317c);
          *(int *)(iVar1 + 0x30) = iVar5;
          FUN_002e666c(iVar5 + 3);
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 5);
      return;
    }
  }
  else {
    FUN_002fd84c(0,1);
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 8;
  }
  return;
}
