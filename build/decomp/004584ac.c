// OoT3D decomp @ 004584ac  name=FUN_004584ac  size=664

void FUN_004584ac(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r1;
  int iVar6;
  int iVar7;
  undefined8 uVar8;

  puVar1 = DAT_00458734;
  iVar7 = param_2;
  if (((*DAT_00458734 & 1) == 0) &&
     (uVar8 = FUN_003679b4(DAT_00458734), iVar7 = (int)((ulonglong)uVar8 >> 0x20), (int)uVar8 != 0))
  {
    FUN_0036788c(DAT_00458738);
    iVar7 = DAT_00458740;
  }
  FUN_0047cccc(DAT_00458744,iVar7);
  iVar7 = 0;
  do {
    iVar6 = param_1 + iVar7 * 8;
    iVar5 = *(int *)(iVar6 + 0x10);
    while (iVar5 != 0) {
      FUN_002da114(param_1,iVar5,param_2);
      iVar5 = *(int *)(iVar6 + 0x10);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xc);
  if (*(int *)(param_1 + 0x1dc) != 0) {
    FUN_00350ef4();
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  FUN_002e62dc(param_2);
  iVar7 = extraout_r1;
  if (((*puVar1 & 1) == 0) &&
     (uVar8 = FUN_003679b4(DAT_00458734), iVar7 = (int)((ulonglong)uVar8 >> 0x20), (int)uVar8 != 0))
  {
    FUN_0036788c(DAT_00458738);
    iVar7 = DAT_00458740;
  }
  FUN_002f508c(DAT_00458748,iVar7);
  if (*(int **)(param_1 + 0x11c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x11c) + 4))();
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  iVar7 = 0;
  do {
    iVar5 = param_1 + 0x6c + iVar7 * 4;
    piVar2 = *(int **)(iVar5 + 0xb4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(iVar5 + 0xb4) = 0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xc);
  if (*(int **)(param_1 + 0x150) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x150) + 4))();
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  iVar7 = 0;
  do {
    iVar5 = param_1 + 0x6c + iVar7 * 4;
    piVar2 = *(int **)(iVar5 + 0xe8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(iVar5 + 0xe8) = 0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xc);
  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(DAT_0045874c + 0x90));
  iVar7 = DAT_00458750;
  iVar5 = 0;
  do {
    iVar6 = param_2 + iVar5 * 4;
    if (*(int *)(iVar6 + 0x2270) != 0) {
      if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00458734), iVar3 != 0)) {
        FUN_0036788c(DAT_00458738);
      }
      FUN_00348904(*(undefined4 *)(iVar7 + 0x47c),*(undefined4 *)(iVar6 + 0x2270));
      *(undefined4 *)(iVar6 + 0x2270) = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  if (*(int *)(param_2 + 0x226c) != 0) {
    uVar4 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_00458754 + 0x10))((int *)*DAT_00458754,uVar4);
    *(undefined4 *)(param_2 + 0x226c) = 0;
  }
  iVar7 = 0;
  do {
    iVar5 = param_2 + 0x208c + iVar7 * 4;
    piVar2 = *(int **)(iVar5 + 0x200);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar7 = iVar7 + 1;
    *(undefined4 *)(iVar5 + 0x200) = 0;
  } while (iVar7 < 3);
  *DAT_0047a90c = 0;
  return;
}
