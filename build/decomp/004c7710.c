// OoT3D decomp @ 004c7710  name=FUN_004c7710  size=916

undefined4
FUN_004c7710(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5_00,
            int param_6_00,int *param_5,float *param_6,float *param_7,float *param_8,float *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar6 = (float *)(param_5 + 1);
  pfVar7 = (float *)(param_5 + 7);
  if (*param_5 == 0) {
    if (param_4 != 0) {
      FUN_003328ec(param_3,param_4);
      FUN_003328ec(param_3,param_5_00);
    }
    fVar4 = param_6[1];
    fVar5 = param_6[2];
    param_5[4] = (int)*param_6;
    param_5[5] = (int)fVar4;
    param_5[6] = (int)fVar5;
    fVar4 = param_7[1];
    fVar5 = param_7[2];
    param_5[10] = (int)*param_7;
    param_5[0xb] = (int)fVar4;
    param_5[0xc] = (int)fVar5;
    fVar4 = param_6[1];
    fVar5 = param_6[2];
    *pfVar6 = *param_6;
    param_5[2] = (int)fVar4;
    param_5[3] = (int)fVar5;
    fVar4 = param_7[1];
    fVar5 = param_7[2];
    *pfVar7 = *param_7;
    param_5[8] = (int)fVar4;
    param_5[9] = (int)fVar5;
    *param_5 = 1;
    *(undefined4 *)(*(int *)(param_6_00 + 0x1c) + 0x44) = param_1;
    iVar1 = *(int *)(param_6_00 + 0x1c);
    fVar4 = param_8[1];
    fVar5 = param_8[2];
    *(float *)(iVar1 + 0x38) = *param_8;
    *(float *)(iVar1 + 0x3c) = fVar4;
    *(float *)(iVar1 + 0x40) = fVar5;
    return 1;
  }
  fVar4 = (float)param_5[1];
  bVar8 = fVar4 == *param_6;
  if (bVar8) {
    fVar4 = (float)param_5[2];
  }
  if (bVar8) {
    bVar8 = fVar4 == param_6[1];
  }
  if (bVar8) {
    fVar4 = (float)param_5[3];
  }
  if (bVar8) {
    bVar8 = fVar4 == param_6[2];
  }
  if (bVar8) {
    fVar4 = (float)param_5[7];
    bVar8 = fVar4 == *param_7;
    if (bVar8) {
      fVar4 = (float)param_5[8];
    }
    if (bVar8) {
      bVar8 = fVar4 == param_7[1];
    }
    if (bVar8) {
      fVar4 = (float)param_5[9];
    }
    if (bVar8) {
      bVar8 = fVar4 == param_7[2];
    }
    if (bVar8) {
      if (param_4 != 0) {
        FUN_003328ec(param_3,param_4);
        FUN_003328ec(param_3,param_5_00);
      }
      return 0;
    }
  }
  if (param_4 == 0) goto LAB_004c7a6c;
  FUN_0035479c(param_4,param_7,param_6,param_5 + 7,param_5 + 1);
  iVar3 = param_3 + 0x5c78;
  FUN_003761f0(param_3,iVar3,param_4);
  iVar1 = (int)*(short *)(*DAT_004c7aa4 + 0xe70);
  if (iVar1 != -2 && iVar1 + 2 < 0 == SCARRY4(iVar1,2)) {
    fVar4 = (float)param_5[10];
    bVar8 = (float)param_5[7] == fVar4;
    if (bVar8) {
      fVar4 = (float)param_5[8];
    }
    if (bVar8) {
      bVar8 = fVar4 == (float)param_5[0xb];
    }
    if (bVar8) {
      fVar4 = (float)param_5[9];
    }
    if (bVar8) {
      bVar8 = fVar4 == (float)param_5[0xc];
    }
    if (bVar8) {
      fVar4 = (float)param_5[1];
      bVar8 = fVar4 == (float)param_5[4];
      if (bVar8) {
        fVar4 = (float)param_5[2];
      }
      if (bVar8) {
        bVar8 = fVar4 == (float)param_5[5];
      }
      if (bVar8) {
        fVar4 = (float)param_5[3];
      }
      if (bVar8) {
        bVar8 = fVar4 == (float)param_5[6];
      }
      if (bVar8) goto LAB_004c795c;
    }
    FUN_0035479c(param_5_00,param_5 + 7,param_5 + 1,param_5 + 10,param_5 + 4);
    FUN_003761f0(param_3,iVar3,param_5_00);
  }
LAB_004c795c:
  fVar4 = DAT_004c7aa8;
  iVar1 = (int)*(short *)(*DAT_004c7aa4 + 0xe70);
  if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
    *(undefined4 *)(*(int *)(param_6_00 + 0x1c) + 0xe4) = param_1;
    iVar1 = *(int *)(param_6_00 + 0x1c);
    iVar2 = *(int *)(param_6_00 + 0x1c);
    fVar11 = (*(float *)(iVar1 + 0x38) + fVar4 * (*param_8 - *(float *)(iVar1 + 0x38))) - *param_9;
    fVar5 = (*(float *)(iVar1 + 0x3c) + fVar4 * (param_8[1] - *(float *)(iVar1 + 0x3c))) -
            param_9[1];
    fVar9 = (*(float *)(iVar1 + 0x40) + fVar4 * (param_8[2] - *(float *)(iVar1 + 0x40))) -
            param_9[2];
    fVar10 = SQRT(fVar11 * fVar11 + fVar5 * fVar5 + fVar9 * fVar9);
    fVar4 = DAT_004c7aac / fVar10;
    *(float *)(iVar2 + 0xd8) = fVar11 * fVar4 * fVar10 + *param_9;
    *(float *)(iVar2 + 0xdc) = fVar5 * fVar4 * fVar10 + param_9[1];
    *(float *)(iVar2 + 0xe0) = fVar9 * fVar4 * fVar10 + param_9[2];
    *(undefined4 *)(*(int *)(param_6_00 + 0x1c) + 0x44) = param_1;
    iVar1 = *(int *)(param_6_00 + 0x1c);
    fVar4 = param_8[1];
    fVar5 = param_8[2];
    *(float *)(iVar1 + 0x38) = *param_8;
    *(float *)(iVar1 + 0x3c) = fVar4;
    *(float *)(iVar1 + 0x40) = fVar5;
    *(undefined4 *)(*(int *)(param_6_00 + 0x1c) + 0x94) = param_2;
    iVar1 = *(int *)(param_6_00 + 0x1c);
    fVar4 = param_9[1];
    fVar5 = param_9[2];
    *(float *)(iVar1 + 0x88) = *param_9;
    *(float *)(iVar1 + 0x8c) = fVar4;
    *(float *)(iVar1 + 0x90) = fVar5;
    FUN_003761f0(param_3,iVar3,param_6_00);
  }
LAB_004c7a6c:
  param_5[4] = (int)*pfVar6;
  param_5[5] = param_5[2];
  param_5[6] = param_5[3];
  param_5[10] = (int)*pfVar7;
  param_5[0xb] = param_5[8];
  param_5[0xc] = param_5[9];
  fVar4 = param_7[1];
  fVar5 = param_7[2];
  *pfVar7 = *param_7;
  param_5[8] = (int)fVar4;
  param_5[9] = (int)fVar5;
  fVar4 = param_6[1];
  fVar5 = param_6[2];
  *pfVar6 = *param_6;
  param_5[2] = (int)fVar4;
  param_5[3] = (int)fVar5;
  *param_5 = 1;
  return 1;
}

