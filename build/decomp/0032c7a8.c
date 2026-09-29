// OoT3D decomp @ 0032c7a8  name=FUN_0032c7a8  size=68

float FUN_0032c7a8(float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;

  fVar1 = *(float *)(param_3 + 0x198);
  fVar2 = DAT_0032c7f0;
  if ((DAT_0032c7ec <= (int)fVar1) && (fVar2 = fVar1, DAT_0032c7f4 < (int)fVar1)) {
    fVar2 = DAT_0032c7f8;
  }
  return param_1 + (param_2 - param_1) * (fVar2 - DAT_0032c7f0) * DAT_0032c7fc;
}
