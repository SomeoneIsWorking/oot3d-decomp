// OoT3D decomp @ 00394a1c  name=FUN_00394a1c  size=104

void FUN_00394a1c(int param_1)

{
  int iVar1;
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  iVar1 = *(int *)(param_1 + 0x1a4);
  if ((*(uint *)(param_1 + 4) & 0x80) == 0) {
    if (iVar1 == 0) {
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(iVar1 + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1a4),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x1a4),0);
  return;
}
