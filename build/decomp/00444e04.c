// OoT3D decomp @ 00444e04  name=FUN_00444e04  size=28

void FUN_00444e04(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00444e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    return;
  }
  return;
}
