// OoT3D decomp @ 004220e8  name=FUN_004220e8  size=136

undefined4 FUN_004220e8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;

  *param_1 = param_2;
  param_1[8] = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 0xb);
  } while (!bVar1);
  param_1[0xb] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 0xc);
  } while (!bVar1);
  param_1[0xc] = 0;
  FUN_002fb8e8(param_1 + 1,0);
  FUN_002fb8e8(param_1 + 3,0);
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 5);
  } while (!bVar1);
  param_1[5] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  return 0;
}
