// OoT3D decomp @ 0032d8d8  name=FUN_0032d8d8  size=16

byte FUN_0032d8d8(int param_1)

{
  byte bVar1;

  bVar1 = *(byte *)(param_1 + 0x1b8) & 4;
  if ((*(byte *)(param_1 + 0x1b8) & 4) != 0) {
    bVar1 = 1;
  }
  return bVar1;
}
