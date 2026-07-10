// OoT3D decomp @ 003fc218  name=FUN_003fc218  size=52

void FUN_003fc218(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = DAT_003fc24c;
  iVar4 = 0;
  do {
    uVar3 = FUN_00310844(*(undefined4 *)(param_1 + 8),*(undefined4 *)(iVar2 + iVar4 * 4));
    iVar1 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0x10) = uVar3;
  } while (iVar4 < 0x22);
  return;
}

