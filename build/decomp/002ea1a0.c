// OoT3D decomp @ 002ea1a0  name=FUN_002ea1a0  size=212

void FUN_002ea1a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  bool bVar2;

  *param_1 = param_2;
  param_1[8] = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  do {
    bVar2 = (bool)hasExclusiveAccess(param_1 + 0xb);
  } while (!bVar2);
  param_1[0xb] = 0;
  do {
    bVar2 = (bool)hasExclusiveAccess(param_1 + 0xc);
  } while (!bVar2);
  param_1[0xc] = 0;
  do {
    bVar2 = (bool)hasExclusiveAccess(param_1 + 1);
  } while (!bVar2);
  param_1[1] = 0;
  do {
    bVar2 = (bool)hasExclusiveAccess(param_1 + 2);
  } while (!bVar2);
  *(undefined2 *)(param_1 + 2) = 0;
  uVar1 = (undefined2)DAT_002ea274;
  *(undefined2 *)((int)param_1 + 10) = uVar1;
  do {
    bVar2 = (bool)hasExclusiveAccess(param_1 + 3);
  } while (!bVar2);
  param_1[3] = 0;
  do {
    bVar2 = (bool)hasExclusiveAccess(param_1 + 4);
  } while (!bVar2);
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = uVar1;
  do {
    bVar2 = (bool)hasExclusiveAccess(param_1 + 5);
  } while (!bVar2);
  param_1[5] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}
