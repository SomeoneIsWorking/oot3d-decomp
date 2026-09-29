// OoT3D decomp @ 002fc114  name=FUN_002fc114  size=200

undefined4 FUN_002fc114(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int extraout_r1;
  undefined4 uVar3;
  undefined4 uStack_10;

  piVar2 = param_1 + 0xb;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  uStack_10 = param_4;
  while (FUN_0030af40(&uStack_10,param_1 + 5), param_1[10] < 1) {
    FUN_0030aedc(&uStack_10);
    FUN_002df264(param_1 + 1);
  }
  uVar3 = *(undefined4 *)(*param_1 + param_1[9] * 4);
  FUN_00339384(param_1[9] + 1,param_1[8]);
  param_1[9] = extraout_r1;
  param_1[10] = param_1[10] + -1;
  if (0 < param_1[0xc]) {
    FUN_002df318(param_1 + 3,1);
  }
  FUN_0030aedc(&uStack_10);
  param_1 = param_1 + 0xb;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + -1;
  return uVar3;
}
