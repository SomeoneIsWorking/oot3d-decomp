// OoT3D decomp @ 0031d210  name=FUN_0031d210  size=144

undefined4
FUN_0031d210(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float *param_7)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;

  pfVar1 = DAT_0031d2a8;
  param_5 = param_5 - param_3;
  param_6 = param_6 - param_4;
  uVar2 = 0;
  fVar3 = param_5 * param_5 + param_6 * param_6;
  if ((int)ABS(fVar3) < DAT_0031d2a0) {
    *param_7 = DAT_0031d2a4;
    uVar2 = 0;
  }
  else {
    fVar3 = ((param_1 - param_3) * param_5 + (param_2 - param_4) * param_6) / fVar3;
    if ((DAT_0031d2a4 <= fVar3) && ((int)fVar3 < 0x3f800001)) {
      uVar2 = 1;
    }
    param_3 = param_3 + param_5 * fVar3;
    param_4 = param_4 + param_6 * fVar3;
    *DAT_0031d2a8 = param_3;
    param_3 = param_3 - param_1;
    pfVar1[1] = param_4;
    param_4 = param_4 - param_2;
    *param_7 = param_3 * param_3 + param_4 * param_4;
  }
  return uVar2;
}
