// OoT3D decomp @ 0036adf4  name=FUN_0036adf4  size=16

byte FUN_0036adf4(int param_1)

{
  byte bVar1;

  bVar1 = *(byte *)(param_1 + 0x1b8) & 2;
  if ((*(byte *)(param_1 + 0x1b8) & 2) != 0) {
    bVar1 = 1;
  }
  return bVar1;
}
