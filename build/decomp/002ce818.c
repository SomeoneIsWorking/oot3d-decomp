// OoT3D decomp @ 002ce818  name=FUN_002ce818  size=100

void FUN_002ce818(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;

  iVar2 = DAT_002ce880;
  iVar1 = DAT_002ce87c;
  if ((*(byte *)(DAT_002ce87c + 1) & ~*(byte *)(DAT_002ce87c + 2)) != 0) {
    iVar4 = 0;
    do {
      pcVar3 = *(code **)(iVar2 + iVar4 * 4);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    if (*(char *)(iVar1 + 1) != '\0') {
      FUN_0030e3dc(*(undefined4 *)(iVar1 + 8));
      *(undefined1 *)(iVar1 + 1) = 0;
    }
    *(undefined1 *)(iVar1 + 2) = 1;
  }
  return;
}
