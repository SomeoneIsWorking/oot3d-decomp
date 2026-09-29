// OoT3D decomp @ 0035021c  name=FUN_0035021c  size=40

void FUN_0035021c(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *(int *)(DAT_00350244 + 0xc) = *(int *)(DAT_00350244 + 0xc) + -1;
                    /* WARNING: Could not recover jumptable at 0x0035023c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
  return;
}
