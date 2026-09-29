// OoT3D decomp @ 0038ec48  name=FUN_0038ec48  size=464

void FUN_0038ec48(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [16];

  fVar7 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x56),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 * DAT_0038ee18;
  sVar1 = FUN_00368d94((int)*(short *)((int)param_3 + 0x4a) * (int)*(short *)(param_3 + 0x18),
                       (int)*(short *)(param_3 + 0x16));
  FUN_00332fc0(param_1,auStack_24,(int)*(short *)(param_3 + 0x11),
               (int)*(short *)((int)param_3 + 0x46),(int)*(short *)(param_3 + 0x12),(int)sVar1,
               (int)*(short *)(param_3 + 0x13),(int)*(short *)((int)param_3 + 0x4e),
               (int)*(short *)(param_3 + 0x14));
  iVar4 = 0;
  local_34 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x13),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_28 = DAT_0038ee1c;
  local_30 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x4e),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_2c = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x14),(byte)(in_fpscr >> 0x15) & 3
                                       );
  local_34 = local_34 * DAT_0038ee20;
  local_30 = local_30 * DAT_0038ee20;
  local_2c = local_2c * DAT_0038ee20;
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_4c = fVar7 * DAT_0038ee24;
  local_54 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0x5a),
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_54 = local_54 * DAT_0038ee28;
  local_50 = DAT_0038ee1c;
  local_48 = local_4c;
  local_44 = local_4c;
  while (iVar2 = *(int *)(param_3[0x1a] + iVar4 * 4), *(int *)(iVar2 + 0x1fc) != 0) {
    pfVar3 = (float *)FUN_003306fc(iVar2,0);
    bVar5 = false;
    if (*pfVar3 == local_34) {
      bVar5 = pfVar3[1] == local_30;
    }
    bVar6 = false;
    if (bVar5) {
      bVar6 = pfVar3[2] == local_2c;
    }
    if (bVar6) goto LAB_0038edac;
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      FUN_00371f1c(*(undefined4 *)param_3[0x1a],&local_40,0,&local_4c,auStack_24,&local_54);
      return;
    }
  }
  FUN_003429c8(iVar2,0,&local_34);
LAB_0038edac:
  FUN_00371f1c(*(undefined4 *)(param_3[0x1a] + iVar4 * 4),&local_40,0,&local_4c,auStack_24,&local_54
              );
  return;
}
