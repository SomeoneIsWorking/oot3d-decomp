// OoT3D decomp @ 0036654c  name=FUN_0036654c  size=104

void FUN_0036654c(float *param_1,float *param_2,undefined2 *param_3,int param_4)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_2 - *param_1;
  fVar2 = param_2[2] - param_1[2];
  if (param_4 == 0) {
    fVar4 = param_1[1] - param_2[1];
  }
  else {
    fVar4 = param_2[1] - param_1[1];
  }
  uVar1 = FUN_003758b0(fVar2,fVar3);
  param_3[1] = uVar1;
  uVar1 = FUN_003758b0(SQRT(fVar3 * fVar3 + fVar2 * fVar2),fVar4);
  *param_3 = uVar1;
  return;
}

