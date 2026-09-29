// OoT3D decomp @ 003a4b48  name=FUN_003a4b48  size=420

void FUN_003a4b48(undefined4 param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [12];

  fVar1 = DAT_003a4cec;
  uVar2 = *(uint *)(param_4 + 0x18);
  if (0 < (int)uVar2) {
    uVar5 = *(uint *)(param_4 + 0x1c);
    iVar3 = 0;
    if (uVar5 != 0) {
      iVar3 = *(int *)(param_3 + 0x18);
      param_2 = iVar3;
    }
    if ((uVar5 != 0 && param_2 != 0) && -1 < iVar3) {
      bVar6 = *(int *)(param_3 + 0x1c) != 0;
      if (bVar6) {
        uVar2 = uVar5 + uVar2 * 0x50;
      }
      if (bVar6 && uVar5 < uVar2) {
        do {
          if (((*(byte *)(uVar5 + 0x16) & 1) != 0) &&
             (puVar4 = *(uint **)(param_3 + 0x1c), puVar4 < puVar4 + *(int *)(param_3 + 0x18) * 0x17
             )) {
            do {
              if (((*(byte *)((int)puVar4 + 0x15) & 1) != 0) &&
                 (((*puVar4 & *(uint *)(uVar5 + 8)) != 0 &&
                  (iVar3 = FUN_0031e230(uVar5 + 0x38,puVar4 + 10,auStack_30), iVar3 == 1)))) {
                local_54 = *(undefined4 *)(uVar5 + 0x38);
                uStack_50 = *(undefined4 *)(uVar5 + 0x3c);
                uStack_4c = *(undefined4 *)(uVar5 + 0x40);
                local_48 = ((float)puVar4[10] + (float)puVar4[0xd] + (float)puVar4[0x10]) * fVar1;
                local_44 = ((float)puVar4[0xb] + (float)puVar4[0xe] + (float)puVar4[0x11]) * fVar1;
                local_40 = ((float)puVar4[0xc] + (float)puVar4[0xf] + (float)puVar4[0x12]) * fVar1;
                local_3c = local_54;
                local_38 = uStack_50;
                local_34 = uStack_4c;
                FUN_003191a4(param_1,param_3,puVar4,&local_48,param_4,uVar5,&local_54,auStack_30);
                if ((*(byte *)(param_4 + 0x13) & 0x40) == 0) {
                  return;
                }
              }
              puVar4 = puVar4 + 0x17;
            } while (puVar4 < (uint *)(*(int *)(param_3 + 0x1c) + *(int *)(param_3 + 0x18) * 0x5c));
          }
          uVar5 = uVar5 + 0x50;
        } while (uVar5 < (uint)(*(int *)(param_4 + 0x1c) + *(int *)(param_4 + 0x18) * 0x50));
      }
    }
  }
  return;
}
