// OoT3D decomp @ 003283d4  name=FUN_003283d4  size=84

void FUN_003283d4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;

  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[7] = 1;
  param_1[4] = param_1 + 3;
  param_1[8] = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}
