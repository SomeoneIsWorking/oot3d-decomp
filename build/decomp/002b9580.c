// OoT3D decomp @ 002b9580  name=FUN_002b9580  size=748

void FUN_002b9580(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined auStack_58 [12];
  undefined auStack_4c [12];
  undefined auStack_40 [12];
  undefined4 local_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  FUN_003735ac(auStack_58,param_3,DAT_002b986c);
  FUN_003735ac(auStack_4c,param_3,DAT_002b9870);
  FUN_003735ac(auStack_40,param_3,DAT_002b9874);
  iVar1 = FUN_0033a480(local_34,0,param_2 + 0x22a4,param_4,auStack_58);
  if ((iVar1 != 0) && ((*(uint *)(param_2 + 0x1710) & 0x400000) == 0)) {
    FUN_002b9a88(local_34,param_2,param_2 + 0x22c0,(float *)(param_2 + 0x22a8));
  }
  if ('\0' < *(char *)(param_2 + 0x2227)) {
    bVar2 = *(char *)(param_2 + 0x2226) == '\x18';
    if ('\x17' < *(char *)(param_2 + 0x2226)) {
      bVar2 = (*(uint *)(param_2 + 0x1714) & 0x20000) == 0;
    }
    if (!bVar2) {
      if (*(char *)(param_2 + 2) != '\x02') {
        FUN_0033a480(local_34,param_2 + 0x1368,param_2 + 0x22d8,param_4 + 0xc,auStack_4c);
        FUN_0033a480(local_34,param_2 + 0x13e8,param_2 + 0x230c,param_4 + 0x18,auStack_40);
        return;
      }
      fVar6 = *(float *)(param_2 + 0x22a8) - *(float *)(param_2 + 0x22c0);
      fVar4 = *(float *)(param_2 + 0x22ac) - *(float *)(param_2 + 0x22c4);
      fVar5 = *(float *)(param_2 + 0x22b0) - *(float *)(param_2 + 0x22c8);
      fVar7 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
      fVar3 = DAT_002b9878 / fVar7;
      iVar1 = *DAT_002b987c;
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0xe6e),(byte)(in_fpscr >> 0x15) & 3
                                        );
      fVar7 = *(float *)(*(int *)(param_2 + 0x170c) + 0x48) + fVar8 + fVar7;
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0xe6a),(byte)(in_fpscr >> 0x15) & 3
                                        );
      fVar8 = *(float *)(*(int *)(param_2 + 0x170c) + 0x50) + fVar8;
      local_64 = fVar6 * fVar3 * fVar7 + *(float *)(param_2 + 0x22c0);
      local_60 = fVar4 * fVar3 * fVar7 + *(float *)(param_2 + 0x22c4);
      local_5c = fVar5 * fVar3 * fVar7 + *(float *)(param_2 + 0x22c8);
      local_70 = fVar6 * fVar3 * fVar8 + *(float *)(param_2 + 0x22c0);
      local_6c = fVar4 * fVar3 * fVar8 + *(float *)(param_2 + 0x22c4);
      local_68 = fVar5 * fVar3 * fVar8 + *(float *)(param_2 + 0x22c8);
      fVar3 = DAT_002b9878;
      if (*(char *)(param_2 + 0x1a9) == '\a') {
        fVar3 = DAT_002b9880;
      }
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0xe6c),(byte)(in_fpscr >> 0x15) & 3
                                        );
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 0xe6c),(byte)(in_fpscr >> 0x15) & 3
                                        );
      FUN_004c7710((*(float *)(*(int *)(param_2 + 0x170c) + 0x44) + fVar8) * fVar3 *
                   **(float **)(DAT_002b9884 + param_2),
                   (*(float *)(*(int *)(param_2 + 0x170c) + 0x4c) + fVar7) * fVar3 *
                   (*(float **)(DAT_002b9884 + param_2))[2],local_34,param_2 + 0x1368,
                   param_2 + 0x1468,param_2 + 0x15e8,param_2 + 0x22d8,param_4 + 0xc,auStack_4c,
                   &local_64,&local_70);
      FUN_004c74dc(local_34,param_2 + 0x13e8,param_2 + 0x14e8,param_2 + 0x230c,param_4 + 0x18,
                   auStack_40);
    }
  }
  return;
}

