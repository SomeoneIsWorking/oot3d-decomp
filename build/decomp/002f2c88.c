// OoT3D decomp @ 002f2c88  name=FUN_002f2c88  size=428

void FUN_002f2c88(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [48];

  uVar1 = DAT_002f2e34;
  iVar4 = *(int *)(param_2 + 4);
  iVar5 = param_3;
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_2 + 100);
  }
  if ((iVar4 != 0 && iVar5 != 0) &&
     (*(char *)(*(int *)(iVar4 + *(int *)(param_2 + 0x78) * 4) + 0x390) != '\0')) {
    local_84 = DAT_002f2e34;
    local_80 = DAT_002f2e34;
    local_7c = DAT_002f2e34;
    if (((*DAT_002f2e38 & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_002f2e38), puVar3 = DAT_002f2e40, uVar2 = DAT_002f2e3c, iVar5 != 0)
       ) {
      *DAT_002f2e40 = DAT_002f2e3c;
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
    FUN_00372224(auStack_48,DAT_002f2e40);
    FUN_00494e80(param_1,param_2);
    (**(code **)(**(int **)(param_2 + 100) + 8))
              (*(int **)(param_2 + 100),auStack_48,auStack_48,&local_84);
    (**(code **)(**(int **)(param_2 + 0x68) + 8))
              (*(int **)(param_2 + 0x68),auStack_48,auStack_48,&local_84);
    FUN_0036c174(&local_78,param_3,*(int *)(param_2 + 100) + 0xb4);
    iVar5 = *(int *)(param_2 + 100);
    *(undefined4 *)(iVar5 + 0xc) = local_78;
    *(undefined4 *)(iVar5 + 0x10) = uStack_74;
    *(undefined4 *)(iVar5 + 0x14) = uStack_70;
    *(undefined4 *)(iVar5 + 0x18) = uStack_6c;
    *(undefined4 *)(iVar5 + 0x1c) = uStack_68;
    *(undefined4 *)(iVar5 + 0x20) = local_64;
    *(undefined4 *)(iVar5 + 0x24) = uStack_60;
    *(undefined4 *)(iVar5 + 0x28) = local_5c;
    *(undefined4 *)(iVar5 + 0x2c) = uStack_58;
    *(undefined4 *)(iVar5 + 0x30) = uStack_54;
    *(undefined4 *)(iVar5 + 0x34) = local_50;
    *(undefined4 *)(iVar5 + 0x38) = uStack_4c;
    FUN_0036c174(&local_78,param_3,*(int *)(param_2 + 0x68) + 0xb4);
    iVar5 = *(int *)(param_2 + 0x68);
    *(undefined4 *)(iVar5 + 0xc) = local_78;
    *(undefined4 *)(iVar5 + 0x10) = uStack_74;
    *(undefined4 *)(iVar5 + 0x14) = uStack_70;
    *(undefined4 *)(iVar5 + 0x18) = uStack_6c;
    *(undefined4 *)(iVar5 + 0x1c) = uStack_68;
    *(undefined4 *)(iVar5 + 0x20) = local_64;
    *(undefined4 *)(iVar5 + 0x24) = uStack_60;
    *(undefined4 *)(iVar5 + 0x28) = local_5c;
    *(undefined4 *)(iVar5 + 0x2c) = uStack_58;
    *(undefined4 *)(iVar5 + 0x30) = uStack_54;
    *(undefined4 *)(iVar5 + 0x34) = local_50;
    *(undefined4 *)(iVar5 + 0x38) = uStack_4c;
  }
  return;
}
