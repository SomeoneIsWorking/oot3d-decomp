// OoT3D decomp @ 003a4cf0  name=FUN_003a4cf0  size=316

void FUN_003a4cf0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

  uVar1 = *(uint *)(param_3 + 0x18);
  if (0 < (int)uVar1) {
    uVar3 = *(uint *)(param_3 + 0x1c);
    iVar2 = 0;
    if (uVar3 != 0) {
      iVar2 = *(int *)(param_4 + 0x18);
      param_2 = iVar2;
    }
    if ((uVar3 != 0 && param_2 != 0) && -1 < iVar2) {
      bVar4 = *(int *)(param_4 + 0x1c) != 0;
      if (bVar4) {
        uVar1 = uVar3 + uVar1 * 0x50;
      }
      if (bVar4 && uVar3 < uVar1) {
        do {
          if (((*(byte *)(uVar3 + 0x17) & 1) != 0) &&
             (uVar1 = *(uint *)(param_4 + 0x1c), uVar1 < uVar1 + *(int *)(param_4 + 0x18) * 0x50)) {
            do {
              if (((*(byte *)(uVar1 + 0x17) & 1) != 0) &&
                 (iVar2 = FUN_003813c4(uVar3 + 0x38,uVar1 + 0x38,&local_20), iVar2 == 1)) {
                local_38 = *(undefined4 *)(uVar3 + 0x38);
                uStack_34 = *(undefined4 *)(uVar3 + 0x3c);
                uStack_30 = *(undefined4 *)(uVar3 + 0x40);
                local_44 = *(undefined4 *)(uVar1 + 0x38);
                uStack_40 = *(undefined4 *)(uVar1 + 0x3c);
                uStack_3c = *(undefined4 *)(uVar1 + 0x40);
                local_2c = local_44;
                local_28 = uStack_40;
                local_24 = uStack_3c;
                FUN_0031ad14(local_20,param_3,uVar3,&local_38,param_4,uVar1,&local_44);
              }
              uVar1 = uVar1 + 0x50;
            } while (uVar1 < (uint)(*(int *)(param_4 + 0x1c) + *(int *)(param_4 + 0x18) * 0x50));
          }
          uVar3 = uVar3 + 0x50;
        } while (uVar3 < (uint)(*(int *)(param_3 + 0x1c) + *(int *)(param_3 + 0x18) * 0x50));
      }
    }
  }
  return;
}
