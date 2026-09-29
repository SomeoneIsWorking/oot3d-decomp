// OoT3D decomp @ 00355804  name=FUN_00355804  size=40

float FUN_00355804(float param_1,float param_2)

{
  float fVar1;

  fVar1 = param_1;
  if ((param_2 < ABS(param_1)) && (fVar1 = param_2, param_1 < DAT_0035582c)) {
    fVar1 = -param_2;
  }
  return fVar1;
}
