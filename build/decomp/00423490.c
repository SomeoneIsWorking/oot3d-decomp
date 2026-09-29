// OoT3D decomp @ 00423490  name=FUN_00423490  size=196

int FUN_00423490(void)

{
  char *pcVar1;
  int iVar2;

  pcVar1 = DAT_00423554;
  iVar2 = DAT_00423558;
  if (((*DAT_00423554 == '\0') && (iVar2 = FUN_0030de88(), -1 < iVar2)) &&
     (iVar2 = FUN_002fa280(DAT_0042355c,0), -1 < iVar2)) {
    iVar2 = FUN_002fa25c(DAT_00423560);
    if (iVar2 < 0) {
      pcVar1[4] = '\0';
    }
    FUN_002fa24c(DAT_00423564,(int)pcVar1[4]);
    FUN_004370e0(DAT_00423568);
    FUN_00437124(DAT_00423564);
    FUN_002fa240();
    FUN_0044a5fc();
    FUN_00436018(DAT_00423574,DAT_00423570,DAT_0042356c);
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    *pcVar1 = '\x01';
    return 0;
  }
  return iVar2;
}
