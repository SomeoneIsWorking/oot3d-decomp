// OoT3D decomp @ 0028a8f4  name=FUN_0028a8f4  size=104

void FUN_0028a8f4(int param_1)

{
  int iVar1;
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  iVar1 = *(int *)(param_1 + 0x39c);
  if (*(char *)(param_1 + 0x1a9) == '\0') {
    if (iVar1 == 0) {
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(iVar1 + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x39c),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x39c),0);
  return;
}
