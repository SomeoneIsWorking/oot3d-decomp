// OoT3D decomp @ 002ee468  name=FUN_002ee468  size=344

void FUN_002ee468(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  piVar1 = DAT_002ee5c0;
  if (DAT_002ee5c0[2] != 0) {
    if (((*DAT_002ee5c4 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_002ee5c4), iVar2 != 0)) {
      FUN_0036788c(DAT_002ee5c8);
    }
    FUN_00348904(*(undefined4 *)(DAT_002ee5d4 + 0x47c),piVar1[2]);
    piVar1[2] = 0;
  }
  if (piVar1[1] != 0) {
    uVar3 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_002ee5d8 + 0x10))((int *)*DAT_002ee5d8,uVar3);
    piVar1[1] = 0;
  }
  if (*piVar1 != 0) {
    uVar3 = FUN_00307674();
    (**(code **)(*(int *)*DAT_002ee5dc + 0x10))((int *)*DAT_002ee5dc,uVar3);
    *piVar1 = 0;
  }
  if (piVar1[0xc] != 0) {
    FUN_002e7ca4();
    FUN_003525d4();
    piVar1[0xc] = 0;
  }
  if (piVar1[0xe] != 0) {
    FUN_0034fc6c();
    piVar1[0xe] = 0;
  }
  if (piVar1[0xd] != 0) {
    FUN_002db5d8();
    FUN_003525d4();
    piVar1[0xd] = 0;
  }
  iVar2 = DAT_002ee5e0;
  iVar4 = 0;
  do {
    if (*(int *)(iVar2 + iVar4 * 4) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar2 + iVar4 * 4) = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1b);
  piVar1[4] = 0;
  return;
}
