// OoT3D decomp @ 0044bb0c  name=FUN_0044bb0c  size=60

void FUN_0044bb0c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;

  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = 0;
  iVar2 = 0;
  do {
    param_1[iVar2 + 2] = 0;
    iVar1 = iVar1 + 2;
    param_1[iVar2 + 3] = 0;
    iVar2 = iVar2 + 2;
  } while (iVar1 < 0x14);
  param_1[0x16] = 0;
  return;
}
