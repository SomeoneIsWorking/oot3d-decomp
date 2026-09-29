// OoT3D decomp @ 004a16f8  name=FUN_004a16f8  size=48

bool FUN_004a16f8(int param_1)

{
  int iVar1;

  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
  if (iVar1 != 0) {
    FUN_002bf00c(param_1);
  }
  return iVar1 != 0;
}
