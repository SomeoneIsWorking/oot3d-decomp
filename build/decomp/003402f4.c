// OoT3D decomp @ 003402f4  name=FUN_003402f4  size=100

undefined4 FUN_003402f4(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;

  fVar1 = DAT_00340358;
  fVar2 = *param_3;
  if (param_2 == DAT_00340358) {
    if (fVar2 == param_1) {
      return 1;
    }
  }
  else {
    if (param_1 < fVar2) {
      param_2 = -param_2;
    }
    *param_3 = fVar2 + param_2;
    if (fVar1 <= ((fVar2 + param_2) - param_1) * param_2) {
      *param_3 = param_1;
      return 1;
    }
  }
  return 0;
}
