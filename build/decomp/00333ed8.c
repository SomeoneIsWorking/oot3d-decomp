// OoT3D decomp @ 00333ed8  name=FUN_00333ed8  size=240

float FUN_00333ed8(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = DAT_00333fc8;
  if ((int)param_1 * 2 + 0x9a000000U < 0x19000001) {
    if ((uint)((int)param_1 << 1) < 0x7e000001) {
      fVar4 = param_1 * param_1;
      fVar2 = DAT_00333fd0;
      fVar3 = DAT_00333fd4;
    }
    else {
      fVar4 = (DAT_00333fd8 - ABS(param_1)) * DAT_00333fdc;
      fVar1 = (float)FUN_00434ed4(fVar4);
      fVar2 = fVar3;
      if (((uint)param_1 & 0x80000000) != 0) {
        fVar1 = -fVar1;
        fVar3 = DAT_00333fe4;
        fVar2 = DAT_00333fe0;
      }
      param_1 = fVar1 * DAT_00333fe8;
    }
    return ((fVar3 - param_1) -
           param_1 * fVar4 *
           (DAT_00333ffc +
           fVar4 * (DAT_00333ff8 +
                   fVar4 * (DAT_00333ff4 + fVar4 * (DAT_00333ff0 + fVar4 * DAT_00333fec))))) + fVar2
    ;
  }
  if ((uint)((int)param_1 * 2) < 0x66000000) {
    return DAT_00333fcc;
  }
  if ((uint)((int)param_1 << 1) < 0xff000001) {
    FUN_002eb01c(param_1,1);
    return fVar3 / fVar3;
  }
  return param_1 + param_1;
}

