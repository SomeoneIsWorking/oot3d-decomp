// OoT3D decomp @ 00402904  name=FUN_00402904  size=72

void FUN_00402904(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 != 0) {
    FUN_00404444(iVar1,param_2);
    FUN_0040433c(param_2,iVar1);
    FUN_0030cab0(param_1 + 0x18,param_1 + 0x1c,iVar1 + 0x18);
    return;
  }
  return;
}
