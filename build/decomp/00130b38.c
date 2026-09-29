// OoT3D decomp @ 00130b38  name=FUN_00130b38  size=304

void FUN_00130b38(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  if (0x3f800000 < (int)param_1) {
    param_1 = DAT_00130c68;
  }
  fVar1 = DAT_00130c68 - param_1;
  fVar4 = param_1 * param_1 * param_1;
  fVar2 = fVar1 * fVar1 * fVar1 * DAT_00130c6c;
  fVar3 = (fVar4 * DAT_00130c70 - param_1 * param_1) + DAT_00130c74;
  fVar4 = fVar4 * DAT_00130c6c;
  fVar1 = -param_1 * param_1 * param_1 * DAT_00130c70 + param_1 * param_1 * DAT_00130c70 +
          param_1 * DAT_00130c70 + DAT_00130c6c;
  *param_2 = fVar2 * *param_5 + fVar3 * *param_6 + fVar1 * *param_7 + fVar4 * *param_8;
  param_2[1] = fVar2 * param_5[1] + fVar3 * param_6[1] + fVar1 * param_7[1] + fVar4 * param_8[1];
  param_2[2] = fVar2 * param_5[2] + fVar3 * param_6[2] + fVar1 * param_7[2] + fVar4 * param_8[2];
  *param_3 = fVar2 * param_5[3] + fVar3 * param_6[3] + fVar1 * param_7[3] + fVar4 * param_8[3];
  *param_4 = fVar2 * param_5[4] + fVar3 * param_6[4] + fVar1 * param_7[4] + fVar4 * param_8[4];
  return;
}
