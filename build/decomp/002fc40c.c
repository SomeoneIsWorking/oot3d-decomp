// OoT3D decomp @ 002fc40c  name=FUN_002fc40c  size=296

void FUN_002fc40c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < param_4) {
    do {
      pfVar1 = (float *)(param_2 + iVar2 * 4);
      iVar5 = param_5 * 8 + iVar3 * 8;
      *(float *)(*(int *)(param_1 + 0x14) + iVar5 * 4) = *pfVar1 / *(float *)(param_1 + 4);
      iVar3 = iVar3 + 1;
      fVar6 = (*(float *)(param_1 + 8) - pfVar1[1]) / *(float *)(param_1 + 8);
      *(float *)(*(int *)(param_1 + 0x14) + iVar5 * 4 + 4) = fVar6;
      *(float *)(*(int *)(param_1 + 0x14) + iVar5 * 4 + 0xc) = fVar6;
      pfVar4 = (float *)(param_3 + iVar2 * 4);
      iVar2 = iVar2 + 2;
      fVar6 = (*pfVar1 + *pfVar4) / *(float *)(param_1 + 4);
      *(float *)(*(int *)(param_1 + 0x14) + iVar5 * 4 + 8) = fVar6;
      *(float *)(*(int *)(param_1 + 0x14) + iVar5 * 4 + 0x18) = fVar6;
      *(float *)(*(int *)(param_1 + 0x14) + iVar5 * 4 + 0x10) = *pfVar1 / *(float *)(param_1 + 4);
      fVar6 = (*(float *)(param_1 + 8) - (pfVar1[1] + pfVar4[1])) / *(float *)(param_1 + 8);
      *(float *)(*(int *)(param_1 + 0x14) + iVar5 * 4 + 0x14) = fVar6;
      *(float *)(iVar5 * 4 + 0x1c + *(int *)(param_1 + 0x14)) = fVar6;
    } while (iVar3 < param_4);
  }
  return;
}

