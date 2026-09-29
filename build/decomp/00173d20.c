// OoT3D decomp @ 00173d20  name=FUN_00173d20  size=180

void FUN_00173d20(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_003731e0(param_1 + 0x1e0);
  if (iVar1 != 0) {
    iVar1 = FUN_00369608(param_2,param_1);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0x98) < DAT_00173e48) &&
         (DAT_00173e48 + -0x1e0000 < *(int *)(param_1 + 0x98))) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
    }
    if ((*(uint *)(DAT_00173e60 + param_2) & 1) == 0) {
      FUN_0035ad18(param_1);
    }
    else {
      FUN_0034c4a0(param_1,param_2);
    }
  }
  if ((*(uint *)(param_2 + 0xf8) & 0x5f) == 0) {
    FUN_00375bcc(param_1,DAT_00173e64);
    return;
  }
  return;
}
