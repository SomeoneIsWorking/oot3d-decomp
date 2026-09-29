// OoT3D decomp @ 0042cba8  name=FUN_0042cba8  size=64

void FUN_0042cba8(int param_1)

{
  char cVar1;
  bool bVar2;

  bVar2 = *(char *)(param_1 + 0xc) != '\0';
  cVar1 = '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xf38);
  }
  if ((((bVar2 && cVar1 != '\0') && cVar1 != '\x01') && cVar1 != '\x0e') && cVar1 != '\x0f') {
    bVar2 = *(char *)(param_1 + 0xd) != '\0';
    cVar1 = '\0';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xe);
    }
    if (bVar2 && cVar1 != '\0') {
      FUN_00442198(param_1 + 0x44);
      return;
    }
  }
  return;
}
