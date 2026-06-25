// OoT3D decomp @ 002bf4ec  name=FUN_002bf4ec  size=52

bool FUN_002bf4ec(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (*param_3 - param_1) * (*param_3 - param_1) +
          (param_3[2] - param_2) * (param_3[2] - param_2);
  fVar1 = param_3[3] * param_3[3];
  return fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2));
}

