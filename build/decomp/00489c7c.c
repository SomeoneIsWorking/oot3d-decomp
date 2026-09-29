// OoT3D decomp @ 00489c7c  name=FUN_00489c7c  size=32

void FUN_00489c7c(undefined4 param_1,int param_2)

{
  int iVar1;

  *(undefined4 *)(param_2 + 100) = param_1;
  iVar1 = *(int *)(param_2 + 0x68);
  *(undefined4 *)(iVar1 + 0x78) = param_1;
  *(ushort *)(iVar1 + 0x7c) = *(ushort *)(iVar1 + 0x7c) | 1;
  return;
}
