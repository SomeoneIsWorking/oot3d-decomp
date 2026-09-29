// OoT3D decomp @ 001be0c8  name=FUN_001be0c8  size=160

void FUN_001be0c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_40 [48];

  uVar1 = DAT_001be168;
  if (*(char *)(param_1 + 0xc48) == '\0') {
    iVar2 = FUN_003695f8();
    if (iVar2 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x7d8) + 0xc) = DAT_001be16c;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x7d8) + 0xc) = uVar1;
    }
    if (2 < *(short *)(param_1 + 0x1c)) {
      *(undefined1 *)(*(int *)(param_1 + 0xc3c) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0xc3c),param_1 + 0x148);
      FUN_00372170(*(undefined4 *)(param_1 + 0xc3c),0);
      return;
    }
    FUN_0035e240(param_1 + 0x1a4,auStack_40,0,DAT_001be170,param_1,0);
  }
  return;
}
