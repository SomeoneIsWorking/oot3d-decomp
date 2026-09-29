// OoT3D decomp @ 003600e4  name=FUN_003600e4  size=168

/* WARNING: Removing unreachable block (ram,0x00360140) */
/* WARNING: Removing unreachable block (ram,0x00360184) */
/* WARNING: Removing unreachable block (ram,0x00360144) */
/* WARNING: Removing unreachable block (ram,0x00360154) */
/* WARNING: Removing unreachable block (ram,0x00360164) */
/* WARNING: Removing unreachable block (ram,0x00360168) */

float FUN_003600e4(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;

  param_2 = (param_1 - *param_5) * param_2;
  if ((param_2 <= param_3) && (param_3 = param_2, param_2 < param_4)) {
    param_3 = param_4;
  }
  fVar1 = *param_5 + param_3;
  *param_5 = fVar1;
  if (fVar1 <= param_1) {
    param_1 = fVar1;
  }
  *param_5 = param_1;
  return param_3;
}
