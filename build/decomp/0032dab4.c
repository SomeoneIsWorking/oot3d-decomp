// OoT3D decomp @ 0032dab4  name=FUN_0032dab4  size=100

float FUN_0032dab4(float param_1,float param_2)

{
  float fVar1;
  float fVar2;

  fVar1 = ABS(param_2);
  fVar2 = DAT_0032db18;
  if (fVar1 <= param_1) {
    fVar2 = param_1 * DAT_0032db20;
    if (fVar2 <= fVar1) {
      fVar2 = DAT_0032db18 -
              ((param_1 - fVar1) * (param_1 - fVar1) * DAT_0032db1c) /
              (param_1 * DAT_0032db1c * param_1 * DAT_0032db1c);
    }
    else {
      fVar2 = (param_2 * param_2 * DAT_0032db20) / (fVar2 * fVar2);
    }
  }
  return fVar2;
}
