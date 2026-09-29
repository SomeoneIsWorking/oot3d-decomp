// OoT3D decomp @ 002cf5ec  name=FUN_002cf5ec  size=80

void FUN_002cf5ec(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0xd4) < 0x1a) {
    FUN_0031487c(param_1,param_1 + *(int *)(param_1 + 0xd4) * 8 + 4,param_2);
    *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + 1;
                    /* WARNING: Could not recover jumptable at 0x002cf634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}
