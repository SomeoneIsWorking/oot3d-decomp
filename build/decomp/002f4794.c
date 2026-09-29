// OoT3D decomp @ 002f4794  name=FUN_002f4794  size=288

void FUN_002f4794(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;

  puVar3 = DAT_002f48c0;
  iVar2 = DAT_002f48bc;
  puVar1 = DAT_002f48b8;
  iVar6 = 0;
  iVar8 = DAT_002f48b4 + 100;
  iVar7 = DAT_002f48b4 + 0x5c;
  iVar9 = DAT_002f48b4 + 0x6c;
  *(undefined4 *)(DAT_002f48b4 + 4) = 0;
  do {
    if (*(int *)(iVar8 + iVar6 * 4) != 0) {
      if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_002f48b8), iVar4 != 0)) {
        FUN_0036788c(DAT_002f48c4);
      }
      FUN_00348904(*(undefined4 *)(iVar2 + 0x47c),*(undefined4 *)(iVar8 + iVar6 * 4));
      *(undefined4 *)(iVar8 + iVar6 * 4) = 0;
    }
    if (*(int *)(iVar7 + iVar6 * 4) != 0) {
      uVar5 = FUN_003488e4();
      (**(code **)(*(int *)*puVar3 + 0x10))((int *)*puVar3,uVar5);
      *(undefined4 *)(iVar7 + iVar6 * 4) = 0;
    }
    if (*(int *)(iVar9 + iVar6 * 4) != 0) {
      FUN_002e7ca4();
      FUN_003525d4();
      *(undefined4 *)(iVar9 + iVar6 * 4) = 0;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  FUN_002e7d80();
  iVar2 = DAT_002f48d0;
  iVar6 = 0;
  do {
    if (*(int *)(iVar2 + iVar6 * 4) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar2 + iVar6 * 4) = 0;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  FUN_002e7ae0(1);
  return;
}
