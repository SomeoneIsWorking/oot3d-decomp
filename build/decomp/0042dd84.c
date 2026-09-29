// OoT3D decomp @ 0042dd84  name=FUN_0042dd84  size=384

void FUN_0042dd84(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  iVar1 = DAT_0042df04;
  if (*(int *)(DAT_0042df04 + 0x34) != 0) {
    FUN_002f9a1c(*(undefined4 *)(DAT_0042df04 + 4));
    uVar3 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10);
    uVar4 = FUN_002f9a0c(*(undefined4 *)(iVar1 + 4));
    FUN_0036759c(*(undefined4 *)(iVar1 + 8),uVar4,uVar3);
    uVar3 = FUN_002fc3f0(*(undefined4 *)(iVar1 + 4),0);
    uVar4 = FUN_002f9a00(*(undefined4 *)(iVar1 + 4));
    FUN_00317d1c(*(undefined4 *)(iVar1 + 8),uVar4,uVar3);
    uVar3 = FUN_002fc3e4(*(undefined4 *)(iVar1 + 4),0);
    uVar4 = FUN_002f99f4(*(undefined4 *)(iVar1 + 4));
    FUN_002f9934(*(undefined4 *)(iVar1 + 8),uVar4,uVar3);
    uVar3 = DAT_0042df0c;
    if (((*DAT_0042df08 & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_0042df08), puVar2 = DAT_0042df14, uVar4 = DAT_0042df10, iVar5 != 0)
       ) {
      *DAT_0042df14 = DAT_0042df10;
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
    FUN_00372224(auStack_44,DAT_0042df14);
    local_50 = uVar3;
    local_4c = uVar3;
    local_48 = uVar3;
    (**(code **)(**(int **)(iVar1 + 0xc) + 8))
              (*(int **)(iVar1 + 0xc),auStack_44,auStack_44,&local_50);
    if (*(int *)(iVar1 + 0x2c) != 0) {
      FUN_002f0b2c();
    }
  }
  return;
}
