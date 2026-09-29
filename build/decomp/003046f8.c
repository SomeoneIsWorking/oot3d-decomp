// OoT3D decomp @ 003046f8  name=FUN_003046f8  size=28

void FUN_003046f8(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030470c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 4) + 8))();
    return;
  }
  return;
}
