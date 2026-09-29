// OoT3D decomp @ 002ab9cc  name=FUN_002ab9cc  size=104

void FUN_002ab9cc(int param_1)

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
