// OoT3D decomp @ 00347550  name=FUN_00347550  size=392

void FUN_00347550(undefined4 param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_30;
  undefined local_2c;
  
  iVar1 = *param_2 + *(int *)(*param_2 + 0x14);
  iVar3 = (int)*(short *)(iVar1 + 0x20 + param_3 * 2);
  if (-1 < iVar3) {
    iVar1 = iVar1 + *(int *)(iVar1 + 0x20 + (*(int *)(iVar1 + 0x1c) + 1U & 0xfffffffe) * 2 +
                            iVar3 * 4);
    if ((param_5 & 1) != 0) {
      iVar3 = 0;
      do {
        local_30 = (int)*(short *)(iVar1 + iVar3 * 2 + 8);
        iVar2 = local_30;
        if (local_30 != 0) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          local_30 = local_30 + iVar1;
          local_2c = 1;
          uVar4 = FUN_003087a4(param_1,&local_30);
          *(undefined4 *)(param_4 + iVar3 * 4) = uVar4;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
    }
    if ((param_5 & 2) != 0) {
      iVar3 = 0;
      do {
        local_30 = (int)*(short *)(iVar1 + iVar3 * 2 + 0xe);
        iVar2 = local_30;
        if (local_30 != 0) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          local_30 = local_30 + iVar1;
          local_2c = 1;
          if (*(char *)(iVar1 + 6) == '\0') {
            uVar4 = FUN_003087a4(param_1,&local_30);
            *(undefined4 *)(param_4 + 0xc + iVar3 * 4) = uVar4;
          }
          else {
            uVar4 = FUN_003084e8();
            *(undefined4 *)(param_4 + 0xc + iVar3 * 4) = uVar4;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
    }
    if ((param_5 & 4) != 0) {
      iVar3 = 0;
      do {
        local_30 = (int)*(short *)(iVar1 + iVar3 * 2 + 0x14);
        iVar2 = local_30;
        if (local_30 != 0) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          local_30 = local_30 + iVar1;
          local_2c = 1;
          uVar4 = FUN_003087a4(param_1,&local_30);
          *(undefined4 *)(param_4 + 0x18 + iVar3 * 4) = uVar4;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
    }
  }
  return;
}

