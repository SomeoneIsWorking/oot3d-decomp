// OoT3D decomp @ 004ba280  name=FUN_004ba280  size=52

bool FUN_004ba280(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (*param_3 - param_1) * (*param_3 - param_1) +
          (param_3[1] - param_2) * (param_3[1] - param_2);
  fVar1 = param_3[3] * param_3[3];
  return fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2));
}

