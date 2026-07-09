// OoT3D decomp @ 0033d220  name=FUN_0033d220  size=80

void FUN_0033d220(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x212c) < 8) {
    FUN_0031487c(param_1,param_1 + *(int *)(param_1 + 0x212c) * 8 + 0x2130,param_2);
    *(int *)(param_1 + 0x212c) = *(int *)(param_1 + 0x212c) + 1;
                    /* WARNING: Could not recover jumptable at 0x0033d268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}

