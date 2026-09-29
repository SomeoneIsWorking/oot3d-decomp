// OoT3D decomp @ 0030ab10  name=FUN_0030ab10  size=96

int * FUN_0030ab10(int *param_1,int *param_2)

{
  int iVar1;

  *param_1 = 0;
  param_1[1] = 0;
  if (((*param_2 == DAT_0030ab70) && (0xffffff < (uint)param_2[2])) &&
     ((uint)param_2[2] <= DAT_0030ab74)) {
    *param_1 = (int)param_2;
    iVar1 = FUN_0048c198();
    param_1[1] = iVar1 + 8;
    return param_1;
  }
  return param_1;
}
