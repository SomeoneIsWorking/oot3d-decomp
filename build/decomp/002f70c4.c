// OoT3D decomp @ 002f70c4  name=FUN_002f70c4  size=948

void FUN_002f70c4(undefined4 *param_1)

{
  int **ppiVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  ppiVar1 = DAT_002f7478;
  if (param_1[0x13] != 0) {
    uVar5 = 0;
    if (param_1[7] == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1[3] + param_1[7] * 0x10);
    }
    if (iVar2 != 0) {
      do {
        if (*(int *)(param_1[0x13] + uVar5 * 4) != 0) {
          uVar3 = FUN_002da0e4();
          (**(code **)(**ppiVar1 + 0x10))(*ppiVar1,uVar3);
        }
        uVar5 = uVar5 + 1;
        if (param_1[7] == -1) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1[3] + param_1[7] * 0x10);
        }
      } while (uVar5 < uVar4);
    }
    FUN_0034fc6c(param_1[0x13]);
    param_1[0x13] = 0;
  }
  ppiVar1 = DAT_002f747c;
  if (param_1[0x14] != 0) {
    uVar5 = 0;
    if (param_1[8] == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1[3] + param_1[8] * 0x10);
    }
    if (iVar2 != 0) {
      do {
        iVar2 = *(int *)(param_1[0x14] + uVar5 * 4);
        if (iVar2 != 0) {
          (**(code **)(**ppiVar1 + 0x10))(*ppiVar1,iVar2);
        }
        uVar5 = uVar5 + 1;
        if (param_1[8] == -1) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1[3] + param_1[8] * 0x10);
        }
      } while (uVar5 < uVar4);
    }
    FUN_0034fc6c(param_1[0x14]);
    param_1[0x14] = 0;
  }
  ppiVar1 = DAT_002f7480;
  if (param_1[0x15] != 0) {
    uVar5 = 0;
    if (param_1[10] == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1[3] + param_1[10] * 0x10);
    }
    if (iVar2 != 0) {
      do {
        if (*(int *)(param_1[0x15] + uVar5 * 4) != 0) {
          uVar3 = FUN_00307674();
          (**(code **)(**ppiVar1 + 0x10))(*ppiVar1,uVar3);
        }
        uVar5 = uVar5 + 1;
        if (param_1[10] == -1) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1[3] + param_1[10] * 0x10);
        }
      } while (uVar5 < uVar4);
    }
    FUN_0034fc6c(param_1[0x15]);
    param_1[0x15] = 0;
  }
  if ((param_1[0xb] != -1) && (*(int *)(param_1[3] + param_1[0xb] * 0x10) != 0)) {
    FUN_0034fc6c(param_1[0x17]);
    param_1[0x17] = 0;
  }
  ppiVar1 = DAT_002f7484;
  if (param_1[0x16] != 0) {
    uVar5 = 0;
    if (param_1[0xc] == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1[3] + param_1[0xc] * 0x10);
    }
    if (iVar2 != 0) {
      do {
        if (*(int *)(param_1[0x16] + uVar5 * 4) != 0) {
          uVar3 = FUN_00498098();
          (**(code **)(**ppiVar1 + 0x10))(*ppiVar1,uVar3);
        }
        uVar5 = uVar5 + 1;
        if (param_1[0xc] == -1) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1[3] + param_1[0xc] * 0x10);
        }
      } while (uVar5 < uVar4);
    }
    FUN_0034fc6c(param_1[0x16]);
    param_1[0x16] = 0;
  }
  if (param_1[0x18] != 0) {
    FUN_0034fc6c();
    param_1[0x18] = 0;
  }
  if (param_1[0x19] != 0) {
    FUN_0034fc6c();
    param_1[0x19] = 0;
  }
  if (param_1[0x1a] != 0) {
    uVar5 = 0;
    if (param_1[0xf] == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1[3] + param_1[0xf] * 0x10);
    }
    if (iVar2 != 0) {
      do {
        FUN_00498cb4(*(undefined4 *)(param_1[0x1a] + uVar5 * 4));
        FUN_0034fc6c(*(undefined4 *)(param_1[0x1a] + uVar5 * 4));
        uVar5 = uVar5 + 1;
        if (param_1[0xf] == -1) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1[3] + param_1[0xf] * 0x10);
        }
      } while (uVar5 < uVar4);
    }
    FUN_0034fc6c(param_1[0x1a]);
    param_1[0x1a] = 0;
  }
  ppiVar1 = DAT_002f7488;
  if (param_1[0x1b] != 0) {
    uVar5 = 0;
    if (param_1[0x10] == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1[3] + param_1[0x10] * 0x10);
    }
    if (iVar2 != 0) {
      do {
        FUN_002c411c(*(undefined4 *)(param_1[0x1b] + uVar5 * 4));
        if (*(int *)(param_1[0x1b] + uVar5 * 4) != 0) {
          uVar3 = FUN_00498084();
          (**(code **)(**ppiVar1 + 0x10))(*ppiVar1,uVar3);
        }
        uVar5 = uVar5 + 1;
        if (param_1[0x10] == -1) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(uint *)(param_1[3] + param_1[0x10] * 0x10);
        }
      } while (uVar5 < uVar4);
    }
    FUN_0034fc6c(param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_00498f28(param_1[6]);
    param_1[6] = 0;
  }
  return;
}

