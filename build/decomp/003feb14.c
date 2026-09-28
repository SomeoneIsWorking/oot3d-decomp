// OoT3D decomp @ 003feb14  name=FUN_003feb14  size=44

void FUN_003feb14(int param_1,int param_2)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    *(char *)(iVar1 + 0x1b9) = *(char *)(iVar1 + 0x1b9) + -1;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  if (param_2 != 0) {
    *(char *)(param_2 + 0x1b9) = *(char *)(param_2 + 0x1b9) + '\x01';
  }
  return;
}
