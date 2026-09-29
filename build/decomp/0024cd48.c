// OoT3D decomp @ 0024cd48  name=FUN_0024cd48  size=152

void FUN_0024cd48(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  if ((*(char *)(param_1 + 0x236) != '\0') && (*(short *)(DAT_0024cde0 + 0x80) != 7)) {
    FUN_0034708c(param_2);
  }
  FUN_0036bee0(DAT_0024cde4,DAT_0024cde8,DAT_0024cde4,DAT_0024cde4,param_2,param_1 + 0x1a4);
  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x1fc));
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 4;
    piVar1 = *(int **)(iVar3 + 0x238);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      *(undefined4 *)(iVar3 + 0x238) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}
