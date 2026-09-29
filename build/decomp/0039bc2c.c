// OoT3D decomp @ 0039bc2c  name=FUN_0039bc2c  size=108

bool FUN_0039bc2c(float *param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;

  fVar2 = SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
               (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
               (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
  *param_4 = fVar2;
  iVar1 = DAT_0039bc98;
  fVar2 = (param_1[3] + param_2[3]) - fVar2;
  *param_3 = fVar2;
  if ((int)fVar2 <= iVar1) {
    *param_3 = DAT_0039bc9c;
  }
  return (int)fVar2 > iVar1;
}
