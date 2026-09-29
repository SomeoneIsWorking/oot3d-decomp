// OoT3D decomp @ 00306e2c  name=FUN_00306e2c  size=20

void FUN_00306e2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int extraout_r1;
  undefined4 uStack_10;

  *(undefined1 *)(param_1 + 0x28) = 1;
  piVar2 = (int *)(param_1 + 0x68);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  uStack_10 = param_4;
  while( true ) {
    FUN_0030af40(&uStack_10,param_1 + 0x4c);
    if (*(uint *)(param_1 + 0x60) < *(uint *)(param_1 + 0x58)) break;
    FUN_0030aedc(&uStack_10);
    FUN_002df264(param_1 + 0x44);
  }
  FUN_00339384(*(int *)(param_1 + 0x5c) + *(uint *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x58))
  ;
  *(undefined4 *)(*(int *)(param_1 + 0x38) + extraout_r1 * 4) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (0 < *(int *)(param_1 + 100)) {
    FUN_002df318(param_1 + 0x3c,1);
  }
  FUN_0030aedc(&uStack_10);
  piVar2 = (int *)(param_1 + 0x68);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  return;
}
