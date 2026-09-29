// OoT3D decomp @ 002f7684  name=FUN_002f7684  size=376

void FUN_002f7684(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  uVar1 = DAT_002f7800;
  if (((*DAT_002f77fc & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_002f77fc), puVar3 = DAT_002f7808, uVar2 = DAT_002f7804, iVar4 != 0))
  {
    *DAT_002f7808 = DAT_002f7804;
    puVar3[1] = uVar1;
    puVar3[2] = uVar1;
    puVar3[3] = uVar1;
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
    puVar3[6] = uVar1;
    puVar3[7] = uVar1;
    puVar3[8] = uVar1;
    puVar3[9] = uVar1;
    puVar3[10] = uVar2;
    puVar3[0xb] = uVar1;
  }
  FUN_00372224(auStack_44,DAT_002f7808);
  local_50 = uVar1;
  local_4c = uVar1;
  local_48 = uVar1;
  if (*(int *)(param_1 + 0x40) == 2) {
    iVar4 = 0;
    do {
      piVar5 = *(int **)(param_1 + iVar4 * 4 + 0x10);
      (**(code **)(*piVar5 + 8))(piVar5,auStack_44,auStack_44,&local_50);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 9);
    return;
  }
  if (*(int *)(param_1 + 0x40) == 3) {
    (**(code **)(**(int **)(param_1 + 0x10) + 8))
              (*(int **)(param_1 + 0x10),auStack_44,auStack_44,&local_50);
    return;
  }
  iVar4 = 0;
  do {
    piVar5 = *(int **)(param_1 + iVar4 * 4 + 0x10);
    (**(code **)(*piVar5 + 8))(piVar5,auStack_44,auStack_44,&local_50);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return;
}
