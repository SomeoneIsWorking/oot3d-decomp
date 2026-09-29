// OoT3D decomp @ 00441108  name=FUN_00441108  size=588

void FUN_00441108(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint extraout_r1;
  uint uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;

  if (*(char *)(param_1 + 4) != '\0') {
    if (*(int **)(param_1 + 0x994) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x994) + 4))();
    }
    if (*(int **)(param_1 + 0x99c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x99c) + 4))();
    }
    if (*(int **)(param_1 + 0x998) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x998) + 4))();
    }
    if (*(int **)(param_1 + 0x9a0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x9a0) + 4))();
    }
    if (*(int **)(param_1 + 0x9a4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x9a4) + 4))();
    }
    *(undefined4 *)(param_1 + 0x994) = 0;
    *(undefined4 *)(param_1 + 0x99c) = 0;
    *(undefined4 *)(param_1 + 0x998) = 0;
    *(undefined4 *)(param_1 + 0x9a0) = 0;
    *(undefined4 *)(param_1 + 0x9a4) = 0;
    puVar1 = DAT_00441354;
    if (*(int *)(param_1 + 0x738) != 0) {
      uVar5 = FUN_00307674();
      piVar9 = (int *)*puVar1;
      (**(code **)(*piVar9 + 0x10))(piVar9,uVar5);
      *(undefined4 *)(param_1 + 0x738) = 0;
      bVar11 = *(int *)(param_1 + 0x72c) != 0;
      uVar8 = extraout_r1;
      if (bVar11) {
        uVar8 = (uint)*(byte *)(param_1 + 0x734);
      }
      if (bVar11 && uVar8 != 0) {
        FUN_0034fc68();
      }
      *(undefined4 *)(param_1 + 0x72c) = 0;
      *(undefined4 *)(param_1 + 0x730) = 0;
      *(undefined1 *)(param_1 + 0x734) = 0;
    }
    puVar4 = DAT_00441360;
    iVar3 = DAT_0044135c;
    puVar2 = DAT_00441358;
    iVar10 = 0;
    do {
      if (((*puVar2 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00441358), iVar6 != 0)) {
        FUN_0036788c(DAT_00441364);
      }
      iVar6 = param_1 + iVar10 * 8;
      FUN_00348904(*(undefined4 *)(iVar3 + 0x47c),*(undefined4 *)(iVar6 + 0x6f8));
      if (((*puVar2 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00441358), iVar7 != 0)) {
        FUN_0036788c(DAT_00441364);
      }
      FUN_00348904(*(undefined4 *)(iVar3 + 0x47c),*(undefined4 *)(iVar6 + 0x6fc));
      *(undefined4 *)(iVar6 + 0x6f8) = 0;
      *(undefined4 *)(iVar6 + 0x6fc) = 0;
      iVar6 = param_1 + iVar10 * 4;
      if (*(int *)(iVar6 + 0x6c8) != 0) {
        uVar5 = FUN_003488e4();
        (**(code **)(*(int *)*puVar4 + 0x10))((int *)*puVar4,uVar5);
      }
      *(undefined4 *)(iVar6 + 0x6c8) = 0;
      if (*(int *)(iVar6 + 0x6e0) != 0) {
        uVar5 = FUN_00307674();
        piVar9 = (int *)*puVar1;
        (**(code **)(*piVar9 + 0x10))(piVar9,uVar5);
      }
      iVar10 = iVar10 + 1;
      *(undefined4 *)(iVar6 + 0x6e0) = 0;
    } while (iVar10 < 3);
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00305364();
      (**(code **)**(undefined4 **)(param_1 + 0x34))();
      FUN_0034fc6c(*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_0034fc6c();
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}
