// OoT3D decomp @ 0044a114  name=FUN_0044a114  size=132

void FUN_0044a114(void)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;

  pcVar1 = DAT_0044a198;
  iVar3 = *(int *)(DAT_0044a198 + 4);
  if (0 < iVar3) {
    iVar3 = iVar3 + -1;
    *(int *)(DAT_0044a198 + 4) = iVar3;
  }
  piVar2 = DAT_0044a19c;
  if (iVar3 == 0) {
    if (*pcVar1 != '\0') {
      *pcVar1 = '\0';
      iVar3 = *piVar2;
      if (iVar3 != 0) {
        software_interrupt(0x23);
        if (iVar3 < 0) {
          FUN_0030e3ac(iVar3,&DAT_0044a1a0,0,&DAT_0044a1a0);
          FUN_002fb928(0);
        }
        *piVar2 = *DAT_0044a1a4;
      }
      return;
    }
    return;
  }
  return;
}
