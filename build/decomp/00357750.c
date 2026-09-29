// OoT3D decomp @ 00357750  name=FUN_00357750  size=288

void FUN_00357750(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  puVar1 = DAT_00357870;
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x18)) {
    do {
      if (*(byte *)(*(int *)(param_2 + 0x1c) + iVar4 * 0x50 + 0x4c) == param_1) {
        puVar2 = (undefined4 *)(*(int *)(param_2 + 0x1c) + iVar4 * 0x50 + 0x28);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        *puVar1 = *puVar2;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        FUN_003735ac(DAT_00357874,param_3,puVar1);
        puVar2 = DAT_00357874;
        *(undefined4 *)(*(int *)(param_2 + 0x1c) + iVar4 * 0x50 + 0x38) = *DAT_00357874;
        *(undefined4 *)(*(int *)(param_2 + 0x1c) + iVar4 * 0x50 + 0x3c) = puVar2[1];
        *(undefined4 *)(*(int *)(param_2 + 0x1c) + iVar4 * 0x50 + 0x40) = puVar2[2];
        iVar3 = *(int *)(param_2 + 0x1c);
        *(float *)(iVar3 + iVar4 * 0x50 + 0x44) =
             *(float *)(iVar4 * 0x50 + 0x34 + iVar3) * *(float *)(iVar4 * 0x50 + 0x48 + iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_2 + 0x18));
  }
  return;
}
