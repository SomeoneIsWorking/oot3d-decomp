// OoT3D decomp @ 00441f08  name=FUN_00441f08  size=104

void FUN_00441f08(void)

{
  int iVar1;

  iVar1 = DAT_00441f70;
  if (*(int *)(DAT_00441f70 + 0x60) == 0) {
    FUN_002fcdd4();
    if (*(int **)(iVar1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 8) + 0xc))();
    }
    if (*(int *)(iVar1 + 0x20) != 0) {
      FUN_002fb934();
    }
    if (*(int *)(iVar1 + 0x28) != 0) {
      FUN_002fb934();
      return;
    }
  }
  return;
}
