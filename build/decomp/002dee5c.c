// OoT3D decomp @ 002dee5c  name=FUN_002dee5c  size=364

void FUN_002dee5c(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  puVar2 = DAT_002defd0;
  iVar7 = DAT_002defcc;
  iVar1 = DAT_002defc8;
  iVar6 = 0;
  iVar9 = DAT_002defc8 + 8;
  iVar8 = DAT_002defc8 + -8;
  iVar10 = DAT_002defc8 + -0x10;
  do {
    if (*(int *)(iVar1 + iVar6 * 4) != 0) {
      if (((*DAT_002defd4 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_002defd4), iVar4 != 0)) {
        FUN_0036788c(DAT_002defd8);
      }
      FUN_00348904(*(undefined4 *)(iVar7 + 0x47c),*(undefined4 *)(iVar1 + iVar6 * 4));
      *(undefined4 *)(iVar1 + iVar6 * 4) = 0;
    }
    if (*(int *)(iVar8 + iVar6 * 4) != 0) {
      uVar5 = FUN_003488e4();
      (**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,uVar5);
      *(undefined4 *)(iVar8 + iVar6 * 4) = 0;
    }
    if (*(int *)(iVar9 + iVar6 * 4) != 0) {
      FUN_002e7ca4();
      FUN_003525d4();
      *(undefined4 *)(iVar9 + iVar6 * 4) = 0;
    }
    if (*(int *)(iVar10 + iVar6 * 4) != 0) {
      uVar5 = FUN_00307674();
      (**(code **)(*(int *)*DAT_002defe4 + 0x10))((int *)*DAT_002defe4,uVar5);
      *(undefined4 *)(iVar10 + iVar6 * 4) = 0;
    }
    piVar3 = DAT_002defe8;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  if (*DAT_002defe8 != 0) {
    FUN_002db5d8();
    FUN_003525d4();
    *piVar3 = 0;
  }
  FUN_002e7d80();
  iVar1 = DAT_002defec;
  iVar7 = 0;
  do {
    if (*(int *)(iVar1 + iVar7 * 4) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar1 + iVar7 * 4) = 0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  piVar3[1] = 0;
  return;
}
