// OoT3D decomp @ 003cb1b8  name=FUN_003cb1b8  size=60

void FUN_003cb1b8(int param_1)

{
  char cVar1;

  FUN_003731e0(param_1 + 0x1a4);
  cVar1 = *(char *)(param_1 + 0x304);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x304) = cVar1 + -1, cVar1 != '\x01')) {
    return;
  }
  FUN_00374428(param_1);
  return;
}
