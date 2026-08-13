// OoT3D decomp @ 00371234  name=FUN_00371234  size=268

void FUN_00371234(float param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar2 = fRam00371344;
  fVar1 = fRam00371340;
  if (param_3 == 1) {
    if (param_1 != fRam00371340) {
      fVar1 = (float)func_0x003727f0(param_1);
      fVar2 = (float)func_0x00372674(param_1);
      fVar4 = *param_2;
      *param_2 = fVar4 * fVar2 + param_2[1] * fVar1;
      param_2[1] = param_2[1] * fVar2 - fVar4 * fVar1;
      fVar4 = param_2[4];
      param_2[4] = fVar4 * fVar2 + param_2[5] * fVar1;
      param_2[5] = param_2[5] * fVar2 - fVar4 * fVar1;
      fVar4 = param_2[8];
      param_2[8] = fVar4 * fVar2 + param_2[9] * fVar1;
      param_2[9] = param_2[9] * fVar2 - fVar4 * fVar1;
    }
    return;
  }
  fVar4 = fRam00371344;
  fVar3 = fRam00371340;
  if (param_1 != fRam00371340) {
    fVar3 = (float)func_0x003727f0(param_1);
    fVar4 = (float)func_0x00372674(param_1);
  }
  *param_2 = fVar4;
  param_2[1] = -fVar3;
  param_2[2] = fVar1;
  param_2[3] = fVar1;
  param_2[4] = fVar3;
  param_2[5] = fVar4;
  param_2[6] = fVar1;
  param_2[7] = fVar1;
  param_2[8] = fVar1;
  param_2[9] = fVar1;
  param_2[10] = fVar2;
  param_2[0xb] = fVar1;
  return;
}
