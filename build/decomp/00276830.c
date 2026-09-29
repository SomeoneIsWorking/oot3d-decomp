// OoT3D decomp @ 00276830  name=FUN_00276830  size=112

void FUN_00276830(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  uVar2 = DAT_002768a0;
  iVar1 = FUN_003695f8();
  if (iVar1 != 0) {
    uVar2 = DAT_002768a4;
  }
  if (*(int *)(param_1 + 0x1e0) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1e0) + 0xc) + 0xc) = uVar2;
    *(undefined1 *)(*(int *)(param_1 + 0x1e0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1e0),auStack_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1e0),0);
  }
  return;
}
