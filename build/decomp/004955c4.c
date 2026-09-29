// OoT3D decomp @ 004955c4  name=FUN_004955c4  size=48

int FUN_004955c4(int param_1)

{
  int iVar1;

  if (*(ushort *)(param_1 + 0x14) == DAT_004955f4) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(ushort *)(param_1 + 0x20) == DAT_004955f4) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = 0;
  }
  return param_1 + *(int *)(iVar1 + 4);
}
