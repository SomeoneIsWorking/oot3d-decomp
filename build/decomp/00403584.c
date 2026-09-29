// OoT3D decomp @ 00403584  name=FUN_00403584  size=192

void FUN_00403584(float param_1,float param_2,float *param_3,undefined4 *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;

  fVar1 = DAT_00403644;
  fVar2 = DAT_00403644;
  fVar4 = DAT_00403644;
  if (param_1 != DAT_00403644) {
    fVar2 = *param_3;
    fVar4 = param_3[2];
    fVar5 = SQRT(fVar2 * fVar2 + DAT_00403644 * DAT_00403644 + fVar4 * fVar4);
    if (param_2 < fVar5) {
      fVar5 = param_2 / fVar5;
      fVar2 = fVar5 * fVar2;
      fVar4 = fVar5 * fVar4;
    }
    fVar4 = SQRT(fVar2 * fVar2 + DAT_00403644 * DAT_00403644 + fVar4 * fVar4);
    fVar2 = (*param_3 * fVar4) / param_1;
    fVar4 = (param_3[2] * fVar4) / param_1;
  }
  uVar3 = FUN_003696ec(fVar2,-fVar4);
  *param_4 = uVar3;
  *param_5 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar4 * fVar4) / param_2;
  return;
}
