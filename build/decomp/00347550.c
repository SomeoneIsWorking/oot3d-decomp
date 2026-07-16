// OoT3D decomp @ 00347550  name=FUN_00347550  size=392

void FUN_00347550(undefined4 param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_30;
  undefined1 uStack_2c;
  
  iVar1 = *param_2 + *(int *)(*param_2 + 0x14);
  iVar2 = (int)*(short *)(iVar1 + 0x20 + param_3 * 2);
  if (-1 < iVar2) {
    iVar1 = iVar1 + *(int *)(iVar1 + 0x20 + (*(int *)(iVar1 + 0x1c) + 1U & 0xfffffffe) * 2 +
                            iVar2 * 4);
    if ((param_5 & 1) != 0) {
      iVar2 = 0;
      do {
        iStack_30 = (int)*(short *)(iVar1 + iVar2 * 2 + 8);
        if (iStack_30 != 0) {
          iStack_30 = iStack_30 + iVar1;
          uStack_2c = 1;
          uVar3 = func_0x003087a4(param_1,&iStack_30);
          *(undefined4 *)(param_4 + iVar2 * 4) = uVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
    }
    if ((param_5 & 2) != 0) {
      iVar2 = 0;
      do {
        iStack_30 = (int)*(short *)(iVar1 + iVar2 * 2 + 0xe);
        if (iStack_30 != 0) {
          iStack_30 = iStack_30 + iVar1;
          uStack_2c = 1;
          if (*(char *)(iVar1 + 6) == '\0') {
            uVar3 = func_0x003087a4(param_1,&iStack_30);
            *(undefined4 *)(param_4 + 0xc + iVar2 * 4) = uVar3;
          }
          else {
            uVar3 = func_0x003084e8();
            *(undefined4 *)(param_4 + 0xc + iVar2 * 4) = uVar3;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
    }
    if ((param_5 & 4) != 0) {
      iVar2 = 0;
      do {
        iStack_30 = (int)*(short *)(iVar1 + iVar2 * 2 + 0x14);
        if (iStack_30 != 0) {
          iStack_30 = iStack_30 + iVar1;
          uStack_2c = 1;
          uVar3 = func_0x003087a4(param_1,&iStack_30);
          *(undefined4 *)(param_4 + 0x18 + iVar2 * 4) = uVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 3);
    }
  }
  return;
}

