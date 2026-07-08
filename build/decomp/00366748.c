// OoT3D decomp @ 00366748  name=FUN_00366748  size=84

bool FUN_00366748(void)

{
  int iVar1;
  
  if (((*puRam0036679c & 1) == 0) && (iVar1 = FUN_003679b4(puRam0036679c), iVar1 != 0)) {
    FUN_0036788c(uRam003667a0);
  }
  return *(char *)(iRam003667ac + 0xf38) != '\0';
}

