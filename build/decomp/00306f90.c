// OoT3D decomp @ 00306f90  name=FUN_00306f90  size=552

void FUN_00306f90(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  iVar6 = DAT_003071bc;
  puVar1 = DAT_003071b8;
  if (*(int *)(param_1 + 4) != 0) {
    uVar5 = 0;
    do {
      iVar7 = param_1 + uVar5 * 4;
      if (*(int *)(iVar7 + 0xf4) != 0) {
        if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_003071b8), iVar3 != 0)) {
          FUN_0036788c(DAT_003071c0);
        }
        FUN_00348904(*(undefined4 *)(iVar6 + 0x47c),*(undefined4 *)(iVar7 + 0xf4));
        *(undefined4 *)(iVar7 + 0xf4) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x18);
    uVar5 = 0;
    do {
      iVar7 = param_1 + uVar5 * 4;
      if (*(int *)(iVar7 + 0x154) != 0) {
        if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_003071b8), iVar3 != 0)) {
          FUN_0036788c(DAT_003071c0);
        }
        FUN_00348904(*(undefined4 *)(iVar6 + 0x47c),*(undefined4 *)(iVar7 + 0x154));
        *(undefined4 *)(iVar7 + 0x154) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x18);
    uVar5 = 0;
    do {
      iVar7 = param_1 + uVar5 * 4;
      if (*(int *)(iVar7 + 0x1b4) != 0) {
        if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_003071b8), iVar3 != 0)) {
          FUN_0036788c(DAT_003071c0);
        }
        FUN_00348904(*(undefined4 *)(iVar6 + 0x47c),*(undefined4 *)(iVar7 + 0x1b4));
        *(undefined4 *)(iVar7 + 0x1b4) = 0;
      }
      puVar2 = DAT_003071cc;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x18);
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar4 = FUN_003488e4();
      (**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,uVar4);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    uVar5 = 0;
    do {
      iVar6 = param_1 + uVar5 * 4;
      if (*(int *)(iVar6 + 0x34) != 0) {
        uVar4 = FUN_003488e4();
        (**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,uVar4);
        *(undefined4 *)(iVar6 + 0x34) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x18);
    uVar5 = 0;
    do {
      iVar6 = param_1 + uVar5 * 4;
      if (*(int *)(iVar6 + 0x94) != 0) {
        uVar4 = FUN_003488e4();
        (**(code **)(*(int *)*puVar2 + 0x10))((int *)*puVar2,uVar4);
        *(undefined4 *)(iVar6 + 0x94) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x18);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}
