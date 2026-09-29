// OoT3D decomp @ 00408b3c  name=FUN_00408b3c  size=324

void FUN_00408b3c(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_44;
  undefined1 local_40;

  iVar5 = 0;
  iVar6 = *param_2 + *(int *)(*param_2 + 0x14);
  if (0 < *(int *)(iVar6 + 0x18)) {
    do {
      iVar1 = iVar6 + *(int *)(iVar6 + 0x20 + (*(int *)(iVar6 + 0x1c) + 1U & 0xfffffffe) * 2 +
                              iVar5 * 4);
      if (-1 < *(short *)(iVar1 + 4)) {
        iVar2 = 0;
        iVar4 = param_3 + *(short *)(iVar1 + 4) * 0x24;
        iVar3 = iVar4 + 0xc;
        do {
          local_44 = (int)*(short *)(iVar1 + iVar2 * 2 + 8);
          if (local_44 != 0) {
            local_44 = local_44 + iVar1;
            local_40 = 1;
            uVar7 = FUN_003087a4(param_1,&local_44);
            *(undefined4 *)(iVar4 + iVar2 * 4) = uVar7;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 3);
        iVar2 = 0;
        do {
          local_44 = (int)*(short *)(iVar1 + iVar2 * 2 + 0xe);
          if (local_44 != 0) {
            local_44 = local_44 + iVar1;
            local_40 = 1;
            if (*(char *)(iVar1 + 6) == '\0') {
              uVar7 = FUN_003087a4(param_1,&local_44);
              *(undefined4 *)(iVar3 + iVar2 * 4) = uVar7;
            }
            else {
              uVar7 = FUN_003084e8();
              *(undefined4 *)(iVar3 + iVar2 * 4) = uVar7;
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar6 + 0x18));
  }
  return;
}
