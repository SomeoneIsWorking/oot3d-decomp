// OoT3D decomp @ 0030661c  name=FUN_0030661c  size=192

void FUN_0030661c(int param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x16f0) = 0;
  *(undefined4 *)(param_1 + 0x16f4) = 0;
  *(undefined4 *)(param_1 + 0x16f8) = 0;
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x1700) = 0;
  *(undefined4 *)(param_1 + 0x1704) = 0;
  do {
    iVar1 = param_1 + iVar2 * 0x10;
    if (*(char *)(iVar1 + 0x34) != '\0') {
      *(int *)(param_1 + 0x16f0) = *(int *)(param_1 + 0x16f0) + 1;
      if ((*(uint *)(iVar1 + 0x40) & 1) != 0) {
        *(int *)(param_1 + 0x16f4) = *(int *)(param_1 + 0x16f4) + 1;
      }
      if ((*(uint *)(iVar1 + 0x40) & 2) != 0) {
        *(int *)(param_1 + 0x16f8) = *(int *)(param_1 + 0x16f8) + 1;
      }
      if (((*(uint *)(iVar1 + 0x40) & 4) != 0) &&
         (*(int *)(param_1 + 0x16fc) = *(int *)(param_1 + 0x16fc) + 1,
         (*(uint *)(iVar1 + 0x40) & 8) != 0)) {
        *(int *)(param_1 + 0x1704) = *(int *)(param_1 + 0x1704) + 1;
      }
      if (((*(uint *)(iVar1 + 0x40) & 1) != 0) && ((*(uint *)(iVar1 + 0x40) & 6) == 0)) {
        *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + 1;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return;
}
