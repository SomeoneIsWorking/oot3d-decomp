// OoT3D decomp @ 002f79b4  name=FUN_002f79b4  size=304

void FUN_002f79b4(float param_1,float param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  fVar2 = DAT_002f7af0;
  uVar1 = DAT_002f7aec;
  local_44[0] = *DAT_002f7ae4;
  local_44[1] = DAT_002f7ae4[1];
  local_44[2] = DAT_002f7ae4[2];
  local_44[3] = DAT_002f7ae4[3];
  uStack_34 = DAT_002f7ae4[4];
  uStack_30 = DAT_002f7ae4[5];
  uStack_2c = DAT_002f7ae4[6];
  uStack_28 = DAT_002f7ae4[7];
  local_64[0] = *DAT_002f7ae8;
  local_64[1] = DAT_002f7ae8[1];
  local_64[2] = DAT_002f7ae8[2];
  local_64[3] = DAT_002f7ae8[3];
  uStack_54 = DAT_002f7ae8[4];
  uStack_50 = DAT_002f7ae8[5];
  iVar5 = 0;
  local_4c = DAT_002f7ae8[6];
  uStack_48 = DAT_002f7ae8[7];
  if (0 < *(int *)(param_3 + 0xc)) {
    do {
      uVar3 = local_44[iVar5];
      local_94 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      local_94 = local_94 * param_1;
      uVar4 = local_64[iVar5];
      local_90 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      local_90 = local_90 * param_2;
      local_8c = uVar1;
      fVar6 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      local_88 = fVar2 + fVar6 * param_1;
      local_84 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      local_84 = local_84 * param_2;
      local_80 = uVar1;
      local_7c = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      local_7c = local_7c * param_1;
      fVar6 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      local_78 = fVar2 + fVar6 * param_2;
      local_74 = uVar1;
      fVar6 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      local_70 = fVar2 + fVar6 * param_1;
      fVar6 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      local_6c = fVar2 + fVar6 * param_2;
      local_68 = uVar1;
      FUN_002f2c54(*(undefined4 *)(param_3 + 8),&local_94,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_3 + 0xc));
  }
  return;
}
