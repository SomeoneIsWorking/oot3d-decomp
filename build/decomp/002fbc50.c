// OoT3D decomp @ 002fbc50  name=FUN_002fbc50  size=828

void FUN_002fbc50(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [48];

  uVar5 = DAT_002fbf90;
  if (((*DAT_002fbf8c & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_002fbf8c), puVar1 = DAT_002fbf98, uVar6 = DAT_002fbf94, iVar3 != 0))
  {
    *DAT_002fbf98 = DAT_002fbf94;
    puVar1[1] = uVar5;
    puVar1[2] = uVar5;
    puVar1[3] = uVar5;
    puVar1[4] = uVar5;
    puVar1[5] = uVar6;
    puVar1[6] = uVar5;
    puVar1[7] = uVar5;
    puVar1[8] = uVar5;
    puVar1[9] = uVar5;
    puVar1[10] = uVar6;
    puVar1[0xb] = uVar5;
  }
  FUN_00372224(auStack_50,DAT_002fbf98);
  iVar3 = DAT_002fbf9c;
  local_5c = uVar5;
  local_58 = uVar5;
  local_54 = uVar5;
  if (*(int *)(DAT_002fbf9c + 0x50) == 1) {
    piVar4 = *(int **)(DAT_002fbfa0 + *(int *)(DAT_002fbf9c + 0x38) * 4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4,auStack_50,auStack_50,&local_5c);
    }
  }
  piVar4 = *(int **)(iVar3 + 0x14);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4,auStack_50,auStack_50,&local_5c);
  }
  piVar4 = *(int **)(iVar3 + 8);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4,auStack_50,auStack_50,&local_5c);
  }
  if (*(int *)(iVar3 + 0x18) != 0) {
    FUN_002f9a1c();
    uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0x10);
    uVar6 = FUN_002f9a0c(*(undefined4 *)(iVar3 + 0x18));
    FUN_0036759c(*(undefined4 *)(iVar3 + 4),uVar6,uVar5);
    uVar5 = FUN_002fc3f0(*(undefined4 *)(iVar3 + 0x18),0);
    uVar6 = FUN_002f9a00(*(undefined4 *)(iVar3 + 0x18));
    FUN_00317d1c(*(undefined4 *)(iVar3 + 4),uVar6,uVar5);
    uVar5 = FUN_002fc3e4(*(undefined4 *)(iVar3 + 0x18),0);
    uVar6 = FUN_002f99f4(*(undefined4 *)(iVar3 + 0x18));
    FUN_002f9934(*(undefined4 *)(iVar3 + 4),uVar6,uVar5);
  }
  iVar2 = DAT_002fbfa4;
  iVar7 = 0;
  iVar8 = DAT_002fbfa4 + -0x40;
  do {
    if (*(int *)(iVar2 + iVar7 * 4) != 0) {
      FUN_002f9a1c();
      uVar5 = *(undefined4 *)(*(int *)(iVar2 + iVar7 * 4) + 0x10);
      uVar6 = FUN_002f9a0c(*(undefined4 *)(iVar2 + iVar7 * 4));
      FUN_0036759c(*(undefined4 *)(iVar8 + iVar7 * 4),uVar6,uVar5);
      uVar5 = FUN_002fc3f0(*(undefined4 *)(iVar2 + iVar7 * 4),0);
      uVar6 = FUN_002f9a00(*(undefined4 *)(iVar2 + iVar7 * 4));
      FUN_00317d1c(*(undefined4 *)(iVar8 + iVar7 * 4),uVar6,uVar5);
      uVar5 = FUN_002fc3e4(*(undefined4 *)(iVar2 + iVar7 * 4),0);
      uVar6 = FUN_002f99f4(*(undefined4 *)(iVar2 + iVar7 * 4));
      FUN_002f9934(*(undefined4 *)(iVar8 + iVar7 * 4),uVar6,uVar5);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  if (*(int *)(iVar3 + 0x1c) != 0) {
    FUN_002f9a1c();
    uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x1c) + 0x10);
    uVar6 = FUN_002f9a0c(*(undefined4 *)(iVar3 + 0x1c));
    FUN_0036759c(*(undefined4 *)(iVar3 + 0x10),uVar6,uVar5);
    uVar5 = FUN_002fc3f0(*(undefined4 *)(iVar3 + 0x1c),0);
    uVar6 = FUN_002f9a00(*(undefined4 *)(iVar3 + 0x1c));
    FUN_00317d1c(*(undefined4 *)(iVar3 + 0x10),uVar6,uVar5);
    uVar5 = FUN_002fc3e4(*(undefined4 *)(iVar3 + 0x1c),0);
    uVar6 = FUN_002f99f4(*(undefined4 *)(iVar3 + 0x1c));
    FUN_002f9934(*(undefined4 *)(iVar3 + 0x10),uVar6,uVar5);
  }
  if (*(int *)(iVar3 + 0x24) != 0) {
    FUN_002f94a8();
  }
  if (*(int *)(iVar3 + 0x20) != 0) {
    FUN_002f94a8();
  }
  if (*(int *)(iVar3 + 0x2c) != 0) {
    FUN_002f94a8();
  }
  if (*(int *)(iVar3 + 0x28) != 0) {
    FUN_002f94a8();
  }
  return;
}
