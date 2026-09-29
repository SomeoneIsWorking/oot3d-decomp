// OoT3D decomp @ 00308f0c  name=FUN_00308f0c  size=116

void FUN_00308f0c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  if (*(char *)(param_1 + 9) != '\0') {
    uVar1 = FUN_0030c7cc();
    FUN_00309bdc(uVar1,param_1 + 0x48);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  iVar3 = 0;
  do {
    if (iVar3 < 0x10) {
      iVar2 = *(int *)(param_1 + iVar3 * 4 + 0x84);
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      FUN_00308f94();
      iVar2 = param_1 + iVar3 * 4;
      (**(code **)(**(int **)(param_1 + 0x78) + 0xc))
                (*(int **)(param_1 + 0x78),*(undefined4 *)(iVar2 + 0x84));
      *(undefined4 *)(iVar2 + 0x84) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}
