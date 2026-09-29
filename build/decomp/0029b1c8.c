// OoT3D decomp @ 0029b1c8  name=FUN_0029b1c8  size=112

void FUN_0029b1c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  uVar2 = DAT_0029b238;
  iVar1 = FUN_003695f8();
  if (iVar1 != 0) {
    uVar2 = DAT_0029b23c;
  }
  if (*(int *)(param_1 + 0x204) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x204) + 0xc) + 0xc) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x204) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x204),auStack_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x204),0);
  }
  return;
}
