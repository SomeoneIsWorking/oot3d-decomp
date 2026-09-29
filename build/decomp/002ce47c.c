// OoT3D decomp @ 002ce47c  name=FUN_002ce47c  size=72

void FUN_002ce47c(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;

  iVar2 = DAT_002ce4c8;
  iVar1 = DAT_002ce4c4;
  if (*(char *)(DAT_002ce4c4 + 2) != '\0') {
    iVar4 = 0;
    *(undefined1 *)(DAT_002ce4c4 + 3) = 1;
    do {
      pcVar3 = *(code **)(iVar2 + iVar4 * 4);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    *(undefined1 *)(iVar1 + 2) = 0;
  }
  return;
}
