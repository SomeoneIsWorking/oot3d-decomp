// OoT3D decomp @ 002fb8e8  name=FUN_002fb8e8  size=60

void FUN_002fb8e8(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;

  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = param_2;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 1);
  } while (!bVar1);
  *(undefined2 *)(param_1 + 1) = 0;
  *(short *)((int)param_1 + 6) = (short)DAT_002fb924;
  return;
}
