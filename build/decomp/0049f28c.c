// OoT3D decomp @ 0049f28c  name=FUN_0049f28c  size=80

undefined4 FUN_0049f28c(void)

{
  short sVar1;
  
  sVar1 = *(short *)(DAT_0049f2dc + 0x42);
  if (sVar1 < 0x51) {
    sVar1 = 0x10;
  }
  else if (sVar1 < 0xa1) {
    sVar1 = 0x18;
  }
  else if (sVar1 < 0xf1) {
    sVar1 = 0x20;
  }
  else {
    sVar1 = 0x2c;
  }
  if ((*(short *)(DAT_0049f2dc + 0x44) <= sVar1) && (0 < *(short *)(DAT_0049f2dc + 0x44))) {
    return 1;
  }
  return 0;
}

