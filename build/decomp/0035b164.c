// OoT3D decomp @ 0035b164  name=FUN_0035b164  size=84

int FUN_0035b164(void)

{
  int iVar1;
  
  if (((*DAT_0035b1b8 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0035b1b8), iVar1 != 0)) {
    FUN_0036788c(DAT_0035b1bc);
  }
  return (*(int *)(DAT_0035b1c8 + 0x3ec) >> 0x1f) + 1;
}

