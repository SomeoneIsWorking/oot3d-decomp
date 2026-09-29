// OoT3D decomp @ 00133620  name=FUN_00133620  size=100

float FUN_00133620(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar1 = *param_1;
  fVar3 = param_1[2];
  fVar2 = DAT_00133684 - param_1[1];
  FUN_00372674(fVar2);
  FUN_00372674(fVar3);
  fVar2 = (float)FUN_003727f0(fVar2);
  fVar3 = (float)FUN_003727f0(fVar3);
  return fVar1 * fVar2 * fVar3;
}
