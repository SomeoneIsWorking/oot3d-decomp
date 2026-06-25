// OoT3D decomp @ 00306e40  name=FUN_00306e40  size=196

void FUN_00306e40(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int extraout_r1;
  undefined4 uStack_10;
  
  piVar2 = param_1 + 0xc;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  uStack_10 = param_4;
  while( true ) {
    FUN_0030af40(&uStack_10,param_1 + 5);
    if ((uint)param_1[10] < (uint)param_1[8]) break;
    FUN_0030aedc(&uStack_10);
    FUN_002df264(param_1 + 3);
  }
  FUN_00339384(param_1[9] + param_1[10],param_1[8]);
  *(undefined4 *)(*param_1 + extraout_r1 * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    FUN_002df318(param_1 + 1,1);
  }
  FUN_0030aedc(&uStack_10);
  param_1 = param_1 + 0xc;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + -1;
  return;
}

