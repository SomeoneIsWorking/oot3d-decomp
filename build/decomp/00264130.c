// OoT3D decomp @ 00264130  name=FUN_00264130  size=484

void FUN_00264130(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [16];
  float local_1c;
  float local_18;

  iVar1 = (int)*(short *)((int)param_3 + 0x46);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x11),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * DAT_00264314;
  local_1c = (float)VectorSignedToFloat(iVar1 % 8,(byte)(in_fpscr >> 0x15) & 3);
  local_1c = local_1c * DAT_00264318;
  local_18 = (float)VectorSignedToFloat((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1d)) >> 3,
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_18 = local_18 * DAT_0026431c;
  FUN_00332fc0(param_1,auStack_2c,(int)*(short *)(param_3 + 0x12),
               (int)*(short *)((int)param_3 + 0x4a),(int)*(short *)(param_3 + 0x13),
               (int)*(short *)((int)param_3 + 0x4e),(int)*(short *)(param_3 + 0x14),
               (int)*(short *)((int)param_3 + 0x52),(int)*(short *)(param_3 + 0x15));
  local_38 = *param_3;
  local_34 = param_3[1];
  local_30 = param_3[2];
  local_44 = fVar6 * DAT_00264320;
  iVar1 = 0;
  local_40 = local_44 * DAT_00264324;
  local_54 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x14),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_50 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x52),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_4c = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x15),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_48 = DAT_00264328;
  local_54 = local_54 * DAT_0026432c;
  local_50 = local_50 * DAT_0026432c;
  local_4c = local_4c * DAT_0026432c;
  local_3c = local_44;
  while (iVar2 = *(int *)(param_3[0x1a] + iVar1 * 4), *(int *)(iVar2 + 0x1fc) != 0) {
    pfVar3 = (float *)FUN_003306fc(iVar2,1);
    bVar4 = false;
    if (*pfVar3 == local_54) {
      bVar4 = pfVar3[1] == local_50;
    }
    bVar5 = false;
    if (bVar4) {
      bVar5 = pfVar3[2] == local_4c;
    }
    if (bVar5) goto LAB_002642a8;
    iVar1 = iVar1 + 1;
    if (3 < iVar1) {
      FUN_00371f1c(*(undefined4 *)param_3[0x1a],&local_38,0,&local_44,auStack_2c,&local_1c);
      return;
    }
  }
  FUN_003429c8(iVar2,1,&local_54);
LAB_002642a8:
  FUN_00371f1c(*(undefined4 *)(param_3[0x1a] + iVar1 * 4),&local_38,0,&local_44,auStack_2c,&local_1c
              );
  return;
}
