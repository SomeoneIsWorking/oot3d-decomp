// OoT3D decomp @ 002295d8  name=FUN_002295d8  size=64

void FUN_002295d8(int param_1)

{
  if (*(short *)(param_1 + 0x1c) != 10) {
                    /* WARNING: Subroutine does not return */
    FUN_00350be0(param_1 + 0x208);
  }
  if (*(int **)(param_1 + 0x69c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00229608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x69c) + 4))();
    return;
  }
  return;
}
