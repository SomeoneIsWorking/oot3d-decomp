// OoT3D decomp @ 004b8d4c  name=FUN_004b8d4c  size=60

int FUN_004b8d4c(uint param_1)

{
  int iVar1;
  short *psVar2;

  psVar2 = (short *)(DAT_004b8d88 + (param_1 & 3) * 0x24);
  if (((char)psVar2[4] == '\0') || ((int)*psVar2 != param_1)) {
    psVar2 = (short *)0x0;
  }
  iVar1 = 0;
  if (psVar2 != (short *)0x0) {
    iVar1 = (int)psVar2[0xe];
  }
  return iVar1;
}
