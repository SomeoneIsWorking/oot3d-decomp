// OoT3D decomp @ 0030c3b4  name=FUN_0030c3b4  size=112

undefined4 * FUN_0030c3b4(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  bool bVar2;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = *param_2;
  bVar2 = iVar1 == DAT_0030c424;
  if (bVar2) {
    iVar1 = param_2[2];
  }
  if (bVar2 && iVar1 == 0x1000000) {
    *param_1 = param_2;
    iVar1 = FUN_004955f8(param_2);
    param_1[1] = iVar1 + 8;
    if (param_3 != 0) {
      iVar1 = FUN_002c4850(*param_1);
      param_1[2] = iVar1 + 4 + (int)param_2;
    }
  }
  return param_1;
}
