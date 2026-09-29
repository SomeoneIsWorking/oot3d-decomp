// OoT3D decomp @ 00488428  name=FUN_00488428  size=48

int FUN_00488428(int param_1)

{
  char cVar1;

  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 != '\0' && cVar1 != '\x06') {
    param_1 = *(int *)(param_1 + 0x24);
  }
  if ((cVar1 != '\0' && cVar1 != '\x06') && param_1 != 0) {
    return param_1 * 6 + -2;
  }
  return 0;
}
