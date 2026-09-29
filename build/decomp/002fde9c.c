// OoT3D decomp @ 002fde9c  name=FUN_002fde9c  size=428

void FUN_002fde9c(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float *param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  fVar2 = DAT_002fe054;
  fVar1 = DAT_002fe050;
  fVar4 = DAT_002fe048 / (param_2 - param_1);
  fVar3 = DAT_002fe048 / (param_6 - param_5);
  fVar5 = DAT_002fe048 / (param_4 - param_3);
  fVar6 = param_5 * DAT_002fe04c;
  param_7[1] = DAT_002fe050;
  param_7[3] = fVar1;
  param_7[4] = fVar1;
  param_7[7] = fVar1;
  param_7[8] = fVar1;
  param_7[9] = fVar1;
  param_7[0xc] = fVar1;
  param_7[0xd] = fVar1;
  param_7[0xe] = fVar2;
  param_7[0xf] = fVar1;
  *param_7 = fVar6 * fVar4;
  param_7[2] = (param_2 + param_1) * fVar4;
  param_7[5] = fVar6 * fVar5;
  param_7[6] = (param_4 + param_3) * fVar5;
  param_7[10] = param_6 * fVar3;
  param_7[0xb] = param_6 * param_5 * fVar3;
  fVar1 = DAT_002fe058;
  if (param_8 != 0 && param_8 != 4) {
    if (param_8 != 2) {
      if (param_8 == 3) {
        fVar2 = *param_7;
        fVar3 = param_7[1];
        fVar4 = param_7[2];
        *param_7 = DAT_002fe058;
        param_7[1] = -param_7[5];
        param_7[2] = -param_7[6];
        param_7[3] = fVar1;
        param_7[4] = fVar2;
        param_7[5] = fVar3;
        param_7[6] = fVar4;
        return;
      }
      fVar2 = *param_7;
      fVar3 = param_7[2];
      *param_7 = param_7[4];
      param_7[1] = param_7[5];
      param_7[2] = param_7[6];
      param_7[4] = -fVar2;
      param_7[5] = fVar1;
      param_7[6] = -fVar3;
      param_7[7] = fVar1;
      return;
    }
    *param_7 = -*param_7;
    param_7[1] = fVar1;
    param_7[2] = -param_7[2];
    param_7[3] = fVar1;
    param_7[4] = fVar1;
    param_7[5] = -param_7[5];
    param_7[6] = -param_7[6];
    param_7[7] = fVar1;
  }
  return;
}
