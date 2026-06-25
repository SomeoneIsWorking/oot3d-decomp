// OoT3D decomp @ 004a0820  name=FUN_004a0820  size=232

void FUN_004a0820(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    FUN_002d6e20(*(undefined4 *)(*param_1 + *(int *)(*param_1 + 0x2c) + 8),param_1[9]);
    FUN_002bf27c(1,param_1 + 7);
    FUN_002bf27c(1,param_1 + 8);
    piVar5 = (int *)param_1[4];
    if (0 < *(int *)(*piVar5 + 8)) {
      FUN_002d6e20(*(int *)(*piVar5 + 8),piVar5[1]);
      piVar5[1] = 0;
      piVar5[2] = 0;
    }
    iVar1 = param_1[1];
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    iVar1 = 0;
    iVar3 = *(int *)(*(int *)param_1[2] + 8);
    if (0 < iVar3) {
      do {
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar3);
    }
    ((int *)param_1[2])[3] = 0;
    uVar4 = *(uint *)(*param_1 + *(int *)(*param_1 + 0x2c) + 8);
    if ((int)uVar4 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar4 & 1;
    }
    for (; (int)uVar2 < (int)uVar4; uVar2 = uVar2 + 2) {
    }
    param_1[0xe] = 0;
    param_1[4] = 0;
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return;
}

