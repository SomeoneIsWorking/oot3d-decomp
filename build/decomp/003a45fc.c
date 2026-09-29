// OoT3D decomp @ 003a45fc  name=FUN_003a45fc  size=408

void FUN_003a45fc(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  float local_48;
  float local_44;
  float local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined1 auStack_24 [12];

  puVar1 = *(uint **)(param_3 + 0x18);
  if (0 < (int)puVar1) {
    puVar4 = *(uint **)(param_3 + 0x1c);
    iVar2 = 0;
    if (puVar4 != (uint *)0x0) {
      iVar2 = *(int *)(param_4 + 0x18);
      param_2 = iVar2;
    }
    if ((puVar4 != (uint *)0x0 && param_2 != 0) && -1 < iVar2) {
      bVar5 = *(int *)(param_4 + 0x1c) != 0;
      if (bVar5) {
        puVar1 = puVar4 + (int)puVar1 * 0x14;
      }
      if (bVar5 && puVar4 < puVar1) {
        do {
          if (((*(byte *)((int)puVar4 + 0x15) & 1) != 0) &&
             (uVar3 = *(uint *)(param_4 + 0x1c), uVar3 < uVar3 + *(int *)(param_4 + 0x18) * 0x5c)) {
            do {
              if (((*(byte *)(uVar3 + 0x16) & 1) != 0) &&
                 (((*puVar4 & *(uint *)(uVar3 + 8)) != 0 &&
                  (iVar2 = FUN_0031e230(puVar4 + 0xe,uVar3 + 0x28,auStack_24), iVar2 == 1)))) {
                local_3c = puVar4[0xe];
                uStack_38 = puVar4[0xf];
                uStack_34 = puVar4[0x10];
                local_48 = (*(float *)(uVar3 + 0x28) + *(float *)(uVar3 + 0x34) +
                           *(float *)(uVar3 + 0x40)) * DAT_003a4794;
                local_44 = (*(float *)(uVar3 + 0x2c) + *(float *)(uVar3 + 0x38) +
                           *(float *)(uVar3 + 0x44)) * DAT_003a4794;
                local_40 = (*(float *)(uVar3 + 0x30) + *(float *)(uVar3 + 0x3c) +
                           *(float *)(uVar3 + 0x48)) * DAT_003a4794;
                local_30 = local_3c;
                local_2c = uStack_38;
                local_28 = uStack_34;
                FUN_003191a4(param_1,param_3,puVar4,&local_3c,param_4,uVar3,&local_48,auStack_24);
                return;
              }
              uVar3 = uVar3 + 0x5c;
            } while (uVar3 < (uint)(*(int *)(param_4 + 0x1c) + *(int *)(param_4 + 0x18) * 0x5c));
          }
          puVar4 = puVar4 + 0x14;
          if ((uint *)(*(int *)(param_3 + 0x1c) + *(int *)(param_3 + 0x18) * 0x50) <= puVar4) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}
