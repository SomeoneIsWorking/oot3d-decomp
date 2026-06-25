// OoT3D decomp @ 0033a480  name=FUN_0033a480  size=360

undefined4 FUN_0033a480(int param_1,int param_2,int *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  float fVar2;
  
  if (*param_3 == 0) {
    if (param_2 != 0) {
      FUN_003328ec(param_1,param_2,param_3,param_4,param_4);
    }
    FUN_0036df4c(param_3 + 4,param_4);
    FUN_0036df4c(param_3 + 10,param_5);
    FUN_0036df4c(param_3 + 1,param_4);
    FUN_0036df4c(param_3 + 7,param_5);
    *param_3 = 1;
    return 1;
  }
  fVar2 = (float)param_3[1];
  bVar1 = fVar2 == *param_4;
  if (bVar1) {
    fVar2 = (float)param_3[2];
  }
  if (bVar1) {
    bVar1 = fVar2 == param_4[1];
  }
  if (bVar1) {
    fVar2 = (float)param_3[3];
  }
  if (bVar1) {
    bVar1 = fVar2 == param_4[2];
  }
  if (bVar1) {
    fVar2 = (float)param_3[7];
    bVar1 = fVar2 == *param_5;
    if (bVar1) {
      fVar2 = (float)param_3[8];
    }
    if (bVar1) {
      bVar1 = fVar2 == param_5[1];
    }
    if (bVar1) {
      fVar2 = (float)param_3[9];
    }
    if (bVar1) {
      bVar1 = fVar2 == param_5[2];
    }
    if (bVar1) {
      if (param_2 != 0) {
        FUN_003328ec(param_1,param_2,param_3,param_4,param_4);
      }
      return 0;
    }
  }
  if (param_2 != 0) {
    FUN_0035479c(param_2,param_5,param_4,param_3 + 7,param_3 + 1);
    FUN_003761f0(param_1,param_1 + 0x5c78,param_2);
  }
  FUN_0036df4c(param_3 + 4,param_3 + 1);
  FUN_0036df4c(param_3 + 10,param_3 + 7);
  FUN_0036df4c(param_3 + 7,param_5);
  FUN_0036df4c(param_3 + 1,param_4);
  *param_3 = 1;
  return 1;
}

