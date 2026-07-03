// OoT3D decomp @ 00300aa8  name=FUN_00300aa8  size=416

void FUN_00300aa8(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float *param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = DAT_00300c50;
  fVar1 = DAT_00300c48;
  fVar4 = DAT_00300c48 / (param_2 - param_1);
  fVar7 = fVar4 * DAT_00300c4c;
  fVar6 = DAT_00300c48 / (param_4 - param_3);
  fVar5 = fVar6 * DAT_00300c4c;
  fVar3 = DAT_00300c48 / (param_6 - param_5);
  param_7[1] = DAT_00300c50;
  param_7[2] = fVar2;
  param_7[4] = fVar2;
  param_7[6] = fVar2;
  param_7[8] = fVar2;
  param_7[9] = fVar2;
  param_7[0xc] = fVar2;
  param_7[0xd] = fVar2;
  param_7[0xe] = fVar2;
  param_7[0xf] = fVar1;
  *param_7 = fVar7;
  param_7[3] = -(param_2 + param_1) * fVar4;
  param_7[5] = fVar5;
  param_7[7] = -(param_4 + param_3) * fVar6;
  param_7[10] = fVar3;
  param_7[0xb] = param_5 * fVar3;
  fVar1 = DAT_00300c54;
  if (param_8 != 0 && param_8 != 4) {
    if (param_8 != 2) {
      if (param_8 == 3) {
        fVar2 = *param_7;
        fVar3 = param_7[1];
        fVar4 = param_7[3];
        *param_7 = DAT_00300c54;
        param_7[1] = -param_7[5];
        param_7[2] = fVar1;
        param_7[3] = -param_7[7];
        param_7[4] = fVar2;
        param_7[5] = fVar3;
        param_7[7] = fVar4;
        return;
      }
      fVar2 = param_7[3];
      fVar3 = *param_7;
      *param_7 = param_7[4];
      param_7[1] = param_7[5];
      param_7[3] = param_7[7];
      param_7[4] = -fVar3;
      param_7[5] = fVar1;
      param_7[6] = fVar1;
      param_7[7] = -fVar2;
      return;
    }
    *param_7 = -*param_7;
    param_7[1] = fVar1;
    param_7[2] = fVar1;
    param_7[3] = -param_7[3];
    param_7[4] = fVar1;
    param_7[5] = -param_7[5];
    param_7[6] = fVar1;
    param_7[7] = -param_7[7];
  }
  return;
}

