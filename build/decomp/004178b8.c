// OoT3D decomp @ 004178b8  name=DisplayBoardManager_004178b8  size=748

void DisplayBoardManager_004178b8(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;

  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_00343280(param_1 + 0x34,0x60);
    FUN_00343280(param_1 + 0x94,0x60);
    FUN_00343280(param_1 + 0xf4,0x60);
    FUN_00343280(param_1 + 0x154,0x60);
    FUN_00343280(param_1 + 0x1b4,0x60);
    FUN_00343280(param_1 + 0x214,0x2a0);
    FUN_00343280(param_1 + 0x4b4,0x2a0);
    *(undefined4 *)(param_1 + 0x754) = 0;
    *(undefined4 *)(param_1 + 0x758) = 0;
    *(undefined4 *)(param_1 + 0x75c) = 0;
    *(undefined4 *)(param_1 + 0x760) = 0;
    *(undefined4 *)(param_1 + 0x764) = 0;
    *(undefined4 *)(param_1 + 0x768) = 0;
    *(undefined4 *)(param_1 + 0x76c) = 0;
    FUN_00343280(param_1 + 0x770,0x2a0);
    FUN_00343280(param_1 + 0xa10,0x2a0);
    puVar1 = DAT_00417ba8;
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar3 = (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,0x1b8,DAT_00417ba4,0xa4);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_00348f34(iVar3,DAT_00417bac);
    }
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    FUN_00348be4();
    uVar6 = 0;
    do {
      iVar3 = (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,0x1b8,DAT_00417ba4,0xaa);
      uVar4 = 0;
      if (iVar3 != 0) {
        uVar4 = FUN_00348f34(iVar3,DAT_00417bb0);
      }
      *(undefined4 *)(param_1 + uVar6 * 4 + 0x34) = uVar4;
      FUN_00348be4();
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x18);
    uVar6 = 0;
    do {
      iVar3 = (**(code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,0x1b8,DAT_00417ba4,0xb1);
      uVar4 = 0;
      if (iVar3 != 0) {
        uVar4 = FUN_00348f34(iVar3,DAT_00417bb4);
      }
      *(undefined4 *)(param_1 + uVar6 * 4 + 0x94) = uVar4;
      FUN_00348be4();
      iVar3 = DAT_00417bbc;
      puVar2 = DAT_00417bb8;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x18);
    uVar6 = 0;
    do {
      if (((*puVar2 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00417bb8), iVar5 != 0)) {
        FUN_0036788c(DAT_00417bc0);
      }
      uVar4 = BoardModelFactory_0034897c
                        (*(undefined4 *)(iVar3 + 0x47c),*(undefined4 *)(param_1 + 0x30),0);
      iVar5 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(param_1 + iVar5 + 0xf4) = uVar4;
    } while (uVar6 < 0x18);
    uVar6 = 0;
    do {
      if (((*puVar2 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00417bb8), iVar5 != 0)) {
        FUN_0036788c(DAT_00417bc0);
      }
      iVar5 = param_1 + uVar6 * 4;
      uVar4 = BoardModelFactory_0034897c
                        (*(undefined4 *)(iVar3 + 0x47c),*(undefined4 *)(iVar5 + 0x34),0);
      uVar6 = uVar6 + 1;
      *(undefined4 *)(iVar5 + 0x154) = uVar4;
    } while (uVar6 < 0x18);
    uVar6 = 0;
    do {
      if (((*puVar2 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00417bb8), iVar5 != 0)) {
        FUN_0036788c(DAT_00417bc0);
      }
      iVar5 = param_1 + uVar6 * 4;
      uVar4 = BoardModelFactory_0034897c
                        (*(undefined4 *)(iVar3 + 0x47c),*(undefined4 *)(iVar5 + 0x94),0);
      uVar6 = uVar6 + 1;
      *(undefined4 *)(iVar5 + 0x1b4) = uVar4;
    } while (uVar6 < 0x18);
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return;
}
