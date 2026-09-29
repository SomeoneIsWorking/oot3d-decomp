// OoT3D decomp @ 0031d2ac  name=FUN_0031d2ac  size=100

void FUN_0031d2ac(float *param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;

  fVar2 = (float)FUN_002cfca0(param_2);
  fVar1 = DAT_0031d310;
  *param_3 = fVar2 * DAT_0031d310;
  fVar2 = (float)FUN_00338f60(param_2);
  *param_4 = fVar2 * fVar1;
  *param_5 = -(*param_3 * *param_1 + fVar2 * fVar1 * param_1[2]);
  return;
}
