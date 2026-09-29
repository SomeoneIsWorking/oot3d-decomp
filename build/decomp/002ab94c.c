// OoT3D decomp @ 002ab94c  name=FUN_002ab94c  size=112

void FUN_002ab94c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  uVar2 = DAT_002ab9bc;
  iVar1 = FUN_003695f8();
  if (iVar1 != 0) {
    uVar2 = DAT_002ab9c0;
  }
  if (*(int *)(param_1 + 0x1cc) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 0xc) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x1cc) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1cc),auStack_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1cc),0);
  }
  return;
}
