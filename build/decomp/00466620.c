// OoT3D decomp @ 00466620  name=FUN_00466620  size=256

void FUN_00466620(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  fVar1 = param_1[0xc];
  fVar3 = param_1[0xd];
  fVar5 = param_1[0xe];
  param_1[0xc] = -(*param_2 * param_2[3] + param_2[4] * param_2[7]) + -(param_2[8] * param_2[0xb]);
  param_1[0xd] = -(param_2[1] * param_2[3] + param_2[5] * param_2[7]) + -(param_2[9] * param_2[0xb])
  ;
  param_1[0xe] = -(param_2[2] * param_2[3] + param_2[6] * param_2[7]) +
                 -(param_2[10] * param_2[0xb]);
  fVar2 = param_2[1];
  fVar4 = param_2[2];
  fVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = fVar2;
  param_1[2] = fVar4;
  param_1[3] = fVar6;
  fVar2 = param_2[5];
  fVar4 = param_2[6];
  fVar6 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = fVar2;
  param_1[6] = fVar4;
  param_1[7] = fVar6;
  fVar2 = param_2[9];
  fVar4 = param_2[10];
  fVar6 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = fVar2;
  param_1[10] = fVar4;
  param_1[0xb] = fVar6;
  if (*(char *)(param_1 + 0x18) == '\0') {
    param_1[0xf] = param_1[0xc] - fVar1;
    param_1[0x10] = param_1[0xd] - fVar3;
    param_1[0x11] = param_1[0xe] - fVar5;
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}
