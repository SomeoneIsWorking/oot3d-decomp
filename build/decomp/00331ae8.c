// OoT3D decomp @ 00331ae8  name=FUN_00331ae8  size=776

undefined4 FUN_00331ae8(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar5;
  float fVar6;
  float extraout_s0_01;
  undefined4 extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined4 extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float local_4c [2];
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;

  iVar4 = *(int *)(param_1 + 0xd4) + 0xa98;
  FUN_00372474(local_4c);
  local_4c[0] = local_4c[0] + DAT_00331df0;
  FUN_00372448(param_2,local_4c);
  local_3c = extraout_s0;
  local_38 = extraout_s1;
  local_34 = extraout_s2;
  iVar2 = FUN_003723c0(iVar4,param_2,&local_3c,&local_30,param_3 + 6,1,1,1,0xffffffff,param_3 + 9);
  if (iVar2 == 0) {
    FUN_00372348(param_2,param_3);
    param_3[3] = -extraout_s0_00;
    local_2c = DAT_00331df4;
    param_3[4] = -extraout_s1_00;
    param_3[5] = -extraout_s2_00;
    local_30 = *param_3;
    local_28 = param_3[2];
    local_2c = param_3[1] + local_2c;
    local_2c = (float)FUN_00372300(iVar4,&local_40,&local_44,&local_30);
    if (DAT_00331df8 < (int)(param_3[1] - local_2c)) {
      *param_3 = *param_3 + param_3[3];
      param_3[1] = param_3[1] + param_3[4];
      param_3[2] = param_3[2] + param_3[5];
      return 0;
    }
    local_2c = local_2c + DAT_00331dfc;
    param_3[6] = local_40;
    param_3[9] = local_44;
  }
  fVar1 = DAT_00331e00;
  fVar3 = param_3[6];
  fVar5 = (float)VectorSignedToFloat((int)*(short *)((int)fVar3 + 10),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_00331e00;
  param_3[3] = fVar5;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)((int)fVar3 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar6 = fVar6 * fVar1;
  param_3[4] = fVar6;
  fVar3 = (float)VectorSignedToFloat((int)*(short *)((int)fVar3 + 0xe),(byte)(in_fpscr >> 0x15) & 3)
  ;
  param_3[5] = fVar3 * fVar1;
  iVar2 = DAT_00331e08;
  if (((int)fVar6 < 0x3f000001) && ((uint)fVar6 <= (uint)DAT_00331e04)) {
    iVar4 = *(int *)(DAT_00331e08 + 0xa8);
    if (iVar4 == 0) {
      return 1;
    }
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 10),(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
    iVar4 = FUN_00354698(param_2,&local_3c,&local_30,1);
    if (iVar4 == 0) {
      FUN_00372348(param_2,param_3);
      param_3[3] = -extraout_s0_01;
      param_3[4] = -extraout_s1_01;
      param_3[5] = -extraout_s2_01;
      *param_3 = *param_3 + -extraout_s0_01;
      param_3[1] = param_3[1] + -extraout_s1_01;
      param_3[2] = param_3[2] + -extraout_s2_01;
      return 0;
    }
    param_3[5] = fVar6 * fVar1;
    param_3[4] = fVar5 * fVar1;
    param_3[3] = fVar3 * fVar1;
    iVar4 = DAT_00331e0c;
    param_3[6] = *(float *)(iVar2 + 0xa8);
    param_3[9] = (float)(int)*(short *)(iVar4 + param_1);
    *param_3 = local_30 + param_3[3];
    param_3[1] = local_2c + param_3[4];
    local_28 = local_28 + param_3[5];
  }
  else {
    *param_3 = local_30 + fVar5;
    param_3[1] = local_2c + fVar6;
    local_28 = local_28 + fVar3 * fVar1;
  }
  param_3[2] = local_28;
  return 1;
}
