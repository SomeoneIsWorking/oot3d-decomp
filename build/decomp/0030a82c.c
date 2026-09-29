// OoT3D decomp @ 0030a82c  name=FUN_0030a82c  size=84

int * FUN_0030a82c(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;

  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = *param_2;
  bVar2 = iVar1 == DAT_0030a880;
  if (bVar2) {
    iVar1 = param_2[2];
  }
  if (bVar2 && iVar1 == 0x1000000) {
    *param_1 = (int)param_2;
    iVar1 = FUN_0048bb44();
    if (iVar1 != 0) {
      param_1[1] = iVar1 + 8;
    }
  }
  return param_1;
}
