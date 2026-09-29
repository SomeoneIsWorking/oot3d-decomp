// OoT3D decomp @ 00351388  name=FUN_00351388  size=56

undefined4 FUN_00351388(int param_1)

{
  char cVar1;

  cVar1 = *(char *)(*(int *)(param_1 + 0x20ac) + 0x1a9);
  if ((cVar1 != '\x05' && cVar1 != '\a') &&
     (*(char *)(*(int *)(param_1 + 0x20ac) + 0x1a6) == '\x03')) {
    return 1;
  }
  return 0;
}
