// OoT3D decomp @ 003a4960  name=FUN_003a4960  size=476

void FUN_003a4960(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [12];

  if (((0 < *(int *)(param_4 + 0x18)) && (*(int *)(param_4 + 0x1c) != 0)) &&
     ((*(byte *)(param_3 + 0x2d) & 1) != 0)) {
    FUN_00319144(DAT_003a4b3c,param_3 + 0x58,param_3 + 100,param_3 + 0x4c);
    FUN_00319144(DAT_003a4b40,param_3 + 0x58,param_3 + 0x4c,param_3 + 0x40);
    fVar1 = DAT_003a4b44;
    uVar3 = *(uint *)(param_4 + 0x1c);
    if (uVar3 < uVar3 + *(int *)(param_4 + 0x18) * 0x50) {
      do {
        if (((((*(byte *)(uVar3 + 0x16) & 1) != 0) &&
             ((*(uint *)(param_3 + 0x18) & *(uint *)(uVar3 + 8)) != 0)) &&
            ((iVar2 = FUN_0031e230(uVar3 + 0x38,DAT_003a4b3c,auStack_2c), iVar2 == 1 ||
             (iVar2 = FUN_0031e230(uVar3 + 0x38,DAT_003a4b40,auStack_2c), iVar2 == 1)))) &&
           (iVar2 = FUN_00318d00(param_1,param_3,auStack_2c), iVar2 != 0)) {
          local_50 = *(undefined4 *)(uVar3 + 0x38);
          uStack_4c = *(undefined4 *)(uVar3 + 0x3c);
          uStack_48 = *(undefined4 *)(uVar3 + 0x40);
          local_44 = (*(float *)(param_3 + 0x58) + *(float *)(param_3 + 100) +
                     *(float *)(param_3 + 0x4c) + *(float *)(param_3 + 0x40)) * fVar1;
          local_40 = (*(float *)(param_3 + 0x5c) + *(float *)(param_3 + 0x68) +
                     *(float *)(param_3 + 0x50) + *(float *)(param_3 + 0x44)) * fVar1;
          local_3c = (*(float *)(param_3 + 0x60) + *(float *)(param_3 + 0x6c) +
                     *(float *)(param_3 + 0x54) + *(float *)(param_3 + 0x48)) * fVar1;
          local_38 = local_50;
          local_34 = uStack_4c;
          local_30 = uStack_48;
          FUN_003191a4(param_1,param_3,param_3 + 0x18,&local_44,param_4,uVar3,&local_50,auStack_2c);
          if ((*(byte *)(param_4 + 0x13) & 0x40) == 0) {
            return;
          }
        }
        uVar3 = uVar3 + 0x50;
      } while (uVar3 < (uint)(*(int *)(param_4 + 0x1c) + *(int *)(param_4 + 0x18) * 0x50));
    }
  }
  return;
}
