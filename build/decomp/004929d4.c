// OoT3D decomp @ 004929d4  name=FUN_004929d4  size=84

bool FUN_004929d4(void)

{
  int iVar1;
  
  if (((*puRam00492a28 & 1) == 0) && (iVar1 = func_0x003679b4(puRam00492a28), iVar1 != 0)) {
    func_0x0036788c(uRam00492a2c);
  }
  return *(int *)(iRam00492a38 + 0xfb0) != 0;
}

