// OoT3D decomp @ 002f3370  name=FUN_002f3370  size=624

void FUN_002f3370(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 auStack_4c [48];

  puVar1 = DAT_002f35e0;
  if (((*DAT_002f35e0 & 1) == 0) &&
     (uVar8 = FUN_003679b4(DAT_002f35e0), param_2 = (undefined4)((ulonglong)uVar8 >> 0x20),
     (int)uVar8 != 0)) {
    FUN_0036788c(DAT_002f35e4);
    param_2 = DAT_002f35ec;
  }
  uVar3 = DAT_002f35f8;
  uVar2 = DAT_002f35f0;
  if (((*DAT_002f35f4 & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_002f35f4,param_2), puVar5 = DAT_002f3600, uVar4 = DAT_002f35fc,
     iVar6 != 0)) {
    *DAT_002f3600 = DAT_002f35fc;
    puVar5[1] = uVar3;
    puVar5[2] = uVar3;
    puVar5[3] = uVar3;
    puVar5[4] = uVar3;
    puVar5[5] = uVar4;
    puVar5[6] = uVar3;
    puVar5[7] = uVar3;
    puVar5[8] = uVar3;
    puVar5[9] = uVar3;
    puVar5[10] = uVar4;
    puVar5[0xb] = uVar3;
  }
  FUN_00372224(auStack_4c,DAT_002f3600);
  iVar6 = 0;
  local_58 = uVar3;
  local_54 = uVar3;
  local_50 = uVar3;
  do {
    piVar7 = *(int **)(param_1 + *(char *)(param_1 + 5) * 8 + iVar6 * 4 + 0x6f8);
    (**(code **)(*piVar7 + 8))(piVar7,auStack_4c,auStack_4c,&local_58);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  local_68 = *DAT_002f3604;
  uStack_64 = DAT_002f3604[1];
  uStack_60 = DAT_002f3604[2];
  uStack_5c = DAT_002f3604[3];
  FUN_002e74c0(uVar2,6,param_1 + 0x20,&local_68,2);
  FUN_00328350(uVar2,6,*(undefined4 *)(param_1 + *(char *)(param_1 + 5) * 8 + 0x6fc),1);
  FUN_00328350(uVar2,6,*(undefined4 *)(param_1 + *(char *)(param_1 + 5) * 8 + 0x6f8),1);
  if (*(char *)(param_1 + 6) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x994) + 0xc))();
  }
  if (((*puVar1 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_002f35e0), iVar6 != 0)) {
    FUN_0036788c(DAT_002f35e4);
  }
  local_68 = *DAT_002f3608;
  uStack_64 = DAT_002f3608[1];
  uStack_60 = DAT_002f3608[2];
  uStack_5c = DAT_002f3608[3];
  local_78 = DAT_002f3608[4];
  uStack_74 = DAT_002f3608[5];
  uStack_70 = DAT_002f3608[6];
  uStack_6c = DAT_002f3608[7];
  FUN_002e74c0(uVar2,4,param_1 + 0x20,&local_78,2);
  if (*(int *)(param_1 + 0x738) != 0) {
    FUN_002e72ac(param_1,param_1 + 0x73c,*(int *)(param_1 + 0x738),&local_68,4);
  }
  return;
}
