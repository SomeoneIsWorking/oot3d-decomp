// OoT3D decomp @ 0037be8c  name=FUN_0037be8c  size=88

void FUN_0037be8c(int param_1)

{
  int iVar1;
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  if (*(char *)(param_1 + 0x1c2) == '\0') {
    iVar1 = *(int *)(param_1 + 0x1bc);
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0xac) = 1;
    FUN_003721e0(iVar1,auStack_38);
    FUN_00372170(iVar1,0);
  }
  return;
}
