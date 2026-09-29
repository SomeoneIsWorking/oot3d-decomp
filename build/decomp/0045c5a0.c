// OoT3D decomp @ 0045c5a0  name=FUN_0045c5a0  size=80

void FUN_0045c5a0(int param_1)

{
  if (*(char *)(param_1 + 0x238) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x234) + 0xc))();
  }
  if (*(char *)(param_1 + 0x368) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0045c5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x364) + 0xc))();
    return;
  }
  return;
}
