// OoT3D decomp @ 0030a40c  name=FUN_0030a40c  size=104

void FUN_0030a40c(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + iVar2 * 4) != 0) {
          FUN_00308e24();
          *(undefined4 *)(param_1 + iVar2 * 4) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 8) = 0;
    uVar1 = FUN_0030c6e0();
    FUN_0030ca84(uVar1,param_1);
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}
