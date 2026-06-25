// OoT3D decomp @ 004ba2b4  name=FUN_004ba2b4  size=52

bool FUN_004ba2b4(float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  param_1 = *(float *)(param_3 + 4) - param_1;
  param_2 = *(float *)(param_3 + 8) - param_2;
  fVar2 = param_1 * param_1 + param_2 * param_2;
  fVar1 = *(float *)(param_3 + 0xc) * *(float *)(param_3 + 0xc);
  return fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2));
}

