// OoT3D decomp @ 00313058  name=FUN_00313058  size=76

int FUN_00313058(int param_1)

{
  int iVar1;
  bool bVar2;

  if (*(char *)(param_1 + 0x2d) != '\0') {
    bVar2 = *(char *)(param_1 + 0x2c) != '\0';
    iVar1 = 0;
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 0x28);
    }
    if (!bVar2 || iVar1 == 0) {
      FUN_00302678(2,param_1 + 4);
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  return param_1;
}
