// OoT3D decomp @ 0030b5cc  name=FUN_0030b5cc  size=100

int * FUN_0030b5cc(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = *param_2;
  bVar2 = iVar1 == DAT_0030b630;
  if (bVar2) {
    iVar1 = param_2[2];
  }
  if (!bVar2 || iVar1 != 0x1000000) {
    return param_1;
  }
  *param_1 = (int)param_2;
  iVar1 = FUN_0040dbe4();
  param_1[1] = iVar1 + 8;
  iVar1 = FUN_0040dc48(*param_1);
  param_1[2] = iVar1 + 8;
  return param_1;
}
