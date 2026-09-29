// OoT3D decomp @ 0030a474  name=FUN_0030a474  size=92

void FUN_0030a474(int param_1)

{
  int iVar1;
  int iVar2;

  if (*(char *)(param_1 + 0x16) != '\0') {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar1 = *(int *)(param_1 + iVar2 * 4);
        if (iVar1 != 0) {
          FUN_002c016c(iVar1,1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}
