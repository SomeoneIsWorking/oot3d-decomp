// OoT3D decomp @ 002cf090  name=FUN_002cf090  size=760

undefined4
FUN_002cf090(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,float *param_6,int param_7,uint param_8)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;

  fVar1 = DAT_002cf388;
  puVar4 = (ushort *)0x0;
  *param_5 = 0x32;
  iVar5 = *(int *)(param_2 + 0x40);
  if (((((*(float *)(param_2 + 4) - fVar1 <= *param_6) &&
        (*param_6 <= *(float *)(param_2 + 0x10) + fVar1)) &&
       (*(float *)(param_2 + 8) - fVar1 <= param_6[1])) &&
      ((param_6[1] <= *(float *)(param_2 + 0x14) + fVar1 &&
       (*(float *)(param_2 + 0xc) - fVar1 <= param_6[2])))) &&
     (param_6[2] <= *(float *)(param_2 + 0x18) + fVar1)) {
    FUN_002bf5b0(param_2,param_6,&local_50);
    puVar4 = (ushort *)
             (local_48 * *(int *)(param_2 + 0x1c) * *(int *)(param_2 + 0x20) * 6 +
             (int)local_4c * *(int *)(param_2 + 0x1c) * 6 + iVar5 + (int)local_50 * 6);
  }
  uVar2 = DAT_002cf38c;
  if (puVar4 != (ushort *)0x0) {
    if ((((*puVar4 != DAT_002cf38c) && ((param_8 & 4) == 0)) &&
        (iVar5 = FUN_002bb57c(param_1,*(int *)(param_2 + 0x48) + (uint)*puVar4 * 4,param_3,param_2,
                              param_6,param_4), iVar5 != 0)) ||
       ((((puVar4[1] != uVar2 && ((param_8 & 2) == 0)) &&
         (iVar5 = FUN_002bb57c(param_1,*(int *)(param_2 + 0x48) + (uint)puVar4[1] * 4,param_3,
                               param_2,param_6,param_4), iVar5 != 0)) ||
        (((puVar4[2] != uVar2 && ((param_8 & 1) == 0)) &&
         (iVar5 = FUN_002bb57c(param_1,*(int *)(param_2 + 0x48) + (uint)puVar4[2] * 4,param_3,
                               param_2,param_6,param_4), iVar5 != 0)))))) {
      return 1;
    }
    iVar5 = 0;
    do {
      if (((*(ushort *)(param_2 + iVar5 * 2 + 0x156c) & 1) != 0) &&
         (iVar6 = param_2 + iVar5 * 0x6c, *(int *)(iVar6 + 0x54) != param_7)) {
        local_54 = *param_6;
        local_50 = param_6[1];
        local_4c = param_6[2];
        local_48 = param_1;
        iVar3 = FUN_004c5560(&local_54,iVar6 + 0xa8);
        if (iVar3 != 0) {
          if (((param_8 & 1) == 0) &&
             (iVar3 = FUN_002bb43c(param_1,param_2,param_3,param_4,param_6,iVar6 + 0x5e), iVar3 != 0
             )) {
            return 1;
          }
          if (((param_8 & 2) == 0) &&
             (iVar3 = FUN_002bb43c(param_1,param_2,param_3,param_4,param_6,iVar6 + 0x60), iVar3 != 0
             )) {
            return 1;
          }
          if (((param_8 & 4) == 0) &&
             (iVar6 = FUN_002bb43c(param_1,param_2,param_3,param_4,param_6,iVar6 + 0x62), iVar6 != 0
             )) {
            return 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x32);
  }
  return 0;
}
