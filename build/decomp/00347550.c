// OoT3D decomp @ 00347550  name=FUN_00347550  size=392

void FUN_00347550(undefined4 param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_30;
  undefined1 local_2c;
  
  iVar1 = *param_2 + *(int *)(*param_2 + 0x14);
  iVar2 = (int)*(short *)(iVar1 + 0x20 + param_3 * 2);
  if (-1 < iVar2) {
    iVar1 = iVar1 + *(int *)(iVar1 + 0x20 + (*(int *)(iVar1 + 0x1c) + 1U & 0xfffffffe) * 2 +
                            iVar2 * 4);
    if ((param_5 & 1) != 0) {
      iVar2 = 0;
      do {
        local_30 = (int)*(short *)(iVar1 + iVar2 * 2 + 8);
        if (local_30 != 0) {
          local_30 = local_30 + iVar1;
          local_2c = 1;
          uVar3 = FUN_003087a4(param_1,&local_30);
          *(undefined4 *)(param_4 + iVar2 * 4) = uVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
    }
    if ((param_5 & 2) != 0) {
      iVar2 = 0;
      do {
        local_30 = (int)*(short *)(iVar1 + iVar2 * 2 + 0xe);
        if (local_30 != 0) {
          local_30 = local_30 + iVar1;
          local_2c = 1;
          if (*(char *)(iVar1 + 6) == '\0') {
            uVar3 = FUN_003087a4(param_1,&local_30);
            *(undefined4 *)(param_4 + 0xc + iVar2 * 4) = uVar3;
          }
          else {
            uVar3 = FUN_003084e8();
            *(undefined4 *)(param_4 + 0xc + iVar2 * 4) = uVar3;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
    }
    if ((param_5 & 4) != 0) {
      iVar2 = 0;
      do {
        local_30 = (int)*(short *)(iVar1 + iVar2 * 2 + 0x14);
        if (local_30 != 0) {
          local_30 = local_30 + iVar1;
          local_2c = 1;
          uVar3 = FUN_003087a4(param_1,&local_30);
          *(undefined4 *)(param_4 + 0x18 + iVar2 * 4) = uVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
    }
  }
  return;
}

