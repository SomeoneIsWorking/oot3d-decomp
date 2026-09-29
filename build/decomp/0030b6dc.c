// OoT3D decomp @ 0030b6dc  name=FUN_0030b6dc  size=76

int FUN_0030b6dc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = iVar1 + -0x18;
  FUN_0030c964(param_1 + 0x18);
  *(int *)(iVar1 + -0x14) = param_2;
  *(int *)(param_2 + 4) = iVar2;
  return iVar2;
}
