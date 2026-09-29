// OoT3D decomp @ 003a0388  name=FUN_003a0388  size=256

void FUN_003a0388(undefined4 param_1,byte param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  if (0 < *(int *)(param_3 + 0x18)) {
    uVar2 = *(uint *)(param_3 + 0x1c);
    bVar3 = uVar2 != 0;
    if (bVar3) {
      param_2 = *(byte *)(param_4 + 0x12);
    }
    bVar4 = (param_2 & 1) != 0;
    if (bVar3 && bVar4) {
      param_2 = *(byte *)(param_4 + 0x2f);
    }
    if (((bVar3 && bVar4) && (param_2 & 1) != 0) &&
       (uVar2 < uVar2 + *(int *)(param_3 + 0x18) * 0x50)) {
      do {
        if (((*(byte *)(uVar2 + 0x17) & 1) != 0) &&
           (iVar1 = FUN_00318898(uVar2 + 0x38,param_4 + 0x40,&local_1c), iVar1 == 1)) {
          local_34 = *(undefined4 *)(uVar2 + 0x38);
          uStack_30 = *(undefined4 *)(uVar2 + 0x3c);
          uStack_2c = *(undefined4 *)(uVar2 + 0x40);
          local_40 = *(undefined4 *)(param_4 + 0x4c);
          uStack_3c = *(undefined4 *)(param_4 + 0x50);
          uStack_38 = *(undefined4 *)(param_4 + 0x54);
          local_28 = local_40;
          local_24 = uStack_3c;
          local_20 = uStack_38;
          FUN_0031ad14(local_1c,param_3,uVar2,&local_34,param_4,param_4 + 0x18,&local_40);
        }
        uVar2 = uVar2 + 0x50;
      } while (uVar2 < (uint)(*(int *)(param_3 + 0x1c) + *(int *)(param_3 + 0x18) * 0x50));
    }
  }
  return;
}
