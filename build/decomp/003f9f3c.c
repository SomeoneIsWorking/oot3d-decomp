// OoT3D decomp @ 003f9f3c  name=FUN_003f9f3c  size=44

void FUN_003f9f3c(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 0x1b9) = *(char *)(iVar1 + 0x1b9) + -1;
  }
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 != 0) {
    *(char *)(param_2 + 0x1b9) = *(char *)(param_2 + 0x1b9) + '\x01';
  }
  return;
}
