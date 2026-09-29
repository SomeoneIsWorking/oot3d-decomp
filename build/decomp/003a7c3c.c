// OoT3D decomp @ 003a7c3c  name=FUN_003a7c3c  size=468

void FUN_003a7c3c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  float fVar7;
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

  iVar1 = DAT_003a7e10;
  puVar2 = *(uint **)(param_3 + 0x18);
  if (0 < (int)puVar2) {
    puVar5 = *(uint **)(param_3 + 0x1c);
    iVar3 = 0;
    if (puVar5 != (uint *)0x0) {
      iVar3 = *(int *)(param_4 + 0x18);
      param_2 = iVar3;
    }
    if ((puVar5 != (uint *)0x0 && param_2 != 0) && -1 < iVar3) {
      bVar6 = *(int *)(param_4 + 0x1c) != 0;
      if (bVar6) {
        puVar2 = puVar5 + (int)puVar2 * 0x14;
      }
      if (bVar6 && puVar5 < puVar2) {
        do {
          if (((*(byte *)((int)puVar5 + 0x15) & 1) != 0) &&
             (uVar4 = *(uint *)(param_4 + 0x1c), uVar4 < uVar4 + *(int *)(param_4 + 0x18) * 0x50)) {
            do {
              if (((*(byte *)(uVar4 + 0x16) & 1) != 0) &&
                 (((*puVar5 & *(uint *)(uVar4 + 8)) != 0 &&
                  (iVar3 = FUN_0039bc2c(puVar5 + 0xe,uVar4 + 0x38,auStack_28,&local_2c), iVar3 == 1)
                  ))) {
                local_50 = (float)puVar5[0xe];
                local_4c = (float)puVar5[0xf];
                local_48 = (float)puVar5[0x10];
                local_5c = *(float *)(uVar4 + 0x38);
                local_58 = *(float *)(uVar4 + 0x3c);
                local_54 = *(float *)(uVar4 + 0x40);
                local_38 = local_5c;
                local_34 = local_58;
                local_30 = local_54;
                if ((int)ABS(local_2c) < iVar1) {
                  FUN_0036df4c(&local_44,&local_50);
                }
                else {
                  fVar7 = *(float *)(uVar4 + 0x44) / local_2c;
                  local_44 = local_5c + (local_50 - local_5c) * fVar7;
                  local_40 = local_58 + (local_4c - local_58) * fVar7;
                  local_3c = local_54 + (local_48 - local_54) * fVar7;
                }
                FUN_003191a4(param_1,param_3,puVar5,&local_50,param_4,uVar4,&local_5c,&local_44);
                if ((*(byte *)(param_4 + 0x13) & 0x40) == 0) {
                  return;
                }
              }
              uVar4 = uVar4 + 0x50;
            } while (uVar4 < (uint)(*(int *)(param_4 + 0x1c) + *(int *)(param_4 + 0x18) * 0x50));
          }
          puVar5 = puVar5 + 0x14;
        } while (puVar5 < (uint *)(*(int *)(param_3 + 0x1c) + *(int *)(param_3 + 0x18) * 0x50));
      }
    }
  }
  return;
}
