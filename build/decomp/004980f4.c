// OoT3D decomp @ 004980f4  name=FUN_004980f4  size=60

void FUN_004980f4(void)

{
  int iVar1;

  while (iVar1 = FUN_004a1d44(DAT_00498130), iVar1 != 0) {
    software_interrupt(10);
  }
  *DAT_00498134 = 0;
  return;
}
