// OoT3D decomp @ 004955f8  name=FUN_004955f8  size=44

int FUN_004955f8(int param_1)

{
  int iVar1;

  if (*(short *)(param_1 + 0x14) == 0x6800) {
    iVar1 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6800) {
    iVar1 = param_1 + 0x20;
  }
  else {
    iVar1 = 0;
  }
  return param_1 + *(int *)(iVar1 + 4);
}
