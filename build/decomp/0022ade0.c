// OoT3D decomp @ 0022ade0  name=FUN_0022ade0  size=64

void FUN_0022ade0(int param_1)

{
  if (*(short *)(param_1 + 0x1c) != 10) {
                    /* WARNING: Subroutine does not return */
    FUN_00350be0(param_1 + 0x5b0);
  }
  if (*(int **)(param_1 + 0x634) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0022ae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x634) + 4))();
    return;
  }
  return;
}
