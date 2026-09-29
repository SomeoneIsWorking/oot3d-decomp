// OoT3D decomp @ 00394d1c  name=FUN_00394d1c  size=104

void FUN_00394d1c(int param_1)

{
  int iVar1;
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  iVar1 = *(int *)(param_1 + 0x288);
  if (*(short *)(param_1 + 0x1c) == 0xff) {
    if (iVar1 == 0) {
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(iVar1 + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x288),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x288),0);
  return;
}
