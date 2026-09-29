// OoT3D decomp @ 00427c80  name=FUN_00427c80  size=36

void FUN_00427c80(void)

{
  if (*(int *)(DAT_00427ca4 + 0x14) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00427c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(DAT_00427ca4 + 4) + 0xc))();
    return;
  }
  return;
}
