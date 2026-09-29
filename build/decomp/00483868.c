// OoT3D decomp @ 00483868  name=FUN_00483868  size=40

void FUN_00483868(void)

{
  byte *pbVar1;

  pbVar1 = DAT_00483890;
  if (DAT_00483890[0x1f] == 0xef) {
    pbVar1 = (byte *)(uint)*DAT_00483890;
  }
  *(bool *)(DAT_00483894 + 0xe) = DAT_00483890[0x1f] == 0xef && pbVar1 == (byte *)0xbe;
  FUN_002eafb4();
  return;
}
