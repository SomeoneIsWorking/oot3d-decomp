// OoT3D decomp @ 0036a83c  name=FUN_0036a83c  size=16

byte FUN_0036a83c(int param_1)

{
  byte bVar1;

  bVar1 = *(byte *)(param_1 + 0x1b8) & 8;
  if ((*(byte *)(param_1 + 0x1b8) & 8) != 0) {
    bVar1 = 1;
  }
  return bVar1;
}
