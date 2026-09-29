// OoT3D decomp @ 00401648  name=FUN_00401648  size=32

void FUN_00401648(int param_1,undefined1 param_2)

{
  int iVar1;

  *(undefined1 *)(param_1 + 5) = param_2;
  iVar1 = *(int *)(param_1 + 0x68);
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(ushort *)(iVar1 + 0x7c) = *(ushort *)(iVar1 + 0x7c) | 0x20;
  return;
}
