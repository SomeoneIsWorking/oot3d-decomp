// OoT3D decomp @ 00379d38  name=FUN_00379d38  size=140

void FUN_00379d38(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  uVar1 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if ((*(ushort *)(param_1 + 0x1c) & 0xff) == 0) {
    iVar2 = *(int *)(param_1 + 0x204);
  }
  else {
    if (uVar1 == 1) {
      iVar2 = *(int *)(param_1 + 0x204);
      if (iVar2 == 0) {
        return;
      }
      goto LAB_00379d8c;
    }
    if (uVar1 != 2) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x204);
  }
  if (iVar2 == 0) {
    return;
  }
LAB_00379d8c:
  *(undefined1 *)(iVar2 + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x204),auStack_38);
  FUN_00372170(*(undefined4 *)(param_1 + 0x204),0);
  return;
}
