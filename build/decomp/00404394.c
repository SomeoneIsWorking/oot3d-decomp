// OoT3D decomp @ 00404394  name=FUN_00404394  size=48

void FUN_00404394(int *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x26) = param_2;
  if (param_1[4] != 0) {
    FUN_0030c9e4(param_1[4],param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x004043c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))(param_1);
  return;
}
