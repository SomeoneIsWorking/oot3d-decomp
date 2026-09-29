// OoT3D decomp @ 00486730  name=FUN_00486730  size=148

int * FUN_00486730(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((*param_2 == DAT_004867c4) && (0xffffff < (uint)param_2[2])) &&
     ((uint)param_2[2] <= DAT_004867c8)) {
    iVar1 = FUN_0048c268(param_2);
    iVar2 = FUN_0048c1fc(param_2);
    iVar3 = FUN_0048c2cc(param_2);
    if (iVar1 != 0 && iVar2 != 0) {
      *param_1 = iVar1 + 8;
      bVar4 = iVar3 != 0;
      if (bVar4) {
        iVar3 = iVar3 + 8;
      }
      param_1[1] = iVar2 + 8;
      if (bVar4) {
        param_1[2] = iVar3;
      }
    }
  }
  return param_1;
}
