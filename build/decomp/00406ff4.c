// OoT3D decomp @ 00406ff4  name=FUN_00406ff4  size=372

void FUN_00406ff4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_9c [4];
  uint local_98;
  undefined4 local_94;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;

  if ((*(char *)(param_1 + 0x81) != '\0') && (*(char *)(param_1 + 9) == '\0')) {
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    iVar1 = FUN_003093a4(param_1,&local_20,&local_24,&local_28);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + local_28;
      iVar1 = *(int *)(param_1 + 0x98);
      iVar4 = *(int *)(param_1 + 0xb0);
      uVar2 = FUN_00309474(*(undefined1 *)(param_1 + 0x48));
      FUN_004058d4(iVar1 * iVar4,uVar2);
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0xe14)) {
        do {
          iVar4 = param_1 + iVar1 * 0x20;
          if (*(char *)(iVar4 + 0x1f1c) != '\0') {
            local_9c[0] = FUN_00309474(*(undefined1 *)(param_1 + 0x48));
            local_98 = (uint)*(byte *)(iVar4 + 0x1f2a);
            uVar5 = 0;
            local_94 = *(undefined4 *)(param_1 + 0x4c);
            uVar3 = (uint)*(byte *)(iVar4 + 0x1f2a);
            if (uVar3 != 0) {
              do {
                if (uVar5 < 2) {
                  uVar3 = (uint)(byte)((char *)(iVar4 + 0x1f1c))[uVar5 + 0xf];
                }
                if (uVar5 < 2 && uVar3 < 8) {
                  uVar3 = param_1 + uVar3 * 0x220;
                  iVar6 = uVar3 + 0xe1c;
                }
                else {
                  iVar6 = 0;
                }
                if (iVar6 != 0) {
                  uVar3 = *(uint *)(iVar6 + 0x30);
                }
                if (iVar6 != 0 && uVar3 != 0) {
                  FUN_00309280(uVar3,local_9c,local_24);
                  FUN_00309260(*(undefined4 *)(iVar6 + 0x30));
                }
                uVar3 = (uint)*(byte *)(iVar4 + 0x1f2a);
                uVar5 = uVar5 + 1;
              } while ((int)uVar5 < (int)uVar3);
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0xe14));
      }
      FUN_00309854(param_1);
      uVar2 = FUN_0030c7cc();
      FUN_00309bc8(uVar2,param_1 + 0x3c);
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  return;
}
