// OoT3D decomp @ 001d699c  name=FUN_001d699c  size=700

void FUN_001d699c(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;

  sVar1 = *(short *)(param_1 + 0x640);
  uVar4 = 0;
  if (*(short *)(param_1 + 0x642) == sVar1) goto LAB_001d6a3c;
  if (sVar1 == 4) {
    uVar2 = 3;
LAB_001d69dc:
    *(undefined2 *)(param_1 + 0x640) = uVar2;
  }
  else if (sVar1 == 6) {
    uVar2 = 5;
    goto LAB_001d69dc;
  }
  *(undefined2 *)(param_1 + 0x642) = *(undefined2 *)(param_1 + 0x640);
  switch(*(undefined2 *)(param_1 + 0x640)) {
  case 0:
    uVar4 = 1;
    break;
  case 1:
    uVar4 = 2;
    break;
  case 2:
    uVar4 = 3;
    break;
  case 3:
    uVar4 = 4;
    break;
  case 5:
    uVar4 = 6;
  }
  FUN_003717ac(param_1 + 0x1a4,DAT_001d6c88,uVar4);
LAB_001d6a3c:
  uVar4 = DAT_001d6c90;
  switch(*(undefined2 *)(param_1 + 0x642)) {
  case 0:
    if ((*(int *)(param_1 + 0x1d4) == 5) &&
       (iVar3 = FUN_003736fc(DAT_001d6c8c,DAT_001d6c90,param_1 + 0x1a4), iVar3 == 0)) {
      FUN_003736fc(DAT_001d6c94,uVar4,param_1 + 0x1a4);
    }
    break;
  case 1:
    if ((*(int *)(param_1 + 0x1d4) == 3) &&
       ((iVar3 = FUN_003736fc(DAT_001d6c98,DAT_001d6c90,param_1 + 0x1a4), iVar3 != 0 ||
        (iVar3 = FUN_003736fc(DAT_001d6c9c,uVar4,param_1 + 0x1a4), iVar3 != 0)))) {
      FUN_00375bcc(param_1,DAT_001d6ca0);
    }
    break;
  case 2:
    if ((*(int *)(param_1 + 0x1d4) == 0) &&
       ((iVar3 = FUN_003736fc(DAT_001d6ca4,DAT_001d6c90,param_1 + 0x1a4), iVar3 != 0 ||
        (iVar3 = FUN_003736fc(DAT_001d6ca8,uVar4,param_1 + 0x1a4), iVar3 != 0)))) {
      FUN_00375bcc(param_1,DAT_001d6cac);
    }
    break;
  case 3:
    iVar3 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_001d6c8c,param_1 + 0x1a4);
    if (iVar3 != 0) {
      FUN_003717ac(param_1 + 0x1a4,DAT_001d6c88,5);
      *(undefined2 *)(param_1 + 0x640) = 4;
      *(undefined2 *)(param_1 + 0x642) = 4;
    }
    break;
  case 5:
    iVar3 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1ec),DAT_001d6c8c,param_1 + 0x1a4);
    if (iVar3 != 0) {
      FUN_003717ac(param_1 + 0x1a4,DAT_001d6c88,7);
      *(undefined2 *)(param_1 + 0x640) = 6;
      *(undefined2 *)(param_1 + 0x642) = 6;
    }
  }
  FUN_00370734(param_1 + 0x1a4);
  uVar4 = DAT_001d6cb4;
  if (((*(char *)(param_1 + 0x5d0) != '\0') &&
      (FUN_00376340(*(undefined4 *)(param_1 + 0x618),*(float *)(param_1 + 0x61c) * DAT_001d6cb0,
                    DAT_001d6cb4,param_2,param_1,5), *(short *)(param_2 + 0x104) == 0x20)) &&
     ((*(ushort *)(param_1 + 0x90) & 3) != 0)) {
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined1 *)(param_1 + 0x5d0) = 0;
  }
  FUN_00376864(param_1);
  (**(code **)(param_1 + 0x5d4))(param_1,param_2);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x5d8);
  return;
}
