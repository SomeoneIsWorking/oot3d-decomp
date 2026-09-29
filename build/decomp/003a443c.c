// OoT3D decomp @ 003a443c  name=FUN_003a443c  size=436

void FUN_003a443c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 auStack_20 [12];

  if (((0 < *(int *)(param_3 + 0x18)) && (*(int *)(param_3 + 0x1c) != 0)) &&
     ((*(byte *)(param_4 + 0x2e) & 1) != 0)) {
    FUN_00319144(DAT_003a45f0,param_4 + 0x58,param_4 + 100,param_4 + 0x4c);
    FUN_00319144(DAT_003a45f4,param_4 + 0x4c,param_4 + 0x40,param_4 + 0x58);
    puVar2 = *(uint **)(param_3 + 0x1c);
    if (puVar2 < puVar2 + *(int *)(param_3 + 0x18) * 0x14) {
      while ((((*(byte *)((int)puVar2 + 0x15) & 1) == 0 ||
              ((*(uint *)(param_4 + 0x20) & *puVar2) == 0)) ||
             ((iVar1 = FUN_0031e230(puVar2 + 0xe,DAT_003a45f0,auStack_20), iVar1 != 1 &&
              (iVar1 = FUN_0031e230(puVar2 + 0xe,DAT_003a45f4,auStack_20), iVar1 != 1))))) {
        puVar2 = puVar2 + 0x14;
        if ((uint *)(*(int *)(param_3 + 0x1c) + *(int *)(param_3 + 0x18) * 0x50) <= puVar2) {
          return;
        }
      }
      local_38 = puVar2[0xe];
      uStack_34 = puVar2[0xf];
      uStack_30 = puVar2[0x10];
      local_44 = (*(float *)(param_4 + 0x58) + *(float *)(param_4 + 100) +
                 *(float *)(param_4 + 0x4c) + *(float *)(param_4 + 0x40)) * DAT_003a45f8;
      local_40 = (*(float *)(param_4 + 0x5c) + *(float *)(param_4 + 0x68) +
                 *(float *)(param_4 + 0x50) + *(float *)(param_4 + 0x44)) * DAT_003a45f8;
      local_3c = (*(float *)(param_4 + 0x60) + *(float *)(param_4 + 0x6c) +
                 *(float *)(param_4 + 0x54) + *(float *)(param_4 + 0x48)) * DAT_003a45f8;
      local_2c = local_38;
      local_28 = uStack_34;
      local_24 = uStack_30;
      FUN_003191a4(param_1,param_3,puVar2,&local_38,param_4,param_4 + 0x18,&local_44,auStack_20);
    }
  }
  return;
}
