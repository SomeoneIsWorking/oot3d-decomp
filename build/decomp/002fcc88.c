// OoT3D decomp @ 002fcc88  name=FUN_002fcc88  size=316

void FUN_002fcc88(float param_1,float param_2,int *param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float local_80 [4];
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  
  uVar2 = DAT_002fcdcc;
  fVar1 = DAT_002fcdc8;
  local_80[0] = *DAT_002fcdc4;
  local_80[1] = DAT_002fcdc4[1];
  local_80[2] = DAT_002fcdc4[2];
  local_80[3] = DAT_002fcdc4[3];
  fStack_70 = DAT_002fcdc4[4];
  fStack_6c = DAT_002fcdc4[5];
  local_68 = DAT_002fcdc4[6];
  fStack_64 = DAT_002fcdc4[7];
  fStack_60 = DAT_002fcdc4[8];
  fStack_5c = DAT_002fcdc4[9];
  iVar4 = 0;
  iVar3 = param_3[1];
  if (0 < iVar3) {
    fVar6 = param_1 + DAT_002fcdd0;
    do {
      fVar5 = (float)VectorSignedToFloat((iVar3 - iVar4) + -1,(byte)(in_fpscr >> 0x15) & 3);
      local_58 = param_1 + fVar5 * fVar1;
      local_54 = param_2;
      local_50 = uVar2;
      fVar5 = (float)VectorSignedToFloat((param_3[1] - iVar4) + -1,(byte)(in_fpscr >> 0x15) & 3);
      local_4c = fVar6 + fVar5 * fVar1;
      local_48 = param_2;
      local_44 = uVar2;
      fVar5 = (float)VectorSignedToFloat((param_3[1] - iVar4) + -1,(byte)(in_fpscr >> 0x15) & 3);
      local_40 = param_1 + fVar5 * fVar1;
      local_3c = local_80[*param_3] + param_2;
      local_38 = uVar2;
      fVar5 = (float)VectorSignedToFloat((param_3[1] - iVar4) + -1,(byte)(in_fpscr >> 0x15) & 3);
      local_34 = fVar6 + fVar5 * fVar1;
      local_30 = local_80[*param_3] + param_2;
      local_2c = uVar2;
      FUN_002f2c54(param_3[2],&local_58,iVar4);
      iVar3 = param_3[1];
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

