// OoT3D decomp @ 003553fc  name=FUN_003553fc  size=456

int FUN_003553fc(int param_1,undefined4 param_2,float *param_3)

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
  undefined4 extraout_s1;
  float extraout_s1_00;
  undefined4 extraout_s2;
  float extraout_s2_00;
  float local_38 [2];
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;

  iVar4 = *(int *)(param_1 + 0xd4) + 0xa98;
  FUN_00372474(local_38);
  local_38[0] = local_38[0] + DAT_003555c4;
  FUN_00372448(param_2,local_38);
  local_28 = extraout_s0;
  local_24 = extraout_s1;
  local_20 = extraout_s2;
  iVar2 = FUN_003723c0(iVar4,param_2,&local_28,&local_1c,param_3 + 6,1,1,1,0xffffffff,param_3 + 9);
  if (iVar2 == 0) {
    FUN_00372348(param_2,param_3);
    param_3[3] = -extraout_s0_00;
    local_18 = DAT_003555c8;
    param_3[4] = -extraout_s1_00;
    param_3[5] = -extraout_s2_00;
    local_1c = *param_3;
    local_14 = param_3[2];
    local_18 = param_3[1] + local_18;
    local_18 = (float)FUN_00372300(iVar4,&local_2c,&local_30,&local_1c);
    if (DAT_003555cc < (int)(param_3[1] - local_18)) {
      *param_3 = *param_3 + param_3[3];
      param_3[1] = param_3[1] + param_3[4];
      param_3[2] = param_3[2] + param_3[5];
      return 0;
    }
    local_18 = local_18 + DAT_003555d0;
    param_3[6] = local_2c;
    param_3[9] = local_30;
  }
  fVar1 = DAT_003555d4;
  fVar3 = param_3[6];
  fVar5 = (float)VectorSignedToFloat((int)*(short *)((int)fVar3 + 10),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_003555d4;
  param_3[3] = fVar5;
  fVar6 = (float)VectorSignedToFloat((int)*(short *)((int)fVar3 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar6 = fVar6 * fVar1;
  param_3[4] = fVar6;
  fVar3 = (float)VectorSignedToFloat((int)*(short *)((int)fVar3 + 0xe),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar3 = fVar3 * fVar1;
  param_3[5] = fVar3;
  *param_3 = local_1c + fVar5;
  param_3[1] = local_18 + fVar6;
  param_3[2] = local_14 + fVar3;
  return (int)local_30 + 1;
}
