// OoT3D decomp @ 00317614  name=FUN_00317614  size=16

byte FUN_00317614(int param_1)

{
  byte bVar1;

  bVar1 = *(byte *)(param_1 + 0x1b8) & 1;
  if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
    bVar1 = 1;
  }
  return bVar1;
}
