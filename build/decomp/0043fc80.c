// OoT3D decomp @ 0043fc80  name=FUN_0043fc80  size=60

void FUN_0043fc80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
                    /* WARNING: Could not recover jumptable at 0x0043fcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 4) + 0xc))();
    return;
  }
  return;
}
