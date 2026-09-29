// OoT3D decomp @ 001f53d0  name=FUN_001f53d0  size=1320

void FUN_001f53d0(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;

  uVar2 = DAT_001f56f8;
  fVar6 = DAT_001f56f4;
  sVar1 = *(short *)(param_1 + 0x710);
  if (sVar1 == 0) {
    *(undefined1 *)(param_1 + 0x123) = 3;
    fVar5 = DAT_001f5700;
    fVar4 = DAT_001f56fc;
    local_64 = *(undefined4 *)(param_1 + 0x28);
    local_60 = *(float *)(param_1 + 0x2c) + *(float *)(param_2 + 0x418) +
               *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58);
    local_5c = *(undefined4 *)(param_1 + 0x30);
    local_50 = 0.0;
    local_54 = 0.0;
    local_58 = 1.0;
    local_48 = 0.0;
    local_44 = 1.0;
    local_40 = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    local_30 = 1.0;
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x70c),(byte)(in_fpscr >> 0x15) & 3
                                      );
    local_4c = local_64;
    local_3c = local_60;
    local_2c = local_5c;
    FUN_00369014(fVar3 * DAT_001f56fc * DAT_001f5700,&local_58,1);
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x70e),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00371234(fVar3 * fVar4 * fVar5,&local_58,1);
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_003735e8(fVar3 * fVar4 * fVar5,&local_58,1);
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbc),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_00369014(fVar3 * fVar4 * fVar5,&local_58,1);
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc0),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_00371234(fVar3 * fVar4 * fVar5,&local_58,1);
    fVar5 = *(float *)(param_1 + 0x54);
    fVar4 = *(float *)(param_1 + 0x58);
    fVar3 = *(float *)(param_1 + 0x5c);
    local_58 = local_58 * fVar5;
    local_48 = local_48 * fVar5;
    local_38 = local_38 * fVar5;
    local_54 = local_54 * fVar4;
    local_44 = local_44 * fVar4;
    local_34 = local_34 * fVar4;
    local_50 = local_50 * fVar3;
    local_40 = local_40 * fVar3;
    local_30 = local_30 * fVar3;
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),1);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),2);
    FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),0);
    fVar4 = DAT_001f5704;
    FUN_0033dd8c(*(float *)(param_1 + 0x738) * DAT_001f5704,
                 *(float *)(param_1 + 0x73c) * DAT_001f5704,
                 *(float *)(param_1 + 0x740) * DAT_001f5704,fVar6,param_1 + 0x1a4,0,0);
    if (*(short *)(param_1 + 0x71a) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    FUN_0033dd8c(*(float *)(param_1 + 0x738) * fVar4,*(float *)(param_1 + 0x73c) * fVar4,
                 *(float *)(param_1 + 0x740) * fVar4,fVar6,param_1 + 0x1a4,1,0);
    local_64 = 0;
    FUN_0035e240(param_1 + 0x1a4,&local_58,DAT_001f5708,0,param_1);
    return;
  }
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      *(undefined1 *)(*(int *)(param_1 + 0x818) + 0xad) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x818) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x818),param_1 + 0x148);
      FUN_00372170(*(undefined4 *)(param_1 + 0x818),0);
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x123) = 2;
  fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x718),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003727f0(fVar4 * DAT_001f5958 * DAT_001f595c * DAT_001f5960);
  local_4c = *(undefined4 *)(param_1 + 0x154);
  local_3c = *(float *)(param_1 + 0x164);
  local_2c = *(undefined4 *)(param_1 + 0x174);
  local_30 = *(float *)(param_1 + 0x728);
  fVar6 = fVar6 / local_30;
  local_58 = *(float *)(param_1 + 0x148) * local_30;
  local_48 = *(float *)(param_1 + 0x158) * local_30;
  local_38 = *(float *)(param_1 + 0x168) * local_30;
  local_54 = *(float *)(param_1 + 0x14c) * fVar6;
  local_44 = *(float *)(param_1 + 0x15c) * fVar6;
  local_34 = *(float *)(param_1 + 0x16c) * fVar6;
  local_50 = *(float *)(param_1 + 0x150) * local_30;
  local_40 = *(float *)(param_1 + 0x160) * local_30;
  local_30 = *(float *)(param_1 + 0x170) * local_30;
  FUN_003735e8(*(float *)(param_1 + 0x730) * DAT_001f5964,&local_58,1);
  FUN_00371234(*(float *)(param_1 + 0x730) * DAT_001f5968,&local_58,1);
  fVar6 = DAT_001f596c - *(float *)(param_1 + 0x744);
  fVar4 = *(float *)(param_1 + 0x744) + DAT_001f5970;
  local_58 = local_58 * fVar6;
  local_48 = local_48 * fVar6;
  local_38 = local_38 * fVar6;
  local_54 = local_54 * fVar4;
  local_44 = local_44 * fVar4;
  local_34 = local_34 * fVar4;
  local_50 = local_50 * fVar6;
  local_40 = local_40 * fVar6;
  local_30 = local_30 * fVar6;
  FUN_00371234(*(float *)(param_1 + 0x730) * DAT_001f5974,&local_58,1);
  FUN_003735e8(*(float *)(param_1 + 0x730) * DAT_001f5978,&local_58,1);
  local_60 = *(float *)(param_1 + 0x748);
  local_64 = uVar2;
  local_5c = uVar2;
  FUN_00372070(&local_58,&local_58,&local_64);
  FUN_00369014(*(undefined4 *)(param_1 + 0x72c),&local_58,1);
  FUN_0037266c(*(undefined4 *)(param_1 + 0x1cc),3);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),1);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
  local_64 = 0;
  FUN_0035e240(param_1 + 0x1a4,&local_58,0,0,param_1);
  if (*(int *)(param_1 + 0x818) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x818) + 0xad) = 0;
  }
  return;
}
