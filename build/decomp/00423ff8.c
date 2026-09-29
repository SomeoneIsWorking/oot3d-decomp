// OoT3D decomp @ 00423ff8  name=FUN_00423ff8  size=752

void FUN_00423ff8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [48];

  puVar1 = DAT_004242e8;
  FUN_002f9a1c(DAT_004242e8[3]);
  uVar4 = *(undefined4 *)(puVar1[3] + 0x10);
  uVar5 = FUN_002f9a0c(puVar1[3]);
  FUN_0036759c(*puVar1,uVar5,uVar4);
  uVar4 = FUN_002fc3f0(puVar1[3],0);
  uVar5 = FUN_002f9a00(puVar1[3]);
  FUN_00317d1c(*puVar1,uVar5,uVar4);
  uVar4 = FUN_002fc3e4(puVar1[3],0);
  uVar5 = FUN_002f99f4(puVar1[3]);
  FUN_002f9934(*puVar1,uVar5,uVar4);
  uVar5 = DAT_004242f8;
  puVar3 = DAT_004242f4;
  uVar4 = DAT_004242f0;
  puVar2 = DAT_004242ec;
  if (((*DAT_004242ec & 1) == 0) && (iVar6 = FUN_003679b4(DAT_004242ec), iVar6 != 0)) {
    *puVar3 = uVar4;
    puVar3[1] = uVar5;
    puVar3[2] = uVar5;
    puVar3[3] = uVar5;
    puVar3[4] = uVar5;
    puVar3[5] = uVar4;
    puVar3[6] = uVar5;
    puVar3[7] = uVar5;
    puVar3[8] = uVar5;
    puVar3[9] = uVar5;
    puVar3[10] = uVar4;
    puVar3[0xb] = uVar5;
  }
  FUN_00372224(auStack_54,DAT_004242f4);
  local_60 = uVar5;
  local_5c = uVar5;
  local_58 = uVar5;
  (**(code **)(*(int *)puVar1[1] + 8))((int *)puVar1[1],auStack_54,auStack_54,&local_60);
  if (puVar1[7] == 0) {
    if (((*puVar2 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_004242ec), iVar6 != 0)) {
      *puVar3 = uVar4;
      puVar3[1] = uVar5;
      puVar3[2] = uVar5;
      puVar3[3] = uVar5;
      puVar3[4] = uVar5;
      puVar3[5] = uVar4;
      puVar3[6] = uVar5;
      puVar3[7] = uVar5;
      puVar3[8] = uVar5;
      puVar3[9] = uVar5;
      puVar3[10] = uVar4;
      puVar3[0xb] = uVar5;
    }
    FUN_00372224(auStack_54,DAT_004242f4);
    iVar6 = DAT_004242fc;
    iVar8 = 0;
    iVar9 = DAT_004242fc + -0x10;
    iVar10 = DAT_004242fc + -8;
    local_60 = uVar5;
    local_5c = uVar5;
    local_58 = uVar5;
    do {
      FUN_002f9a1c(*(undefined4 *)(iVar6 + iVar8 * 4));
      uVar4 = *(undefined4 *)(*(int *)(iVar6 + iVar8 * 4) + 0x10);
      uVar5 = FUN_002f9a0c(*(undefined4 *)(iVar6 + iVar8 * 4));
      FUN_0036759c(*(undefined4 *)(iVar9 + iVar8 * 4),uVar5,uVar4);
      uVar4 = FUN_002fc3f0(*(undefined4 *)(iVar6 + iVar8 * 4),0);
      uVar5 = FUN_002f9a00(*(undefined4 *)(iVar6 + iVar8 * 4));
      FUN_00317d1c(*(undefined4 *)(iVar9 + iVar8 * 4),uVar5,uVar4);
      uVar4 = FUN_002fc3e4(*(undefined4 *)(iVar6 + iVar8 * 4),0);
      uVar5 = FUN_002f99f4(*(undefined4 *)(iVar6 + iVar8 * 4));
      FUN_002f9934(*(undefined4 *)(iVar9 + iVar8 * 4),uVar5,uVar4);
      piVar7 = *(int **)(iVar10 + iVar8 * 4);
      (**(code **)(*piVar7 + 8))(piVar7,auStack_54,auStack_54,&local_60);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    FUN_002f94a8(puVar1[5]);
  }
  return;
}
