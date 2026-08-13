// OoT3D decomp @ 001a6c58  name=FUN_001a6c58  size=460

undefined4 FUN_001a6c58(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;

  iVar6 = 0;
  do {
    iVar7 = param_1 + iVar6 * 4;
    piVar2 = *(int **)(iVar7 + 0x7ec);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar7 + 0x7ec) = 0;
  } while (iVar6 < 0x1e);
  iVar6 = 0;
  do {
    iVar7 = param_1 + iVar6 * 4;
    piVar2 = *(int **)(iVar7 + 0x7a4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar7 + 0x7a4) = 0;
  } while (iVar6 < 0x12);
  iVar6 = 0;
  do {
    iVar7 = param_1 + iVar6 * 0x4c;
    piVar2 = *(int **)(iVar7 + 0x2924);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar7 + 0x2924) = 0;
    puVar1 = puRam001a6dec;
  } while (iVar6 < 0x6e);
  if (*(int *)(param_1 + 0x79c) != 0) {
    (**(code **)(*(int *)*puRam001a6dec + 0x10))((int *)*puRam001a6dec,*(int *)(param_1 + 0x79c));
  }
  *(undefined4 *)(param_1 + 0x79c) = 0;
  if (*(int *)(param_1 + 0x7a0) != 0) {
    (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,*(int *)(param_1 + 0x7a0));
  }
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  puVar1 = puRam001a6df0;
  if (*(int *)(param_1 + 0x870) != 0) {
    uVar3 = func_0x003685a0();
    piVar2 = (int *)*puVar1;
    (**(code **)(*piVar2 + 0x10))(piVar2,uVar3);
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  if (*(int *)(param_1 + 0x874) != 0) {
    uVar3 = func_0x003685a0();
    piVar2 = (int *)*puVar1;
    (**(code **)(*piVar2 + 0x10))(piVar2,uVar3);
  }
  *(undefined4 *)(param_1 + 0x874) = 0;
  func_0x00350be0(param_1 + 0x1a4);
  func_0x00350be0(param_1 + 0x228);
  func_0x00350be0(param_1 + 0x2ac);
  func_0x00350be0(param_1 + 0x330);
  func_0x00350be0(param_1 + 0x3b4);
  uVar4 = *(uint *)(param_1 + 0x2330);
  uVar5 = uVar4 + *(int *)(param_1 + 0x232c) * 0x50;
  for (; uVar4 < uVar5; uVar4 = uVar4 + 0x50) {
  }
  *(undefined4 *)(param_1 + 0x232c) = 0;
  *(undefined4 *)(param_1 + 0x2330) = 0;
  return 1;
}
