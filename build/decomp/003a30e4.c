// OoT3D decomp @ 003a30e4  name=FUN_003a30e4  size=152

void FUN_003a30e4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = DAT_003a3180;
  uVar1 = DAT_003a317c;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_003695cc(DAT_003a3180,DAT_003a3180,DAT_003a3180,DAT_003a317c,*(int *)(param_1 + 0x1cc),0,4,2
                );
    FUN_003695cc(uVar2,uVar2,uVar2,uVar1,*(undefined4 *)(param_1 + 0x1cc),1,4,2);
    *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1cc),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1cc),0);
    return;
  }
  return;
}
