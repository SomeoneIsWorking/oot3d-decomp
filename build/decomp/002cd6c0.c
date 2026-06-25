// OoT3D decomp @ 002cd6c0  name=FUN_002cd6c0  size=80

void FUN_002cd6c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x920) != 0) && (iVar1 = FUN_002c454c(), iVar1 != 0)) {
    *(undefined *)(*(int *)(param_1 + 0x920) + 0x6c) = 0;
  }
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1 * 4;
    iVar1 = iVar1 + 2;
    *(undefined *)(*(int *)(iVar2 + 0x6b4) + 0x6c) = 0;
    *(undefined *)(*(int *)(iVar2 + 0x6b8) + 0x6c) = 0;
  } while (iVar1 < 0x10);
  return;
}

