// OoT3D decomp @ 002cf064  name=FUN_002cf064  size=44

void FUN_002cf064(int param_1,int *param_2,int param_3)

{
  FUN_0031487c(param_1,param_1 + param_3 * 8 + 4,param_2);
                    /* WARNING: Could not recover jumptable at 0x002cf08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2);
  return;
}
