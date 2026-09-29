// OoT3D decomp @ 0038c8e8  name=FUN_0038c8e8  size=60

void FUN_0038c8e8(int param_1)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if ('\r' < *(char *)(DAT_0038c954 + 9)) {
    FUN_00374428(param_1);
    return;
  }
  return;
}
