// OoT3D decomp @ 003a4278  name=FUN_003a4278  size=444

void FUN_003a4278(float param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined1 auStack_28 [4];

  puVar1 = *(uint **)(param_4 + 0x18);
  if (0 < (int)puVar1) {
    puVar3 = *(uint **)(param_4 + 0x1c);
    bVar5 = puVar3 == (uint *)0x0;
    bVar4 = true;
    if (!bVar5) {
      bVar5 = *(float *)(param_5 + 0x40) == DAT_003a4434;
      bVar4 = DAT_003a4434 <= *(float *)(param_5 + 0x40);
      param_1 = DAT_003a4434;
    }
    if (bVar4 && !bVar5) {
      bVar5 = *(float *)(param_5 + 0x44) == param_1;
      bVar4 = param_1 <= *(float *)(param_5 + 0x44);
    }
    if (bVar4 && !bVar5) {
      bVar5 = (*(byte *)(param_5 + 0x2e) & 1) != 0;
      if (bVar5) {
        puVar1 = puVar3 + (int)puVar1 * 0x14;
      }
      if (bVar5 && puVar3 < puVar1) {
        while ((((*(byte *)((int)puVar3 + 0x15) & 1) == 0 ||
                ((*puVar3 & *(uint *)(param_5 + 0x20)) == 0)) ||
               (iVar2 = FUN_0032c818(puVar3 + 0xe,param_5 + 0x40,auStack_28,&local_2c), iVar2 == 0))
              ) {
          puVar3 = puVar3 + 0x14;
          if ((uint *)(*(int *)(param_4 + 0x1c) + *(int *)(param_4 + 0x18) * 0x50) <= puVar3) {
            return;
          }
        }
        local_50 = (float)puVar3[0xe];
        local_4c = (float)puVar3[0xf];
        local_48 = (float)puVar3[0x10];
        local_5c = *(float *)(param_5 + 0x4c);
        local_58 = *(float *)(param_5 + 0x50);
        local_54 = *(float *)(param_5 + 0x54);
        local_38 = local_5c;
        local_34 = local_58;
        local_30 = local_54;
        if (((int)ABS(local_2c) < DAT_003a4438) ||
           (local_2c = *(float *)(param_5 + 0x40) / local_2c, 0x3f800000 < (int)local_2c)) {
          FUN_0036df4c(&local_44,&local_50);
        }
        else {
          local_44 = local_5c + (local_50 - local_5c) * local_2c;
          local_40 = local_58 + (local_4c - local_58) * local_2c;
          local_3c = local_54 + (local_48 - local_54) * local_2c;
        }
        FUN_003191a4(param_2,param_4,puVar3,&local_50,param_5,param_5 + 0x18,&local_5c,&local_44);
      }
    }
  }
  return;
}
