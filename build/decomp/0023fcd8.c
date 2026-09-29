// OoT3D decomp @ 0023fcd8  name=FUN_0023fcd8  size=88

void FUN_0023fcd8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [48];

  FUN_00372224(auStack_38,param_1 + 0x148);
  iVar1 = FUN_00350cf4(0xb0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x2cc);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x2cc),auStack_38);
    FUN_00372170(*(undefined4 *)(param_1 + 0x2cc),0);
  }
  return;
}
