// OoT3D decomp @ 0028bc0c  name=FUN_0028bc0c  size=192

void FUN_0028bc0c(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  uVar3 = DAT_0028bccc;
  iVar1 = FUN_003695f8();
  if (iVar1 != 0) {
    uVar3 = DAT_0028bcd0;
  }
  if (*(int *)(param_1 + 0x310) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x314);
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x2f8) != 0xff) goto LAB_0028bc90;
  }
  else {
    bVar2 = iVar1 == 2;
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 0x2f8);
    }
    if (!bVar2 || iVar1 != 0xff) goto LAB_0028bc90;
  }
  FUN_003695cc(DAT_0028bcd0,DAT_0028bcd0,DAT_0028bcd0,DAT_0028bcd0,*(int *)(param_1 + 0x310),1,4,0);
LAB_0028bc90:
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x310) + 0xc) + 0xc) = uVar3;
  *(undefined1 *)(*(int *)(param_1 + 0x310) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x310),auStack_40);
  FUN_00372170(*(undefined4 *)(param_1 + 0x310),0);
  return;
}
