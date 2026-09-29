// OoT3D decomp @ 004338c8  name=FUN_004338c8  size=432

void FUN_004338c8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [48];

  iVar1 = DAT_00433a78;
  if (*(int *)(DAT_00433a78 + 0x34) != 0) {
    FUN_002f9a1c(*(undefined4 *)(DAT_00433a78 + 0x24));
    uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x10);
    uVar4 = FUN_002f9a0c(*(undefined4 *)(iVar1 + 0x24));
    FUN_0036759c(*(undefined4 *)(iVar1 + 0x1c),uVar4,uVar3);
    uVar3 = FUN_002fc3f0(*(undefined4 *)(iVar1 + 0x24),0);
    uVar4 = FUN_002f9a00(*(undefined4 *)(iVar1 + 0x24));
    FUN_00317d1c(*(undefined4 *)(iVar1 + 0x1c),uVar4,uVar3);
    uVar3 = FUN_002fc3e4(*(undefined4 *)(iVar1 + 0x24),0);
    uVar4 = FUN_002f99f4(*(undefined4 *)(iVar1 + 0x24));
    FUN_002f9934(*(undefined4 *)(iVar1 + 0x1c),uVar4,uVar3);
    uVar3 = DAT_00433a80;
    if (((*DAT_00433a7c & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_00433a7c), puVar2 = DAT_00433a88, uVar4 = DAT_00433a84, iVar5 != 0)
       ) {
      *DAT_00433a88 = DAT_00433a84;
      puVar2[1] = uVar3;
      puVar2[2] = uVar3;
      puVar2[3] = uVar3;
      puVar2[4] = uVar3;
      puVar2[5] = uVar4;
      puVar2[6] = uVar3;
      puVar2[7] = uVar3;
      puVar2[8] = uVar3;
      puVar2[9] = uVar3;
      puVar2[10] = uVar4;
      puVar2[0xb] = uVar3;
    }
    FUN_00372224(auStack_48,DAT_00433a88);
    local_54 = uVar3;
    local_50 = uVar3;
    local_4c = uVar3;
    (**(code **)(**(int **)(iVar1 + 0x20) + 8))
              (*(int **)(iVar1 + 0x20),auStack_48,auStack_48,&local_54);
    iVar5 = DAT_00433a8c;
    iVar6 = 0;
    do {
      FUN_002f94a8(*(undefined4 *)(iVar5 + iVar6 * 4));
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    FUN_002f94a8(*(undefined4 *)(iVar1 + 0x2c));
    FUN_00441fdc(*(undefined4 *)(iVar1 + 0x4c));
    FUN_002f94a8(*(undefined4 *)(iVar1 + 0x28));
  }
  return;
}
