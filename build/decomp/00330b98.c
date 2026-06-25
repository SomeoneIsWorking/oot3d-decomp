// OoT3D decomp @ 00330b98  name=FUN_00330b98  size=156

void FUN_00330b98(int param_1,int *param_2,int param_3)

{
  if ((param_3 == 0) || (*(int *)(param_1 + 4) != 0)) {
    if (**(int **)(param_1 + 0x18) < *(int *)(param_1 + 0x14)) {
      FUN_0031487c(param_1,*(int *)(param_1 + 0x1c) + **(int **)(param_1 + 0x18) * 8,param_2);
      **(int **)(param_1 + 0x18) = **(int **)(param_1 + 0x18) + 1;
    }
  }
  else if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    FUN_0031487c(param_1,*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0xc) * 8,param_2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00330c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2);
  return;
}

