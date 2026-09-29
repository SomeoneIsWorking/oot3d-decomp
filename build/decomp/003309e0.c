// OoT3D decomp @ 003309e0  name=FUN_003309e0  size=420

void FUN_003309e0(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float local_28;
  float local_24;

  uVar3 = DAT_00330b8c;
  fVar2 = DAT_00330b88;
  if (*(char *)(DAT_00330b84 + param_2) != '\0') {
    uVar1 = *(ushort *)(param_2 + 0x4c44);
    iVar5 = 0;
    if (uVar1 != 0) {
      do {
        iVar4 = *(int *)(param_2 + 0x4c48);
        iVar6 = iVar5 * 3;
        if (param_3 != 0) {
          iVar6 = iVar5 * 0x13;
          iVar4 = iVar4 + iVar5 * 0x98;
        }
        if (param_3 != 0) {
          *(float *)(iVar4 + 0xc) = fVar2;
        }
        else {
          iVar6 = iVar6 + iVar5 * 0x10;
          local_24 = *(float *)(iVar4 + iVar6 * 8 + 0xc);
          FUN_0036e168(fVar2,uVar3,uVar3,fVar2,&local_24);
          *(float *)(*(int *)(param_2 + 0x4c48) + iVar6 * 8 + 0xc) = local_24;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)uVar1);
    }
    if (param_3 != 0) {
      local_24 = fVar2;
    }
    local_34 = *DAT_00330b90;
    uStack_30 = DAT_00330b90[1];
    uStack_2c = DAT_00330b90[2];
    local_28 = DAT_00330b94 - local_24;
    if (DAT_00330b94 - local_24 <= fVar2) {
      local_28 = fVar2;
    }
    if (local_28 == 1.0) {
      FUN_0036932c(*(undefined4 *)(param_2 + 0x4c3c),3);
    }
    FUN_00358778(*(undefined4 *)(param_2 + 0x4c3c),5,0,&local_34,2);
    FUN_00358778(*(undefined4 *)(param_2 + 0x4c3c),1,0,&local_34,2);
    FUN_00358778(*(undefined4 *)(param_2 + 0x4c3c),3,0,&local_34,2);
    FUN_00358778(*(undefined4 *)(param_2 + 0x4c3c),7,0,&local_34,2);
    FUN_00358778(*(undefined4 *)(param_2 + 0x4c3c),8,0,&local_34,2);
    FUN_00358778(*(undefined4 *)(param_2 + 0x4c3c),0xb,0,&local_34,2);
  }
  return;
}
