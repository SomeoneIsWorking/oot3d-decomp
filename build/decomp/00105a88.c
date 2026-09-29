// OoT3D decomp @ 00105a88  name=FUN_00105a88  size=92

void FUN_00105a88(int param_1)

{
  short sVar1;

  sVar1 = *(short *)(param_1 + 0x1e0) + -1;
  *(short *)(param_1 + 0x1e0) = sVar1;
  if (sVar1 != 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x1e0) = *(undefined2 *)(param_1 + 500);
  if (*(short *)(param_1 + 0x1c) == 7) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
