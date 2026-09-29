// OoT3D decomp @ 002bd194  name=FUN_002bd194  size=72

void FUN_002bd194(int param_1,int param_2)

{
  int iVar1;

  if (param_2 != 0) {
    do {
      FUN_002bd194(param_1,*(undefined4 *)(param_2 + 0xc));
      iVar1 = *(int *)(param_2 + 8);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 8);
      FUN_002bd70c(param_2 + 0x14);
      *(int *)(param_1 + 8) = param_2;
      param_2 = iVar1;
    } while (iVar1 != 0);
    return;
  }
  return;
}
