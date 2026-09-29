// OoT3D decomp @ 00288394  name=FUN_00288394  size=36

bool FUN_00288394(int param_1)

{
  uint uVar1;
  bool bVar2;

  uVar1 = *(uint *)(param_1 + 0x20ac);
  bVar2 = *(char *)(uVar1 + 0x1b5) == '\n';
  if (bVar2) {
    uVar1 = (uint)*(byte *)(uVar1 + 0x1a6);
  }
  return bVar2 && uVar1 == 3;
}
