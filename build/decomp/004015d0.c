// OoT3D decomp @ 004015d0  name=FUN_004015d0  size=52

void FUN_004015d0(int param_1,int param_2)

{
  int iVar1;

  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = *(int *)(param_1 + 0x68);
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(iVar1 + 0x20) = param_2;
  *(ushort *)(iVar1 + 0x7c) = *(ushort *)(iVar1 + 0x7c) | 2;
  return;
}
