// OoT3D decomp @ 002fc534  name=FUN_002fc534  size=348

void FUN_002fc534(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  
  uVar1 = DAT_002fc690;
  iVar3 = 0;
  iVar4 = 0;
  if (0 < param_4) {
    do {
      pfVar2 = (float *)(param_2 + iVar3 * 4);
      iVar6 = param_5 * 0xc + iVar4 * 0xc;
      *(float *)(*(int *)(param_1 + 0xc) + iVar6 * 4) = *pfVar2;
      pfVar5 = (float *)(param_3 + iVar3 * 4);
      *(float *)(*(int *)(param_1 + 0xc) + iVar6 * 4 + 4) = pfVar2[1];
      fVar7 = *pfVar2 + *pfVar5;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 2;
      *(float *)(*(int *)(param_1 + 0xc) + iVar6 * 4 + 0xc) = fVar7;
      *(float *)(*(int *)(param_1 + 0xc) + iVar6 * 4 + 0x24) = fVar7;
      *(float *)(*(int *)(param_1 + 0xc) + iVar6 * 4 + 0x10) = pfVar2[1];
      *(float *)(*(int *)(param_1 + 0xc) + iVar6 * 4 + 0x18) = *pfVar2;
      fVar7 = pfVar2[1] + pfVar5[1];
      *(float *)(*(int *)(param_1 + 0xc) + iVar6 * 4 + 0x1c) = fVar7;
      *(float *)(*(int *)(param_1 + 0xc) + iVar6 * 4 + 0x28) = fVar7;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar6 * 4 + 0x2c) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar6 * 4 + 0x20) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar6 * 4 + 0x14) = uVar1;
      *(undefined4 *)(iVar6 * 4 + 8 + *(int *)(param_1 + 0xc)) = uVar1;
    } while (iVar4 < param_4);
  }
  return;
}

