// OoT3D decomp @ 0040c678  name=FUN_0040c678  size=68

void FUN_0040c678(int *param_1)

{
  int iVar1;

  FUN_003120d4(param_1[*param_1 + 1]);
  FUN_00311954();
  *DAT_0040c6bc = *param_1;
  iVar1 = *param_1;
  *param_1 = -iVar1 + 1;
  FUN_003120d4(param_1[-iVar1 + 2]);
  return;
}
