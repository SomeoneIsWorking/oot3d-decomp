// OoT3D decomp @ 0037587c  name=FUN_0037587c  size=52

int FUN_0037587c(float *param_1,float *param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar2 = SQRT((*param_2 - *param_1) * (*param_2 - *param_1) +
               (param_2[2] - param_1[2]) * (param_2[2] - param_1[2]));
  fVar4 = param_1[1] - param_2[1];
  fVar3 = -fVar2;
  if (fVar4 < DAT_003759cc) {
    fVar4 = -fVar4;
    if (DAT_003759cc <= fVar2) {
      if (fVar4 <= fVar2) {
        sVar1 = FUN_002bc718(fVar4,fVar2,param_1);
        sVar1 = -sVar1;
      }
      else {
        sVar1 = FUN_002bc718(fVar2,fVar4,param_1);
        sVar1 = sVar1 + -0x4000;
      }
    }
    else if (fVar3 < fVar4) {
      sVar1 = FUN_002bc718(fVar3,fVar4,param_1);
      sVar1 = -0x4000 - sVar1;
    }
    else {
      sVar1 = FUN_002bc718(fVar4,fVar3,param_1);
      sVar1 = sVar1 + -0x8000;
    }
  }
  else if (fVar2 < DAT_003759cc) {
    if (fVar4 <= fVar3) {
      sVar1 = FUN_002bc718(fVar4,fVar3,param_1);
      sVar1 = -0x8000 - sVar1;
    }
    else {
      sVar1 = FUN_002bc718(fVar3,fVar4,param_1);
      sVar1 = sVar1 + 0x4000;
    }
  }
  else if (fVar2 < fVar4) {
    sVar1 = FUN_002bc718(fVar2,fVar4,param_1);
    sVar1 = 0x4000 - sVar1;
  }
  else {
    sVar1 = FUN_002bc718(fVar4,fVar2,param_1);
  }
  return (int)sVar1;
}
