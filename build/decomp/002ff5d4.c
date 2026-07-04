// OoT3D decomp @ 002ff5d4  name=FUN_002ff5d4  size=80

void FUN_002ff5d4(void)

{
  int iVar1;
  
  if (((*DAT_002ff624 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_002ff624), iVar1 != 0)) {
    FUN_0036788c(DAT_002ff628);
  }
  *(undefined4 *)(DAT_002ff628 + 0xfc) = 0;
  return;
}

