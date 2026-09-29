// OoT3D decomp @ 002c2dbc  name=FUN_002c2dbc  size=124

float FUN_002c2dbc(float param_1,byte *param_2)

{
  float fVar1;

  fVar1 = DAT_002c2e3c;
  if ((param_1 <= DAT_002c2e3c) && (fVar1 = param_1, param_1 < DAT_002c2e38)) {
    fVar1 = DAT_002c2e38;
  }
  fVar1 = *(float *)(*(int *)(DAT_002c2e44 + (uint)*param_2 * 4) +
                    (int)(DAT_002c2e40 + fVar1 * DAT_002c2e40 * DAT_002c2e48) * 4);
  if (DAT_002c2e3c < fVar1) {
    return DAT_002c2e3c;
  }
  if (fVar1 < DAT_002c2e38) {
    fVar1 = DAT_002c2e38;
  }
  return fVar1;
}
