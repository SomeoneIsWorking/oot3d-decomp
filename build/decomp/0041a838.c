// OoT3D decomp @ 0041a838  name=FUN_0041a838  size=60

void FUN_0041a838(int *param_1)

{
  int *piVar1;
  int *piVar2;

  piVar1 = (int *)*param_1;
  while (piVar1 != param_1) {
    piVar2 = (int *)*piVar1;
    FUN_0034fc6c(piVar1);
    piVar1 = piVar2;
  }
  param_1[4] = (int)param_1;
  *param_1 = (int)param_1;
  param_1[1] = (int)param_1;
  return;
}
