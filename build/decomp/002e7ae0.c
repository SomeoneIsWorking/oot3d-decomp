// OoT3D decomp @ 002e7ae0  name=FUN_002e7ae0  size=428

void FUN_002e7ae0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  iVar1 = DAT_002e7c8c;
  *(undefined4 *)(DAT_002e7c8c + 0x10) = 1;
  puVar2 = DAT_002e7c90;
  if (param_1 == 1) {
    *DAT_002e7c90 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    FUN_002ee5e4();
    FUN_002edbe8();
    FUN_002ed224();
    uVar4 = DAT_002e7c98;
    if (((*DAT_002e7c94 & 1) == 0) &&
       (iVar3 = FUN_003679b4(DAT_002e7c94), puVar2 = DAT_002e7ca0, uVar5 = DAT_002e7c9c, iVar3 != 0)
       ) {
      *DAT_002e7ca0 = DAT_002e7c9c;
      puVar2[1] = uVar4;
      puVar2[2] = uVar4;
      puVar2[3] = uVar4;
      puVar2[4] = uVar4;
      puVar2[5] = uVar5;
      puVar2[6] = uVar4;
      puVar2[7] = uVar4;
      puVar2[8] = uVar4;
      puVar2[9] = uVar4;
      puVar2[10] = uVar5;
      puVar2[0xb] = uVar4;
    }
    FUN_00372224(auStack_44,DAT_002e7ca0);
    local_50 = uVar4;
    local_4c = uVar4;
    local_48 = uVar4;
    FUN_002f9a1c(*(undefined4 *)(iVar1 + 0x30));
    uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x10);
    uVar5 = FUN_002f9a0c(*(undefined4 *)(iVar1 + 0x30));
    FUN_0036759c(*(undefined4 *)(iVar1 + 4),uVar5,uVar4);
    uVar4 = FUN_002fc3f0(*(undefined4 *)(iVar1 + 0x30),0);
    uVar5 = FUN_002f9a00(*(undefined4 *)(iVar1 + 0x30));
    FUN_00317d1c(*(undefined4 *)(iVar1 + 4),uVar5,uVar4);
    uVar4 = FUN_002fc3e4(*(undefined4 *)(iVar1 + 0x30),0);
    uVar5 = FUN_002f99f4(*(undefined4 *)(iVar1 + 0x30));
    FUN_002f9934(*(undefined4 *)(iVar1 + 4),uVar5,uVar4);
    (**(code **)(**(int **)(iVar1 + 8) + 8))(*(int **)(iVar1 + 8),auStack_44,auStack_44,&local_50);
  }
  FUN_002f43d8(1);
  FUN_00331754(1);
  return;
}
