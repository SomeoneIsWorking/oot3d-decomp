// OoT3D decomp @ 00400edc  name=FUN_00400edc  size=364

void FUN_00400edc(void)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;

  piVar2 = DAT_00400ee4;
  pcVar1 = DAT_00400dc4;
  if (*DAT_00400dc4 != '\0') {
    iVar3 = *DAT_00400ee4;
    *DAT_00400ee4 = 0;
    software_interrupt(0x23);
    if (iVar3 < 0) {
      FUN_0030e3ac(iVar3,DAT_00400dc8,0);
      FUN_002fb928(0);
    }
    iVar3 = piVar2[2];
    piVar2[2] = 0;
    software_interrupt(0x23);
    if (iVar3 < 0) {
      FUN_0030e3ac(iVar3,DAT_00400dc8,0);
      FUN_002fb928(0);
    }
    iVar3 = piVar2[4];
    piVar2[4] = 0;
    software_interrupt(0x23);
    if (iVar3 < 0) {
      FUN_0030e3ac(iVar3,DAT_00400dc8,0);
      FUN_002fb928(0);
    }
    iVar3 = piVar2[7];
    piVar2[7] = 0;
    software_interrupt(0x23);
    if (iVar3 < 0) {
      FUN_0030e3ac(iVar3,DAT_00400dc8,0);
      FUN_002fb928(0);
    }
    iVar3 = piVar2[9];
    piVar2[9] = 0;
    software_interrupt(0x23);
    if (iVar3 < 0) {
      FUN_0030e3ac(iVar3,DAT_00400dc8,0);
      FUN_002fb928(0);
    }
    FUN_0030e324(piVar2 + 0xb);
    iVar3 = *DAT_00400dcc;
    software_interrupt(0x23);
    *DAT_00400dcc = *DAT_00400dd0;
    if (iVar3 < 0) {
      FUN_0030e3ac(iVar3,DAT_00400dc8,0);
      FUN_002fb928(0);
    }
    *pcVar1 = '\0';
  }
  return;
}
