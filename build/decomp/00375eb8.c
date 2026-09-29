// OoT3D decomp @ 00375eb8  name=FUN_00375eb8  size=32

char FUN_00375eb8(int param_1)

{
  char cVar1;

  if (*(byte *)(param_1 + 0xb8) < *(byte *)(param_1 + 0xb7)) {
    cVar1 = *(byte *)(param_1 + 0xb7) - *(byte *)(param_1 + 0xb8);
  }
  else {
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0xb7) = cVar1;
  return cVar1;
}
