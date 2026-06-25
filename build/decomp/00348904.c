// OoT3D decomp @ 00348904  name=FUN_00348904  size=116

void FUN_00348904(undefined4 param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return;
  }
  if ((int *)param_2[2] != (int *)0x0) {
    (**(code **)(*(int *)param_2[2] + 4))();
    param_2[2] = 0;
  }
  if (param_2[0x77] != 0) {
    (**(code **)(**DAT_00348978 + 0x10))(*DAT_00348978,param_2[0x77]);
    param_2[0x77] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00348974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 4))(param_2);
  return;
}

