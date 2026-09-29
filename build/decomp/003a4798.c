// OoT3D decomp @ 003a4798  name=FUN_003a4798  size=448

void FUN_003a4798(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
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
  float local_28;
  undefined1 auStack_24 [4];

  iVar1 = DAT_003a495c;
  uVar2 = *(uint *)(param_4 + 0x18);
  if ((0 < (int)uVar2) && (uVar4 = *(uint *)(param_4 + 0x1c), uVar4 != 0)) {
    bVar6 = *(float *)(param_3 + 0x40) == DAT_003a4958;
    bVar5 = DAT_003a4958 <= *(float *)(param_3 + 0x40);
    if (bVar5 && !bVar6) {
      bVar6 = *(float *)(param_3 + 0x44) == DAT_003a4958;
      bVar5 = DAT_003a4958 <= *(float *)(param_3 + 0x44);
    }
    if (bVar5 && !bVar6) {
      bVar6 = (*(byte *)(param_3 + 0x2d) & 1) != 0;
      if (bVar6) {
        uVar2 = uVar4 + uVar2 * 0x50;
      }
      if (bVar6 && uVar4 < uVar2) {
        do {
          if ((((*(byte *)(uVar4 + 0x16) & 1) != 0) &&
              ((*(uint *)(param_3 + 0x18) & *(uint *)(uVar4 + 8)) != 0)) &&
             (iVar3 = FUN_0032c818(uVar4 + 0x38,param_3 + 0x40,auStack_24,&local_28), iVar3 != 0)) {
            local_4c = *(float *)(param_3 + 0x4c);
            local_48 = *(float *)(param_3 + 0x50);
            local_44 = *(float *)(param_3 + 0x54);
            local_58 = *(float *)(uVar4 + 0x38);
            local_54 = *(float *)(uVar4 + 0x3c);
            local_50 = *(float *)(uVar4 + 0x40);
            local_34 = local_58;
            local_30 = local_54;
            local_2c = local_50;
            if (((int)ABS(local_28) < iVar1) ||
               (fVar7 = *(float *)(uVar4 + 0x44) / local_28, 0x3f800000 < (int)fVar7)) {
              FUN_0036df4c(&local_40,&local_4c);
            }
            else {
              local_40 = local_58 + (local_4c - local_58) * fVar7;
              local_3c = local_54 + (local_48 - local_54) * fVar7;
              local_38 = local_50 + (local_44 - local_50) * fVar7;
            }
            FUN_003191a4(param_1,param_3,param_3 + 0x18,&local_4c,param_4,uVar4,&local_58,&local_40)
            ;
            if ((*(byte *)(param_4 + 0x13) & 0x40) == 0) {
              return;
            }
          }
          uVar4 = uVar4 + 0x50;
        } while (uVar4 < (uint)(*(int *)(param_4 + 0x1c) + *(int *)(param_4 + 0x18) * 0x50));
      }
    }
  }
  return;
}
