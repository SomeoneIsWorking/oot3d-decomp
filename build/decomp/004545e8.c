// OoT3D decomp @ 004545e8  name=FUN_004545e8  size=80

void FUN_004545e8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;

  *param_1 = DAT_00454638;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  iVar2 = FUN_00466c8c(param_1 + 4);
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(iVar2 + -0xc));
  } while (!bVar1);
  *(undefined4 *)(iVar2 + -0xc) = 1;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  return;
}
