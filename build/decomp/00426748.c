// OoT3D decomp @ 00426748  name=FUN_00426748  size=84

void FUN_00426748(void)

{
  int iVar1;

  iVar1 = DAT_0042679c;
  if ((*(int *)(DAT_0042679c + 0x14) != 0) &&
     ((**(code **)(**(int **)(DAT_0042679c + 4) + 0xc))(), *(int *)(iVar1 + 0x38) == 0)) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_002fb934();
    }
    if (*(int *)(iVar1 + 0x10) != 0) {
      FUN_002fb944();
      return;
    }
  }
  return;
}
