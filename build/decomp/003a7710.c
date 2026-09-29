// OoT3D decomp @ 003a7710  name=FUN_003a7710  size=776

void FUN_003a7710(int param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];

  iVar2 = (int)*(short *)(param_2 + 0x11);
  fVar4 = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x46),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * DAT_003a7a18;
  if ((iVar2 == -1) || ((int)(uint)*(ushort *)(*(int *)(param_1 + 0xa98) + 0x14) <= iVar2)) {
    fVar5 = (float)param_2[1];
  }
  else {
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(*(int *)(param_1 + 0xa98) + 0x28) +
                                                      iVar2 * 0x10 + 2),(byte)(in_fpscr >> 0x15) & 3
                                      );
  }
  local_88 = (float)(int)*(short *)(param_2 + 0x13);
  local_7c = 0xff;
  local_84 = 3.57331e-43;
  local_80 = 3.57331e-43;
  FUN_0035619c(param_1,auStack_30,auStack_40,0xff,0xff,0xff);
  local_4c = *param_2;
  local_44 = param_2[2];
  local_48 = fVar5 + DAT_003a7a1c;
  local_58 = fVar4 * DAT_003a7a20;
  local_54 = local_58;
  local_50 = local_58;
  if (*(int *)(*(int *)param_2[0x1a] + 0x1fc) == 0) {
    FUN_003429c8(*(int *)param_2[0x1a],1,auStack_40);
  }
  iVar2 = FUN_00371f1c(*(undefined4 *)param_2[0x1a],&local_4c,0,&local_58,auStack_30,0);
  fVar4 = DAT_003a7a28;
  puVar1 = DAT_003a7a24;
  pfVar3 = (float *)(DAT_003a7a24 + 0x100);
  fVar5 = (float)*DAT_003a7a24 + DAT_003a7a28 * *(float *)(DAT_003a7a24 + 1);
  fVar6 = (float)((ulonglong)*DAT_003a7a24 >> 0x20) +
          DAT_003a7a28 * *(float *)((int)DAT_003a7a24 + 0xc);
  fVar7 = fVar5 * fVar5;
  if (iVar2 == 0) {
    if (*(int *)(*(int *)(param_2[0x1a] + 4) + 0x1fc) == 0) {
      FUN_003429c8(*(int *)(param_2[0x1a] + 4),1,auStack_40);
    }
    FUN_00371f1c(*(undefined4 *)(param_2[0x1a] + 4),&local_4c,0,&local_58,auStack_30,0);
    local_60 = *(float *)((int)puVar1 + 0x804) + fVar4 * *(float *)((int)puVar1 + 0x80c);
    local_68 = *pfVar3 + fVar4 * *(float *)(puVar1 + 0x101);
    local_88 = fVar6 * local_60;
    local_78 = fVar5 * local_60;
    local_60 = fVar6 * local_60;
    local_84 = fVar5 * fVar6 * local_68 - fVar6 * fVar5;
    local_70 = fVar6 * fVar5 * local_68 - fVar5 * fVar6;
    local_80 = fVar7 + fVar6 * fVar6 * local_68;
    local_74 = fVar6 * fVar6 + fVar7 * local_68;
    local_68 = -local_68;
    local_7c = 0;
    local_6c = 0;
    local_5c = 0;
    local_64 = local_78;
    FUN_00371f1c(*(undefined4 *)(param_2[0x1a] + 4),&local_4c,&local_88,&local_58,auStack_30,0);
    return;
  }
  local_60 = *(float *)((int)DAT_003a7a24 + 0x804) +
             DAT_003a7a28 * *(float *)((int)DAT_003a7a24 + 0x80c);
  local_68 = *pfVar3 + DAT_003a7a28 * *(float *)(DAT_003a7a24 + 0x101);
  local_88 = fVar6 * local_60;
  local_78 = fVar5 * local_60;
  local_60 = fVar6 * local_60;
  local_84 = fVar5 * fVar6 * local_68 - fVar6 * fVar5;
  local_70 = fVar6 * fVar5 * local_68 - fVar5 * fVar6;
  local_80 = fVar7 + fVar6 * fVar6 * local_68;
  local_74 = fVar6 * fVar6 + fVar7 * local_68;
  local_68 = -local_68;
  local_7c = 0;
  local_6c = 0;
  local_5c = 0;
  local_64 = local_78;
  FUN_00371f1c(*(undefined4 *)param_2[0x1a],&local_4c,&local_88,&local_58,auStack_30,0);
  return;
}
