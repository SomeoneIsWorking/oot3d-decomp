// OoT3D decomp @ 0036e5e0  name=FUN_0036e5e0  size=140

undefined4 FUN_0036e5e0(float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_3 + 0x4c);
  param_2 = *(float *)(param_3 + 0x40) * param_2;
  fVar1 = *(float *)(param_3 + 0x3c) - param_2;
  if (fVar1 < DAT_0036e66c) {
    fVar1 = fVar2 + fVar1;
  }
  else if (fVar2 <= fVar1) {
    fVar1 = fVar1 - fVar2;
  }
  if ((param_1 == DAT_0036e66c) &&
     (param_2 != DAT_0036e66c && param_2 < DAT_0036e66c == (NAN(param_2) || NAN(DAT_0036e66c)))) {
    param_1 = fVar2;
  }
  param_1 = (fVar1 + param_2) - param_1;
  fVar1 = param_1 * param_2;
  if ((fVar1 < DAT_0036e66c == (NAN(fVar1) || NAN(DAT_0036e66c))) &&
     ((param_1 - param_2) * param_2 < DAT_0036e66c)) {
    return 1;
  }
  return 0;
}

