// OoT3D decomp @ 001048fc  name=FUN_001048fc  size=72

void FUN_001048fc(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;

  bVar2 = *(char *)(DAT_00104944 + param_2) != '\0';
  iVar1 = 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x1b0);
  }
  if (!bVar2 || iVar1 == 0) {
    return;
  }
  FUN_003721e0(iVar1,param_1 + 0x148);
  *(undefined1 *)(*(int *)(param_1 + 0x1b0) + 0xac) = 1;
  FUN_00372170(*(undefined4 *)(param_1 + 0x1b0),0);
  return;
}
