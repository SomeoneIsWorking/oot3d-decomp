// OoT3D decomp @ 0034e01c  name=FUN_0034e01c  size=204

void FUN_0034e01c(float *param_1,short *param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = DAT_0034e0e8;
  fVar1 = (float)VectorSignedToFloat((int)param_2[1],(byte)(in_fpscr >> 0x15) & 3);
  FUN_00369014(fVar1 * DAT_0034e0e8,param_1,1);
  fVar1 = (float)VectorSignedToFloat((int)*param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = fVar1 * fVar2;
  if (fVar1 != DAT_0034e0ec) {
    fVar2 = (float)FUN_003727f0(fVar1);
    fVar1 = (float)FUN_00372674(fVar1);
    fVar3 = *param_1;
    *param_1 = fVar3 * fVar1 + param_1[1] * fVar2;
    param_1[1] = param_1[1] * fVar1 - fVar3 * fVar2;
    fVar3 = param_1[4];
    param_1[4] = fVar3 * fVar1 + param_1[5] * fVar2;
    param_1[5] = param_1[5] * fVar1 - fVar3 * fVar2;
    fVar3 = param_1[8];
    param_1[8] = fVar3 * fVar1 + param_1[9] * fVar2;
    param_1[9] = param_1[9] * fVar1 - fVar3 * fVar2;
  }
  return;
}

