// OoT3D decomp @ 0030da40  name=FUN_0030da40  size=96

int FUN_0030da40(void)

{
  int iVar1;
  int iVar2;

  iVar2 = *DAT_0030daa0;
  iVar1 = DAT_0030daa4;
  if (iVar2 != 0) {
    software_interrupt(0x23);
    *DAT_0030daa0 = *DAT_0030daa8;
    iVar1 = iVar2;
  }
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,&DAT_0030daac,0,&DAT_0030daac);
    FUN_002fb928(0);
  }
  return iVar1;
}
