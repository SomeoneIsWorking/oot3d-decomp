// OoT3D decomp @ 004027c8  name=FUN_004027c8  size=44

void FUN_004027c8(int *param_1,int param_2)

{
  int iVar1;

  *param_1 = param_2;
  iVar1 = FUN_004043f4(param_2);
  if (iVar1 != 0) {
    FUN_00313bd4(*param_1);
  }
  *(int **)(*param_1 + 8) = param_1;
  return;
}
