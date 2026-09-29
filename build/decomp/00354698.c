// OoT3D decomp @ 00354698  name=FUN_00354698  size=252

undefined4
FUN_00354698(float param_1,float param_2,float param_3,float param_4,float *param_5,float *param_6,
            float *param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  fVar2 = *param_5;
  fVar3 = param_5[1];
  fVar4 = param_6[1];
  fVar5 = param_5[2];
  fVar6 = param_6[2];
  fVar1 = fVar2 * param_1 + param_2 * fVar3 + param_3 * fVar5 + param_4;
  param_4 = *param_6 * param_1 + param_2 * fVar4 + param_3 * fVar6 + param_4;
  if ((fVar1 * param_4 <= DAT_00354794) &&
     (((param_8 == 0 || DAT_00354794 <= fVar1 || (param_4 <= DAT_00354794)) &&
      (DAT_00354798 <= (int)ABS(fVar1 - param_4))))) {
    if (fVar1 == DAT_00354794) {
      fVar1 = param_5[1];
      fVar2 = param_5[2];
      *param_7 = *param_5;
      param_7[1] = fVar1;
      param_7[2] = fVar2;
    }
    else if (param_4 == DAT_00354794) {
      fVar1 = param_6[1];
      fVar2 = param_6[2];
      *param_7 = *param_6;
      param_7[1] = fVar1;
      param_7[2] = fVar2;
    }
    else {
      fVar1 = fVar1 / (fVar1 - param_4);
      *param_7 = fVar2 + (*param_6 - fVar2) * fVar1;
      param_7[1] = param_5[1] + (fVar4 - fVar3) * fVar1;
      param_7[2] = param_5[2] + (fVar6 - fVar5) * fVar1;
    }
    return 1;
  }
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  *param_7 = *param_6;
  param_7[1] = fVar1;
  param_7[2] = fVar2;
  return 0;
}
