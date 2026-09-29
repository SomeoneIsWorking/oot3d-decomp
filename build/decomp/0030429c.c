// OoT3D decomp @ 0030429c  name=FUN_0030429c  size=56

bool FUN_0030429c(int param_1)

{
  short sVar1;

  sVar1 = *(short *)(param_1 + 0xc);
  if (sVar1 == 0x2201) {
    return (bool)2;
  }
  if (sVar1 == 0x2202) {
    return (bool)3;
  }
  return sVar1 == 0x2203;
}
