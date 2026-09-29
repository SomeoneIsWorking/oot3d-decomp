// OoT3D decomp @ 00406f8c  name=FUN_00406f8c  size=104

void FUN_00406f8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xe18)) {
    do {
      if (*(int *)(param_1 + iVar2 * 0x220 + 0xe4c) != 0) {
        FUN_0030a474();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xe18));
  }
  if (*(char *)(param_1 + 9) != '\0') {
    uVar1 = FUN_0030c7cc();
    FUN_00309bdc(uVar1,param_1 + 0x3c);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  *(undefined1 *)(param_1 + 0x81) = 0;
  return;
}
