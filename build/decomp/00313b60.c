// OoT3D decomp @ 00313b60  name=FUN_00313b60  size=100

undefined4 FUN_00313b60(void)

{
  int iVar1;

  if (((*DAT_00313bc4 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_00313bc4), iVar1 != 0)) {
    iVar1 = FUN_0047e44c(DAT_00313bc8);
    iVar1 = FUN_002d49d0(iVar1 + 0x16c);
    iVar1 = FUN_002d4900(iVar1 + 0x21c);
    *(undefined4 *)(iVar1 + 0xa8) = 0;
  }
  return DAT_00313bc8;
}
