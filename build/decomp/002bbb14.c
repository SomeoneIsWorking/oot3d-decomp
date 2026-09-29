// OoT3D decomp @ 002bbb14  name=FUN_002bbb14  size=184

undefined4
FUN_002bbb14(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar3 = param_1;
  if (NAN(param_1) || NAN(param_3)) {
    fVar3 = param_3;
    param_3 = param_1;
  }
  fVar4 = param_2;
  if (NAN(param_2) || NAN(param_4)) {
    fVar4 = param_4;
    param_4 = param_2;
  }
  fVar1 = param_5;
  if ((param_3 <= param_5) && (fVar1 = param_3, fVar3 < param_5)) {
    fVar3 = param_5;
  }
  fVar2 = param_6;
  if ((param_4 <= param_6) && (fVar2 = param_4, fVar4 < param_6)) {
    fVar4 = param_6;
  }
  if ((((fVar1 - param_9 <= param_7) && (param_7 <= fVar3 + param_9)) &&
      (fVar2 - param_9 <= param_8)) && (param_8 <= fVar4 + param_9)) {
    return 1;
  }
  return 0;
}
