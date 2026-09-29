// OoT3D decomp @ 003813c4  name=FUN_003813c4  size=104

bool FUN_003813c4(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;

  iVar1 = DAT_0038142c;
  fVar2 = (param_1[3] + param_2[3]) -
          SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
               (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
               (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
  *param_3 = fVar2;
  if ((int)fVar2 <= iVar1) {
    *param_3 = DAT_00381430;
  }
  return (int)fVar2 > iVar1;
}
