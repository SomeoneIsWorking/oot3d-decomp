// OoT3D decomp @ 00367788  name=FUN_00367788  size=244

void FUN_00367788(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 == 0) || (*(int *)(param_1 + 4) != 0)) {
    if (**(int **)(param_1 + 0x18) < *(int *)(param_1 + 0x14)) {
      FUN_002c1ae8(param_1,*(int *)(param_1 + 0x1c) + **(int **)(param_1 + 0x18) * 8,param_2);
      **(int **)(param_1 + 0x18) = **(int **)(param_1 + 0x18) + 1;
    }
  }
  else if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) {
    FUN_002c1ae8(param_1,*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0xc) * 8,param_2);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  if (((*DAT_0036787c & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0036787c), iVar1 != 0)) {
    FUN_0036788c(DAT_00367880);
  }
  iVar1 = *(int *)(DAT_00367880 + 0xfc);
                    /* WARNING: Could not recover jumptable at 0x00367878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,iVar1 + 0x114,iVar1 + 0x174,iVar1 + 0x30);
  return;
}

