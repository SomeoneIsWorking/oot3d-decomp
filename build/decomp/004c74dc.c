// OoT3D decomp @ 004c74dc  name=FUN_004c74dc  size=560

undefined4
FUN_004c74dc(int param_1,int param_2,undefined4 param_3,int *param_4,float *param_5,float *param_6)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  
  pfVar5 = (float *)(param_4 + 1);
  pfVar6 = (float *)(param_4 + 7);
  if (*param_4 == 0) {
    if (param_2 != 0) {
      FUN_003328ec(param_1,param_2);
      FUN_003328ec(param_1,param_3);
    }
    fVar2 = param_5[1];
    fVar4 = param_5[2];
    *pfVar5 = *param_5;
    param_4[2] = (int)fVar2;
    param_4[3] = (int)fVar4;
    fVar2 = param_6[1];
    fVar4 = param_6[2];
    *pfVar6 = *param_6;
    param_4[8] = (int)fVar2;
    param_4[9] = (int)fVar4;
    fVar2 = param_5[1];
    fVar4 = param_5[2];
    param_4[4] = (int)*param_5;
    param_4[5] = (int)fVar2;
    param_4[6] = (int)fVar4;
    fVar2 = param_6[1];
    fVar4 = param_6[2];
    param_4[10] = (int)*param_6;
    param_4[0xb] = (int)fVar2;
    param_4[0xc] = (int)fVar4;
    *param_4 = 1;
    return 1;
  }
  fVar2 = (float)param_4[1];
  bVar7 = fVar2 == *param_5;
  if (bVar7) {
    fVar2 = (float)param_4[2];
  }
  if (bVar7) {
    bVar7 = fVar2 == param_5[1];
  }
  if (bVar7) {
    fVar2 = (float)param_4[3];
  }
  if (bVar7) {
    bVar7 = fVar2 == param_5[2];
  }
  if (bVar7) {
    fVar2 = (float)param_4[7];
    bVar7 = fVar2 == *param_6;
    if (bVar7) {
      fVar2 = (float)param_4[8];
    }
    if (bVar7) {
      bVar7 = fVar2 == param_6[1];
    }
    if (bVar7) {
      fVar2 = (float)param_4[9];
    }
    if (bVar7) {
      bVar7 = fVar2 == param_6[2];
    }
    if (bVar7) {
      if (param_2 != 0) {
        FUN_003328ec(param_1,param_2);
        FUN_003328ec(param_1,param_3);
      }
      return 0;
    }
  }
  if (param_2 != 0) {
    FUN_0035479c(param_2,param_6,param_5,param_4 + 7,param_4 + 1,param_1,param_2,param_3,param_4);
    iVar3 = param_1 + 0x5c78;
    FUN_003761f0(param_1,iVar3,param_2);
    iVar1 = (int)*(short *)(*DAT_004c770c + 0xe70);
    if (iVar1 != -2 && iVar1 + 2 < 0 == SCARRY4(iVar1,2)) {
      fVar2 = (float)param_4[7];
      bVar7 = fVar2 == (float)param_4[10];
      if (bVar7) {
        fVar2 = (float)param_4[8];
      }
      if (bVar7) {
        bVar7 = fVar2 == (float)param_4[0xb];
      }
      if (bVar7) {
        fVar2 = (float)param_4[9];
      }
      if (bVar7) {
        bVar7 = fVar2 == (float)param_4[0xc];
      }
      if (bVar7) {
        fVar2 = (float)param_4[1];
        bVar7 = fVar2 == (float)param_4[4];
        if (bVar7) {
          fVar2 = (float)param_4[2];
        }
        if (bVar7) {
          bVar7 = fVar2 == (float)param_4[5];
        }
        if (bVar7) {
          fVar2 = (float)param_4[3];
        }
        if (bVar7) {
          bVar7 = fVar2 == (float)param_4[6];
        }
        if (bVar7) goto LAB_004c76dc;
      }
      FUN_0035479c(param_3,param_4 + 7,param_4 + 1,param_4 + 10,param_4 + 4);
      FUN_003761f0(param_1,iVar3,param_3);
    }
  }
LAB_004c76dc:
  param_4[4] = (int)*pfVar5;
  param_4[5] = param_4[2];
  param_4[6] = param_4[3];
  param_4[10] = (int)*pfVar6;
  param_4[0xb] = param_4[8];
  param_4[0xc] = param_4[9];
  fVar2 = param_6[1];
  fVar4 = param_6[2];
  *pfVar6 = *param_6;
  param_4[8] = (int)fVar2;
  param_4[9] = (int)fVar4;
  fVar2 = param_5[1];
  fVar4 = param_5[2];
  *pfVar5 = *param_5;
  param_4[2] = (int)fVar2;
  param_4[3] = (int)fVar4;
  *param_4 = 1;
  return 1;
}

