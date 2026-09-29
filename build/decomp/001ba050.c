// OoT3D decomp @ 001ba050  name=FUN_001ba050  size=108

void FUN_001ba050(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  if (*(int *)(param_1 + 0x1a4) != DAT_001ba0bc) {
    iVar1 = FUN_003695f8();
    uVar3 = DAT_001ba0c0;
    if (iVar1 == 0) {
      uVar3 = DAT_001ba0c4;
    }
    iVar1 = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0xc) = uVar3;
    do {
      iVar2 = param_1 + iVar1 * 4;
      *(undefined1 *)(*(int *)(iVar2 + 0x204) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar2 + 0x204),param_1 + 0x148);
      FUN_00372170(*(undefined4 *)(iVar2 + 0x204),0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
  }
  return;
}
