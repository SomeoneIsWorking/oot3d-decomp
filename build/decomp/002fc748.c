// OoT3D decomp @ 002fc748  name=FUN_002fc748  size=480

void FUN_002fc748(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;

  puVar2 = DAT_002fc930;
  iVar1 = DAT_002fc928;
  iVar7 = 0;
  iVar3 = 0;
  iVar6 = 8;
  do {
    iVar8 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    if (*(int *)(DAT_002fc928 + iVar8) != 0) {
      iVar7 = iVar7 + 1;
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (*(int *)(DAT_002fc92c + 0x24) != 0) {
    iVar7 = iVar7 + 1;
  }
  if (*(int *)(DAT_002fc92c + 0x2c) != 0) {
    iVar7 = iVar7 + 1;
  }
  if (iVar7 != 0) {
    iVar3 = *(int *)(DAT_002fc92c + 0x24);
    if (((*DAT_002fc930 & 1) == 0) &&
       (uVar10 = FUN_003679b4(DAT_002fc930), iVar3 = (int)((ulonglong)uVar10 >> 0x20),
       (int)uVar10 != 0)) {
      FUN_0036788c(DAT_002fc934);
      iVar3 = DAT_002fc93c;
    }
    FUN_0031025c(DAT_002fc934,iVar3);
  }
  iVar6 = DAT_002fc944;
  iVar3 = DAT_002fc940;
  iVar7 = 0;
  iVar8 = DAT_002fc944 + -0x20;
  iVar9 = DAT_002fc944 + 0x40;
  do {
    if (*(int *)(iVar1 + iVar7 * 4) != 0) {
      if (((*puVar2 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_002fc930), iVar4 != 0)) {
        FUN_0036788c(DAT_002fc934);
      }
      FUN_00348904(*(undefined4 *)(iVar3 + 0x47c),*(undefined4 *)(iVar1 + iVar7 * 4));
      *(undefined4 *)(iVar1 + iVar7 * 4) = 0;
    }
    if (*(int *)(iVar6 + iVar7 * 4) != 0) {
      uVar5 = FUN_003488e4();
      (**(code **)(*(int *)*DAT_002fc948 + 0x10))((int *)*DAT_002fc948,uVar5);
      *(undefined4 *)(iVar6 + iVar7 * 4) = 0;
    }
    if (*(int *)(iVar8 + iVar7 * 4) != 0) {
      uVar5 = FUN_00307674();
      (**(code **)(*(int *)*DAT_002fc94c + 0x10))((int *)*DAT_002fc94c,uVar5);
      *(undefined4 *)(iVar8 + iVar7 * 4) = 0;
    }
    if (*(int *)(iVar9 + iVar7 * 4) != 0) {
      FUN_002e7ca4();
      FUN_003525d4();
      *(undefined4 *)(iVar9 + iVar7 * 4) = 0;
    }
    iVar4 = DAT_002fc92c;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  if (*(int *)(DAT_002fc92c + 0x24) != 0) {
    FUN_002db5d8();
    FUN_003525d4();
    *(undefined4 *)(iVar4 + 0x24) = 0;
  }
  if (*(int *)(iVar4 + 0x2c) != 0) {
    FUN_002db5d8();
    FUN_003525d4();
    *(undefined4 *)(iVar4 + 0x2c) = 0;
  }
  return;
}
